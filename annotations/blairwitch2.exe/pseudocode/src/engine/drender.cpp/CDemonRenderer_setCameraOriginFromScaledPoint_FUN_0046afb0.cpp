// Name: engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046afb0
// Address: 0046afb0
// Address Range: [[0046afb0, 0046b006]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046afb0(CDemonRenderer *this_ptr,CVector3f *point_ptr)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046afb0(CDemonRenderer *this_ptr,CVector3f *point_ptr)

{
  double dVar1;
  double dVar2;
  int z;
  
  dVar1 = (double)point_ptr->y * 256;
  dVar2 = (double)point_ptr->x * 256;
  round((double)point_ptr->z * 256);
  dVar1 = round(dVar1);
  z = 0x46aff0;
  dVar2 = round(dVar2);
  engine_matrix_c_setCameraOrigin_FUN_004ea360((int)ROUND(dVar2),(int)ROUND(dVar1),z);
  return;
}
