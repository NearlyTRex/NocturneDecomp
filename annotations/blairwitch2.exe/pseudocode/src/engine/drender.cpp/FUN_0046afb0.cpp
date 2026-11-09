// Name: engine_drender.cpp_FUN_0046afb0
// Address: 0046afb0
// Address Range: [[0046afb0, 0046b006]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_FUN_0046afb0(CDemonRenderer *this_ptr,CVector3f *point_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_FUN_0046afb0(CDemonRenderer *this_ptr,CVector3f *point_ptr)

{
  int y;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  int z;
  
  fVar1 = (float10)_DAT_005d1563;
  fVar2 = (float10)*(float *)&point_ptr->field_0x8 * fVar1;
  fVar3 = (float10)*(float *)&point_ptr->field_0x4 * fVar1;
  fVar1 = (float10)*(float *)point_ptr * fVar1;
  round();
  round();
  z = (int)ROUND(fVar2);
  round(z,z,(int)ROUND(fVar3));
  engine_matrix_c_setCameraOrigin_FUN_004ea360((int)ROUND(fVar1),y,z);
  return;
}
