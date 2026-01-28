// Name: core_drip.cpp_FUN_0048ea30
// Address: 0048ea30
// Address Range: [[0048ea30, 0048ea5c]]
// Convention: unknown
// Signature: void core_drip_cpp_FUN_0048ea30(void)

#include "nocturne.h"

/* Signature: byte actors_other_drip.cpp_FUN_0048ea30(uint param_1) */

void core_drip_cpp_FUN_0048ea30(void)

{
  CVector3f *pCVar1;
  CDemonActor *in_stack_00000004;
  
  pCVar1 = in_stack_00000004[2].orient_matrix.m + 1;
  if ((CLocation *)pCVar1 != &in_stack_00000004->location) {
    pCVar1->x = (in_stack_00000004->location).position.x;
    in_stack_00000004[2].orient_matrix.m[1].y = (in_stack_00000004->location).position.y;
    in_stack_00000004[2].orient_matrix.m[1].z = (in_stack_00000004->location).position.z;
  }
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(in_stack_00000004);
  return;
}
