// Name: core_spike.cpp_FUN_005b8360
// Address: 005b8360
// Address Range: [[005b8360, 005b837c]]
// Convention: __cdecl
// Signature: void __cdecl core_spike_cpp_FUN_005b8360(void)

#include "nocturne.h"

/* Signature: byte actors_other_spike.cpp_FUN_005b8360(uint param_1) */

void __cdecl core_spike_cpp_FUN_005b8360(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CVector3f *pCVar5;
  CDemonActor *in_stack_00000004;
  float local_2c [3];
  CVector3f local_20;
  CVector3f local_14;
  float local_8;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1));
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(in_stack_00000004);
  local_14.z = in_stack_00000004[2].orient_matrix.m[0].x * (float)in_stack_00000004[3].vtable;
  local_14.x = 0.0;
  local_14.y = 0.0;
  local_8 = local_14.z;
  pCVar5 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                     (in_stack_00000004,&local_20,&local_14);
  fVar1 = (in_stack_00000004->location).position.y;
  fVar2 = pCVar5->y;
  fVar3 = (in_stack_00000004->location).position.z;
  fVar4 = pCVar5->z;
  if (&in_stack_00000004[2].orient == (COrientation *)local_2c) {
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
