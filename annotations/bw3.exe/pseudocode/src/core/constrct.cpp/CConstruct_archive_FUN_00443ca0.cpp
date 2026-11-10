// Name: core_constrct.cpp_CConstruct_archive_FUN_00443ca0
// Address: 00443ca0
// Address Range: [[00443ca0, 00443efa]]
// Convention: __cdecl
// Signature: void __cdecl core_constrct_cpp_CConstruct_archive_FUN_00443ca0(CConstruct *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_constrct_cpp_CConstruct_archive_FUN_00443ca0(CConstruct *this_ptr)

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
  
  core_enemy_cpp_CEnemy_archive_FUN_00489120((CEnemy *)this_ptr);
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0xcdcc,"@speed" + 1);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ba30
            ((CDeformableModelInstance *)&this_ptr->field_0x158,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040bab0
            ((CMotionController *)&this_ptr->field_0x158,"motion state");
  core_actor_cpp_archiveString_FUN_0040b680(&this_ptr->field_0xd054,"fallEvent");
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
  core_actor_cpp_archiveString_FUN_0040b680(&this_ptr->field_0xd114,"deathEvent");
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0xd178,"recombineTime");
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0xd844,"blownUp");
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0xd850,"param");
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0xd180,"boxCount");
  core_actor_cpp_archivePartStatus_FUN_0040bba0
            ((CDeformableModelInstance *)&this_ptr->field_0x158,"partStatus");
  iVar1 = 0;
  if (*(int *)&this_ptr->field_0xd180 < 1) {
    return;
  }
  puStack_14 = &this_ptr->field_0xd184;
  puStack_10 = &this_ptr->field_0xd1bc;
  puVar3 = &this_ptr->field_0xd1c8;
  puVar2 = &this_ptr->field_0xd1ac;
  puStack_c = &this_ptr->field_0xd190;
  puVar4 = &this_ptr->field_0xd19c;
  do {
    core_actor_cpp_archiveVector_FUN_0040b400(puStack_14 + iVar1 * 0x48,"boxListPos");
    core_actor_cpp_archiveVector_FUN_0040b400(puStack_c,"boxListOrient");
    core_actor_cpp_archiveQuaternion_FUN_0040b5e0(puVar4,"boxListDestOrient");
    core_actor_cpp_archiveQuaternion_FUN_0040b5e0(puVar2,"boxListStartOrient");
    core_actor_cpp_archiveVector_FUN_0040b400(puStack_10,"sourcePos");
    iVar1 = iVar1 + 1;
    puVar4 = puVar4 + 0x48;
    puVar2 = puVar2 + 0x48;
    core_actor_cpp_archiveActor_FUN_0040b930(puVar3,"boxListPart");
    puVar3 = puVar3 + 0x48;
    puStack_10 = puStack_10 + 0x48;
    puStack_c = puStack_c + 0x48;
  } while (iVar1 < *(int *)&this_ptr->field_0xd180);
  return;
}
