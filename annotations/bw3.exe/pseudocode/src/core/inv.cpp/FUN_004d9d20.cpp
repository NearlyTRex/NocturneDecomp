// Name: core_inv.cpp_FUN_004d9d20
// Address: 004d9d20
// Address Range: [[004d9d20, 004d9e30]]
// Convention: unknown
// Signature: int core_inv_cpp_FUN_004d9d20(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_inv_cpp_FUN_004d9d20(CDemonActor *param_1)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c790(param_1,"CWeapon");
  if (iVar1 != 0) {
    iVar1 = core_actor_cpp_castToClassHash_FUN_0040c840(param_1,g_CWeaponClassInfo.name_hash);
    return iVar1 + 0x158;
  }
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c790(param_1,"CAmmo");
  if (iVar1 != 0) {
    iVar1 = core_actor_cpp_castToClassHash_FUN_0040c840(param_1,g_CAmmoClassInfo.name_hash);
    return iVar1 + 0x158;
  }
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c790(param_1,"CKeyActor");
  if (iVar1 != 0) {
    iVar1 = core_actor_cpp_castToClassHash_FUN_0040c840(param_1,g_CKeyActorClassInfo.name_hash);
    return iVar1 + 0x158;
  }
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c790(param_1,"CBoxActor");
  if (iVar1 == 0) {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c790(param_1,"CHealthItem");
    if (iVar1 != 0) {
      iVar1 = core_actor_cpp_castToClassHash_FUN_0040c840(param_1,g_CHealthItemClassInfo.name_hash);
      return iVar1 + 0x158;
    }
    _DAT_01d71de0 = "..\\core\\inv.cpp";
    _DAT_01d71de4 = 0xaf;
    core_main_c_FUN_004e4330("getModel - Can't classify : %s",param_1);
    return 0;
  }
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c840(param_1,g_CBoxActorClassInfo.name_hash);
  return iVar1 + 0x158;
}
