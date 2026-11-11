// Name: core_motion.cpp_FUN_00503a10
// Address: 00503a10
// Address Range: [[00503a10, 00503bc0]]
// Convention: __cdecl
// Signature: int __cdecl core_motion_cpp_FUN_00503a10(CMotionController *this_ptr,int *inout_motion_index,float *inout_frame_number,float delta_time,float scale_factor)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_motion_cpp_FUN_00503a10(CMotionController *this_ptr,int *inout_motion_index,float *inout_frame_number,float delta_time,float scale_factor)

{
  SMotion *pSVar1;
  int iVar2;
  int iVar3;
  SMotion *pSVar4;
  int iVar5;
  float local_20;
  float fStack_18;
  
  pSVar1 = this_ptr->motion_list_ptr->motions + *inout_motion_index;
  iVar5 = 0;
  iVar3 = 0;
  local_20 = delta_time * pSVar1->fps + *inout_frame_number;
  pSVar4 = pSVar1;
  if (0 < pSVar1->signal_count) {
    do {
      iVar2 = pSVar4->signals[0].frame_number;
      if ((*inout_frame_number <= (float)iVar2) && ((float)iVar2 <= local_20 + (float)_DAT_005dfd10)
         ) {
        local_20 = (float)iVar2 + (float)_DAT_005dfd10;
        iVar5 = pSVar4->signals[0].value;
      }
      iVar3 = iVar3 + 1;
      pSVar4 = (SMotion *)(pSVar4->motion_name + 8);
    } while (iVar3 < pSVar1->signal_count);
  }
  if ((double)local_20 < (double)pSVar1->frame_count + _DAT_005dfd00) {
    (*this_ptr->vtable->accumulateScaledRootMotion)
              (this_ptr,(float)pSVar1->frame_start + *inout_frame_number,
               (float)pSVar1->frame_start + local_20,scale_factor);
    *inout_frame_number = local_20;
    return iVar5;
  }
  (*this_ptr->vtable->accumulateScaledRootMotion)
            (this_ptr,(float)pSVar1->frame_start + *inout_frame_number,
             (float)(pSVar1->frame_start + pSVar1->frame_count),scale_factor);
  switch(pSVar1->exit_forward_cmd) {
  case 3:
  case 4:
  case 5:
  case 6:
    *inout_frame_number = (float)(pSVar1->frame_count + -1);
    return iVar5;
  }
  fStack_18 = pSVar1->exit_forward_to_frame;
  if (fStack_18 == _DAT_005dfd08) {
    iVar3 = (*this_ptr->vtable->findPatchToFrame)
                      (this_ptr,*inout_motion_index,(float)(pSVar1->frame_count + -1),
                       pSVar1->exit_forward_to_motion);
    fStack_18 = (float)iVar3;
  }
  *inout_motion_index = pSVar1->exit_forward_to_motion;
  *inout_frame_number = fStack_18;
  return iVar5;
}
