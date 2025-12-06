// Name: core_bugs.cpp_FUN_004278d0
// Address: 004278d0
// Address Range: [[004278d0, 004279af]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_004278d0()

#include "nocturne.h"

/* Signature: byte actors_enemy_bugs.cpp_FUN_004278d0(CDemonActor* param_1) */

void core_bugs_cpp_FUN_004278d0(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  CCharacter *in_stack_00000004;
  CCharacter *pCVar7;
  
  fVar1 = (in_stack_00000004->base_actor).location.position.y;
  fVar2 = (in_stack_00000004->base_actor).location.position.z;
  core_charactr_cpp_CCharacter_computePickupInLoop_FUN_0042f800(in_stack_00000004);
  (in_stack_00000004->base_actor).orient.heading = 0.0;
  (in_stack_00000004->base_actor).orient.bank = (in_stack_00000004->base_actor).orient.heading;
  (in_stack_00000004->base_actor).orient.pitch = (in_stack_00000004->base_actor).orient.bank;
  pCVar7 = in_stack_00000004;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&in_stack_00000004->base_actor);
  (in_stack_00000004->base_actor).location.position.x = (float)pCVar7;
  (in_stack_00000004->base_actor).location.position.y = fVar1;
  (in_stack_00000004->base_actor).location.position.z = fVar2;
  core_bugs_cpp_FUN_004276c0();
  iVar5 = 0;
  uVar4 = core_bugs_cpp_FUN_004257f0();
  iVar3 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x24);
  uVar6 = CONCAT44 /* combine 2-byte values */(iVar3,uVar4);
  if (0 < iVar3) {
    do {
      iVar5 = iVar5 + 1;
      uVar6 = core_bugs_cpp_FUN_00426420();
    } while (iVar5 < *(int *)(in_stack_00000004[1].base_actor.create_event + 0x24));
  }
  core_bugs_cpp_FUN_004272f0((int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
  return;
}
