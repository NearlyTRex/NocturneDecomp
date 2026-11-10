// Name: core_motion.cpp_FUN_00503a10
// Address: 00503a10
// Address Range: [[00503a10, 00503bc0]]
// Convention: __cdecl
// Signature: int __cdecl core_motion_cpp_FUN_00503a10(CMotionController *this_ptr,int *inout_motion_index,float *inout_frame_number,float delta_time,float scale_factor)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_motion_cpp_FUN_00503a10(CMotionController *this_ptr,int *inout_motion_index,float *inout_frame_number,float delta_time,float scale_factor)

{
  CMotionList *pCVar1;
  int iVar2;
  int iVar3;
  CMotionList *pCVar4;
  int iVar5;
  float local_20;
  float fStack_18;
  
  pCVar1 = this_ptr->motion_list_ptr + *inout_motion_index * 0x118 + 0x1c28;
  iVar5 = 0;
  iVar3 = 0;
  local_20 = delta_time * *(float *)(pCVar1 + 0x20) + *inout_frame_number;
  pCVar4 = pCVar1;
  if (0 < *(int *)(pCVar1 + 0x70)) {
    do {
      iVar2 = *(int *)(pCVar4 + 0x74);
      if ((*inout_frame_number <= (float)iVar2) && ((float)iVar2 <= local_20 + (float)_DAT_005dfd10)
         ) {
        local_20 = (float)iVar2 + (float)_DAT_005dfd10;
        iVar5 = *(int *)(pCVar4 + 0x78);
      }
      iVar3 = iVar3 + 1;
      pCVar4 = pCVar4 + 8;
    } while (iVar3 < *(int *)(pCVar1 + 0x70));
  }
  if ((double)local_20 < (double)*(int *)(pCVar1 + 100) + _DAT_005dfd00) {
    (**(code **)(this_ptr->vtable + 8))
              (this_ptr,(float)*(int *)(pCVar1 + 0x60) + *inout_frame_number,
               (float)*(int *)(pCVar1 + 0x60) + local_20,scale_factor);
    *inout_frame_number = local_20;
    return iVar5;
  }
  (**(code **)(this_ptr->vtable + 8))
            (this_ptr,(float)*(int *)(pCVar1 + 0x60) + *inout_frame_number,
             (float)(*(int *)(pCVar1 + 0x60) + *(int *)(pCVar1 + 100)),scale_factor);
  switch(*(uint *)(pCVar1 + 0x30)) {
  case 3:
  case 4:
  case 5:
  case 6:
    *inout_frame_number = (float)(*(int *)(pCVar1 + 100) + -1);
    return iVar5;
  }
  fStack_18 = *(float *)(pCVar1 + 0x38);
  if (fStack_18 == _DAT_005dfd08) {
    iVar3 = (**(code **)(this_ptr->vtable + 4))
                      (this_ptr,*inout_motion_index,(float)(*(int *)(pCVar1 + 100) + -1),
                       *(uint *)(pCVar1 + 0x34));
    fStack_18 = (float)iVar3;
  }
  *inout_motion_index = *(int *)(pCVar1 + 0x34);
  *inout_frame_number = fStack_18;
  return iVar5;
}
