// Name: core_motion.cpp_FUN_004fc4b0
// Address: 004fc4b0
// Address Range: [[004fc4b0, 004fc674]]
// Convention: __cdecl
// Signature: int __cdecl core_motion_cpp_FUN_004fc4b0(CMotionController *this_ptr,int *inout_motion_index,float *inout_frame_number,float delta_time,float scale_factor)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_motion_cpp_FUN_004fc4b0(CMotionController *this_ptr,int *inout_motion_index,float *inout_frame_number,float delta_time,float scale_factor)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float local_1c;
  float fStack_18;
  
  iVar5 = *(int *)this_ptr + 0x1c28 + *inout_motion_index * 0x120;
  iVar6 = 0;
  iVar4 = 0;
  local_1c = delta_time * *(float *)(iVar5 + 0x20) + *inout_frame_number;
  iVar3 = iVar5;
  if (0 < *(int *)(iVar5 + 0x78)) {
    do {
      iVar1 = *(int *)(iVar3 + 0x7c);
      if ((*inout_frame_number <= (float)iVar1) && ((float)iVar1 <= local_1c + (float)_DAT_005c9d7c)
         ) {
        local_1c = (float)iVar1 + (float)_DAT_005c9d7c;
        iVar6 = *(int *)(iVar3 + 0x80);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 8;
    } while (iVar4 < *(int *)(iVar5 + 0x78));
  }
  if ((double)local_1c < (double)*(int *)(iVar5 + 100) + _DAT_005c9d6c) {
    fVar2 = 1.0 / (float)*(int *)(iVar5 + 0x68);
    (**(code **)(*(int *)&this_ptr->field_0x50 + 8))
              (this_ptr,(float)*(int *)(iVar5 + 0x60) + *inout_frame_number * fVar2,
               local_1c * fVar2 + (float)*(int *)(iVar5 + 0x60),scale_factor);
    *inout_frame_number = local_1c;
    return iVar6;
  }
  (**(code **)(*(int *)&this_ptr->field_0x50 + 8))
            (this_ptr,(float)*(int *)(iVar5 + 0x60) +
                      *inout_frame_number / (float)*(int *)(iVar5 + 0x68),
             (float)(*(int *)(iVar5 + 0x60) + *(int *)(iVar5 + 0x6c)),scale_factor);
  switch(*(uint *)(iVar5 + 0x30)) {
  case 3:
  case 4:
  case 5:
  case 6:
    *inout_frame_number = (float)(*(int *)(iVar5 + 100) + -1);
    return iVar6;
  }
  fStack_18 = *(float *)(iVar5 + 0x38);
  if (fStack_18 == _DAT_005c9d74) {
    iVar3 = (**(code **)(*(int *)&this_ptr->field_0x50 + 4))
                      (this_ptr,*inout_motion_index,(float)(*(int *)(iVar5 + 100) + -1),
                       *(uint *)(iVar5 + 0x34));
    fStack_18 = (float)iVar3;
  }
  *inout_motion_index = *(int *)(iVar5 + 0x34);
  *inout_frame_number = fStack_18;
  return iVar6;
}
