// Name: core_stranger.cpp_CStranger_updateClothSimulation_FUN_0056eb60
// Address: 0056eb60
// Address Range: [[0056eb60, 0056eecb]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_updateClothSimulation_FUN_0056eb60(CStranger *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_CStranger_updateClothSimulation_FUN_0056eb60(CStranger *this_ptr)

{
  float fVar1;
  CCloth *this_ptr_00;
  bool bVar2;
  bool bVar3;
  EDeathState EVar4;
  int iVar5;
  CVector3f *pCVar6;
  uint auStack_28 [3];
  uint auStack_1c [3];
  
  if (0 < (this_ptr->base).base.cloth_list.count) {
    bVar2 = false;
    EVar4 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
    bVar3 = false;
    if ((int)EVar4 < 2) {
      if (((this_ptr->base).base.layer_action_index == 0) &&
         ((float)_DAT_005ebf35 < (this_ptr->base).base.layer_action_t)) {
        bVar3 = true;
      }
      if (((this_ptr->base).base.layer_action_index == 1) &&
         ((this_ptr->base).base.layer_action_t < (float)_DAT_005ebf3d)) {
        bVar3 = true;
      }
      if (((this_ptr->base).base.layer_action_index == 2) &&
         ((float)_DAT_005ebf45 < (this_ptr->base).base.layer_action_t)) {
        bVar2 = true;
      }
      if (((this_ptr->base).base.layer_action_index == 3) &&
         ((this_ptr->base).base.layer_action_t < (float)_DAT_005ebf45)) {
        bVar2 = true;
      }
      if (((this_ptr->base).base.layer_action_index == 4) &&
         ((this_ptr->base).base.layer_action_t < (float)_DAT_005ebf4d)) {
        bVar2 = true;
      }
      if (((this_ptr->base).base.layer_action_index == 5) &&
         ((float)_DAT_005ebf55 < (this_ptr->base).base.layer_action_t)) {
        bVar2 = true;
      }
      if (((this_ptr->base).base.layer_action_index == 9) &&
         ((this_ptr->base).base.layer_action_t < (float)_DAT_005ebf4d)) {
        bVar2 = true;
      }
      if ((((this_ptr->base).base.layer_action_index == 0xf) &&
          (fVar1 = (this_ptr->base).base.layer_action_t, (float)_DAT_005ebf3d < fVar1)) &&
         ((double)fVar1 < _DAT_005ebf5d)) {
        bVar2 = true;
      }
    }
    this_ptr_00 = (this_ptr->base).base.cloth_list.cloths[0];
    if (bVar3) {
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
    if (bVar2) {
      core_cloth_cpp_CCloth_grabCloth_FUN_005b18e0(this_ptr_00,"Bip01 L Forearm",0x2f);
      core_cloth_cpp_CCloth_grabCloth_FUN_005b18e0(this_ptr_00,"Bip01 L Forearm",0x32);
    }
    else {
      core_cloth_cpp_FUN_005b1980(this_ptr_00,0x2f);
      core_cloth_cpp_FUN_005b1980(this_ptr_00,0x32);
    }
    pCVar6 = &this_ptr_00->wind_velocity;
    iVar5 = core_motion_cpp_FUN_005035c0(&(this_ptr->base).base.model);
    if (*(int *)(iVar5 + 0x24) == 0x2a) {
      if (pCVar6 != (CVector3f *)auStack_28) {
        (this_ptr_00->wind_velocity).y = 0.0;
        pCVar6->x = 0.0;
        (this_ptr_00->wind_velocity).z = -20.0;
        return;
      }
    }
    else if (*(int *)(iVar5 + 0x24) == 0x2b) {
      if (pCVar6 != (CVector3f *)auStack_1c) {
        (this_ptr_00->wind_velocity).y = 0.0;
        pCVar6->x = 0.0;
        (this_ptr_00->wind_velocity).z = 20.0;
        return;
      }
    }
  }
  return;
}
