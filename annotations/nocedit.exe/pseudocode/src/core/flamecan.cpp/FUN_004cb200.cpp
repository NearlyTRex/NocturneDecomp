// Name: core_flamecan.cpp_FUN_004cb200
// Address: 004cb200
// Address Range: [[004cb200, 004cb212]]
// Convention: unknown
// Signature: undefined core_flamecan.cpp_FUN_004cb200()
// Function calls:
//   core_actor.cpp_CDemonActor_setup_FUN_00408bb0

#include "nocturne.h"

/* Signature: undefined1 actors_other_flame.cpp_FUN_004cb200(undefined4 param_1) */

void core_flamecan_cpp_FUN_004cb200(void)

{
  float fVar1;
  float fVar2;
  CDemonActor_vtable *pCVar3;
  BADSPACEBASE *in_ESP;
  float unaff_EBP;
  CDemonActor *in_stack_00000004;
  CBoundingBox3D CStack_30;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(in_stack_00000004);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1));
  pCVar3 = in_stack_00000004->vtable;
  in_stack_00000004[3].field13_0xec.x = 0.0;
  (*pCVar3->getBoundingBox)(in_stack_00000004,&CStack_30);
  *(float *)(in_stack_00000004[2].create_event + 0x38) = (in_stack_00000004->location).position.x;
  *(float *)(in_stack_00000004[2].create_event + 0x3c) = (in_stack_00000004->location).position.y;
  *(float *)(in_stack_00000004[2].create_event + 0x40) = (in_stack_00000004->location).position.z;
  *(int *)(in_stack_00000004[2].create_event + 0x44) = (in_stack_00000004->location).area_id;
  *(float *)(in_stack_00000004[2].create_event + 0x3c) =
       (fStack_c - fStack_18) + *(float *)(in_stack_00000004[2].create_event + 0x3c);
  if (in_stack_00000004[3].create_event + 0x18 != &stack0xfffffffc) {
    *(float *)(in_stack_00000004[3].create_event + 0x18) = fStack_10 - CStack_30.max.z;
    *(float *)(in_stack_00000004[3].create_event + 0x1c) = fStack_c - fStack_18;
    *(float *)(in_stack_00000004[3].create_event + 0x20) = unaff_EBP - fStack_14;
  }
  fVar1 = *(float *)(in_stack_00000004[3].create_event + 0x18);
  in_stack_00000004[3].field12_0xe0.x = 0.0;
  fVar1 = fVar1 * (float)DOUBLE_0062a2e0;
  fVar2 = *(float *)(in_stack_00000004[3].create_event + 0x1c);
  in_stack_00000004[3].field12_0xe0.y = 0.0;
  if (fVar2 < fVar1) {
    *(float *)(in_stack_00000004[3].create_event + 0x1c) = fVar1;
  }
  in_stack_00000004[4].create_event[0xc] = '\0';
  in_stack_00000004[4].create_event[0xd] = '\0';
  in_stack_00000004[4].create_event[0xe] = '\0';
  in_stack_00000004[4].create_event[0xf] = '\0';
  in_stack_00000004->is_transparent = 1;
  return;
}


// Assembly code:
// 004cb200: PUSH EBX
//   Label: core_flamecan.cpp_FUN_004cb200
// 004cb201: PUSH EBP
// 004cb202: MOV EBP,ESP
// 004cb204: SUB ESP,0x40
// 004cb207: AND ESP,0xfffffff8
// 004cb20a: MOV EBX,dword ptr [EBP + 0xc]
// 004cb20d: PUSH EBX
// 004cb20e: CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0
//   XREF to: 00408bb0 (UNCONDITIONAL_CALL)
