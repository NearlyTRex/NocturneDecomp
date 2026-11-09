// Name: core_inv.cpp_CInventory_load_FUN_004f97a0
// Address: 004f97a0
// Address Range: [[004f97a0, 004f9ad8]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_load_FUN_004f97a0(CInventory *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inv_cpp_CInventory_load_FUN_004f97a0(CInventory *this_ptr,_FILE *file_handle)

{
  char cVar1;
  CDemonActor *pCVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  CInventory *pCVar6;
  int iVar7;
  uint *puVar8;
  char *pcVar9;
  uint *puVar10;
  char *pcVar11;
  byte bVar12;
  byte local_1dc [256];
  uint local_dc [25];
  char local_78 [100];
  int local_14;
  
  bVar12 = 0;
  core_inv_cpp_CInventory_clear_FUN_004f6fa0(this_ptr);
  core_inv_cpp_CInventory_initialize_FUN_004f7050(this_ptr);
  _fgets(local_1dc,0xff,file_handle);
  _fgets(local_1dc,0xff,file_handle);
  _fscanf(file_handle,&DAT_005e66a0,this_ptr + 0x334);
  _fgets(local_1dc,0xff,file_handle);
  _fscanf(file_handle,&DAT_005e66a4,this_ptr + 0x10);
  _fgets(local_1dc,0xff,file_handle);
  _fscanf(file_handle,&DAT_005e66a8,&local_14);
  if (0 < *(int *)(this_ptr + 0x334)) {
    _fgets(local_1dc,0xff,file_handle);
    _fscanf(file_handle,&DAT_005e66ac,this_ptr);
  }
  _fgets(local_1dc,0xff,file_handle);
  iVar7 = 0;
  pCVar6 = this_ptr;
  if (0 < *(int *)(this_ptr + 0x10)) {
    do {
      puVar8 = &DAT_0061f1a8;
      puVar10 = local_dc;
      for (iVar5 = 0x19; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + (uint)bVar12 * -2 + 1;
        puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
      }
      puVar8 = &DAT_0061f210;
      pcVar9 = local_78;
      for (iVar5 = 0x19; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(uint *)pcVar9 = *puVar8;
        puVar8 = puVar8 + (uint)bVar12 * -2 + 1;
        pcVar9 = pcVar9 + ((uint)bVar12 * -2 + 1) * 4;
      }
      _fscanf(file_handle," %s \"%[^\"]\"\n",local_dc,local_78);
      if (*(int *)(0x01D2C900 + 0x1010) == 0) {
        pcVar9 = local_78;
        pcVar3 = (char *)core_actor_cpp_createActorByName_FUN_0040c2b0(local_dc);
        pcVar11 = pcVar3;
        do {
          cVar1 = *pcVar9;
          *pcVar11 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar9[1];
          pcVar9 = pcVar9 + 2;
          pcVar11[1] = cVar1;
          pcVar11 = pcVar11 + 2;
        } while (cVar1 != '\0');
        *(char **)(pCVar6 + 0x14) = pcVar3;
      }
      else {
        pCVar2 = core_mission_cpp_CDemonMission_getNextLoadedInventoryActor_FUN_0051ab60
                           (0x01D2C900,local_78);
        *(CDemonActor **)(pCVar6 + 0x14) = pCVar2;
      }
      iVar7 = iVar7 + 1;
      pCVar6 = pCVar6 + 4;
    } while (iVar7 < *(int *)(this_ptr + 0x10));
  }
  _fgets(local_1dc,0xff,file_handle);
  iVar7 = 0;
  pCVar6 = this_ptr;
  if (0 < *(int *)(this_ptr + 0x10)) {
    do {
      core_actor_cpp_CDemonActor_load_FUN_0040aed0(*(CDemonActor **)(pCVar6 + 0x14),file_handle);
      iVar7 = iVar7 + 1;
      pCVar6 = pCVar6 + 4;
    } while (iVar7 < *(int *)(this_ptr + 0x10));
  }
  if (1 < *(int *)(this_ptr + 0x334)) {
    _fgets(local_1dc,0xff,file_handle);
  }
  uVar4 = *(uint *)(0x01D2C900 + 0x1010);
  *(uint *)(this_ptr + 0x338) = 0;
  *(uint *)(this_ptr + 0x458) = uVar4;
  if (-1 < local_14) {
    uVar4 = core_actor_cpp_castToClassHash_FUN_0040c600
                      (*(uint *)(this_ptr + local_14 * 4 + 0x14),g_CWeaponClassInfo.name_hash)
    ;
    *(uint *)(this_ptr + 0x338) = uVar4;
    if (*(int *)(this_ptr + 0x338) == 0) {
      _DAT_01d1d400 = "..\\core\\inv.cpp";
      _DAT_01d1d404 = 0x69d;
      core_main_c_FUN_005030e0("CInventory::load - Can't find your weapon");
    }
  }
  core_inv_cpp_FUN_004fa4e0(this_ptr,999);
  return;
}
