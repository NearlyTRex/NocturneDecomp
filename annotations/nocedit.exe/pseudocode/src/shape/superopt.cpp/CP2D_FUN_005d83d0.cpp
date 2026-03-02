// Name: shape_superopt.cpp_CP2D_FUN_005d83d0
// Address: 005d83d0
// Address Range: [[005d83d0, 005d8400]]
// Convention: __cdecl
// Signature: CP2D * __cdecl shape_superopt_cpp_CP2D_FUN_005d83d0(CP2D *this_ptr,double scale)

#include "nocturne.h"

CP2D * __cdecl shape_superopt_cpp_CP2D_FUN_005d83d0(CP2D *this_ptr,double scale)

{
  double dVar1;
  CP2D *unaff_ESI;
  
  dVar1 = (this_ptr->impl).y;
  (unaff_ESI->impl).x = (this_ptr->impl).x * scale;
  (unaff_ESI->impl).y = dVar1 * scale;
  return unaff_ESI;
}
