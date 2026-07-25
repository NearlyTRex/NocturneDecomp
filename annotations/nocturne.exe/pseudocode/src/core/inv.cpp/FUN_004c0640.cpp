// Name: FUN_004c0640
// Address: 004c0640
// Address Range: [[004c0640, 004c0703]]
// Convention: unknown
// Signature: void FUN_004c0640(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FUN_004c0640(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  uint in_stack_00000004;
  int in_stack_00000008;
  
  if (*(int *)(in_stack_00000008 + 0x564) == -1) {
    return;
  }
  iVar2 = FUN_0056497c(0x314);
  pcVar3 = (char *)0x0;
  if (iVar2 != 0) {
    pcVar3 = (char *)core_ammo_cpp_CAmmo_ctor_FUN_0040eb70(iVar2);
  }
  if (pcVar3 == (char *)0x0) {
    _DAT_01cc4800 = "..\\core\\inv.cpp";
    _DAT_01cc4804 = 0x2fd;
    FUN_004c8440("Out of memory");
  }
  *(uint *)(pcVar3 + 0x30c) = *(uint *)(in_stack_00000008 + 0x560);
  *(uint *)(pcVar3 + 0x310) = *(uint *)(in_stack_00000008 + 0x564);
  uVar4 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00409fa0();
  core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ed80(pcVar3,uVar4);
  (*(code *)**(uint **)(pcVar3 + 0x14c))(pcVar3);
  pcVar5 = "Some_ammo";
  pcVar6 = pcVar3;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  core_inv_cpp_CInventory_addItem_FUN_004bf360(in_stack_00000004,pcVar3,0);
  return;
}
