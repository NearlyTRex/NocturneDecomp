// Name: core_constrct.cpp_FUN_00443ca0
// Address: 00443ca0
// Address Range: [[00443ca0, 00443efa]]
// Convention: unknown
// Signature: void core_constrct_cpp_FUN_00443ca0(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void core_constrct_cpp_FUN_00443ca0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  int aiStack_1c [3];
  int iStack_10;
  int iStack_c;
  
  core_enemy_cpp_FUN_00489120(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0xcdcc,"@speed" + 1);
  core_actor_cpp_FUN_0040ba30((CDeformableModelInstance *)(param_1 + 0x158),"modelName");
  core_actor_cpp_FUN_0040bab0((CMotionController *)(param_1 + 0x158),"motion state");
  core_actor_cpp_archiveString_FUN_0040b680((char *)(param_1 + 0xd054),"fallEvent");
  if (g_CConstructClassVersion < 3) {
    aiStack_1c[0] = 0;
    aiStack_1c[1] = 0;
    uStack_20 = 0;
    uStack_24 = 0;
    uStack_28 = 0;
    core_actor_cpp_archiveInteger_FUN_0040b8b0(aiStack_1c,"mistState");
    core_actor_cpp_archiveFloat_FUN_0040b830(aiStack_1c + 1,"vanishTimer");
    core_actor_cpp_archiveVector_FUN_0040b400(&uStack_28,"newPos");
    if (g_CConstructClassVersion < 2) {
      return;
    }
  }
  else if (g_CConstructClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b680((char *)(param_1 + 0xd114),"deathEvent");
  core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0xd178,"recombineTime");
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)(param_1 + 0xd844),"blownUp");
  core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0xd850,"param");
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)(param_1 + 0xd180),"boxCount");
  core_actor_cpp_FUN_0040bba0((CDeformableModelInstance *)(param_1 + 0x158),"partStatus");
  iVar1 = 0;
  if (*(int *)(param_1 + 0xd180) < 1) {
    return;
  }
  aiStack_1c[2] = param_1 + 0xd184;
  iStack_10 = param_1 + 0xd1bc;
  iVar3 = param_1 + 0xd1c8;
  iVar2 = param_1 + 0xd1ac;
  iStack_c = param_1 + 0xd190;
  iVar4 = param_1 + 0xd19c;
  do {
    core_actor_cpp_archiveVector_FUN_0040b400(iVar1 * 0x48 + aiStack_1c[2],"boxListPos");
    core_actor_cpp_archiveVector_FUN_0040b400(iStack_c,"boxListOrient");
    core_actor_cpp_archiveQuaternion_FUN_0040b5e0(iVar4,"boxListDestOrient");
    core_actor_cpp_archiveQuaternion_FUN_0040b5e0(iVar2,"boxListStartOrient");
    core_actor_cpp_archiveVector_FUN_0040b400(iStack_10,"sourcePos");
    iVar1 = iVar1 + 1;
    iVar4 = iVar4 + 0x48;
    iVar2 = iVar2 + 0x48;
    core_actor_cpp_archiveActor_FUN_0040b930(iVar3,"boxListPart");
    iVar3 = iVar3 + 0x48;
    iStack_10 = iStack_10 + 0x48;
    iStack_c = iStack_c + 0x48;
  } while (iVar1 < *(int *)(param_1 + 0xd180));
  return;
}
