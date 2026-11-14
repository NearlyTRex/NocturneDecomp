// Name: core_shadow.cpp_FUN_00545c10
// Address: 00545c10
// Address Range: [[00545c10, 00545c75]]
// Convention: unknown
// Signature: undefined4 core_shadow_cpp_FUN_00545c10(int param_1,float *param_2)

#include "nocturne.h"

uint core_shadow_cpp_FUN_00545c10(int param_1,float *param_2)

{
  byte bVar1;
  float afStackY_100c [1016];
  CVector3f CStack_24;
  float fStack_18;
  float afStack_14 [2];
  
  bVar1 = 0;
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0
            ((CDeformableModelInstance *)(param_1 + 0x158),*(int *)(param_1 + 0xd058),&CStack_24);
  fStack_18 = CStack_24.x;
  afStack_14[(uint)bVar1 * -2] = *(float *)((int)&CStack_24 + (uint)bVar1 * -8 + 4);
  afStack_14[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
       *(float *)((int)&CStack_24 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if (param_2 == &fStack_18) {
    return 1;
  }
  *param_2 = fStack_18;
  param_2[1] = afStack_14[0];
  param_2[2] = afStack_14[1];
  return 1;
}
