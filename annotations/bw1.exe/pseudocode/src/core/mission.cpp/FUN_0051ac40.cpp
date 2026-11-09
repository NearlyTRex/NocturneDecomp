// Name: core_mission.cpp_FUN_0051ac40
// Address: 0051ac40
// Address Range: [[0051ac40, 0051af9f]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_FUN_0051ac40(CDemonMission *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mission_cpp_FUN_0051ac40(CDemonMission *this_ptr,_FILE *file_handle)

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
  FUN_005c03c0(file_handle,"// mission version, actor version\n");
  FUN_005c03c0(file_handle,"%d,%d\n",*(uint *)(this_ptr + 0x100c),4);
  FUN_005c03c0(file_handle,"// Root name of mission\n");
  FUN_005c03c0(file_handle,&DAT_005e94f7,this_ptr + 0x1018);
  FUN_005c03c0(file_handle,"// setList\n");
  iVar7 = 0;
  FUN_005c03c0(file_handle,&DAT_005e9507,*(uint *)(this_ptr + 4));
  if (0 < *(int *)(this_ptr + 4)) {
    pCVar5 = this_ptr + 8;
    do {
      iVar7 = iVar7 + 1;
      FUN_005c03c0(file_handle,&DAT_005e950b,pCVar5);
      pCVar5 = pCVar5 + 0x100;
    } while (iVar7 < *(int *)(this_ptr + 4));
  }
  FUN_005c03c0(file_handle,"// actorTypeList\n");
  FUN_005c03c0(file_handle,&DAT_005e9521,DAT_007c3044);
  core_actor_cpp_syncActorTypeIDs_FUN_0040c630();
  iVar7 = 0;
  if (0 < DAT_007c3044) {
    iVar8 = 0;
    do {
      piVar1 = (int *)((int)&DAT_007c3048 + iVar8);
      iVar8 = iVar8 + 4;
      iVar7 = iVar7 + 1;
      FUN_005c03c0(file_handle,"%s %d\n",*piVar1,*(uint *)(*piVar1 + 0x34))
      ;
    } while (iVar7 < DAT_007c3044);
  }
  FUN_005c03c0(file_handle,"// actor count\n");
  iVar7 = core_mission_cpp_FUN_0051b280(this_ptr);
  FUN_005c03c0(file_handle,&DAT_005e953c,iVar7);
  iVar8 = 0;
  FUN_005c03c0(file_handle,"// inventory actor count\n");
  for (iVar7 = *(int *)(this_ptr + 0x1118); iVar7 != 0; iVar7 = *(int *)(iVar7 + 0x14c)) {
    iVar3 = (CHero *)core_actor_cpp_castToClassHash_FUN_0040c600(iVar7,g_CHeroClassInfo.name_hash);
    if (iVar3 != 0) {
      iVar8 = iVar8 + *(int *)(iVar3 + 0x1faf8);
    }
  }
  FUN_005c03c0(file_handle,&DAT_005e955a,iVar8);
  FUN_005c03c0(file_handle,"// actor name list\n");
  pCVar2 = *(CDemonActor **)(this_ptr + 0x1118);
  *(uint *)(this_ptr + 0x145c) = 0;
  for (; pCVar2 != (CDemonActor *)0x0; pCVar2 = *(CDemonActor **)&pCVar2->field_0x14c) {
    pCVar9 = pCVar2;
    pcVar4 = core_actor_cpp_FUN_00408830(pCVar2);
    FUN_005c03c0(file_handle,"%s \"%s\"\n",pcVar4,pCVar9);
    if (5999 < *(int *)(this_ptr + 0x145c)) {
      _DAT_01d1d400 = "..\\core\\mission.cpp";
      _DAT_01d1d404 = 0x1f0;
      core_main_c_FUN_005030e0("Too many actors");
    }
    *(CDemonActor **)(this_ptr + *(int *)(this_ptr + 0x145c) * 4 + 0x1460) = pCVar2;
    *(int *)(this_ptr + 0x145c) = *(int *)(this_ptr + 0x145c) + 1;
  }
  for (iVar7 = *(int *)(this_ptr + 0x1118); iVar7 != 0; iVar7 = *(int *)(iVar7 + 0x14c)) {
    iVar8 = (CHero *)core_actor_cpp_castToClassHash_FUN_0040c600(iVar7,g_CHeroClassInfo.name_hash);
    if (iVar8 != 0) {
      pCVar6 = (CInventory *)(iVar8 + 0x1fae8);
      for (iVar3 = 0; iVar3 < *(int *)(iVar8 + 0x1faf8); iVar3 = iVar3 + 1) {
        if (5999 < *(int *)(this_ptr + 0x145c)) {
          _DAT_01d1d400 = "..\\core\\mission.cpp";
          _DAT_01d1d404 = 0x1fb;
          core_main_c_FUN_005030e0("Too many actors");
        }
        *(uint *)(this_ptr + *(int *)(this_ptr + 0x145c) * 4 + 0x1460) =
             *(uint *)(pCVar6 + 0x14);
        pCVar6 = pCVar6 + 4;
        *(int *)(this_ptr + 0x145c) = *(int *)(this_ptr + 0x145c) + 1;
      }
      core_inv_cpp_CInventory_saveItems_FUN_004f9750((CInventory *)(iVar8 + 0x1fae8),file_handle);
    }
  }
  FUN_005c03c0(file_handle,"// actor data list\n");
  for (pCVar2 = *(CDemonActor **)(this_ptr + 0x1118); pCVar2 != (CDemonActor *)0x0;
      pCVar2 = *(CDemonActor **)&pCVar2->field_0x14c) {
    core_actor_cpp_CDemonActor_save_FUN_0040adb0(pCVar2,file_handle);
  }
  core_gore_cpp_CGore_save_FUN_004e6730(g_CGorePtr,file_handle);
  *(uint *)(this_ptr + 0x145c) = 0;
  return;
}
