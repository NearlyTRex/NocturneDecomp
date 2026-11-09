// Name: core_stranger.cpp_FUN_005917b0
// Address: 005917b0
// Address Range: [[005917b0, 00591b1b]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_FUN_005917b0(CStranger *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_FUN_005917b0(CStranger *this_ptr)

{
  CCloth *this_ptr_00;
  bool bVar1;
  bool bVar2;
  int iVar3;
  SMotion *pSVar4;
  CCloth *pCVar5;
  CCloth aCStack_28 [12];
  CCloth aCStack_1c [12];
  
  if (0 < *(int *)&this_ptr->field_0x2ca0) {
    bVar1 = false;
    iVar3 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x10c))(this_ptr);
    bVar2 = false;
    if (iVar3 < 2) {
      if ((*(int *)&this_ptr->field_0x2c98 == 0) &&
         ((float)_DAT_005f71a9 < *(float *)&this_ptr->field_0x2c9c)) {
        bVar2 = true;
      }
      if ((*(int *)&this_ptr->field_0x2c98 == 1) &&
         (*(float *)&this_ptr->field_0x2c9c < (float)_DAT_005f71b1)) {
        bVar2 = true;
      }
      if ((*(int *)&this_ptr->field_0x2c98 == 2) &&
         ((float)_DAT_005f71b9 < *(float *)&this_ptr->field_0x2c9c)) {
        bVar1 = true;
      }
      if ((*(int *)&this_ptr->field_0x2c98 == 3) &&
         (*(float *)&this_ptr->field_0x2c9c < (float)_DAT_005f71b9)) {
        bVar1 = true;
      }
      if ((*(int *)&this_ptr->field_0x2c98 == 4) &&
         (*(float *)&this_ptr->field_0x2c9c < (float)_DAT_005f71c1)) {
        bVar1 = true;
      }
      if ((*(int *)&this_ptr->field_0x2c98 == 5) &&
         ((float)_DAT_005f71c9 < *(float *)&this_ptr->field_0x2c9c)) {
        bVar1 = true;
      }
      if ((*(int *)&this_ptr->field_0x2c98 == 9) &&
         (*(float *)&this_ptr->field_0x2c9c < (float)_DAT_005f71c1)) {
        bVar1 = true;
      }
      if (((*(int *)&this_ptr->field_0x2c98 == 0xf) &&
          ((float)_DAT_005f71b1 < *(float *)&this_ptr->field_0x2c9c)) &&
         ((double)*(float *)&this_ptr->field_0x2c9c < _DAT_005f71d1)) {
        bVar1 = true;
      }
    }
    this_ptr_00 = *(CCloth **)&this_ptr->field_0x2e34;
    if (bVar2) {
      core_cloth_cpp_CCloth_grabCloth_FUN_00442100(this_ptr_00,"?Bip01 L Forearm" + 1,0x32);
      core_cloth_cpp_CCloth_grabCloth_FUN_00442100(this_ptr_00,"Bip01 L Forearm",0x33);
      core_cloth_cpp_CCloth_grabCloth_FUN_00442100(this_ptr_00,"Bip01 L Forearm",0x34);
      core_cloth_cpp_CCloth_grabCloth_FUN_00442100(this_ptr_00,"Bip01 L Forearm",0x35);
      core_cloth_cpp_CCloth_grabCloth_FUN_00442100(this_ptr_00,"Bip01 L Forearm",0x36);
      core_cloth_cpp_CCloth_grabCloth_FUN_00442100(this_ptr_00,"Bip01 L Forearm",0x37);
      core_cloth_cpp_CCloth_grabCloth_FUN_00442100(this_ptr_00,"Bip01 R Forearm",0x20);
      core_cloth_cpp_CCloth_grabCloth_FUN_00442100(this_ptr_00,"Bip01 R Forearm",0x21);
      core_cloth_cpp_CCloth_grabCloth_FUN_00442100(this_ptr_00,"Bip01 R Forearm",0x22);
      core_cloth_cpp_CCloth_grabCloth_FUN_00442100(this_ptr_00,"Bip01 R Forearm",0x23);
      core_cloth_cpp_CCloth_grabCloth_FUN_00442100(this_ptr_00,"Bip01 R Forearm",0x24);
      core_cloth_cpp_CCloth_grabCloth_FUN_00442100(this_ptr_00,"Bip01 R Forearm",0x25);
    }
    else {
      core_cloth_cpp_FUN_004421a0(this_ptr_00,0x32);
      core_cloth_cpp_FUN_004421a0(this_ptr_00,0x33);
      core_cloth_cpp_FUN_004421a0(this_ptr_00,0x34);
      core_cloth_cpp_FUN_004421a0(this_ptr_00,0x35);
      core_cloth_cpp_FUN_004421a0(this_ptr_00,0x36);
      core_cloth_cpp_FUN_004421a0(this_ptr_00,0x37);
      core_cloth_cpp_FUN_004421a0(this_ptr_00,0x20);
      core_cloth_cpp_FUN_004421a0(this_ptr_00,0x21);
      core_cloth_cpp_FUN_004421a0(this_ptr_00,0x22);
      core_cloth_cpp_FUN_004421a0(this_ptr_00,0x23);
      core_cloth_cpp_FUN_004421a0(this_ptr_00,0x24);
      core_cloth_cpp_FUN_004421a0(this_ptr_00,0x25);
    }
    if (bVar1) {
      core_cloth_cpp_CCloth_grabCloth_FUN_00442100(this_ptr_00,"Bip01 L Forearm",0x2f);
      core_cloth_cpp_CCloth_grabCloth_FUN_00442100(this_ptr_00,"Bip01 L Forearm",0x32);
    }
    else {
      core_cloth_cpp_FUN_004421a0(this_ptr_00,0x2f);
      core_cloth_cpp_FUN_004421a0(this_ptr_00,0x32);
    }
    pCVar5 = this_ptr_00 + 0x3ab24;
    pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)&this_ptr->field_0x158);
    if (*(int *)(pSVar4 + 0x24) == 0x37) {
      if (pCVar5 != aCStack_28) {
        *(uint *)(this_ptr_00 + 0x3ab28) = 0;
        *(uint *)pCVar5 = 0;
        *(uint *)(this_ptr_00 + 0x3ab2c) = 0xc1a00000;
        return;
      }
    }
    else if (*(int *)(pSVar4 + 0x24) == 0x38) {
      if (pCVar5 != aCStack_1c) {
        *(uint *)(this_ptr_00 + 0x3ab28) = 0;
        *(uint *)pCVar5 = 0;
        *(uint *)(this_ptr_00 + 0x3ab2c) = 0x41a00000;
        return;
      }
    }
  }
  return;
}
