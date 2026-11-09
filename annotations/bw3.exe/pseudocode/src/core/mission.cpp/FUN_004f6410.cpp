// Name: core_mission.cpp_FUN_004f6410
// Address: 004f6410
// Address Range: [[004f6410, 004f676f]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_FUN_004f6410(CDemonMission *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mission_cpp_FUN_004f6410(CDemonMission *this_ptr,_FILE *file_handle)

{
  int *piVar1;
  CDemonActor *pCVar2;
  int iVar3;
  char *pcVar4;
  CDemonMission *pCVar5;
  CInventory *pCVar6;
  int iVar7;
  int iVar8;
  CDemonActor *pCVar9;
  
  *(uint *)(this_ptr + 0x100c) = 7;
  FUN_005a3140(file_handle,"// mission version, actor version\n");
  FUN_005a3140(file_handle,"%d,%d\n",*(uint *)(this_ptr + 0x100c),4);
  FUN_005a3140(file_handle,"// Root name of mission\n");
  FUN_005a3140(file_handle,&DAT_005c87f9,this_ptr + 0x133c);
  FUN_005a3140(file_handle,"// setList\n");
  iVar7 = 0;
  FUN_005a3140(file_handle,&DAT_005c8809,*(uint *)(this_ptr + 4));
  if (0 < *(int *)(this_ptr + 4)) {
    pCVar5 = this_ptr + 8;
    do {
      iVar7 = iVar7 + 1;
      FUN_005a3140(file_handle,&DAT_005c880d,pCVar5);
      pCVar5 = pCVar5 + 0x100;
    } while (iVar7 < *(int *)(this_ptr + 4));
  }
  FUN_005a3140(file_handle,"// actorTypeList\n");
  FUN_005a3140(file_handle,&DAT_005c8823,DAT_007df9c4);
  core_actor_cpp_syncActorTypeIDs_FUN_0040c870();
  iVar7 = 0;
  if (0 < DAT_007df9c4) {
    iVar8 = 0;
    do {
      piVar1 = (int *)((int)&DAT_007df9c8 + iVar8);
      iVar8 = iVar8 + 4;
      iVar7 = iVar7 + 1;
      FUN_005a3140(file_handle,"%s %d\n",*piVar1,*(uint *)(*piVar1 + 0x34))
      ;
    } while (iVar7 < DAT_007df9c4);
  }
  FUN_005a3140(file_handle,"// actor count\n");
  iVar7 = core_mission_cpp_FUN_004f6a50(this_ptr);
  FUN_005a3140(file_handle,&DAT_005c883e,iVar7);
  iVar8 = 0;
  FUN_005a3140(file_handle,"// inventory actor count\n");
  for (iVar7 = *(int *)(this_ptr + 0x143c); iVar7 != 0; iVar7 = *(int *)(iVar7 + 0x14c)) {
    iVar3 = (CHero *)core_actor_cpp_castToClassHash_FUN_0040c840(iVar7,g_CHeroClassInfo.name_hash);
    if (iVar3 != 0) {
      iVar8 = iVar8 + *(int *)(iVar3 + 0x206f8);
    }
  }
  FUN_005a3140(file_handle,&DAT_005c885c,iVar8);
  FUN_005a3140(file_handle,"// actor name list\n");
  pCVar2 = *(CDemonActor **)(this_ptr + 0x143c);
  *(uint *)(this_ptr + 0x145c) = 0;
  for (; pCVar2 != (CDemonActor *)0x0; pCVar2 = *(CDemonActor **)&pCVar2->field_0x14c) {
    pCVar9 = pCVar2;
    pcVar4 = core_actor_cpp_FUN_00408870(pCVar2);
    FUN_005a3140(file_handle,"%s \"%s\"\n",pcVar4,pCVar9);
    if (5999 < *(int *)(this_ptr + 0x145c)) {
      _DAT_01d71de0 = "..\\core\\mission.cpp";
      _DAT_01d71de4 = 0x1f0;
      core_main_c_FUN_004e4330("Too many actors");
    }
    *(CDemonActor **)(this_ptr + *(int *)(this_ptr + 0x145c) * 4 + 0x1460) = pCVar2;
    *(int *)(this_ptr + 0x145c) = *(int *)(this_ptr + 0x145c) + 1;
  }
  for (iVar7 = *(int *)(this_ptr + 0x143c); iVar7 != 0; iVar7 = *(int *)(iVar7 + 0x14c)) {
    iVar8 = (CHero *)core_actor_cpp_castToClassHash_FUN_0040c840(iVar7,g_CHeroClassInfo.name_hash);
    if (iVar8 != 0) {
      pCVar6 = (CInventory *)(iVar8 + 0x206e8);
      for (iVar3 = 0; iVar3 < *(int *)(iVar8 + 0x206f8); iVar3 = iVar3 + 1) {
        if (5999 < *(int *)(this_ptr + 0x145c)) {
          _DAT_01d71de0 = "..\\core\\mission.cpp";
          _DAT_01d71de4 = 0x1fb;
          core_main_c_FUN_004e4330("Too many actors");
        }
        *(uint *)(this_ptr + *(int *)(this_ptr + 0x145c) * 4 + 0x1460) =
             *(uint *)(pCVar6 + 0x14);
        pCVar6 = pCVar6 + 4;
        *(int *)(this_ptr + 0x145c) = *(int *)(this_ptr + 0x145c) + 1;
      }
      core_inv_cpp_CInventory_saveItems_FUN_004dc700((CInventory *)(iVar8 + 0x206e8),file_handle);
    }
  }
  FUN_005a3140(file_handle,"// actor data list\n");
  for (pCVar2 = *(CDemonActor **)(this_ptr + 0x143c); pCVar2 != (CDemonActor *)0x0;
      pCVar2 = *(CDemonActor **)&pCVar2->field_0x14c) {
    core_actor_cpp_CDemonActor_save_FUN_0040aff0(pCVar2,file_handle);
  }
  core_gore_cpp_FUN_004cf0c0(g_CGorePtr,file_handle);
  *(uint *)(this_ptr + 0x145c) = 0;
  return;
}
