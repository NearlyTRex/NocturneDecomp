// Name: core_inv.cpp_FUN_004d9db0
// Address: 004d9db0
// Address Range: [[004d9db0, 004d9f04]]
// Convention: unknown
// Signature: int core_inv_cpp_FUN_004d9db0(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_inv_cpp_FUN_004d9db0(CDemonActor *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = core_actor_cpp_FUN_0040c840(param_1,"CWeapon");
  uVar2 = g_CWeaponClassInfo.name_hash;
  if ((((((iVar1 == 0) &&
         (iVar1 = core_actor_cpp_FUN_0040c840(param_1,"CAmmo"),
         uVar2 = g_CAmmoClassInfo.name_hash, iVar1 == 0)) &&
        (iVar1 = core_actor_cpp_FUN_0040c840(param_1,"CKeyActor"),
        uVar2 = g_CKeyActorClassInfo.name_hash, iVar1 == 0)) &&
       ((iVar1 = core_actor_cpp_FUN_0040c840(param_1,"CBoxActor"),
        uVar2 = g_CBoxActorClassInfo.name_hash, iVar1 == 0 &&
        (iVar1 = core_actor_cpp_FUN_0040c840(param_1,"CHealthItem"),
        uVar2 = g_CHealthItemClassInfo.name_hash, iVar1 == 0)))) &&
      ((iVar1 = core_actor_cpp_FUN_0040c840(param_1,"CGasMask"),
       uVar2 = g_CGasMaskClassInfo.name_hash, iVar1 == 0 &&
       ((iVar1 = core_actor_cpp_FUN_0040c840(param_1,"CFilmReel"),
        uVar2 = g_CFilmReelClassInfo.name_hash, iVar1 == 0 &&
        (iVar1 = core_actor_cpp_FUN_0040c840(param_1,"CTrap"),
        uVar2 = g_CTrapClassInfo.name_hash, iVar1 == 0)))))) &&
     (iVar1 = core_actor_cpp_FUN_0040c840(param_1,"CBattery"),
     uVar2 = g_CBatteryClassInfo.name_hash, iVar1 == 0)) {
    _DAT_01d046a0 = "..\\core\\inv.cpp";
    _DAT_01d046a4 = 0xa3;
    core_main_c_FUN_004e4500("getModel - Can't classify : %s",param_1);
    return 0;
  }
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0(param_1,uVar2);
  return iVar1 + 0x2b4;
}
