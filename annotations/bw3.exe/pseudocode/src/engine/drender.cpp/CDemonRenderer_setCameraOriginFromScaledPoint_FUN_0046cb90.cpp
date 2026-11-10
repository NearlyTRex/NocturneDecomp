// Name: engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90
// Address: 0046cb90
// Address Range: [[0046cb90, 0046cbe6]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90(CDemonRenderer *this_ptr,CVector3f *point_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90(CDemonRenderer *this_ptr,CVector3f *point_ptr)

{
  int y;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  int z;
  
  fVar1 = (float10)_DAT_005bc4f3;
  fVar2 = (float10)point_ptr->z * fVar1;
  fVar3 = (float10)point_ptr->y * fVar1;
  fVar1 = (float10)point_ptr->x * fVar1;
  round();
  round();
  z = (int)ROUND(fVar2);
  round(z,z,(int)ROUND(fVar3));
  engine_matrix_c_setCameraOrigin_FUN_004e6a40((int)ROUND(fVar1),y,z);
  return;
}
