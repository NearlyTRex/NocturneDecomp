// Name: core_stranger.cpp_CStranger_updateClothSimulation_FUN_0056eb60
// Address: 0056eb60
// Address Range: [[0056eb60, 0056eecb]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_updateClothSimulation_FUN_0056eb60(CStranger *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_CStranger_updateClothSimulation_FUN_0056eb60(CStranger *this_ptr)

{
  CCloth *this_ptr_00;
  bool bVar1;
  bool bVar2;
  int iVar3;
  CCloth *pCVar4;
  CCloth aCStack_28 [12];
  CCloth aCStack_1c [12];
  
  if (0 < *(int *)&this_ptr->field_0x2d0c) {
    bVar1 = false;
    iVar3 = (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x114))(this_ptr);
    bVar2 = false;
    if (iVar3 < 2) {
      if ((*(int *)&this_ptr->field_0x2d04 == 0) &&
         ((float)_DAT_005ebf35 < *(float *)&this_ptr->field_0x2d08)) {
        bVar2 = true;
      }
      if ((*(int *)&this_ptr->field_0x2d04 == 1) &&
         (*(float *)&this_ptr->field_0x2d08 < (float)_DAT_005ebf3d)) {
        bVar2 = true;
      }
      if ((*(int *)&this_ptr->field_0x2d04 == 2) &&
         ((float)_DAT_005ebf45 < *(float *)&this_ptr->field_0x2d08)) {
        bVar1 = true;
      }
      if ((*(int *)&this_ptr->field_0x2d04 == 3) &&
         (*(float *)&this_ptr->field_0x2d08 < (float)_DAT_005ebf45)) {
        bVar1 = true;
      }
      if ((*(int *)&this_ptr->field_0x2d04 == 4) &&
         (*(float *)&this_ptr->field_0x2d08 < (float)_DAT_005ebf4d)) {
        bVar1 = true;
      }
      if ((*(int *)&this_ptr->field_0x2d04 == 5) &&
         ((float)_DAT_005ebf55 < *(float *)&this_ptr->field_0x2d08)) {
        bVar1 = true;
      }
      if ((*(int *)&this_ptr->field_0x2d04 == 9) &&
         (*(float *)&this_ptr->field_0x2d08 < (float)_DAT_005ebf4d)) {
        bVar1 = true;
      }
      if (((*(int *)&this_ptr->field_0x2d04 == 0xf) &&
          ((float)_DAT_005ebf3d < *(float *)&this_ptr->field_0x2d08)) &&
         ((double)*(float *)&this_ptr->field_0x2d08 < _DAT_005ebf5d)) {
        bVar1 = true;
      }
    }
    this_ptr_00 = *(CCloth **)&this_ptr->field_0x2ea0;
    if (bVar2) {
      core_cloth_cpp_CCloth_grabCloth_FUN_005b18e0(this_ptr_00,"?Bip01 L Forearm" + 1,0x32);
      core_cloth_cpp_CCloth_grabCloth_FUN_005b18e0(this_ptr_00,"Bip01 L Forearm",0x33);
      core_cloth_cpp_CCloth_grabCloth_FUN_005b18e0(this_ptr_00,"Bip01 L Forearm",0x34);
      core_cloth_cpp_CCloth_grabCloth_FUN_005b18e0(this_ptr_00,"Bip01 L Forearm",0x35);
      core_cloth_cpp_CCloth_grabCloth_FUN_005b18e0(this_ptr_00,"Bip01 L Forearm",0x36);
      core_cloth_cpp_CCloth_grabCloth_FUN_005b18e0(this_ptr_00,"Bip01 L Forearm",0x37);
      core_cloth_cpp_CCloth_grabCloth_FUN_005b18e0(this_ptr_00,"Bip01 R Forearm",0x20);
      core_cloth_cpp_CCloth_grabCloth_FUN_005b18e0(this_ptr_00,"Bip01 R Forearm",0x21);
      core_cloth_cpp_CCloth_grabCloth_FUN_005b18e0(this_ptr_00,"Bip01 R Forearm",0x22);
      core_cloth_cpp_CCloth_grabCloth_FUN_005b18e0(this_ptr_00,"Bip01 R Forearm",0x23);
      core_cloth_cpp_CCloth_grabCloth_FUN_005b18e0(this_ptr_00,"Bip01 R Forearm",0x24);
      core_cloth_cpp_CCloth_grabCloth_FUN_005b18e0(this_ptr_00,"Bip01 R Forearm",0x25);
    }
    else {
      core_cloth_cpp_FUN_005b1980(this_ptr_00,0x32);
      core_cloth_cpp_FUN_005b1980(this_ptr_00,0x33);
      core_cloth_cpp_FUN_005b1980(this_ptr_00,0x34);
      core_cloth_cpp_FUN_005b1980(this_ptr_00,0x35);
      core_cloth_cpp_FUN_005b1980(this_ptr_00,0x36);
      core_cloth_cpp_FUN_005b1980(this_ptr_00,0x37);
      core_cloth_cpp_FUN_005b1980(this_ptr_00,0x20);
      core_cloth_cpp_FUN_005b1980(this_ptr_00,0x21);
      core_cloth_cpp_FUN_005b1980(this_ptr_00,0x22);
      core_cloth_cpp_FUN_005b1980(this_ptr_00,0x23);
      core_cloth_cpp_FUN_005b1980(this_ptr_00,0x24);
      core_cloth_cpp_FUN_005b1980(this_ptr_00,0x25);
    }
    if (bVar1) {
      core_cloth_cpp_CCloth_grabCloth_FUN_005b18e0(this_ptr_00,"Bip01 L Forearm",0x2f);
      core_cloth_cpp_CCloth_grabCloth_FUN_005b18e0(this_ptr_00,"Bip01 L Forearm",0x32);
    }
    else {
      core_cloth_cpp_FUN_005b1980(this_ptr_00,0x2f);
      core_cloth_cpp_FUN_005b1980(this_ptr_00,0x32);
    }
    pCVar4 = this_ptr_00 + 0x3ab24;
    iVar3 = core_motion_cpp_FUN_005035c0(&this_ptr->field_0x2b4);
    if (*(int *)(iVar3 + 0x24) == 0x2a) {
      if (pCVar4 != aCStack_28) {
        *(uint *)(this_ptr_00 + 0x3ab28) = 0;
        *(uint *)pCVar4 = 0;
        *(uint *)(this_ptr_00 + 0x3ab2c) = 0xc1a00000;
        return;
      }
    }
    else if (*(int *)(iVar3 + 0x24) == 0x2b) {
      if (pCVar4 != aCStack_1c) {
        *(uint *)(this_ptr_00 + 0x3ab28) = 0;
        *(uint *)pCVar4 = 0;
        *(uint *)(this_ptr_00 + 0x3ab2c) = 0x41a00000;
        return;
      }
    }
  }
  return;
}
