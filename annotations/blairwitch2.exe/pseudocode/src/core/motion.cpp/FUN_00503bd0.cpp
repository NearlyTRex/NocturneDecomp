// Name: core_motion.cpp_FUN_00503bd0
// Address: 00503bd0
// Address Range: [[00503bd0, 00503d7e]]
// Convention: __cdecl
// Signature: int __cdecl core_motion_cpp_FUN_00503bd0(CMotionController *this_ptr,int motion_index,float current_frame,float *inout_delta_time,SMotionTransition *out_transition)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_motion_cpp_FUN_00503bd0(CMotionController *this_ptr,int motion_index,float current_frame,float *inout_delta_time,SMotionTransition *out_transition)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  SMotionTransition *pSVar7;
  byte bVar8;
  float local_24;
  int local_20;
  
  bVar8 = 0;
  iVar4 = *(int *)this_ptr + 0x1c28 + motion_index * 0x118;
  local_20 = 0;
  fVar2 = *inout_delta_time * *(float *)(iVar4 + 0x20) + current_frame;
  iVar5 = 0;
  iVar3 = iVar4;
  local_24 = fVar2;
  if (0 < *(int *)(iVar4 + 0x70)) {
    do {
      iVar1 = *(int *)(iVar3 + 0x74);
      if ((current_frame <= (float)iVar1) && ((float)iVar1 <= local_24 + (float)_DAT_005dfd20)) {
        local_20 = *(int *)(iVar3 + 0x78);
        local_24 = (float)iVar1 + (float)_DAT_005dfd20;
      }
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + 8;
    } while (iVar5 < *(int *)(iVar4 + 0x70));
  }
  if ((double)local_24 < (double)*(int *)(iVar4 + 0x28) + _DAT_005dfd18) {
    (**(code **)(*(int *)&this_ptr->field_0x50 + 8))
              (this_ptr,(float)*(int *)(iVar4 + 0x60) + current_frame,
               (float)*(int *)(iVar4 + 0x60) + local_24,0x3f800000);
    *(uint *)(out_transition + 4) = 1;
    *(uint *)(out_transition + 0x14) = 0;
    *(int *)(out_transition + 8) = motion_index;
    *(float *)(out_transition + 0xc) = local_24;
    if (fVar2 <= *(float *)(out_transition + 0xc)) {
      return local_20;
    }
    fVar2 = *(float *)(out_transition + 0xc);
  }
  else {
    (**(code **)(*(int *)&this_ptr->field_0x50 + 8))
              (this_ptr,(float)*(int *)(iVar4 + 0x60) + current_frame,
               (float)(*(int *)(iVar4 + 0x60) + *(int *)(iVar4 + 0x28)),0x3f800000);
    puVar6 = (uint *)(iVar4 + 0x2c);
    pSVar7 = out_transition;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(uint *)pSVar7 = *puVar6;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
      pSVar7 = pSVar7 + (uint)bVar8 * -8 + 4;
    }
    iVar3 = *(int *)&this_ptr->field_0x2c;
    if ((iVar3 != 0) && (*(int *)(iVar3 + 4) == 2)) {
      *(uint *)(out_transition + 8) = *(uint *)(iVar3 + 8);
      *(uint *)(out_transition + 0xc) = *(uint *)(*(int *)&this_ptr->field_0x2c + 0xc);
    }
    fVar2 = (float)*(int *)(iVar4 + 0x28);
  }
  *inout_delta_time = (fVar2 - current_frame) / *(float *)(iVar4 + 0x20);
  return local_20;
}
