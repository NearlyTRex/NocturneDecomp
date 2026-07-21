// Name: core_inv.cpp_CInventory_load_FUN_004c1190
// Address: 004c1190
// Address Range: [[004c1190, 004c14c5]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_load_FUN_004c1190(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inv_cpp_CInventory_load_FUN_004c1190(int param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  char *pcVar8;
  uint *puVar9;
  char *pcVar10;
  byte bVar11;
  byte local_1dc [256];
  uint local_dc [25];
  char local_78 [100];
  int local_14;
  
  bVar11 = 0;
  core_inv_cpp_CInventory_clear_FUN_004bee80(param_1);
  core_inv_cpp_CInventory_initialize_FUN_004bef10(param_1);
  _fgets(local_1dc,0xff,param_2);
  _fgets(local_1dc,0xff,param_2);
  _fscanf(param_2,&DAT_005872b9,param_1 + 0x32c);
  _fgets(local_1dc,0xff,param_2);
  _fscanf(param_2,&DAT_005872bd,param_1 + 8);
  _fgets(local_1dc,0xff,param_2);
  _fscanf(param_2,&DAT_005872c1,&local_14);
  if (0 < *(int *)(param_1 + 0x32c)) {
    _fgets(local_1dc,0xff,param_2);
    _fscanf(param_2,&DAT_005872c5,param_1);
  }
  _fgets(local_1dc,0xff,param_2);
  iVar6 = 0;
  iVar5 = param_1;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      puVar7 = &DAT_005bab68;
      puVar9 = local_dc;
      for (iVar4 = 0x19; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
        puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
      }
      puVar7 = &DAT_005babd0;
      pcVar8 = local_78;
      for (iVar4 = 0x19; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(uint *)pcVar8 = *puVar7;
        puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
        pcVar8 = pcVar8 + ((uint)bVar11 * -2 + 1) * 4;
      }
      _fscanf(param_2," %s \"%[^\"]\"\n",local_dc,local_78);
      if (*(int *)(0x01CC9450 + 0xc) == 0) {
        pcVar8 = local_78;
        pcVar3 = (char *)core_actor_cpp_createActorByName_FUN_0040d540(local_dc);
        pcVar10 = pcVar3;
        do {
          cVar1 = *pcVar8;
          *pcVar10 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar10[1] = cVar1;
          pcVar10 = pcVar10 + 2;
        } while (cVar1 != '\0');
        *(char **)(iVar5 + 0xc) = pcVar3;
      }
      else {
        uVar2 = core_mission_cpp_CDemonMission_getNextLoadedInventoryActor_FUN_004d8640
                          (0x01CC9450,local_78);
        *(uint *)(iVar5 + 0xc) = uVar2;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar6 < *(int *)(param_1 + 8));
  }
  _fgets(local_1dc,0xff,param_2);
  iVar6 = 0;
  iVar5 = param_1;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      core_actor_cpp_CDemonActor_load_FUN_0040c160(*(uint *)(iVar5 + 0xc),param_2);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar6 < *(int *)(param_1 + 8));
  }
  if (1 < *(int *)(param_1 + 0x32c)) {
    _fgets(local_1dc,0xff,param_2);
  }
  uVar2 = *(uint *)(0x01CC9450 + 0xc);
  *(uint *)(param_1 + 0x330) = 0;
  *(uint *)(param_1 + 0x450) = uVar2;
  if (-1 < local_14) {
    uVar2 = core_actor_cpp_castToClassHash_FUN_0040d890
                      (*(uint *)(local_14 * 4 + param_1 + 0xc),_DAT_02ddf9a8);
    *(uint *)(param_1 + 0x330) = uVar2;
    if (*(int *)(param_1 + 0x330) == 0) {
      _DAT_01cc4800 = "..\\core\\inv.cpp";
      _DAT_01cc4804 = 0x54b;
      FUN_004c8440("CInventory::load - Can't find your weapon");
    }
  }
  core_inv_cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004c1b90(param_1,999);
  return;
}
