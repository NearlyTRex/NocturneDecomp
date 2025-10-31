// Name: core_filmreel.cpp_FUN_004be720
// Address: 004be720
// Address Range: [[004be720, 004be72d]]
// Convention: unknown
// Signature: undefined core_filmreel.cpp_FUN_004be720()
// Function calls:
//   core_actor.cpp_CDemonActor_setup_FUN_00408bb0

#include "nocturne.h"

/* Signature: undefined1 actors_other_filmreel.cpp_FUN_004be720(undefined4 param_1) */

void core_filmreel_cpp_FUN_004be720(void)

{
  float fVar1;
  float fVar2;
  BADSPACEBASE *in_ESP;
  float unaff_retaddr;
  CDemonActor *in_stack_00000004;
  float in_stack_0000000c;
  CBoundingBox3D CStack_1c;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(in_stack_00000004);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1));
  (*((in_stack_00000004->metadata).vtable)->getBoundingBox)(in_stack_00000004,&CStack_1c);
  fVar1 = ((float)in_stack_00000004 - CStack_1c.max.z) * (float)DOUBLE_00629add;
  fVar2 = (in_stack_0000000c - unaff_retaddr) * (float)DOUBLE_00629add;
  if (fVar1 < fVar2) {
    fVar2 = fVar1;
  }
  in_stack_00000004[2].orient_matrix.m[1].x = fVar2;
  in_stack_00000004[2].location.position.y = 0.0;
  return;
}


// Assembly code:
// 004be720: PUSH EBX
//   Label: core_filmreel.cpp_FUN_004be720
// 004be721: SUB ESP,0x20
// 004be724: MOV EBX,dword ptr [ESP + 0x28]
// 004be728: PUSH EBX
// 004be729: CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0
//   XREF to: 00408bb0 (UNCONDITIONAL_CALL)
