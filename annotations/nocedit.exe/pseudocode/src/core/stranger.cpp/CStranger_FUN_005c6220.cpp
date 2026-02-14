// Name: core_stranger.cpp_CStranger_FUN_005c6220
// Address: 005c6220
// Address Range: [[005c6220, 005c658b]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_FUN_005c6220(CStranger *this_ptr)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_FUN_005c6220(CStranger *this_ptr)

{
  float fVar1;
  CCloth *pCVar2;
  bool bVar3;
  bool bVar4;
  CCloth *pCVar5;
  int iVar6;
  SMotion *pSVar7;
  CCloth *pCVar8;
  
  if (0 < (this_ptr->base).base.cloth_list.count) {
    bVar3 = false;
    iVar6 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
    bVar4 = false;
    if (iVar6 < 2) {
      if (((this_ptr->base).base.layer_action_index == 0) &&
         ((float)0.69999999999999996 < (this_ptr->base).base.layer_action_t)) {
        bVar4 = true;
      }
      if (((this_ptr->base).base.layer_action_index == 1) &&
         ((this_ptr->base).base.layer_action_t < (float)0.29999999999999999)) {
        bVar4 = true;
      }
      if (((this_ptr->base).base.layer_action_index == 2) &&
         ((float)0.5 < (this_ptr->base).base.layer_action_t)) {
        bVar3 = true;
      }
      if (((this_ptr->base).base.layer_action_index == 3) &&
         ((this_ptr->base).base.layer_action_t < (float)0.5)) {
        bVar3 = true;
      }
      if (((this_ptr->base).base.layer_action_index == 4) &&
         ((this_ptr->base).base.layer_action_t < (float)0.40000000000000002)) {
        bVar3 = true;
      }
      if (((this_ptr->base).base.layer_action_index == 5) &&
         ((float)0.59999999999999998 < (this_ptr->base).base.layer_action_t)) {
        bVar3 = true;
      }
      if (((this_ptr->base).base.layer_action_index == 9) &&
         ((this_ptr->base).base.layer_action_t < (float)0.40000000000000002)) {
        bVar3 = true;
      }
      if ((((this_ptr->base).base.layer_action_index == 0xf) &&
          (fVar1 = (this_ptr->base).base.layer_action_t, (float)0.29999999999999999 < fVar1)) &&
         ((double)fVar1 < 0.80000000000000004)) {
        bVar3 = true;
      }
    }
    pCVar2 = (this_ptr->base).base.cloth_list.cloths[0];
    if (bVar4) {
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(pCVar2,"Bip01 L Forearm",0x32);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(pCVar2,"Bip01 L Forearm",0x33);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(pCVar2,"Bip01 L Forearm",0x34);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(pCVar2,"Bip01 L Forearm",0x35);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(pCVar2,"Bip01 L Forearm",0x36);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(pCVar2,"Bip01 L Forearm",0x37);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(pCVar2,"Bip01 R Forearm",0x20);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(pCVar2,"Bip01 R Forearm",0x21);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(pCVar2,"Bip01 R Forearm",0x22);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(pCVar2,"Bip01 R Forearm",0x23);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(pCVar2,"Bip01 R Forearm",0x24);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(pCVar2,"Bip01 R Forearm",0x25);
    }
    else {
      core_cloth_cpp_CCloth_resetState_FUN_0043e170(pCVar2,0x32);
      core_cloth_cpp_CCloth_resetState_FUN_0043e170(pCVar2,0x33);
      core_cloth_cpp_CCloth_resetState_FUN_0043e170(pCVar2,0x34);
      core_cloth_cpp_CCloth_resetState_FUN_0043e170(pCVar2,0x35);
      core_cloth_cpp_CCloth_resetState_FUN_0043e170(pCVar2,0x36);
      core_cloth_cpp_CCloth_resetState_FUN_0043e170(pCVar2,0x37);
      core_cloth_cpp_CCloth_resetState_FUN_0043e170(pCVar2,0x20);
      core_cloth_cpp_CCloth_resetState_FUN_0043e170(pCVar2,0x21);
      core_cloth_cpp_CCloth_resetState_FUN_0043e170(pCVar2,0x22);
      core_cloth_cpp_CCloth_resetState_FUN_0043e170(pCVar2,0x23);
      core_cloth_cpp_CCloth_resetState_FUN_0043e170(pCVar2,0x24);
      core_cloth_cpp_CCloth_resetState_FUN_0043e170(pCVar2,0x25);
    }
    if (bVar3) {
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(pCVar2,"Bip01 L Forearm",0x2f);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(pCVar2,"Bip01 L Forearm",0x32);
    }
    else {
      core_cloth_cpp_CCloth_resetState_FUN_0043e170(pCVar2,0x2f);
      core_cloth_cpp_CCloth_resetState_FUN_0043e170(pCVar2,0x32);
    }
    pCVar8 = pCVar2 + 1;
    pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&(this_ptr->base).base.model.motion_controller);
    if (pSVar7->state_index == 0x2a) {
      if (pCVar8 != (CCloth *)&stack0xffffffd8) {
        pCVar5 = pCVar2 + 1;
        (pCVar5->model).model_filename[4] = '\0';
        (pCVar5->model).model_filename[5] = '\0';
        (pCVar5->model).model_filename[6] = '\0';
        (pCVar5->model).model_filename[7] = '\0';
        (pCVar8->model).model_filename[0] = '\0';
        (pCVar8->model).model_filename[1] = '\0';
        (pCVar8->model).model_filename[2] = '\0';
        (pCVar8->model).model_filename[3] = '\0';
        pCVar2 = pCVar2 + 1;
        (pCVar2->model).model_filename[8] = '\0';
        (pCVar2->model).model_filename[9] = '\0';
        (pCVar2->model).model_filename[10] = -0x60;
        (pCVar2->model).model_filename[0xb] = -0x3f;
        return;
      }
    }
    else if (pSVar7->state_index == 0x2b) {
      if (pCVar8 != (CCloth *)&stack0xffffffe4) {
        pCVar5 = pCVar2 + 1;
        (pCVar5->model).model_filename[4] = '\0';
        (pCVar5->model).model_filename[5] = '\0';
        (pCVar5->model).model_filename[6] = '\0';
        (pCVar5->model).model_filename[7] = '\0';
        (pCVar8->model).model_filename[0] = '\0';
        (pCVar8->model).model_filename[1] = '\0';
        (pCVar8->model).model_filename[2] = '\0';
        (pCVar8->model).model_filename[3] = '\0';
        pCVar2 = pCVar2 + 1;
        (pCVar2->model).model_filename[8] = '\0';
        (pCVar2->model).model_filename[9] = '\0';
        (pCVar2->model).model_filename[10] = -0x60;
        (pCVar2->model).model_filename[0xb] = 'A';
        return;
      }
    }
  }
  return;
}
