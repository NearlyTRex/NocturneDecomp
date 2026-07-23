// Name: FUN_004d8720
// Address: 004d8720
// Address Range: [[004d8720, 004d8a9f]]
// Convention: unknown
// Signature: void FUN_004d8720(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d8720(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x850) == 0) {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0
              (0x01BCD074,"Preparing actors...");
    core_mission_cpp_CDemonMission_prepareAllActors_FUN_004d8db0(param_1);
  }
  *(uint *)(param_1 + 8) = 7;
  _fprintf(param_2,"// mission version, actor version\n");
  _fprintf(param_2,"%d,%d\n",*(uint *)(param_1 + 8),4);
  _fprintf(param_2,"// Root name of mission\n");
  _fprintf(param_2,"%s\n",param_1 + 0x10);
  _fprintf(param_2,"// setList\n");
  iVar4 = 0;
  _fprintf(param_2,"%d\n",*(uint *)(param_1 + 0x110));
  if (0 < *(int *)(param_1 + 0x110)) {
    iVar5 = param_1 + 0x114;
    do {
      iVar4 = iVar4 + 1;
      _fprintf(param_2,"%s\n",iVar5);
      iVar5 = iVar5 + 0x100;
    } while (iVar4 < *(int *)(param_1 + 0x110));
  }
  _fprintf(param_2,"// actorTypeList\n");
  _fprintf(param_2,"%d\n",DAT_00763e94);
  core_actor_cpp_syncActorTypeIDs_FUN_0040d8c0();
  iVar4 = 0;
  if (0 < DAT_00763e94) {
    iVar5 = 0;
    do {
      piVar1 = (int *)((int)&DAT_00763e98 + iVar5);
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 1;
      _fprintf(param_2,"%s %d\n",*piVar1,*(uint *)(*piVar1 + 0x34));
    } while (iVar4 < DAT_00763e94);
  }
  _fprintf(param_2,"// actor count\n");
  uVar2 = core_mission_cpp_CDemonMission_countActors_FUN_004d8d80(param_1);
  _fprintf(param_2,"%d\n",uVar2);
  iVar5 = 0;
  _fprintf(param_2,"// inventory actor count\n");
  for (iVar4 = *(int *)(param_1 + 0x514); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x144)) {
    iVar3 = core_actor_cpp_castToClassHash_FUN_0040d890(iVar4,_DAT_01cae124);
    if (iVar3 != 0) {
      iVar5 = iVar5 + *(int *)(iVar3 + 0x1f5a8);
    }
  }
  _fprintf(param_2,"%d\n",iVar5);
  _fprintf(param_2,"// actor name list\n");
  iVar4 = *(int *)(param_1 + 0x514);
  *(uint *)(param_1 + 0x858) = 0;
  for (; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x144)) {
    uVar2 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00409fa0(iVar4,iVar4);
    _fprintf(param_2,"%s \"%s\"\n",uVar2);
    if (1999 < *(int *)(param_1 + 0x858)) {
      _DAT_01cc4800 = "..\\core\\mission.cpp";
      _DAT_01cc4804 = 0x1e9;
      FUN_004c8440("Too many actors");
    }
    *(int *)(param_1 + 0x85c + *(int *)(param_1 + 0x858) * 4) = iVar4;
    *(int *)(param_1 + 0x858) = *(int *)(param_1 + 0x858) + 1;
  }
  for (iVar4 = *(int *)(param_1 + 0x514); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x144)) {
    iVar5 = core_actor_cpp_castToClassHash_FUN_0040d890(iVar4,_DAT_01cae124);
    if (iVar5 != 0) {
      iVar3 = iVar5 + 0x1f5a0;
      for (iVar6 = 0; iVar6 < *(int *)(iVar5 + 0x1f5a8); iVar6 = iVar6 + 1) {
        if (1999 < *(int *)(param_1 + 0x858)) {
          _DAT_01cc4800 = "..\\core\\mission.cpp";
          _DAT_01cc4804 = 500;
          FUN_004c8440("Too many actors");
        }
        *(uint *)(param_1 + 0x85c + *(int *)(param_1 + 0x858) * 4) =
             *(uint *)(iVar3 + 0xc);
        iVar3 = iVar3 + 4;
        *(int *)(param_1 + 0x858) = *(int *)(param_1 + 0x858) + 1;
      }
      core_inv_cpp_CInventory_saveItems_FUN_004c1140(iVar5 + 0x1f5a0,param_2);
    }
  }
  _fprintf(param_2,"// actor data list\n");
  for (iVar4 = *(int *)(param_1 + 0x514); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x144)) {
    core_actor_cpp_CDemonActor_save_FUN_0040c040(iVar4,param_2);
  }
  core_gore_cpp_CGore_save_FUN_004b08d0(0x01C78C7C,param_2);
  *(uint *)(param_1 + 0x858) = 0;
  return;
}
