// Name: core_moon.cpp_CMotionList_free_FUN_005027b0
// Address: 005027b0
// Address Range: [[005027b0, 00502811]]
// Convention: __cdecl
// Signature: void __cdecl core_moon_cpp_CMotionList_free_FUN_005027b0(CMotionList *this_ptr)

#include "nocturne.h"

void __cdecl core_moon_cpp_CMotionList_free_FUN_005027b0(CMotionList *this_ptr)

{
  SMotionTransition *ptr;
  CMotionList *pCVar1;
  int iVar2;
  
  iVar2 = 0;
  pCVar1 = this_ptr;
  if (0 < this_ptr->motion_count) {
    do {
      ptr = pCVar1->motions[0].transitions;
      if (ptr != (SMotionTransition *)0x0) {
        debugFree(ptr);
      }
      iVar2 = iVar2 + 1;
      pCVar1 = (CMotionList *)(pCVar1->state_names[9] + 6);
    } while (iVar2 < this_ptr->motion_count);
  }
  this_ptr->state_count = 0;
  this_ptr->motion_count = 0;
  memset(this_ptr->motions,0,0x1b580);
  return;
}
