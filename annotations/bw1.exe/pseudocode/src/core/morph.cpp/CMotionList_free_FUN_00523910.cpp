// Name: core_morph.cpp_CMotionList_free_FUN_00523910
// Address: 00523910
// Address Range: [[00523910, 00523971]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMotionList_free_FUN_00523910(CMotionList *this_ptr)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMotionList_free_FUN_00523910(CMotionList *this_ptr)

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
      pCVar1 = (CMotionList *)(pCVar1->state_names[9] + 0xe);
    } while (iVar2 < this_ptr->motion_count);
  }
  this_ptr->state_count = 0;
  this_ptr->motion_count = 0;
  memset(this_ptr->motions,0,0x1c200);
  return;
}
