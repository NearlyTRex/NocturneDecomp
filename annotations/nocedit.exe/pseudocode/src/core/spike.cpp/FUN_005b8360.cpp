// Name: core_spike.cpp_FUN_005b8360
// Address: 005b8360
// Address Range: [[005b8360, 005b837c]]
// Convention: unknown
// Signature: undefined core_spike.cpp_FUN_005b8360()
// Function calls:
//   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
//   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60

#include "nocturne.h"

/* Signature: undefined1 actors_other_spike.cpp_FUN_005b8360(undefined4 param_1) */

void core_spike_cpp_FUN_005b8360(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CVector3f *pCVar5;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  float local_20 [2];
  CVector3f CStack_18;
  float local_c;
  float local_8;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1));
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(in_stack_00000004);
  local_c = 0.0;
  local_8 = 0.0;
  pCVar5 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                     (in_stack_00000004,&CStack_18,(CVector3f *)&local_c);
  fVar1 = (in_stack_00000004->location).position.y;
  fVar2 = pCVar5->y;
  fVar3 = (in_stack_00000004->location).position.z;
  fVar4 = pCVar5->z;
  if (&in_stack_00000004[2].orient == (COrientation *)local_20) {
    in_stack_00000004[3].create_event[8] = '\0';
    in_stack_00000004[3].create_event[9] = '\0';
    in_stack_00000004[3].create_event[10] = '\0';
    in_stack_00000004[3].create_event[0xb] = '\0';
    return;
  }
  in_stack_00000004[2].orient.pitch = (in_stack_00000004->location).position.x - pCVar5->x;
  in_stack_00000004[2].orient.bank = fVar1 - fVar2;
  in_stack_00000004[2].orient.heading = fVar3 - fVar4;
  in_stack_00000004[3].create_event[8] = '\0';
  in_stack_00000004[3].create_event[9] = '\0';
  in_stack_00000004[3].create_event[10] = '\0';
  in_stack_00000004[3].create_event[0xb] = '\0';
  return;
}


// Assembly code:
// 005b8360: PUSH EBX
//   Label: core_spike.cpp_FUN_005b8360
// 005b8361: SUB ESP,0x28
// 005b8364: MOV EBX,dword ptr [ESP + 0x30]
// 005b8368: LEA EAX,[EBX + 0x158]
// 005b836e: PUSH EAX
// 005b836f: CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   XREF to: 00478d60 (UNCONDITIONAL_CALL)
// 005b8374: ADD ESP,0x4
// 005b8377: PUSH EBX
// 005b8378: CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0
//   XREF to: 00408bb0 (UNCONDITIONAL_CALL)
