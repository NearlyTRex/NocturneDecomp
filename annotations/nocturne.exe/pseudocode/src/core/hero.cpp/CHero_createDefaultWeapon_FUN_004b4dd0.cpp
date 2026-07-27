// Name: core_hero.cpp_CHero_createDefaultWeapon_FUN_004b4dd0
// Address: 004b4dd0
// Address Range: [[004b4dd0, 004b4e80]]
// Convention: unknown
// Signature: void core_hero_cpp_CHero_createDefaultWeapon_FUN_004b4dd0(int param_1)

#include "nocturne.h"

void core_hero_cpp_CHero_createDefaultWeapon_FUN_004b4dd0(int param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  
  core_inv_cpp_CInventory_initialize_FUN_004bef10(param_1 + 0x1f5a0);
  uVar2 = core_actor_cpp_createActorByName_FUN_0040d540
                    ("CGun",g_CWeaponActorType_02ddf970.name_hash);
  pcVar3 = (char *)core_actor_cpp_castToClassHash_FUN_0040d890(uVar2);
  if (pcVar3 == (char *)0x0) {
    PTR_01cc4800 = "..\\core\\hero.cpp";
    INT_01cc4804 = 0x1b2;
    core_main_c_FUN_004c8440("Out of memory!");
  }
  pcVar4 = "Your_weapon";
  pcVar5 = pcVar3;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  core_inv_cpp_CInventory_addItem_FUN_004bf360(param_1 + 0x1f5a0,pcVar3,1);
  core_inv_cpp_CInventory_selectWeapon_FUN_004c0850(param_1 + 0x1f5a0,0,5,1);
  pcVar3[0x560] = 'd';
  pcVar3[0x561] = '\0';
  pcVar3[0x562] = '\0';
  pcVar3[0x563] = '\0';
  return;
}
