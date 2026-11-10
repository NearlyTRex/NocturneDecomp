// Name: core_motion.cpp_CMotionController_advanceFrameAndCheckSignals_FUN_00503bd0
// Address: 00503bd0
// Address Range: [[00503bd0, 00503d7e]]
// Convention: __cdecl
// Signature: int __cdecl core_motion_cpp_CMotionController_advanceFrameAndCheckSignals_FUN_00503bd0(CMotionController *this_ptr,int *inout_motion_index,float *inout_frame_number,float delta_time,float scale_factor)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_motion_cpp_CMotionController_advanceFrameAndCheckSignals_FUN_00503bd0(CMotionController *this_ptr,int *inout_motion_index,float *inout_frame_number,float delta_time,float scale_factor)

{
  int iVar1;
  float fVar2;
  SMotionTransition *pSVar3;
  CMotionList *pCVar4;
  CMotionList *pCVar5;
  int iVar6;
  uint *puVar7;
  byte bVar8;
  float local_24;
  int local_20;
  
  bVar8 = 0;
  pCVar5 = this_ptr->motion_list_ptr + (int)inout_motion_index * 0x118 + 0x1c28;
  local_20 = 0;
  fVar2 = *(float *)delta_time * *(float *)(pCVar5 + 0x20) + (float)inout_frame_number;
  iVar6 = 0;
  pCVar4 = pCVar5;
  local_24 = fVar2;
  if (0 < *(int *)(pCVar5 + 0x70)) {
    do {
      iVar1 = *(int *)(pCVar4 + 0x74);
      if (((float)inout_frame_number <= (float)iVar1) &&
         ((float)iVar1 <= local_24 + (float)_DAT_005dfd20)) {
        local_20 = *(int *)(pCVar4 + 0x78);
        local_24 = (float)iVar1 + (float)_DAT_005dfd20;
      }
      iVar6 = iVar6 + 1;
      pCVar4 = pCVar4 + 8;
    } while (iVar6 < *(int *)(pCVar5 + 0x70));
  }
  if ((double)local_24 < (double)*(int *)(pCVar5 + 0x28) + _DAT_005dfd18) {
    (**(code **)(this_ptr->vtable + 8))
              (this_ptr,(float)*(int *)(pCVar5 + 0x60) + (float)inout_frame_number,
               (float)*(int *)(pCVar5 + 0x60) + local_24,0x3f800000);
    *(uint *)((int)scale_factor + 4) = 1;
    *(uint *)((int)scale_factor + 0x14) = 0;
    *(int **)((int)scale_factor + 8) = inout_motion_index;
    *(float *)((int)scale_factor + 0xc) = local_24;
    if (fVar2 <= *(float *)((int)scale_factor + 0xc)) {
      return local_20;
    }
    fVar2 = *(float *)((int)scale_factor + 0xc);
  }
  else {
    (**(code **)(this_ptr->vtable + 8))
              (this_ptr,(float)*(int *)(pCVar5 + 0x60) + (float)inout_frame_number,
               (float)(*(int *)(pCVar5 + 0x60) + *(int *)(pCVar5 + 0x28)),0x3f800000);
    pCVar4 = pCVar5 + 0x2c;
    puVar7 = (uint *)scale_factor;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar7 = *(uint *)pCVar4;
      pCVar4 = pCVar4 + ((uint)bVar8 * -2 + 1) * 4;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    pSVar3 = this_ptr->in_transition;
    if ((pSVar3 != (SMotionTransition *)0x0) && (*(int *)(pSVar3 + 4) == 2)) {
      *(uint *)((int)scale_factor + 8) = *(uint *)(pSVar3 + 8);
      *(uint *)((int)scale_factor + 0xc) = *(uint *)(this_ptr->in_transition + 0xc);
    }
    fVar2 = (float)*(int *)(pCVar5 + 0x28);
  }
  *(float *)delta_time = (fVar2 - (float)inout_frame_number) / *(float *)(pCVar5 + 0x20);
  return local_20;
}
