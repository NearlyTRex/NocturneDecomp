// Name: core_stranger.cpp_FUN_005402f0
// Address: 005402f0
// Address Range: [[005402f0, 00540652]]
// Convention: unknown
// Signature: void core_stranger_cpp_FUN_005402f0(int param_1)

#include "nocturne.h"

void core_stranger_cpp_FUN_005402f0(int param_1)

{
  CCloth *this_ptr;
  bool bVar1;
  bool bVar2;
  int iVar3;
  SMotion *pSVar4;
  int *piVar5;
  uint auStack_28 [3];
  uint auStack_1c [3];
  
  bVar1 = false;
  iVar3 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x104))(param_1);
  bVar2 = false;
  if (iVar3 < 2) {
    if ((*(int *)(param_1 + 0x2a84) == 0) && ((float)0.69999999999999996 < *(float *)(param_1 + 0x2a88))
       ) {
      bVar2 = true;
    }
    if ((*(int *)(param_1 + 0x2a84) == 1) && (*(float *)(param_1 + 0x2a88) < (float)0.29999999999999999)
       ) {
      bVar2 = true;
    }
    if ((*(int *)(param_1 + 0x2a84) == 2) && ((float)0.5 < *(float *)(param_1 + 0x2a88))
       ) {
      bVar1 = true;
    }
    if ((*(int *)(param_1 + 0x2a84) == 3) && (*(float *)(param_1 + 0x2a88) < (float)0.5)
       ) {
      bVar1 = true;
    }
    if ((*(int *)(param_1 + 0x2a84) == 4) && (*(float *)(param_1 + 0x2a88) < (float)0.40000000000000002)
       ) {
      bVar1 = true;
    }
    if ((*(int *)(param_1 + 0x2a84) == 5) && ((float)0.59999999999999998 < *(float *)(param_1 + 0x2a88))
       ) {
      bVar1 = true;
    }
    if ((*(int *)(param_1 + 0x2a84) == 9) && (*(float *)(param_1 + 0x2a88) < (float)0.40000000000000002)
       ) {
      bVar1 = true;
    }
    if (((*(int *)(param_1 + 0x2a84) == 0xf) &&
        ((float)0.29999999999999999 < *(float *)(param_1 + 0x2a88))) &&
       ((double)*(float *)(param_1 + 0x2a88) < 0.80000000000000004)) {
      bVar1 = true;
    }
  }
  this_ptr = *(CCloth **)(param_1 + 0x2c20);
  if (bVar2) {
    core_cloth_cpp_CCloth_grabCloth_FUN_004386b0(this_ptr,"Bip01 L Forearm",0x32);
    core_cloth_cpp_CCloth_grabCloth_FUN_004386b0(this_ptr,"Bip01 L Forearm",0x33);
    core_cloth_cpp_CCloth_grabCloth_FUN_004386b0(this_ptr,"Bip01 L Forearm",0x34);
    core_cloth_cpp_CCloth_grabCloth_FUN_004386b0(this_ptr,"Bip01 L Forearm",0x35);
    core_cloth_cpp_CCloth_grabCloth_FUN_004386b0(this_ptr,"Bip01 L Forearm",0x36);
    core_cloth_cpp_CCloth_grabCloth_FUN_004386b0(this_ptr,"Bip01 L Forearm",0x37);
    core_cloth_cpp_CCloth_grabCloth_FUN_004386b0(this_ptr,"Bip01 R Forearm",0x20);
    core_cloth_cpp_CCloth_grabCloth_FUN_004386b0(this_ptr,"Bip01 R Forearm",0x21);
    core_cloth_cpp_CCloth_grabCloth_FUN_004386b0(this_ptr,"Bip01 R Forearm",0x22);
    core_cloth_cpp_CCloth_grabCloth_FUN_004386b0(this_ptr,"Bip01 R Forearm",0x23);
    core_cloth_cpp_CCloth_grabCloth_FUN_004386b0(this_ptr,"Bip01 R Forearm",0x24);
    core_cloth_cpp_CCloth_grabCloth_FUN_004386b0(this_ptr,"Bip01 R Forearm",0x25);
  }
  else {
    core_cloth_cpp_CCloth_resetState_FUN_00438750(this_ptr,0x32);
    core_cloth_cpp_CCloth_resetState_FUN_00438750(this_ptr,0x33);
    core_cloth_cpp_CCloth_resetState_FUN_00438750(this_ptr,0x34);
    core_cloth_cpp_CCloth_resetState_FUN_00438750(this_ptr,0x35);
    core_cloth_cpp_CCloth_resetState_FUN_00438750(this_ptr,0x36);
    core_cloth_cpp_CCloth_resetState_FUN_00438750(this_ptr,0x37);
    core_cloth_cpp_CCloth_resetState_FUN_00438750(this_ptr,0x20);
    core_cloth_cpp_CCloth_resetState_FUN_00438750(this_ptr,0x21);
    core_cloth_cpp_CCloth_resetState_FUN_00438750(this_ptr,0x22);
    core_cloth_cpp_CCloth_resetState_FUN_00438750(this_ptr,0x23);
    core_cloth_cpp_CCloth_resetState_FUN_00438750(this_ptr,0x24);
    core_cloth_cpp_CCloth_resetState_FUN_00438750(this_ptr,0x25);
  }
  if (bVar1) {
    core_cloth_cpp_CCloth_grabCloth_FUN_004386b0(this_ptr,"Bip01 L Forearm",0x2f);
    core_cloth_cpp_CCloth_grabCloth_FUN_004386b0(this_ptr,"Bip01 L Forearm",0x32);
  }
  else {
    core_cloth_cpp_CCloth_resetState_FUN_00438750(this_ptr,0x2f);
    core_cloth_cpp_CCloth_resetState_FUN_00438750(this_ptr,0x32);
  }
  piVar5 = this_ptr->vertices[0x300].connected_indices + 6;
  pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     ((CMotionController *)(param_1 + 0x150));
  if (pSVar4->state_index == 0x2a) {
    if (piVar5 != auStack_28) {
      this_ptr->vertices[0x300].connected_indices[7] = 0;
      *piVar5 = 0;
      this_ptr->vertices[0x300].connected_indices[8] = -0x3e600000;
      return;
    }
  }
  else if (pSVar4->state_index == 0x2b) {
    if (piVar5 != auStack_1c) {
      this_ptr->vertices[0x300].connected_indices[7] = 0;
      *piVar5 = 0;
      this_ptr->vertices[0x300].connected_indices[8] = 0x41a00000;
      return;
    }
  }
  return;
}
