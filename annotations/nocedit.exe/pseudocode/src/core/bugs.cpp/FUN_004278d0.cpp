// Name: core_bugs.cpp_FUN_004278d0
// Address: 004278d0
// Address Range: [[004278d0, 004279af]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_FUN_004278d0(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_bugs.cpp_FUN_004278d0(CDemonActor* param_1) */

void __cdecl core_bugs_cpp_FUN_004278d0(void)

{
  CLocation *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  CCharacter *in_stack_00000004;
  
  pCVar1 = &(in_stack_00000004->base).location;
  fVar2 = (pCVar1->position).x;
  fVar3 = (in_stack_00000004->base).location.position.y;
  fVar4 = (in_stack_00000004->base).location.position.z;
  core_charactr_cpp_CCharacter_computePickupInLoop_FUN_0042f800(in_stack_00000004);
  (in_stack_00000004->base).orient.heading = 0.0;
  (in_stack_00000004->base).orient.bank = (in_stack_00000004->base).orient.heading;
  (in_stack_00000004->base).orient.pitch = (in_stack_00000004->base).orient.bank;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&in_stack_00000004->base);
  (pCVar1->position).x = fVar2;
  (in_stack_00000004->base).location.position.y = fVar3;
  (in_stack_00000004->base).location.position.z = fVar4;
  core_bugs_cpp_FUN_004276c0();
  iVar5 = 0;
  core_bugs_cpp_FUN_004257f0();
  if (0 < *(int *)(in_stack_00000004[1].base.create_event + 0x24)) {
    do {
      iVar5 = iVar5 + 1;
      core_bugs_cpp_FUN_00426420();
    } while (iVar5 < *(int *)(in_stack_00000004[1].base.create_event + 0x24));
  }
  core_bugs_cpp_FUN_004272f0();
  return;
}
