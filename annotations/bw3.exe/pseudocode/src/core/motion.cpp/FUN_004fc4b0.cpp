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
  int iVar2;
  CMotionList *pCVar3;
  CMotionList *pCVar4;
  int iVar5;
  float local_1c;
  float fStack_18;
  
  pCVar4 = this_ptr->motion_list_ptr + *inout_motion_index * 0x120 + 0x1c28;
  iVar5 = 0;
  iVar2 = 0;
  local_1c = delta_time * *(float *)(pCVar4 + 0x20) + *inout_frame_number;
  pCVar3 = pCVar4;
  if (0 < *(int *)(pCVar4 + 0x78)) {
    do {
      iVar1 = *(int *)(pCVar3 + 0x7c);
      if ((*inout_frame_number <= (float)iVar1) && ((float)iVar1 <= local_1c + (float)_DAT_005c9d7c)
         ) {
        local_1c = (float)iVar1 + (float)_DAT_005c9d7c;
        iVar5 = *(int *)(pCVar3 + 0x80);
      }
      iVar2 = iVar2 + 1;
      pCVar3 = pCVar3 + 8;
    } while (iVar2 < *(int *)(pCVar4 + 0x78));
  }
  if ((double)local_1c < (double)*(int *)(pCVar4 + 100) + _DAT_005c9d6c) {
    (**(code **)(this_ptr->vtable + 8))
              (this_ptr,(float)*(int *)(pCVar4 + 0x60) +
                        *inout_frame_number * (1.0 / (float)*(int *)(pCVar4 + 0x68)),
               local_1c * (1.0 / (float)*(int *)(pCVar4 + 0x68)) + (float)*(int *)(pCVar4 + 0x60),
               scale_factor);
    *inout_frame_number = local_1c;
    return iVar5;
  }
  (**(code **)(this_ptr->vtable + 8))
            (this_ptr,(float)*(int *)(pCVar4 + 0x60) +
                      *inout_frame_number / (float)*(int *)(pCVar4 + 0x68),
             (float)(*(int *)(pCVar4 + 0x60) + *(int *)(pCVar4 + 0x6c)),scale_factor);
  switch(*(uint *)(pCVar4 + 0x30)) {
  case 3:
  case 4:
  case 5:
  case 6:
    *inout_frame_number = (float)(*(int *)(pCVar4 + 100) + -1);
    return iVar5;
  }
  fStack_18 = *(float *)(pCVar4 + 0x38);
  if (fStack_18 == _DAT_005c9d74) {
    iVar2 = (**(code **)(this_ptr->vtable + 4))
                      (this_ptr,*inout_motion_index,(float)(*(int *)(pCVar4 + 100) + -1),
                       *(uint *)(pCVar4 + 0x34));
    fStack_18 = (float)iVar2;
  }
  *inout_motion_index = *(int *)(pCVar4 + 0x34);
  *inout_frame_number = fStack_18;
  return iVar5;
}
