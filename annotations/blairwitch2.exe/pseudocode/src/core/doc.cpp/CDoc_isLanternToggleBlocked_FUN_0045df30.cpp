// Name: core_doc.cpp_CDoc_isLanternToggleBlocked_FUN_0045df30
// Address: 0045df30
// Address Range: [[0045df30, 0045e00d]]
// Convention: __cdecl
// Signature: int __cdecl core_doc_cpp_CDoc_isLanternToggleBlocked_FUN_0045df30(CDoc *this_ptr)

#include "nocturne.h"

int __cdecl core_doc_cpp_CDoc_isLanternToggleBlocked_FUN_0045df30(CDoc *this_ptr)

{
  int iVar1;
  SMotion *pSVar2;
  float fVar3;
  int iVar4;
  
  iVar4 = 0;
  if ((this_ptr->lantern_mode != 0) && (this_ptr->lantern_tween_pct < 1.0)) {
    iVar4 = 1;
  }
  if ((this_ptr->lantern_mode == 0) && (0.0 < this_ptr->lantern_tween_pct)) {
    iVar4 = 1;
  }
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                     (&(this_ptr->base).base.model.base);
  iVar1 = pSVar2->state_index;
  if ((((iVar1 == 0x13) || (iVar1 == 0x15)) || (iVar1 == 0x14)) || (iVar1 == 0x16)) {
    iVar4 = 1;
  }
  fVar3 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
                    ((CCharacter *)this_ptr,0);
  if ((fVar3 < 1.0) &&
     (fVar3 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
                        ((CCharacter *)this_ptr,2), fVar3 < 1.0)) {
    iVar4 = 1;
  }
  if ((this_ptr->base).base.carry_hands[1].carry_actor != (CDemonActor *)0x0) {
    iVar4 = 1;
  }
  return iVar4;
}
