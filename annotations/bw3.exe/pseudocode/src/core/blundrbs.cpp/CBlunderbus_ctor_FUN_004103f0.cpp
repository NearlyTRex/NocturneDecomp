// Name: core_blundrbs.cpp_CBlunderbus_ctor_FUN_004103f0
// Address: 004103f0
// Address Range: [[004103f0, 0041048d]]
// Convention: unknown
// Signature: CBlunderbus * core_blundrbs_cpp_CBlunderbus_ctor_FUN_004103f0(CBlunderbus *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CBlunderbus * core_blundrbs_cpp_CBlunderbus_ctor_FUN_004103f0(CBlunderbus *this_ptr)

{
  uint uVar1;
  CBlunderbus *pCVar2;
  
  pCVar2 = (CBlunderbus *)core_weapon_cpp_CWeapon_ctor_FUN_0057ad70((CWeapon *)this_ptr);
  *(byte **)&pCVar2->field_0x154 = &g_CBlunderbusVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            ((CKeyFramedModelInstance *)&pCVar2->field_0x158,"blunderbus.kfm");
  *(uint *)&pCVar2->field_0x594 = 0x41200000;
  *(uint *)&pCVar2->field_0x2d8 = 1;
  *(uint *)&pCVar2->field_0x2dc = 2;
  *(uint *)&pCVar2->field_0x2e0 = 1;
  *(uint *)&pCVar2->field_0x2e4 = 1;
  *(uint *)&pCVar2->field_0x2e8 = 0x41700000;
  *(uint *)&pCVar2->field_0x58c = 5;
  *(uint *)&pCVar2->field_0x574 = 0;
  uVar1 = _DAT_005dbcdc;
  *(uint *)&pCVar2->field_0x56c = 0xb;
  *(uint *)&pCVar2->field_0x578 = 2;
  *(uint *)&pCVar2->field_0x564 = uVar1;
  return pCVar2;
}
