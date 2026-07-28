// Name: core_melee.cpp_CMelee_process_FUN_004cf0c0
// Address: 004cf0c0
// Address Range: [[004cf0c0, 004cf172]]
// Convention: unknown
// Signature: void core_melee_cpp_CMelee_process_FUN_004cf0c0(CWeapon *param_1,float param_2)

#include "nocturne.h"

void core_melee_cpp_CMelee_process_FUN_004cf0c0(CWeapon *param_1,float param_2)

{
  CDemonActor_vtable *pCVar1;
  float fVar2;
  CVector3f *input_local_point;
  CVector3f CStack_18;
  
  core_weapon_cpp_CWeapon_process_FUN_00554030(param_1,param_2);
  if ((0 < *(int *)(param_1[1].base.actor_name + 0x18)) &&
     (param_2 = *(float *)(param_1[1].base.actor_name + 0x1c) - param_2,
     *(float *)(param_1[1].base.actor_name + 0x1c) = param_2, param_2 <= 0.0)) {
    fVar2 = param_1[1].base.location.position.x * (float)1.1499999999999999;
    pCVar1 = (param_1->base).vtable._ub;
    *(int *)(param_1[1].base.actor_name + 0x18) = *(int *)(param_1[1].base.actor_name + 0x18) + -1;
    param_1[1].base.location.position.x = fVar2;
    *(float *)(param_1[1].base.actor_name + 0x1c) = fVar2;
    input_local_point = (CVector3f *)(*pCVar1->initializeInEditor)(&param_1->base);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
              (&param_1->base,&CStack_18,input_local_point);
    core_gore_cpp_CGore_spawnBloodParticles_FUN_004b00f0
              ((CGore *)INT_005b96c4,&CStack_18,(CVector3f *)&DAT_02dd1184,
               *(int *)(param_1[1].base.actor_name + 0x14));
    return;
  }
  return;
}
