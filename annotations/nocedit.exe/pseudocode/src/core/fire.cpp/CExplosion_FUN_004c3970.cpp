// Name: core_fire.cpp_CExplosion_FUN_004c3970
// Address: 004c3970
// Address Range: [[004c3970, 004c39eb]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CExplosion_FUN_004c3970(CExplosion * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CExplosion_FUN_004c3970(CExplosion *this_ptr)

{
  CDemonSet *this_ptr_00;
  int iVar1;
  float fVar2;
  int iVar3;
  CExplosion *in_stack_00000008;
  uint in_stack_0000000c;
  uint in_stack_00000018;
  float fStack_18;
  
  if (this_ptr != in_stack_00000008) {
    *(uint *)this_ptr->field0_0x0 = *(uint *)in_stack_00000008->field0_0x0;
    *(uint *)(this_ptr->field0_0x0 + 4) = *(uint *)(in_stack_00000008->field0_0x0 + 4);
    *(uint *)(this_ptr->field0_0x0 + 8) = *(uint *)(in_stack_00000008->field0_0x0 + 8);
  }
  this_ptr_00 = g_CDemonSetPtr;
  this_ptr->field0_0x0[0xc] = '\0';
  this_ptr->field0_0x0[0xd] = '\0';
  this_ptr->field0_0x0[0xe] = -0x80;
  this_ptr->field0_0x0[0xf] = '?';
  *(uint *)(this_ptr->field0_0x0 + 0x10) = in_stack_0000000c;
  core_set_cpp_CDemonSet_FUN_00570fa0(this_ptr_00);
  iVar3 = 0;
  iVar1 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
  *(int *)(this_ptr->field0_0x0 + 0x18) = iVar1;
  *(uint *)(this_ptr->field0_0x0 + 0x14) = in_stack_00000018;
  do {
    core_actor_cpp_getRandomFloat_FUN_0040cc10(0.7853982,1.5707964);
    fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,6.2831855);
    fcos((float10)fVar2);
    fcos((float10)fStack_18);
    fsin((float10)fVar2);
    fsin((float10)fStack_18);
    core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
              (g_CFireEffectDebrisModels + iVar3 % 5);
    iVar3 = iVar3 + 1;
    core_fire_cpp_CFireEffect_FUN_004c7e60(g_CFireEffectPtr);
  } while (iVar3 < 10);
  return;
}
