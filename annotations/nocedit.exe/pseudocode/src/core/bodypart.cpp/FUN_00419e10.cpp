// Name: core_bodypart.cpp_FUN_00419e10
// Address: 00419e10
// Address Range: [[00419e10, 00419f41]]
// Convention: unknown
// Signature: void core_bodypart_cpp_FUN_00419e10(void)

#include "nocturne.h"

void core_bodypart_cpp_FUN_00419e10(void)

{
  float fVar1;
  CVector3f *pCVar2;
  CVector3f *input_local_point;
  char *pcVar3;
  int iVar4;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  float local_30;
  CVector3f local_2c;
  float local_18;
  char *local_14;
  
  if (*(int *)(in_stack_00000004[5].create_event + 0x1c) != 0) {
    in_stack_00000008 = *(float *)(in_stack_00000004[9].create_event + 0x38) - in_stack_00000008;
    *(float *)(in_stack_00000004[9].create_event + 0x38) = in_stack_00000008;
    if (in_stack_00000008 < 0.0) {
      in_stack_00000004[5].create_event[0x1c] = '\0';
      in_stack_00000004[5].create_event[0x1d] = '\0';
      in_stack_00000004[5].create_event[0x1e] = '\0';
      in_stack_00000004[5].create_event[0x1f] = '\0';
      in_stack_00000004[9].create_event[0x38] = '\0';
      in_stack_00000004[9].create_event[0x39] = '\0';
      in_stack_00000004[9].create_event[0x3a] = '\0';
      in_stack_00000004[9].create_event[0x3b] = '\0';
      return;
    }
    iVar4 = 0;
    if (0 < *(int *)(in_stack_00000004[5].create_event + 0x1c)) {
      local_14 = in_stack_00000004[5].create_event + 0x20;
      pcVar3 = in_stack_00000004[5].create_event + 0x4c;
      do {
        input_local_point = (CVector3f *)(local_14 + iVar4 * 0x2b0);
        pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                           (in_stack_00000004,&local_2c,input_local_point);
        *(float *)pcVar3 = pCVar2->x;
        local_30 = 1.0;
        *(float *)(pcVar3 + 4) = pCVar2->y;
        *(float *)(pcVar3 + 8) = pCVar2->z;
        if (*(float *)(in_stack_00000004[9].create_event + 0x38) < (float)5) {
          local_30 = *(float *)(in_stack_00000004[9].create_event + 0x38) * (float)0.20000000000000001;
        }
        local_18 = local_30 * (float)1.5;
        fVar1 = (float)3;
        input_local_point[0x1d].z = local_18;
        input_local_point[0x1e].x = local_30 * fVar1;
        input_local_point[0x1e].y = local_18;
        core_flame_cpp_FUN_004c9c00();
        iVar4 = iVar4 + 1;
        pcVar3 = pcVar3 + 0x2b0;
      } while (iVar4 < *(int *)(in_stack_00000004[5].create_event + 0x1c));
    }
  }
  return;
}
