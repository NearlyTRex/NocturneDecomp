// Name: core_constrct.cpp_FUN_00446e30
// Address: 00446e30
// Address Range: [[00446e30, 0044708a]]
// Convention: unknown
// Signature: void core_constrct_cpp_FUN_00446e30(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void core_constrct_cpp_FUN_00446e30(CEnemy *param_1)

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
  
  core_enemy_cpp_CEnemy_archive_FUN_004a0520(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1->field_0xc1d0,"@speed" + 1);
  core_actor_cpp_FUN_0040b7f0
            ((CDeformableModelInstance *)&param_1->field_0x158,"modelName");
  core_actor_cpp_FUN_0040b870((CMotionController *)&param_1->field_0x158,"motion state");
  core_actor_cpp_archiveString_FUN_0040b440((char *)(param_1 + 1),"fallEvent");
  if (g_CConstructClassVersion < 3) {
    aiStack_1c[0] = 0;
    aiStack_1c[1] = 0;
    uStack_20 = 0;
    uStack_24 = 0;
    uStack_28 = 0;
    core_actor_cpp_archiveInteger_FUN_0040b670(aiStack_1c,"mistState");
    core_actor_cpp_archiveFloat_FUN_0040b5f0(aiStack_1c + 1,"vanishTimer");
    core_actor_cpp_archiveVector_FUN_0040b1c0(&uStack_28,"newPos");
    if (g_CConstructClassVersion < 2) {
      return;
    }
  }
  else if (g_CConstructClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b440(&param_1[1].field_0xc0,"deathEvent");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1[1].field_0x124,"recombineTime");
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&param_1[1].field_0x7f0,"blownUp");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1[1].field_0x7f4,"param");
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&param_1[1].field_0x12c,"boxCount");
  core_actor_cpp_FUN_0040b960
            ((CDeformableModelInstance *)&param_1->field_0x158,"partStatus");
  iVar1 = 0;
  if (*(int *)&param_1[1].field_0x12c < 1) {
    return;
  }
  puStack_14 = &param_1[1].field_0x130;
  puStack_10 = &param_1[1].field_0x168;
  puVar3 = &param_1[1].field_0x174;
  puVar2 = &param_1[1].field_0x158;
  puStack_c = &param_1[1].field_0x13c;
  puVar4 = &param_1[1].field_0x148;
  do {
    core_actor_cpp_archiveVector_FUN_0040b1c0(puStack_14 + iVar1 * 0x48,"boxListPos");
    core_actor_cpp_archiveVector_FUN_0040b1c0(puStack_c,"boxListOrient");
    core_actor_cpp_archiveQuaternion_FUN_0040b3a0(puVar4,"boxListDestOrient");
    core_actor_cpp_archiveQuaternion_FUN_0040b3a0(puVar2,"boxListStartOrient");
    core_actor_cpp_archiveVector_FUN_0040b1c0(puStack_10,"sourcePos");
    iVar1 = iVar1 + 1;
    puVar4 = puVar4 + 0x48;
    puVar2 = puVar2 + 0x48;
    core_actor_cpp_archiveActor_FUN_0040b6f0(puVar3,"boxListPart");
    puVar3 = puVar3 + 0x48;
    puStack_10 = puStack_10 + 0x48;
    puStack_c = puStack_c + 0x48;
  } while (iVar1 < *(int *)&param_1[1].field_0x12c);
  return;
}
