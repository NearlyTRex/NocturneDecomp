// Name: core_pendulum.cpp_CPendulum_setup_FUN_00514de0
// Address: 00514de0
// Address Range: [[00514de0, 00514f3a]]
// Convention: __cdecl
// Signature: void __cdecl core_pendulum_cpp_CPendulum_setup_FUN_00514de0(CPendulum *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_pendulum_cpp_CPendulum_setup_FUN_00514de0(CPendulum *this_ptr)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_101c [997];
  CBoundingBox3D *in_stack_ffffff7c;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_10;
  
  bVar4 = 0;
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(&this_ptr->model);
  core_actor_cpp_CDemonActor_setup_FUN_00408a80(&this_ptr->base);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,in_stack_ffffff7c);
  puVar2 = (uint *)&stack0xffffff84;
  puVar3 = (uint *)&stack0xffffff94;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  if (&stack0xffffffb4 != &stack0xffffff9c) {
    fStack_4c = fStack_64;
    fStack_48 = fStack_60;
    fStack_44 = fStack_5c;
  }
  if (&stack0xffffffc0 != &stack0xffffffa8) {
    fStack_40 = fStack_58;
    fStack_3c = fStack_54;
    fStack_38 = fStack_50;
  }
  this_ptr->period = SQRT((fStack_3c - fStack_48) * (float)_DAT_005e1a12) * (float)_DAT_005e1a1a;
  fStack_34 = fStack_4c + fStack_40;
  fStack_30 = fStack_48 + fStack_3c;
  fStack_2c = fStack_44 + fStack_38;
  fStack_1c = fStack_4c + fStack_40;
  (&stack0xffffffdc)[(uint)bVar4 * -2 + 3] = (&stack0xffffffd0)[(uint)bVar4 * 0xfffffffe];
  (&stack0xffffffdc)[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       (&stack0xffffffd0)[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  fStack_10 = fStack_1c * _DAT_005e1a22;
  fStack_28 = fStack_1c * _DAT_005e1a22;
  (&stack0xffffffdc)[(uint)bVar4 * 0xfffffffe] =
       (float)*(uint *)(&stack0xfffffff4 + (uint)bVar4 * -8);
  (&stack0xffffffdc)[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       (float)*(uint *)(&stack0xfffffff8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  if (&this_ptr->swing_tip_local == (CVector3f *)&stack0xffffffd8) {
    (this_ptr->swing_tip_local).y = fStack_48;
    return;
  }
  (this_ptr->swing_tip_local).x = fStack_28;
  (this_ptr->swing_tip_local).y = fStack_24;
  (this_ptr->swing_tip_local).z = fStack_20;
  (this_ptr->swing_tip_local).y = fStack_48;
  return;
}
