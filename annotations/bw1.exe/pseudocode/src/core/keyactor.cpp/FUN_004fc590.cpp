// Name: core_keyactor.cpp_FUN_004fc590
// Address: 004fc590
// Address Range: [[004fc590, 004fc62b]]
// Convention: unknown
// Signature: void core_keyactor_cpp_FUN_004fc590(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_keyactor_cpp_FUN_004fc590(int param_1,float param_2)

{
  CDemonGlobe *this_ptr;
  CDemonSet *this_ptr_00;
  int iVar1;
  int iVar2;
  float10 fVar3;
  
  this_ptr = (CDemonGlobe *)(param_1 + 0x2dc);
  *(float *)(param_1 + 0x2d8) = param_2 * _DAT_005e69c7 + *(float *)(param_1 + 0x2d8);
  core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0045e970(this_ptr,(CVector3f *)(param_1 + 0x20));
  fVar3 = (float10)fsin((float10)*(float *)(param_1 + 0x2d8));
  fVar3 = fVar3 * (float10)_DAT_005e69cb + (float10)_DAT_005e69d3;
  round();
  iVar1 = (int)ROUND(fVar3);
  *(int *)(param_1 + 0x318) = iVar1;
  iVar1 = (iVar1 + (iVar1 >> 0x1f) * -0x100) - (uint)((iVar1 >> 0x1f) << 7 < 0);
  iVar2 = iVar1 >> 0x1f;
  *(char *)(param_1 + 0x2f8) =
       (char)((int)(((iVar1 >> 8) + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2);
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0045e9c0(this_ptr,1.0);
  this_ptr_00 = g_CDemonSetPtr;
  *(uint *)(param_1 + 0x2fc) = 0;
  core_set_cpp_CDemonSet_addCoronaGlobe_FUN_00551960(this_ptr_00,this_ptr);
  return;
}
