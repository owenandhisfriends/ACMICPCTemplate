Point3D operator *(const Point3D& b)const {
  return Point3D(y*b.z-z*b.y,z*b.x-x*b.z,x*b.y-y*b.x);
}
//Rotate around `$V$`, notice that `$|V|=1$`
Point3D Trans(Point3D pa,Point3D V,double theta) {
  double s = sin(theta);
  double c = cos(theta);
  double x,y,z;
  x = V.x;
  y = V.y;
  z = V.z;
  Point3D pp =
    Point3D(
      (x*x*(1-c)+c)*pa.x+(x*y*(1-c)-z*s)*pa.y+(x*z*(1-c)+y*s)*pa.z,
      (y*x*(1-c)+z*s)*pa.x+(y*y*(1-c)+c)*pa.y+(y*z*(1-c)-x*s)*pa.z,
      (x*z*(1-c)-y*s)*pa.x+(y*z*(1-c)+x*s)*pa.y+(z*z*(1-c)+c)*pa.z);
  return pp;
}
