// Name: core_inv.cpp_getItemModel_FUN_004d9d20
// Address: 004d9d20
// Address Range: [[004d9d20, 004d9e30]]
// Convention: __cdecl
// Signature: CKeyFramedModelInstance * __cdecl core_inv_cpp_getItemModel_FUN_004d9d20(CDemonActor *actor_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CKeyFramedModelInstance * __cdecl core_inv_cpp_getItemModel_FUN_004d9d20(CDemonActor *actor_ptr)

{
  int iVar1;
  CDemonActor *pCVar2;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c790(actor_ptr,"CWeapon");
  if (iVar1 != 0) {
    pCVar2 = (CWeapon *)core_actor_cpp_castToClassHash_FUN_0040c840(actor_ptr,g_CWeaponClassInfo.name_hash);
    return (CKeyFramedModelInstance *)(pCVar2 + 1);
  }
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c790(actor_ptr,"CAmmo");
  if (iVar1 != 0) {
    pCVar2 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c840(actor_ptr,g_CAmmoClassInfo.name_hash);
    return (CKeyFramedModelInstance *)(pCVar2 + 1);
  }
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c790(actor_ptr,"CKeyActor");
  if (iVar1 != 0) {
    pCVar2 = (CKeyActor *)core_actor_cpp_castToClassHash_FUN_0040c840(actor_ptr,g_CKeyActorClassInfo.name_hash);
    return (CKeyFramedModelInstance *)(pCVar2 + 1);
  }
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c790(actor_ptr,"CBoxActor");
  if (iVar1 == 0) {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c790(actor_ptr,"CHealthItem");
    if (iVar1 != 0) {
      pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                         (actor_ptr,g_CHealthItemClassInfo.name_hash);
      return (CKeyFramedModelInstance *)(pCVar2 + 1);
    }
    _DAT_01d71de0 = "..\\core\\inv.cpp";
    _DAT_01d71de4 = 0xaf;
    core_main_c_displayErrorAndQuit_FUN_004e4330("getModel - Can't classify : %s");
    return (CKeyFramedModelInstance *)0x0;
  }
  pCVar2 = (CBoxActor *)core_actor_cpp_castToClassHash_FUN_0040c840(actor_ptr,g_CBoxActorClassInfo.name_hash);
  return (CKeyFramedModelInstance *)(pCVar2 + 1);
}
