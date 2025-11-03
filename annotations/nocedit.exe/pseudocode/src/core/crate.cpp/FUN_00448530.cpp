// Name: core_crate.cpp_FUN_00448530
// Address: 00448530
// Address Range: [[00448530, 0044853d]]
// Convention: unknown
// Signature: undefined core_crate.cpp_FUN_00448530()
// Function calls:
//   core_actor.cpp_CDemonActor_setup_FUN_00408bb0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_other_crate.cpp_FUN_00448530(undefined4 param_1) */

void core_crate_cpp_FUN_00448530(void)

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
  (*in_stack_00000004->vtable->getBoundingBox)(in_stack_00000004,&CStack_1c);
  fVar1 = ((float)in_stack_00000004 - CStack_1c.max.z) * (float)_DAT_00619b02;
  fVar2 = (in_stack_0000000c - unaff_retaddr) * (float)_DAT_00619b02;
  if (fVar1 < fVar2) {
    fVar2 = fVar1;
  }
  in_stack_00000004[2].location.position.z = fVar2;
  in_stack_00000004[2].orient.pitch = -9999.9;
  in_stack_00000004[2].orient.bank = -9999.9;
  in_stack_00000004[2].orient.heading = -9999.9;
  in_stack_00000004[2].orient_matrix.m[0].x = -9999.9;
  in_stack_00000004[2].orient_matrix.m[0].z = -9999.9;
  in_stack_00000004[2].orient_matrix.m[0].y = -9999.9;
  in_stack_00000004[2].orient_matrix.m[1].x = 9999.9;
  in_stack_00000004[2].location.position.y = 0.0;
  return;
}


// Assembly code:
// 00448530: PUSH EBX
//   Label: core_crate.cpp_FUN_00448530
// 00448531: SUB ESP,0x20
// 00448534: MOV EBX,dword ptr [ESP + 0x28]
// 00448538: PUSH EBX
// 00448539: CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0
//   XREF to: 00408bb0 (UNCONDITIONAL_CALL)
