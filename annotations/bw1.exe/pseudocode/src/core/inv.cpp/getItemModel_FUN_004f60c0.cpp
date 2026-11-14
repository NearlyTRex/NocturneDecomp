// Name: core_inv.cpp_getItemModel_FUN_004f60c0
// Address: 004f60c0
// Address Range: [[004f60c0, 004f62d0]]
// Convention: __cdecl
// Signature: CKeyFramedModelInstance * __cdecl core_inv_cpp_getItemModel_FUN_004f60c0(CDemonActor *actor_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CKeyFramedModelInstance * __cdecl core_inv_cpp_getItemModel_FUN_004f60c0(CDemonActor *actor_ptr)

{
  int iVar1;
  CDemonActor *pCVar2;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(actor_ptr,"CWeapon");
  if (iVar1 != 0) {
    pCVar2 = (CWeapon *)core_actor_cpp_castToClassHash_FUN_0040c600(actor_ptr,g_CWeaponClassInfo.name_hash);
    return (CKeyFramedModelInstance *)(pCVar2 + 1);
  }
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(actor_ptr,"CAmmo");
  if (iVar1 != 0) {
    pCVar2 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c600(actor_ptr,g_CAmmoClassInfo.name_hash);
    return (CKeyFramedModelInstance *)(pCVar2 + 1);
  }
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(actor_ptr,"CKeyActor");
  if (iVar1 != 0) {
    pCVar2 = (CKeyActor *)core_actor_cpp_castToClassHash_FUN_0040c600(actor_ptr,g_CKeyActorClassInfo.name_hash);
    return (CKeyFramedModelInstance *)(pCVar2 + 1);
  }
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(actor_ptr,"CBoxActor");
  if (iVar1 != 0) {
    pCVar2 = (CBoxActor *)core_actor_cpp_castToClassHash_FUN_0040c600(actor_ptr,g_CBoxActorClassInfo.name_hash);
    return (CKeyFramedModelInstance *)(pCVar2 + 1);
  }
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(actor_ptr,"CHealthItem");
  if (iVar1 != 0) {
    pCVar2 = (CHealthItem *)core_actor_cpp_castToClassHash_FUN_0040c600(actor_ptr,g_CHealthItemClassInfo.name_hash)
    ;
    return (CKeyFramedModelInstance *)(pCVar2 + 1);
  }
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(actor_ptr,"CGasMask");
  if (iVar1 != 0) {
    pCVar2 = (CGasMask *)core_actor_cpp_castToClassHash_FUN_0040c600(actor_ptr,g_CGasMaskClassInfo.name_hash);
    return (CKeyFramedModelInstance *)(pCVar2 + 1);
  }
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(actor_ptr,"CGoggles");
  if (iVar1 != 0) {
    pCVar2 = (CGoggles *)core_actor_cpp_castToClassHash_FUN_0040c600(actor_ptr,g_CGogglesClassInfo.name_hash);
    return (CKeyFramedModelInstance *)(pCVar2 + 1);
  }
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(actor_ptr,"CFilmReel");
  if (iVar1 == 0) {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(actor_ptr,"CTrap");
    if (iVar1 != 0) {
      pCVar2 = (CTrap *)core_actor_cpp_castToClassHash_FUN_0040c600(actor_ptr,g_CTrapClassInfo.name_hash);
      return (CKeyFramedModelInstance *)(pCVar2 + 1);
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(actor_ptr,"CBattery");
    if (iVar1 != 0) {
      pCVar2 = (CBattery *)core_actor_cpp_castToClassHash_FUN_0040c600(actor_ptr,g_CBatteryClassInfo.name_hash);
      return (CKeyFramedModelInstance *)(pCVar2 + 1);
    }
    _DAT_01d1d400 = "..\\core\\inv.cpp";
    _DAT_01d1d404 = 0xaf;
    core_main_c_FUN_005030e0("getModel - Can't classify : %s",actor_ptr);
    return (CKeyFramedModelInstance *)0x0;
  }
  pCVar2 = (CFilmReel *)core_actor_cpp_castToClassHash_FUN_0040c600(actor_ptr,g_CFilmReelClassInfo.name_hash);
  return (CKeyFramedModelInstance *)(pCVar2 + 1);
}
