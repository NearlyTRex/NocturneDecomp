// Name: core_weapon.cpp_CWeapon_ctor_FUN_005899d0
// Address: 005899d0
// Address Range: [[005899d0, 00589adf]]
// Convention: __cdecl
// Signature: CWeapon * __cdecl core_weapon_cpp_CWeapon_ctor_FUN_005899d0(CWeapon *this_ptr)

#include "nocturne.h"

CWeapon * __cdecl core_weapon_cpp_CWeapon_ctor_FUN_005899d0(CWeapon *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *pCVar2;
  CBox *pCVar3;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_00408790((CDemonActor *)this_ptr);
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
                     ((CKeyFramedModelInstance *)(pCVar1 + 1));
  pCVar3 = core_box_cpp_CBox_ctor_FUN_005b1bc0((CBox *)&pCVar2[1].field_0x34);
  *(byte **)(pCVar3 + -0x1b4) = &g_CWeaponVTable;
  *(uint *)(pCVar3 + 0x25c) = 0x40a00000;
  *(uint *)(pCVar3 + -8) = 0;
  *(uint *)(pCVar3 + -0x34) = 0;
  *(uint *)(pCVar3 + -4) = 0;
  *(uint *)(pCVar3 + 0x260) = 0x14;
  *(uint *)(pCVar3 + 0x264) = 0;
  *(uint *)(pCVar3 + -0x364) = 1;
  *(uint *)(pCVar3 + -0x30) = 0;
  *(uint *)(pCVar3 + -0x2c) = 0;
  *(uint *)(pCVar3 + -0x28) = 0;
  *(uint *)(pCVar3 + -0x24) = 0;
  *(uint *)(pCVar3 + -0x20) = 0x43480000;
  *(uint *)(pCVar3 + -0x1c) = 0;
  *(uint *)(pCVar3 + -0x18) = 1;
  *(uint *)(pCVar3 + -0x14) = 0xff;
  *(uint *)(pCVar3 + -0x10) = 0;
  *(uint *)(pCVar3 + -0xc) = 0;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            ((CKeyFramedModelInstance *)(pCVar3 + -0x1b0),"gat.kfm");
  *(uint *)(pCVar3 + 0x268) = 0;
  *(uint *)(pCVar3 + 0x26c) = 0;
  return (CWeapon *)(pCVar3 + -0x464);
}
