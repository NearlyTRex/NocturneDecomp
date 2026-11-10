// Name: core_inv.cpp_getItemModel_FUN_004d9db0
// Address: 004d9db0
// Address Range: [[004d9db0, 004d9f04]]
// Convention: __cdecl
// Signature: CKeyFramedModelInstance * __cdecl core_inv_cpp_getItemModel_FUN_004d9db0(CDemonActor *actor_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CKeyFramedModelInstance * __cdecl core_inv_cpp_getItemModel_FUN_004d9db0(CDemonActor *actor_ptr)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c840(actor_ptr,"CWeapon");
  uVar2 = g_CWeaponClassInfo.name_hash;
  if ((((((iVar1 == 0) &&
         (iVar1 = core_actor_cpp_isOfClass_FUN_0040c840(actor_ptr,"CAmmo"),
         uVar2 = g_CAmmoClassInfo.name_hash, iVar1 == 0)) &&
        (iVar1 = core_actor_cpp_isOfClass_FUN_0040c840(actor_ptr,"CKeyActor"),
        uVar2 = g_CKeyActorClassInfo.name_hash, iVar1 == 0)) &&
       ((iVar1 = core_actor_cpp_isOfClass_FUN_0040c840(actor_ptr,"CBoxActor"),
        uVar2 = g_CBoxActorClassInfo.name_hash, iVar1 == 0 &&
        (iVar1 = core_actor_cpp_isOfClass_FUN_0040c840(actor_ptr,"CHealthItem"),
        uVar2 = g_CHealthItemClassInfo.name_hash, iVar1 == 0)))) &&
      ((iVar1 = core_actor_cpp_isOfClass_FUN_0040c840(actor_ptr,"CGasMask"),
       uVar2 = g_CGasMaskClassInfo.name_hash, iVar1 == 0 &&
       ((iVar1 = core_actor_cpp_isOfClass_FUN_0040c840(actor_ptr,"CFilmReel"),
        uVar2 = g_CFilmReelClassInfo.name_hash, iVar1 == 0 &&
        (iVar1 = core_actor_cpp_isOfClass_FUN_0040c840(actor_ptr,"CTrap"),
        uVar2 = g_CTrapClassInfo.name_hash, iVar1 == 0)))))) &&
     (iVar1 = core_actor_cpp_isOfClass_FUN_0040c840(actor_ptr,"CBattery"),
     uVar2 = g_CBatteryClassInfo.name_hash, iVar1 == 0)) {
    _DAT_01d046a0 = "..\\core\\inv.cpp";
    _DAT_01d046a4 = 0xa3;
    core_main_c_FUN_004e4500("getModel - Can't classify : %s",actor_ptr);
    return (CKeyFramedModelInstance *)0x0;
  }
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0(actor_ptr,uVar2);
  return (CKeyFramedModelInstance *)(iVar1 + 0x2b4);
}
