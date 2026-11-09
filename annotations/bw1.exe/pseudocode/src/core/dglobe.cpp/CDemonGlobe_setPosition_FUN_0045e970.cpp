// Name: core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045e970
// Address: 0045e970
// Address Range: [[0045e970, 0045e9bc]]
// Convention: __cdecl
// Signature: void __cdecl core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0045e970(CDemonGlobe *this_ptr,CVector3f *position)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0045e970(CDemonGlobe *this_ptr,CVector3f *position)

{
  int iVar1;
  int *extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  float10 fVar2;
  float10 fVar3;
  
  if ((CVector3f *)(this_ptr + 0x24) != position) {
    *(uint *)(this_ptr + 0x24) = *(uint *)position;
    *(uint *)(this_ptr + 0x28) = *(uint *)&position->field_0x4;
    *(uint *)(this_ptr + 0x2c) = *(uint *)&position->field_0x8;
  }
  fVar2 = (float10)_DAT_005d88f3;
  fVar3 = (float10)*(float *)position * fVar2;
  iVar1 = round();
  *extraout_ECX = (int)ROUND(fVar3);
  fVar3 = (float10)*(float *)(iVar1 + 4) * fVar2;
  iVar1 = round();
  *(int *)(extraout_ECX_00 + 4) = (int)ROUND(fVar3);
  fVar2 = fVar2 * (float10)*(float *)(iVar1 + 8);
  round();
  *(int *)(extraout_ECX_01 + 8) = (int)ROUND(fVar2);
  return;
}
