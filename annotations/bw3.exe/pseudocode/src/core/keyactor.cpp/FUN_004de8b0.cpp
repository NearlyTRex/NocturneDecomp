// Name: core_keyactor.cpp_FUN_004de8b0
// Address: 004de8b0
// Address Range: [[004de8b0, 004de94b]]
// Convention: unknown
// Signature: void core_keyactor_cpp_FUN_004de8b0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_keyactor_cpp_FUN_004de8b0(int param_1,float param_2)

{
  CDemonGlobe *this_ptr;
  CDemonSet *this_ptr_00;
  int iVar1;
  int iVar2;
  float10 fVar3;
  
  this_ptr = (CDemonGlobe *)(param_1 + 0x2dc);
  *(float *)(param_1 + 0x2d8) = param_2 * _DAT_005c66a9 + *(float *)(param_1 + 0x2d8);
  core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0045aae0(this_ptr,(CVector3f *)(param_1 + 0x20));
  fVar3 = (float10)fsin((float10)*(float *)(param_1 + 0x2d8));
  fVar3 = fVar3 * (float10)_DAT_005c66ad + (float10)_DAT_005c66b5;
  round();
  iVar1 = (int)ROUND(fVar3);
  *(int *)(param_1 + 0x318) = iVar1;
  iVar1 = (iVar1 + (iVar1 >> 0x1f) * -0x100) - (uint)((iVar1 >> 0x1f) << 7 < 0);
  iVar2 = iVar1 >> 0x1f;
  *(char *)(param_1 + 0x2f8) =
       (char)((int)(((iVar1 >> 8) + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2);
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30(this_ptr,1.0);
  this_ptr_00 = g_CDemonSetPtr;
  *(uint *)(param_1 + 0x2fc) = 0;
  core_set_cpp_CDemonSet_addCoronaGlobe_FUN_005372f0(this_ptr_00,this_ptr);
  return;
}
