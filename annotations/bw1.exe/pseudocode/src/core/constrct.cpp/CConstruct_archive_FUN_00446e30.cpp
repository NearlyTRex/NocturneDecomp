// Name: core_constrct.cpp_CConstruct_archive_FUN_00446e30
// Address: 00446e30
// Address Range: [[00446e30, 0044708a]]
// Convention: __cdecl
// Signature: void __cdecl core_constrct_cpp_CConstruct_archive_FUN_00446e30(CConstruct *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_constrct_cpp_CConstruct_archive_FUN_00446e30(CConstruct *this_ptr)

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
  
  core_enemy_cpp_CEnemy_archive_FUN_004a0520((CEnemy *)this_ptr);
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0xc1d0,"@speed" + 1);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040b7f0
            ((CDeformableModelInstance *)&this_ptr->field_0x158,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040b870
            ((CMotionController *)&this_ptr->field_0x158,"motion state");
  core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0xc268,"fallEvent");
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
  core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0xc328,"deathEvent");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0xc38c,"recombineTime");
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0xca58,"blownUp");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0xca5c,"param");
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0xc394,"boxCount");
  core_actor_cpp_archivePartStatus_FUN_0040b960
            ((CDeformableModelInstance *)&this_ptr->field_0x158,"partStatus");
  iVar1 = 0;
  if (*(int *)&this_ptr->field_0xc394 < 1) {
    return;
  }
  puStack_14 = &this_ptr->field_0xc398;
  puStack_10 = &this_ptr->field_0xc3d0;
  puVar3 = &this_ptr->field_0xc3dc;
  puVar2 = &this_ptr->field_0xc3c0;
  puStack_c = &this_ptr->field_0xc3a4;
  puVar4 = &this_ptr->field_0xc3b0;
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
  } while (iVar1 < *(int *)&this_ptr->field_0xc394);
  return;
}
