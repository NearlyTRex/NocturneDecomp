// Name: unkafter_conveyor.cpp_FUN_00437b80
// Address: 00437b80
// Address Range: [[00437b80, 00437dda]]
// Convention: unknown
// Signature: void unkafter_conveyor_cpp_FUN_00437b80(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void unkafter_conveyor_cpp_FUN_00437b80(CEnemy *param_1)

{
  int iVar1;
  byte *puVar2;
  byte *puVar3;
  byte *puVar4;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  int aiStack_1c [2];
  byte *puStack_14;
  byte *puStack_10;
  byte *puStack_c;
  
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1->field_0x10a60,"@speed" + 1);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0
            (&param_1->field_0x2b4,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040bb60(&param_1->field_0x2b4,"motion state");
  core_actor_cpp_archiveString_FUN_0040b730((char *)(param_1 + 1),"fallEvent");
  if (g_CConstructClassVersion < 3) {
    aiStack_1c[0] = 0;
    aiStack_1c[1] = 0;
    uStack_20 = 0;
    uStack_24 = 0;
    uStack_28 = 0;
    core_actor_cpp_archiveInteger_FUN_0040b960(aiStack_1c,"mistState");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(aiStack_1c + 1,"vanishTimer");
    core_actor_cpp_archiveVector_FUN_0040b4b0(&uStack_28,"newPos");
    if (g_CConstructClassVersion < 2) {
      return;
    }
  }
  else if (g_CConstructClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0xb0,"deathEvent");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x114,"recombineTime");
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x7e0,"blownUp");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x7e4,"param");
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x11c,"boxCount");
  core_actor_cpp_archivePartStatus_FUN_0040bc50(&param_1->field_0x2b4,"partStatus");
  iVar1 = 0;
  if (*(int *)&param_1[1].field_0x11c < 1) {
    return;
  }
  puStack_14 = &param_1[1].field_0x120;
  puStack_10 = &param_1[1].field_0x158;
  puVar3 = &param_1[1].field_0x164;
  puVar2 = &param_1[1].field_0x148;
  puStack_c = &param_1[1].field_0x12c;
  puVar4 = &param_1[1].field_0x138;
  do {
    core_actor_cpp_archiveVector_FUN_0040b4b0(puStack_14 + iVar1 * 0x48,"boxListPos");
    core_actor_cpp_archiveVector_FUN_0040b4b0(puStack_c,"boxListOrient");
    core_actor_cpp_archiveQuaternion_FUN_0040b690(puVar4,"boxListDestOrient");
    core_actor_cpp_archiveQuaternion_FUN_0040b690(puVar2,"boxListStartOrient");
    core_actor_cpp_archiveVector_FUN_0040b4b0(puStack_10,"sourcePos");
    iVar1 = iVar1 + 1;
    puVar4 = puVar4 + 0x48;
    puVar2 = puVar2 + 0x48;
    core_actor_cpp_archiveActor_FUN_0040b9e0(puVar3,"boxListPart");
    puVar3 = puVar3 + 0x48;
    puStack_10 = puStack_10 + 0x48;
    puStack_c = puStack_c + 0x48;
  } while (iVar1 < *(int *)&param_1[1].field_0x11c);
  return;
}
