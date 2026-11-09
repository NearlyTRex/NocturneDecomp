// Name: core_inv.cpp_CInventory_load_FUN_004dc750
// Address: 004dc750
// Address Range: [[004dc750, 004dca88]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_load_FUN_004dc750(CInventory *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inv_cpp_CInventory_load_FUN_004dc750(CInventory *this_ptr,_FILE *file_handle)

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
  core_inv_cpp_FUN_004da440(this_ptr);
  core_inv_cpp_FUN_004da4e0(this_ptr);
  _fgets(local_1dc,0xff,file_handle);
  _fgets(local_1dc,0xff,file_handle);
  _fscanf(file_handle,&DAT_005c6497,this_ptr + 0x334);
  _fgets(local_1dc,0xff,file_handle);
  _fscanf(file_handle,&DAT_005c649b,this_ptr + 0x10);
  _fgets(local_1dc,0xff,file_handle);
  _fscanf(file_handle,&DAT_005c649f,&local_14);
  if (0 < *(int *)(this_ptr + 0x334)) {
    _fgets(local_1dc,0xff,file_handle);
    _fscanf(file_handle,&DAT_005c64a3,this_ptr);
  }
  _fgets(local_1dc,0xff,file_handle);
  iVar7 = 0;
  pCVar6 = this_ptr;
  if (0 < *(int *)(this_ptr + 0x10)) {
    do {
      puVar8 = &DAT_00600188;
      puVar10 = local_dc;
      for (iVar5 = 0x19; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + (uint)bVar12 * -2 + 1;
        puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
      }
      puVar8 = &DAT_006001f0;
      pcVar9 = local_78;
      for (iVar5 = 0x19; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(uint *)pcVar9 = *puVar8;
        puVar8 = puVar8 + (uint)bVar12 * -2 + 1;
        pcVar9 = pcVar9 + ((uint)bVar12 * -2 + 1) * 4;
      }
      _fscanf(file_handle," %s \"%[^\"]\"\n",local_dc,local_78);
      if (*(int *)(0x01D81080 + 0x1010) == 0) {
        pcVar9 = local_78;
        pcVar3 = (char *)core_actor_cpp_createActorByName_FUN_0040c4f0(local_dc);
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
        pCVar2 = core_mission_cpp_CDemonMission_getNextLoadedInventoryActor_FUN_004f6330
                           (0x01D81080,local_78);
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
      core_actor_cpp_CDemonActor_load_FUN_0040b110(*(CDemonActor **)(pCVar6 + 0x14),file_handle);
      iVar7 = iVar7 + 1;
      pCVar6 = pCVar6 + 4;
    } while (iVar7 < *(int *)(this_ptr + 0x10));
  }
  if (1 < *(int *)(this_ptr + 0x334)) {
    _fgets(local_1dc,0xff,file_handle);
  }
  uVar4 = *(uint *)(0x01D81080 + 0x1010);
  *(uint *)(this_ptr + 0x338) = 0;
  *(uint *)(this_ptr + 0x458) = uVar4;
  if (-1 < local_14) {
    uVar4 = core_actor_cpp_castToClassHash_FUN_0040c840
                      (*(uint *)(this_ptr + local_14 * 4 + 0x14),g_CWeaponClassInfo.name_hash)
    ;
    *(uint *)(this_ptr + 0x338) = uVar4;
    if (*(int *)(this_ptr + 0x338) == 0) {
      _DAT_01d71de0 = "..\\core\\inv.cpp";
      _DAT_01d71de4 = 0x739;
      core_main_c_FUN_004e4330("CInventory::load - Can't find your weapon");
    }
  }
  core_inv_cpp_FUN_004dd2d0(this_ptr,999);
  return;
}
