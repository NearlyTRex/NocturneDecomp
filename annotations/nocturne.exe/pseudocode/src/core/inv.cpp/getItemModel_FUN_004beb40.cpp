// Name: core_inv.cpp_getItemModel_FUN_004beb40
// Address: 004beb40
// Address Range: [[004beb40, 004bec94]]
// Convention: unknown
// Signature: int core_inv_cpp_getItemModel_FUN_004beb40(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_inv_cpp_getItemModel_FUN_004beb40(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_1,"CWeapon");
  uVar2 = _DAT_02ddf9a8;
  if ((((((iVar1 == 0) &&
         (iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_1,"CAmmo"),
         uVar2 = DAT_007641f4, iVar1 == 0)) &&
        (iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_1,"CKeyActor"),
        uVar2 = _DAT_01cc30e0, iVar1 == 0)) &&
       ((iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_1,"CBoxActor"),
        uVar2 = DAT_00764838, iVar1 == 0 &&
        (iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_1,"CHealthItem"),
        uVar2 = _DAT_01cae0d0, iVar1 == 0)))) &&
      ((iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_1,"CGasMask"),
       uVar2 = _DAT_01c78bbc, iVar1 == 0 &&
       ((iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_1,"CFilmReel"),
        uVar2 = _DAT_01c08cc4, iVar1 == 0 &&
        (iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_1,"CTrap"),
        uVar2 = _DAT_02dd1044, iVar1 == 0)))))) &&
     (iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_1,"CBattery"),
     uVar2 = DAT_007646ac, iVar1 == 0)) {
    _DAT_01cc4800 = "..\\core\\inv.cpp";
    _DAT_01cc4804 = 0x9d;
    FUN_004c8440("getModel - Can't classify : %s",param_1);
    return 0;
  }
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040d890(param_1,uVar2);
  return iVar1 + 0x150;
}
