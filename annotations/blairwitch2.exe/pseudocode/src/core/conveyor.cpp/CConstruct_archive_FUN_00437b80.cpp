// Name: core_conveyor.cpp_CConstruct_archive_FUN_00437b80
// Address: 00437b80
// Address Range: [[00437b80, 00437dda]]
// Convention: __cdecl
// Signature: void __cdecl core_conveyor_cpp_CConstruct_archive_FUN_00437b80(CConstruct *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_conveyor_cpp_CConstruct_archive_FUN_00437b80(CConstruct *this_ptr)

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
  
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0((CEnemy *)this_ptr);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x10a60,"@speed" + 1);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0
            (&this_ptr->field_0x2b4,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040bb60(&this_ptr->field_0x2b4,"motion state");
  core_actor_cpp_archiveString_FUN_0040b730(&this_ptr->field_0x10af8,"fallEvent");
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
  core_actor_cpp_archiveString_FUN_0040b730(&this_ptr->field_0x10ba8,"deathEvent");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x10c0c,"recombineTime");
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->field_0x112d8,"blownUp");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x112dc,"param");
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->field_0x10c14,"boxCount");
  core_actor_cpp_archivePartStatus_FUN_0040bc50(&this_ptr->field_0x2b4,"partStatus");
  iVar1 = 0;
  if (*(int *)&this_ptr->field_0x10c14 < 1) {
    return;
  }
  puStack_14 = &this_ptr->field_0x10c18;
  puStack_10 = &this_ptr->field_0x10c50;
  puVar3 = &this_ptr->field_0x10c5c;
  puVar2 = &this_ptr->field_0x10c40;
  puStack_c = &this_ptr->field_0x10c24;
  puVar4 = &this_ptr->field_0x10c30;
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
  } while (iVar1 < *(int *)&this_ptr->field_0x10c14);
  return;
}
