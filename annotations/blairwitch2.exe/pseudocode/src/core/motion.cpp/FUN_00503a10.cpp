// Name: core_motion.cpp_FUN_00503a10
// Address: 00503a10
// Address Range: [[00503a10, 00503bc0]]
// Convention: __cdecl
// Signature: int __cdecl core_motion_cpp_FUN_00503a10(CMotionController *this_ptr,int *inout_motion_index,float *inout_frame_number,float delta_time,float scale_factor)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_motion_cpp_FUN_00503a10(CMotionController *this_ptr,int *inout_motion_index,float *inout_frame_number,float delta_time,float scale_factor)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float local_20;
  float fStack_18;
  
  iVar1 = *(int *)this_ptr + 0x1c28 + *inout_motion_index * 0x118;
  iVar5 = 0;
  iVar4 = 0;
  local_20 = delta_time * *(float *)(iVar1 + 0x20) + *inout_frame_number;
  iVar3 = iVar1;
  if (0 < *(int *)(iVar1 + 0x70)) {
    do {
      iVar2 = *(int *)(iVar3 + 0x74);
      if ((*inout_frame_number <= (float)iVar2) && ((float)iVar2 <= local_20 + (float)_DAT_005dfd10)
         ) {
        local_20 = (float)iVar2 + (float)_DAT_005dfd10;
        iVar5 = *(int *)(iVar3 + 0x78);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 8;
    } while (iVar4 < *(int *)(iVar1 + 0x70));
  }
  if ((double)local_20 < (double)*(int *)(iVar1 + 100) + _DAT_005dfd00) {
    (**(code **)(*(int *)&this_ptr->field_0x50 + 8))
              (this_ptr,(float)*(int *)(iVar1 + 0x60) + *inout_frame_number,
               (float)*(int *)(iVar1 + 0x60) + local_20,scale_factor);
    *inout_frame_number = local_20;
    return iVar5;
  }
  (**(code **)(*(int *)&this_ptr->field_0x50 + 8))
            (this_ptr,(float)*(int *)(iVar1 + 0x60) + *inout_frame_number,
             (float)(*(int *)(iVar1 + 0x60) + *(int *)(iVar1 + 100)),scale_factor);
  switch(*(uint *)(iVar1 + 0x30)) {
  case 3:
  case 4:
  case 5:
  case 6:
    *inout_frame_number = (float)(*(int *)(iVar1 + 100) + -1);
    return iVar5;
  }
  fStack_18 = *(float *)(iVar1 + 0x38);
  if (fStack_18 == _DAT_005dfd08) {
    iVar3 = (**(code **)(*(int *)&this_ptr->field_0x50 + 4))
                      (this_ptr,*inout_motion_index,(float)(*(int *)(iVar1 + 100) + -1),
                       *(uint *)(iVar1 + 0x34));
    fStack_18 = (float)iVar3;
  }
  *inout_motion_index = *(int *)(iVar1 + 0x34);
  *inout_frame_number = fStack_18;
  return iVar5;
}
