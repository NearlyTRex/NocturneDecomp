// Name: core_motion.cpp_FUN_00503e60
// Address: 00503e60
// Address Range: [[00503e60, 00503f4e]]
// Convention: __cdecl
// Signature: float __cdecl core_motion_cpp_FUN_00503e60(CMotionController *this_ptr)

#include "nocturne.h"

float __cdecl core_motion_cpp_FUN_00503e60(CMotionController *this_ptr)

{
  int iVar1;
  CMotionList *pCVar2;
  CMotionList *pCVar3;
  int iVar4;
  float local_1c;
  
  pCVar3 = this_ptr->motion_list_ptr + this_ptr->current_motion_index * 0x118 + 0x1c28;
  if (this_ptr->current_frame_number <= 0.0) {
    local_1c = 0.0;
  }
  else if ((float)*(int *)(pCVar3 + 100) <= this_ptr->current_frame_number) {
    local_1c = (float)(*(int *)(pCVar3 + 0xec) + 1);
  }
  else {
    iVar1 = 0;
    iVar4 = 0;
    pCVar2 = pCVar3;
    if (0 < *(int *)(pCVar3 + 0xec)) {
      do {
        if (this_ptr->current_frame_number < (float)*(int *)(pCVar2 + 0xf0)) {
          return (float)iVar1 +
                 (this_ptr->current_frame_number - (float)iVar4) /
                 (float)(*(int *)(pCVar2 + 0xf0) - iVar4);
        }
        iVar1 = iVar1 + 1;
        iVar4 = *(int *)(pCVar2 + 0xf0);
        pCVar2 = pCVar2 + 4;
      } while (iVar1 < *(int *)(pCVar3 + 0xec));
    }
    local_1c = (float)*(int *)(pCVar3 + 0xec) +
               (this_ptr->current_frame_number - (float)iVar4) /
               (float)(*(int *)(pCVar3 + 100) - iVar4);
  }
  return local_1c;
}
