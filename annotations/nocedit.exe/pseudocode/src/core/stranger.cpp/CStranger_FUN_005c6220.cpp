// Name: core_stranger.cpp_CStranger_FUN_005c6220
// Address: 005c6220
// Address Range: [[005c6220, 005c658b]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_FUN_005c6220(CStranger *this_ptr)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_FUN_005c6220(CStranger *this_ptr)

{
  float fVar1;
  CCloth *this_ptr_00;
  bool bVar2;
  bool bVar3;
  int iVar4;
  SMotion *pSVar5;
  CVector3f *pCVar6;
  uint auStack_28 [3];
  uint auStack_1c [3];
  
  if (0 < (this_ptr->base).base.cloth_list.count) {
    bVar2 = false;
    iVar4 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
    bVar3 = false;
    if (iVar4 < 2) {
      if (((this_ptr->base).base.layer_action_index == 0) &&
         ((float)0.69999999999999996 < (this_ptr->base).base.layer_action_t)) {
        bVar3 = true;
      }
      if (((this_ptr->base).base.layer_action_index == 1) &&
         ((this_ptr->base).base.layer_action_t < (float)0.29999999999999999)) {
        bVar3 = true;
      }
      if (((this_ptr->base).base.layer_action_index == 2) &&
         ((float)0.5 < (this_ptr->base).base.layer_action_t)) {
        bVar2 = true;
      }
      if (((this_ptr->base).base.layer_action_index == 3) &&
         ((this_ptr->base).base.layer_action_t < (float)0.5)) {
        bVar2 = true;
      }
      if (((this_ptr->base).base.layer_action_index == 4) &&
         ((this_ptr->base).base.layer_action_t < (float)0.40000000000000002)) {
        bVar2 = true;
      }
      if (((this_ptr->base).base.layer_action_index == 5) &&
         ((float)0.59999999999999998 < (this_ptr->base).base.layer_action_t)) {
        bVar2 = true;
      }
      if (((this_ptr->base).base.layer_action_index == 9) &&
         ((this_ptr->base).base.layer_action_t < (float)0.40000000000000002)) {
        bVar2 = true;
      }
      if ((((this_ptr->base).base.layer_action_index == 0xf) &&
          (fVar1 = (this_ptr->base).base.layer_action_t, (float)0.29999999999999999 < fVar1)) &&
         ((double)fVar1 < 0.80000000000000004)) {
        bVar2 = true;
      }
    }
    this_ptr_00 = (this_ptr->base).base.cloth_list.cloths[0];
    if (bVar3) {
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr_00,"Bip01 L Forearm",0x32);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr_00,"Bip01 L Forearm",0x33);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr_00,"Bip01 L Forearm",0x34);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr_00,"Bip01 L Forearm",0x35);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr_00,"Bip01 L Forearm",0x36);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr_00,"Bip01 L Forearm",0x37);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr_00,"Bip01 R Forearm",0x20);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr_00,"Bip01 R Forearm",0x21);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr_00,"Bip01 R Forearm",0x22);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr_00,"Bip01 R Forearm",0x23);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr_00,"Bip01 R Forearm",0x24);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr_00,"Bip01 R Forearm",0x25);
    }
    else {
      core_cloth_cpp_CCloth_resetState_FUN_0043e170(this_ptr_00,0x32);
      core_cloth_cpp_CCloth_resetState_FUN_0043e170(this_ptr_00,0x33);
      core_cloth_cpp_CCloth_resetState_FUN_0043e170(this_ptr_00,0x34);
      core_cloth_cpp_CCloth_resetState_FUN_0043e170(this_ptr_00,0x35);
      core_cloth_cpp_CCloth_resetState_FUN_0043e170(this_ptr_00,0x36);
      core_cloth_cpp_CCloth_resetState_FUN_0043e170(this_ptr_00,0x37);
      core_cloth_cpp_CCloth_resetState_FUN_0043e170(this_ptr_00,0x20);
      core_cloth_cpp_CCloth_resetState_FUN_0043e170(this_ptr_00,0x21);
      core_cloth_cpp_CCloth_resetState_FUN_0043e170(this_ptr_00,0x22);
      core_cloth_cpp_CCloth_resetState_FUN_0043e170(this_ptr_00,0x23);
      core_cloth_cpp_CCloth_resetState_FUN_0043e170(this_ptr_00,0x24);
      core_cloth_cpp_CCloth_resetState_FUN_0043e170(this_ptr_00,0x25);
    }
    if (bVar2) {
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr_00,"Bip01 L Forearm",0x2f);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr_00,"Bip01 L Forearm",0x32);
    }
    else {
      core_cloth_cpp_CCloth_resetState_FUN_0043e170(this_ptr_00,0x2f);
      core_cloth_cpp_CCloth_resetState_FUN_0043e170(this_ptr_00,0x32);
    }
    pCVar6 = &this_ptr_00->unk;
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&(this_ptr->base).base.model.motion_controller);
    if (pSVar5->state_index == 0x2a) {
      if (pCVar6 != (CVector3f *)auStack_28) {
        (this_ptr_00->unk).y = 0.0;
        pCVar6->x = 0.0;
        (this_ptr_00->unk).z = -20.0;
        return;
      }
    }
    else if (pSVar5->state_index == 0x2b) {
      if (pCVar6 != (CVector3f *)auStack_1c) {
        (this_ptr_00->unk).y = 0.0;
        pCVar6->x = 0.0;
        (this_ptr_00->unk).z = 20.0;
        return;
      }
    }
  }
  return;
}
