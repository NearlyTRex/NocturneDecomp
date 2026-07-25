// Name: FUN_004a03a0
// Address: 004a03a0
// Address Range: [[004a03a0, 004a0429]]
// Convention: unknown
// Signature: void FUN_004a03a0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FUN_004a03a0(void)

{
  int iVar1;
  uint in_stack_00000004;
  uint in_stack_00000008;
  
  iVar1 = FUN_0056497c(0x314);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = core_ammo_cpp_CAmmo_ctor_FUN_0040eb70(iVar1);
  if (iVar1 != 0) {
    core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720(0x01CC9450,iVar1);
    (*(code *)**(uint **)(iVar1 + 0x14c))(iVar1);
    *(uint *)(iVar1 + 0x310) = in_stack_00000008;
    core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ed80(iVar1,in_stack_00000004);
    *(uint *)(iVar1 + 0x30c) = 500;
    core_inv_cpp_CInventory_addItem_FUN_004bf360
              (*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f5a0,iVar1,1);
    return;
  }
  return;
}
