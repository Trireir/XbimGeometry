// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepPrimAPI_MakeTorus_HeaderFile
#define _BRepPrimAPI_MakeTorus_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BRepPrim_Torus_HeaderFile
#include <BRepPrim_Torus.hxx>
#endif
#ifndef _BRepPrimAPI_MakeOneAxis_HeaderFile
#include <BRepPrimAPI_MakeOneAxis.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
class Standard_DomainError;
class gp_Ax2;
class BRepPrim_Torus;


//! Describes functions to build tori or portions of tori. <br>
//! A MakeTorus object provides a framework for: <br>
//! -   defining the construction of a torus, <br>
//! -   implementing the construction algorithm, and <br>
//! -   consulting the result. <br>
class BRepPrimAPI_MakeTorus  : public BRepPrimAPI_MakeOneAxis {
public:

  DEFINE_STANDARD_ALLOC

  //! Make a torus of radii R1 R2. <br>
  Standard_EXPORT   BRepPrimAPI_MakeTorus(const Standard_Real R1,const Standard_Real R2);
  //! Make a section of a torus of radii R1 R2. <br>
  Standard_EXPORT   BRepPrimAPI_MakeTorus(const Standard_Real R1,const Standard_Real R2,const Standard_Real angle);
  //! Make  a torus of  radii R2, R2  with angles on the <br>
//!          small circle. <br>
  Standard_EXPORT   BRepPrimAPI_MakeTorus(const Standard_Real R1,const Standard_Real R2,const Standard_Real angle1,const Standard_Real angle2);
  //! Make  a torus of  radii R2, R2  with angles on the <br>
//!          small circle. <br>
  Standard_EXPORT   BRepPrimAPI_MakeTorus(const Standard_Real R1,const Standard_Real R2,const Standard_Real angle1,const Standard_Real angle2,const Standard_Real angle);
  //! Make a torus of radii R1 R2. <br>
  Standard_EXPORT   BRepPrimAPI_MakeTorus(const gp_Ax2& Axes,const Standard_Real R1,const Standard_Real R2);
  //! Make a section of a torus of radii R1 R2. <br>
  Standard_EXPORT   BRepPrimAPI_MakeTorus(const gp_Ax2& Axes,const Standard_Real R1,const Standard_Real R2,const Standard_Real angle);
  //! Make a torus of radii R1 R2. <br>
  Standard_EXPORT   BRepPrimAPI_MakeTorus(const gp_Ax2& Axes,const Standard_Real R1,const Standard_Real R2,const Standard_Real angle1,const Standard_Real angle2);
  //! Make a section of a torus of radii R1 R2. <br>//! For all algorithms The resulting shape is composed of <br>
//!   -      a lateral toroidal face, <br>
//!   -      two conical faces (defined  by the equation v = angle1 and <br>
//!      v = angle2) if the sphere is truncated in the v parametric <br>
//!      direction (they may be cylindrical faces in some <br>
//!      particular conditions), and in case of a portion <br>
//!      of torus, two planar faces to close the shape.(in the planes <br>
//!      u = 0 and u = angle). <br>
//! Notes: <br>
//!   -      The u parameter corresponds to a rotation angle around the Z axis. <br>
//!   -      The circle whose radius is equal to the minor radius, <br>
//!      located in the plane defined by the X axis and the Z axis, <br>
//!      centered on the X axis, on its positive side, and positioned <br>
//!      at a distance from the origin equal to the major radius, is <br>
//!      the reference circle of the torus. The rotation around an <br>
//!      axis parallel to the Y axis and passing through the center <br>
//!      of the reference circle gives the v parameter on the <br>
//!      reference circle. The X axis gives the origin of the v <br>
//! parameter. Near 0, as v increases, the Z coordinate decreases. <br>
  Standard_EXPORT   BRepPrimAPI_MakeTorus(const gp_Ax2& Axes,const Standard_Real R1,const Standard_Real R2,const Standard_Real angle1,const Standard_Real angle2,const Standard_Real angle);
  //! Returns the algorithm. <br>
  Standard_EXPORT     Standard_Address OneAxis() ;
  //! Returns the algorithm. <br>
//! <br>
  Standard_EXPORT     BRepPrim_Torus& Torus() ;





protected:





private:



BRepPrim_Torus myTorus;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif