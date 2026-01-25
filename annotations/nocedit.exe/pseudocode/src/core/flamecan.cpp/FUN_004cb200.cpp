// Name: core_flamecan.cpp_FUN_004cb200
// Address: 004cb200
// Address Range: [[004cb200, 004cb212]]
// Convention: unknown
// Signature: undefined core_flamecan.cpp_FUN_004cb200()

#include "nocturne.h"

/* Signature: byte actors_other_flame.cpp_FUN_004cb200(uint param_1) */

void core_flamecan_cpp_FUN_004cb200(void)

{
  float fVar1;
  float fVar2;
  CDemonActor_vtable *pCVar3;
  CDemonActor *in_stack_00000004;
  CBoundingBox3D local_38;
  float fStack_20;
  float fStack_1c;
  float afStack_18 [4];
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(in_stack_00000004);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1));
  pCVar3 = (in_stack_00000004->vtable)._ub;
  in_stack_00000004[3].field13_0xec.x = 0.0;
  (*pCVar3->getBoundingBox)(in_stack_00000004,&local_38);
  *(float *)(in_stack_00000004[2].create_event + 0x38) = (in_stack_00000004->location).position.x;
  *(float *)(in_stack_00000004[2].create_event + 0x3c) = (in_stack_00000004->location).position.y;
  *(float *)(in_stack_00000004[2].create_event + 0x40) = (in_stack_00000004->location).position.z;
  *(int *)(in_stack_00000004[2].create_event + 0x44) = (in_stack_00000004->location).area_id;
  *(float *)(in_stack_00000004[2].create_event + 0x3c) =
       (fStack_20 - local_38.max.x) + *(float *)(in_stack_00000004[2].create_event + 0x3c);
  if ((float *)(in_stack_00000004[3].create_event + 0x18) != afStack_18) {
    *(float *)(in_stack_00000004[3].create_event + 0x18) = local_38.max.z - local_38.min.z;
    *(float *)(in_stack_00000004[3].create_event + 0x1c) = fStack_20 - local_38.max.x;
    *(float *)(in_stack_00000004[3].create_event + 0x20) = fStack_1c - local_38.max.y;
  }
  fVar1 = *(float *)(in_stack_00000004[3].create_event + 0x18);
  in_stack_00000004[3].field12_0xe0.x = 0.0;
  fVar1 = fVar1 * (float)2;
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
