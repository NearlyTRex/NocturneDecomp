// Name: core_construc.cpp_CConstruct_archive_FUN_00443ca0
// Address: 00443ca0
// Address Range: [[00443ca0, 00443efa]]
// Convention: __cdecl
// Signature: void __cdecl core_construc_cpp_CConstruct_archive_FUN_00443ca0(CConstruct *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_construc_cpp_CConstruct_archive_FUN_00443ca0(CConstruct *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  int iVar1;
  CQuaternion4f *pCVar2;
  CBodyPart **ppCVar3;
  CQuaternion4f *pCVar4;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  int aiStack_1c [2];
  SBoneGuyBox *pSStack_14;
  CVector3f *pCStack_10;
  CVector3f *pCStack_c;
  
  core_enemy_cpp_CEnemy_archive_FUN_00489120(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b830(&(this_ptr->base).speed,"@speed" + 1);
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ba30(model_ptr,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040bab0(&model_ptr->base,"motion state");
  core_actor_cpp_archiveString_FUN_0040b680(this_ptr->fall_event,"fallEvent");
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
  core_actor_cpp_archiveString_FUN_0040b680(this_ptr->death_event,"deathEvent");
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->recombine_time,"recombineTime");
  core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->blown_up,"blownUp");
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->recombine_interpolation,"param");
  core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->box_count,"boxCount");
  core_actor_cpp_archivePartStatus_FUN_0040bba0(&(this_ptr->base).base.model,"partStatus");
  iVar1 = 0;
  if (this_ptr->box_count < 1) {
    return;
  }
  pSStack_14 = this_ptr->boxes;
  pCStack_10 = &this_ptr->boxes[0].source_pos;
  ppCVar3 = &this_ptr->boxes[0].body_part;
  pCVar2 = &this_ptr->boxes[0].start_orient;
  pCStack_c = &this_ptr->boxes[0].orient;
  pCVar4 = &this_ptr->boxes[0].dest_orient;
  do {
    core_actor_cpp_archiveVector_FUN_0040b400(pSStack_14 + iVar1,"boxListPos");
    core_actor_cpp_archiveVector_FUN_0040b400(pCStack_c,"boxListOrient");
    core_actor_cpp_archiveQuaternion_FUN_0040b5e0(pCVar4,"boxListDestOrient");
    core_actor_cpp_archiveQuaternion_FUN_0040b5e0(pCVar2,"boxListStartOrient");
    core_actor_cpp_archiveVector_FUN_0040b400(pCStack_10,"sourcePos");
    iVar1 = iVar1 + 1;
    pCVar4 = (CQuaternion4f *)((int)(pCVar4 + 4) + 8);
    pCVar2 = (CQuaternion4f *)((int)(pCVar2 + 4) + 8);
    core_actor_cpp_archiveActor_FUN_0040b930(ppCVar3,"boxListPart");
    ppCVar3 = ppCVar3 + 0x12;
    pCStack_10 = pCStack_10 + 6;
    pCStack_c = pCStack_c + 6;
  } while (iVar1 < this_ptr->box_count);
  return;
}
