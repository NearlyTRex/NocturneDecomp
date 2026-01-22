// Name: core_bugs.cpp_FUN_004278d0
// Address: 004278d0
// Address Range: [[004278d0, 004279af]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_004278d0()

#include "nocturne.h"

/* Signature: byte actors_enemy_bugs.cpp_FUN_004278d0(CDemonActor* param_1) */

void core_bugs_cpp_FUN_004278d0(void)

{
  CLocation *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  CCharacter *in_stack_00000004;
  
  pCVar1 = &(in_stack_00000004->base_actor).location;
  fVar2 = (pCVar1->position).x;
  fVar3 = (in_stack_00000004->base_actor).location.position.y;
  fVar4 = (in_stack_00000004->base_actor).location.position.z;
  core_charactr_cpp_CCharacter_computePickupInLoop_FUN_0042f800(in_stack_00000004);
  (in_stack_00000004->base_actor).orient.heading = 0.0;
  (in_stack_00000004->base_actor).orient.bank = (in_stack_00000004->base_actor).orient.heading;
  (in_stack_00000004->base_actor).orient.pitch = (in_stack_00000004->base_actor).orient.bank;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&in_stack_00000004->base_actor);
  (pCVar1->position).x = fVar2;
  (in_stack_00000004->base_actor).location.position.y = fVar3;
  (in_stack_00000004->base_actor).location.position.z = fVar4;
  core_bugs_cpp_FUN_004276c0();
  iVar7 = 0;
  uVar6 = core_bugs_cpp_FUN_004257f0();
  iVar5 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x24);
  uVar8 = CONCAT44(iVar5,uVar6);
  if (0 < iVar5) {
    do {
      iVar7 = iVar7 + 1;
      uVar8 = core_bugs_cpp_FUN_00426420();
    } while (iVar7 < *(int *)(in_stack_00000004[1].base_actor.create_event + 0x24));
  }
  core_bugs_cpp_FUN_004272f0((int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
  return;
}
