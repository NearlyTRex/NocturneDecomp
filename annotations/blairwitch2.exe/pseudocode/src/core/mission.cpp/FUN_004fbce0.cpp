// Name: core_mission.cpp_FUN_004fbce0
// Address: 004fbce0
// Address Range: [[004fbce0, 004fc03f]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_FUN_004fbce0(CDemonMission *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mission_cpp_FUN_004fbce0(CDemonMission *this_ptr,_FILE *file_handle)

{
  int *piVar1;
  CDemonActor *this_ptr_00;
  int iVar2;
  uint uVar3;
  CDemonMission *pCVar4;
  CInventory *pCVar5;
  int iVar6;
  int iVar7;
  
  *(uint *)(this_ptr + 0x100c) = 7;
  FUN_005b8010(file_handle,"// mission version, actor version\n");
  FUN_005b8010(file_handle,"%d,%d\n",*(uint *)(this_ptr + 0x100c),4);
  FUN_005b8010(file_handle,"// Root name of mission\n");
  FUN_005b8010(file_handle,&DAT_005de4b4,this_ptr + 0x1014);
  FUN_005b8010(file_handle,"// setList\n");
  iVar6 = 0;
  FUN_005b8010(file_handle,&DAT_005de4c4,*(uint *)(this_ptr + 4));
  if (0 < *(int *)(this_ptr + 4)) {
    pCVar4 = this_ptr + 8;
    do {
      iVar6 = iVar6 + 1;
      FUN_005b8010(file_handle,&DAT_005de4c8,pCVar4);
      pCVar4 = pCVar4 + 0x100;
    } while (iVar6 < *(int *)(this_ptr + 4));
  }
  FUN_005b8010(file_handle,"// actorTypeList\n");
  FUN_005b8010(file_handle,&DAT_005de4de,DAT_007bc044);
  core_actor_cpp_syncActorTypeIDs_FUN_0040c920();
  iVar6 = 0;
  if (0 < DAT_007bc044) {
    iVar7 = 0;
    do {
      piVar1 = (int *)((int)&DAT_007bc048 + iVar7);
      iVar7 = iVar7 + 4;
      iVar6 = iVar6 + 1;
      FUN_005b8010(file_handle,"%s %d\n",*piVar1,*(uint *)(*piVar1 + 0x34))
      ;
    } while (iVar6 < DAT_007bc044);
  }
  FUN_005b8010(file_handle,"// actor count\n");
  iVar6 = core_mission_cpp_FUN_004fc320(this_ptr);
  FUN_005b8010(file_handle,&DAT_005de4f9,iVar6);
  iVar7 = 0;
  FUN_005b8010(file_handle,"// inventory actor count\n");
  for (iVar6 = *(int *)(this_ptr + 0x1114); iVar6 != 0; iVar6 = *(int *)(iVar6 + 0x14c)) {
    iVar2 = (CHero *)core_actor_cpp_castToClassHash_FUN_0040c8f0(iVar6,g_CHeroClassInfo.name_hash);
    if (iVar2 != 0) {
      iVar7 = iVar7 + *(int *)(iVar2 + 0x2438c);
    }
  }
  FUN_005b8010(file_handle,&DAT_005de517,iVar7);
  FUN_005b8010(file_handle,"// actor name list\n");
  iVar6 = *(int *)(this_ptr + 0x1114);
  *(uint *)(this_ptr + 0x1458) = 0;
  for (; iVar6 != 0; iVar6 = *(int *)(iVar6 + 0x14c)) {
    uVar3 = core_actor_cpp_FUN_00408a50(iVar6,iVar6);
    FUN_005b8010(file_handle,"%s \"%s\"\n",uVar3);
    if (2999 < *(int *)(this_ptr + 0x1458)) {
      _DAT_01d046a0 = "..\\core\\mission.cpp";
      _DAT_01d046a4 = 0x1ed;
      core_main_c_FUN_004e4500("Too many actors");
    }
    *(int *)(this_ptr + *(int *)(this_ptr + 0x1458) * 4 + 0x145c) = iVar6;
    *(int *)(this_ptr + 0x1458) = *(int *)(this_ptr + 0x1458) + 1;
  }
  for (iVar6 = *(int *)(this_ptr + 0x1114); iVar6 != 0; iVar6 = *(int *)(iVar6 + 0x14c)) {
    iVar7 = (CHero *)core_actor_cpp_castToClassHash_FUN_0040c8f0(iVar6,g_CHeroClassInfo.name_hash);
    if (iVar7 != 0) {
      pCVar5 = (CInventory *)(iVar7 + 0x2437c);
      for (iVar2 = 0; iVar2 < *(int *)(iVar7 + 0x2438c); iVar2 = iVar2 + 1) {
        if (2999 < *(int *)(this_ptr + 0x1458)) {
          _DAT_01d046a0 = "..\\core\\mission.cpp";
          _DAT_01d046a4 = 0x1f8;
          core_main_c_FUN_004e4500("Too many actors");
        }
        *(uint *)(this_ptr + *(int *)(this_ptr + 0x1458) * 4 + 0x145c) =
             *(uint *)(pCVar5 + 0x14);
        pCVar5 = pCVar5 + 4;
        *(int *)(this_ptr + 0x1458) = *(int *)(this_ptr + 0x1458) + 1;
      }
      core_inv_cpp_FUN_004dc460((CInventory *)(iVar7 + 0x2437c),file_handle);
    }
  }
  FUN_005b8010(file_handle,"// actor data list\n");
  for (this_ptr_00 = *(CDemonActor **)(this_ptr + 0x1114); this_ptr_00 != (CDemonActor *)0x0;
      this_ptr_00 = *(CDemonActor **)&this_ptr_00->field_0x14c) {
    core_actor_cpp_CDemonActor_save_FUN_0040b0a0(this_ptr_00,file_handle);
  }
  core_gore_cpp_CGore_save_FUN_004c9f20(g_CGorePtr,file_handle);
  *(uint *)(this_ptr + 0x1458) = 0;
  return;
}
