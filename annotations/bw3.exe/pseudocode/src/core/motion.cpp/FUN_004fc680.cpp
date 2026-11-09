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
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  SMotionTransition *pSVar8;
  byte bVar9;
  float local_24;
  int local_1c;
  
  bVar9 = 0;
  iVar5 = *(int *)this_ptr + 0x1c28 + motion_index * 0x120;
  local_1c = 0;
  fVar2 = *inout_delta_time * *(float *)(iVar5 + 0x20) + current_frame;
  iVar6 = 0;
  iVar4 = iVar5;
  local_24 = fVar2;
  if (0 < *(int *)(iVar5 + 0x78)) {
    do {
      iVar1 = *(int *)(iVar4 + 0x7c);
      if ((current_frame <= (float)iVar1) && ((float)iVar1 <= local_24 + (float)_DAT_005c9d8c)) {
        local_1c = *(int *)(iVar4 + 0x80);
        local_24 = (float)iVar1 + (float)_DAT_005c9d8c;
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 8;
    } while (iVar6 < *(int *)(iVar5 + 0x78));
  }
  if ((double)local_24 < (double)*(int *)(iVar5 + 0x28) + _DAT_005c9d84) {
    fVar3 = 1.0 / (float)*(int *)(iVar5 + 0x68);
    (**(code **)(*(int *)&this_ptr->field_0x50 + 8))
              (this_ptr,(float)*(int *)(iVar5 + 0x60) + current_frame * fVar3,
               local_24 * fVar3 + (float)*(int *)(iVar5 + 0x60),0x3f800000);
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
    fVar2 = 1.0 / (float)*(int *)(iVar5 + 0x68);
    (**(code **)(*(int *)&this_ptr->field_0x50 + 8))
              (this_ptr,(float)*(int *)(iVar5 + 0x60) + current_frame * fVar2,
               (float)*(int *)(iVar5 + 0x28) * fVar2 + (float)*(int *)(iVar5 + 0x60),0x3f800000);
    puVar7 = (uint *)(iVar5 + 0x2c);
    pSVar8 = out_transition;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(uint *)pSVar8 = *puVar7;
      puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
      pSVar8 = pSVar8 + (uint)bVar9 * -8 + 4;
    }
    iVar4 = *(int *)&this_ptr->field_0x2c;
    if ((iVar4 != 0) && (*(int *)(iVar4 + 4) == 2)) {
      *(uint *)(out_transition + 8) = *(uint *)(iVar4 + 8);
      *(uint *)(out_transition + 0xc) = *(uint *)(*(int *)&this_ptr->field_0x2c + 0xc);
    }
    fVar2 = (float)*(int *)(iVar5 + 0x28);
  }
  *inout_delta_time = (fVar2 - current_frame) / *(float *)(iVar5 + 0x20);
  return local_1c;
}
