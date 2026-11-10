// Name: core_motion.cpp_FUN_004fc680
// Address: 004fc680
// Address Range: [[004fc680, 004fc848]]
// Convention: __cdecl
// Signature: int __cdecl core_motion_cpp_FUN_004fc680(CMotionController *this_ptr,int motion_index,float current_frame,float *inout_delta_time,SMotionTransition *out_transition)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_motion_cpp_FUN_004fc680(CMotionController *this_ptr,int motion_index,float current_frame,float *inout_delta_time,SMotionTransition *out_transition)

{
  int iVar1;
  float fVar2;
  CMotionList *pCVar3;
  CMotionList *pCVar4;
  int iVar5;
  SMotionTransition *pSVar6;
  byte bVar7;
  float local_24;
  int local_1c;
  
  bVar7 = 0;
  pCVar4 = this_ptr->motion_list_ptr + motion_index * 0x120 + 0x1c28;
  local_1c = 0;
  fVar2 = *inout_delta_time * *(float *)(pCVar4 + 0x20) + current_frame;
  iVar5 = 0;
  pCVar3 = pCVar4;
  local_24 = fVar2;
  if (0 < *(int *)(pCVar4 + 0x78)) {
    do {
      iVar1 = *(int *)(pCVar3 + 0x7c);
      if ((current_frame <= (float)iVar1) && ((float)iVar1 <= local_24 + (float)_DAT_005c9d8c)) {
        local_1c = *(int *)(pCVar3 + 0x80);
        local_24 = (float)iVar1 + (float)_DAT_005c9d8c;
      }
      iVar5 = iVar5 + 1;
      pCVar3 = pCVar3 + 8;
    } while (iVar5 < *(int *)(pCVar4 + 0x78));
  }
  if ((double)local_24 < (double)*(int *)(pCVar4 + 0x28) + _DAT_005c9d84) {
    (**(code **)(this_ptr->vtable + 8))
              (this_ptr,(float)*(int *)(pCVar4 + 0x60) +
                        current_frame * (1.0 / (float)*(int *)(pCVar4 + 0x68)),
               local_24 * (1.0 / (float)*(int *)(pCVar4 + 0x68)) + (float)*(int *)(pCVar4 + 0x60),
               0x3f800000);
    *(uint *)(out_transition + 4) = 1;
    *(uint *)(out_transition + 0x14) = 0;
    *(int *)(out_transition + 8) = motion_index;
    *(float *)(out_transition + 0xc) = local_24;
    if (fVar2 <= *(float *)(out_transition + 0xc)) {
      return local_1c;
    }
    fVar2 = *(float *)(out_transition + 0xc);
  }
  else {
    (**(code **)(this_ptr->vtable + 8))
              (this_ptr,(float)*(int *)(pCVar4 + 0x60) +
                        current_frame * (1.0 / (float)*(int *)(pCVar4 + 0x68)),
               (float)*(int *)(pCVar4 + 0x28) * (1.0 / (float)*(int *)(pCVar4 + 0x68)) +
               (float)*(int *)(pCVar4 + 0x60),0x3f800000);
    pCVar3 = pCVar4 + 0x2c;
    pSVar6 = out_transition;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(uint *)pSVar6 = *(uint *)pCVar3;
      pCVar3 = pCVar3 + ((uint)bVar7 * -2 + 1) * 4;
      pSVar6 = pSVar6 + (uint)bVar7 * -8 + 4;
    }
    pSVar6 = this_ptr->in_transition;
    if ((pSVar6 != (SMotionTransition *)0x0) && (*(int *)(pSVar6 + 4) == 2)) {
      *(uint *)(out_transition + 8) = *(uint *)(pSVar6 + 8);
      *(uint *)(out_transition + 0xc) = *(uint *)(this_ptr->in_transition + 0xc);
    }
    fVar2 = (float)*(int *)(pCVar4 + 0x28);
  }
  *inout_delta_time = (fVar2 - current_frame) / *(float *)(pCVar4 + 0x20);
  return local_1c;
}
