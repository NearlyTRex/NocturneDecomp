// Name: core_inv.cpp_FUN_004f60c0
// Address: 004f60c0
// Address Range: [[004f60c0, 004f62d0]]
// Convention: unknown
// Signature: CDemonActor * core_inv_cpp_FUN_004f60c0(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDemonActor * core_inv_cpp_FUN_004f60c0(CDemonActor *param_1)

{
  int iVar1;
  CDemonActor *pCVar2;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(param_1,"CWeapon");
  if (iVar1 != 0) {
    pCVar2 = (CWeapon *)core_actor_cpp_castToClassHash_FUN_0040c600(param_1,g_CWeaponClassInfo.name_hash);
    return pCVar2 + 1;
  }
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(param_1,"CAmmo");
  if (iVar1 != 0) {
    pCVar2 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c600(param_1,g_CAmmoClassInfo.name_hash);
    return pCVar2 + 1;
  }
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(param_1,"CKeyActor");
  if (iVar1 != 0) {
    pCVar2 = (CKeyActor *)core_actor_cpp_castToClassHash_FUN_0040c600(param_1,g_CKeyActorClassInfo.name_hash);
    return pCVar2 + 1;
  }
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(param_1,"CBoxActor");
  if (iVar1 != 0) {
    pCVar2 = (CBoxActor *)core_actor_cpp_castToClassHash_FUN_0040c600(param_1,g_CBoxActorClassInfo.name_hash);
    return pCVar2 + 1;
  }
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(param_1,"CHealthItem");
  if (iVar1 != 0) {
    pCVar2 = (CHealthItem *)core_actor_cpp_castToClassHash_FUN_0040c600(param_1,g_CHealthItemClassInfo.name_hash);
    return pCVar2 + 1;
  }
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(param_1,"CGasMask");
  if (iVar1 != 0) {
    pCVar2 = (CGasMask *)core_actor_cpp_castToClassHash_FUN_0040c600(param_1,g_CGasMaskClassInfo.name_hash);
    return pCVar2 + 1;
  }
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(param_1,"CGoggles");
  if (iVar1 != 0) {
    pCVar2 = (CGoggles *)core_actor_cpp_castToClassHash_FUN_0040c600(param_1,g_CGogglesClassInfo.name_hash);
    return pCVar2 + 1;
  }
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(param_1,"CFilmReel");
  if (iVar1 == 0) {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(param_1,"CTrap");
    if (iVar1 != 0) {
      pCVar2 = (CTrap *)core_actor_cpp_castToClassHash_FUN_0040c600(param_1,g_CTrapClassInfo.name_hash);
      return pCVar2 + 1;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(param_1,"CBattery");
    if (iVar1 != 0) {
      pCVar2 = (CBattery *)core_actor_cpp_castToClassHash_FUN_0040c600(param_1,g_CBatteryClassInfo.name_hash);
      return pCVar2 + 1;
    }
    _DAT_01d1d400 = "..\\core\\inv.cpp";
    _DAT_01d1d404 = 0xaf;
    core_main_c_FUN_005030e0("getModel - Can't classify : %s",param_1);
    return (CDemonActor *)0x0;
  }
  pCVar2 = (CFilmReel *)core_actor_cpp_castToClassHash_FUN_0040c600(param_1,g_CFilmReelClassInfo.name_hash);
  return pCVar2 + 1;
}
