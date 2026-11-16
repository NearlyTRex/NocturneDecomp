// Name: core_morph.cpp_CMotionList_free_FUN_004fb210
// Address: 004fb210
// Address Range: [[004fb210, 004fb271]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMotionList_free_FUN_004fb210(CMotionList *this_ptr)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMotionList_free_FUN_004fb210(CMotionList *this_ptr)

{
  SMotionTransition *pSVar1;
  CMotionList *pCVar2;
  int iVar3;
  
  iVar3 = 0;
  pCVar2 = this_ptr;
  if (0 < this_ptr->motion_count) {
    do {
      pSVar1 = pCVar2->motions[0].transitions;
      if (pSVar1 != (SMotionTransition *)0x0) {
        FUN_005a3770(pSVar1);
      }
      iVar3 = iVar3 + 1;
      pCVar2 = (CMotionList *)(pCVar2->state_names[9] + 0xe);
    } while (iVar3 < this_ptr->motion_count);
  }
  this_ptr->state_count = 0;
  this_ptr->motion_count = 0;
  memset(this_ptr->motions,0,0x1c200);
  return;
}
