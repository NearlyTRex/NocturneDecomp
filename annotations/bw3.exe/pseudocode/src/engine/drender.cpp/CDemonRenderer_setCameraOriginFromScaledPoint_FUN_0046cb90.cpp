// Name: engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90
// Address: 0046cb90
// Address Range: [[0046cb90, 0046cbe6]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90(CDemonRenderer *this_ptr,CVector3f *point_ptr)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90(CDemonRenderer *this_ptr,CVector3f *point_ptr)

{
  double dVar1;
  double dVar2;
  int z;
  
  dVar1 = (double)point_ptr->y * 256;
  dVar2 = (double)point_ptr->x * 256;
  round((double)point_ptr->z * 256);
  dVar1 = round(dVar1);
  z = 0x46cbd0;
  dVar2 = round(dVar2);
  engine_matrix_c_setCameraOrigin_FUN_004e6a40((int)ROUND(dVar2),(int)ROUND(dVar1),z);
  return;
}
