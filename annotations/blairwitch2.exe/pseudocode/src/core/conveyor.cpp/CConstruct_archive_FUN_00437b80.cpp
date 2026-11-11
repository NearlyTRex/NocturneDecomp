// Name: core_conveyor.cpp_CConstruct_archive_FUN_00437b80
// Address: 00437b80
// Address Range: [[00437b80, 00437dda]]
// Convention: __cdecl
// Signature: void __cdecl core_conveyor_cpp_CConstruct_archive_FUN_00437b80(CConstruct *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_conveyor_cpp_CConstruct_archive_FUN_00437b80(CConstruct *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  int iVar2;
  CQuaternion4f *pCVar3;
  CBodyPart **ppCVar4;
  CQuaternion4f *pCVar5;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  int aiStack_1c [2];
  SBoneGuyBox *pSStack_14;
  CVector3f *pCStack_10;
  CVector3f *pCStack_c;
  
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&(this_ptr->base).speed,"@speed" + 1);
  pCVar1 = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0(pCVar1,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040bb60(pCVar1,"motion state");
  core_actor_cpp_archiveString_FUN_0040b730(this_ptr->fall_event,"fallEvent");
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
  core_actor_cpp_archiveString_FUN_0040b730(this_ptr->death_event,"deathEvent");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->recombine_time,"recombineTime");
  core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->blown_up,"blownUp");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->recombine_interpolation,"param");
  core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->box_count,"boxCount");
  core_actor_cpp_archivePartStatus_FUN_0040bc50(&(this_ptr->base).base.model,"partStatus");
  iVar2 = 0;
  if (this_ptr->box_count < 1) {
    return;
  }
  pSStack_14 = this_ptr->boxes;
  pCStack_10 = &this_ptr->boxes[0].source_pos;
  ppCVar4 = &this_ptr->boxes[0].body_part;
  pCVar3 = &this_ptr->boxes[0].start_orient;
  pCStack_c = &this_ptr->boxes[0].orient;
  pCVar5 = &this_ptr->boxes[0].dest_orient;
  do {
    core_actor_cpp_archiveVector_FUN_0040b4b0(pSStack_14 + iVar2,"boxListPos");
    core_actor_cpp_archiveVector_FUN_0040b4b0(pCStack_c,"boxListOrient");
    core_actor_cpp_archiveQuaternion_FUN_0040b690(pCVar5,"boxListDestOrient");
    core_actor_cpp_archiveQuaternion_FUN_0040b690(pCVar3,"boxListStartOrient");
    core_actor_cpp_archiveVector_FUN_0040b4b0(pCStack_10,"sourcePos");
    iVar2 = iVar2 + 1;
    pCVar5 = (CQuaternion4f *)((int)(pCVar5 + 4) + 8);
    pCVar3 = (CQuaternion4f *)((int)(pCVar3 + 4) + 8);
    core_actor_cpp_archiveActor_FUN_0040b9e0(ppCVar4,"boxListPart");
    ppCVar4 = ppCVar4 + 0x12;
    pCStack_10 = pCStack_10 + 6;
    pCStack_c = pCStack_c + 6;
  } while (iVar2 < this_ptr->box_count);
  return;
}
