// Name: core_motion.cpp_CMotionController_detachMotionList_FUN_004fc2c0
// Address: 004fc2c0
// Address Range: [[004fc2c0, 004fc30b]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_detachMotionList_FUN_004fc2c0(CMotionController *this_ptr)

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionController_detachMotionList_FUN_004fc2c0(CMotionController *this_ptr)

{
  char cVar1;
  SMotion *pSVar2;
  char *pcVar3;
  
  if (this_ptr->motion_list_ptr != (CMotionList *)0x0) {
    if (this_ptr->current_motion_name[0] == '\0') {
      pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(this_ptr);
      pcVar3 = this_ptr->current_motion_name;
      do {
        cVar1 = pSVar2->motion_name[0];
        *pcVar3 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pSVar2->motion_name[1];
        pSVar2 = (SMotion *)(pSVar2->motion_name + 2);
        pcVar3[1] = cVar1;
        pcVar3 = pcVar3 + 2;
      } while (cVar1 != '\0');
      this_ptr->motion_list_ptr = (CMotionList *)0x0;
      return;
    }
    this_ptr->motion_list_ptr = (CMotionList *)0x0;
  }
  return;
}
