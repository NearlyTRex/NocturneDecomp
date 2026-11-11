// Name: core_boneguy.cpp_CBoneGuy_archive_FUN_0041d0d0
// Address: 0041d0d0
// Address Range: [[0041d0d0, 0041d312]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBoneGuy_archive_FUN_0041d0d0(CBoneGuy *this_ptr)

#include "nocturne.h"

void __cdecl core_boneguy_cpp_CBoneGuy_archive_FUN_0041d0d0(CBoneGuy *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  int iVar1;
  CVector3f *pCVar2;
  CVector3f *pCVar3;
  CQuaternion4f *pCVar4;
  SBoneGuyBox *pSVar5;
  CQuaternion4f *pCVar6;
  CBodyPart **ppCVar7;
  
  core_enemy_cpp_CEnemy_archive_FUN_004a0520(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&(this_ptr->base).speed,"@speed" + 1);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040b7f0
            (&(this_ptr->base).base.model,"modelName");
  if (g_CBoneGuyClassVersion < 4) {
    core_actor_cpp_archiveFloat_FUN_0040b5f0
              (&(this_ptr->base).guard_distance,"guardDistance");
  }
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveMotionState_FUN_0040b870(&model_ptr->base,"motion state");
  if (1 < g_CBoneGuyClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b440(this_ptr->death_event,"deathEvent");
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->recombine_time,"recombineTime");
    core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->blown_up,"blownUp");
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->recombine_interpolation,"param");
    core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->box_count,"boxCount");
    core_actor_cpp_archivePartStatus_FUN_0040b960(model_ptr,"partStatus");
    iVar1 = 0;
    if (0 < this_ptr->box_count) {
      pSVar5 = this_ptr->boxes;
      ppCVar7 = &this_ptr->boxes[0].body_part;
      pCVar3 = &this_ptr->boxes[0].source_pos;
      pCVar4 = &this_ptr->boxes[0].dest_orient;
      pCVar6 = &this_ptr->boxes[0].start_orient;
      pCVar2 = &this_ptr->boxes[0].orient;
      do {
        core_actor_cpp_archiveVector_FUN_0040b1c0
                  (pSVar5 + iVar1,"boxListPos",pSVar5,pCVar6,ppCVar7);
        core_actor_cpp_archiveVector_FUN_0040b1c0(pCVar2,"boxListOrient");
        core_actor_cpp_archiveQuaternion_FUN_0040b3a0(pCVar4,"boxListDestOrient");
        core_actor_cpp_archiveQuaternion_FUN_0040b3a0(pCVar6,"boxListStartOrient");
        core_actor_cpp_archiveVector_FUN_0040b1c0(pCVar3,"sourcePos");
        iVar1 = iVar1 + 1;
        pCVar2 = pCVar2 + 6;
        pCVar4 = (CQuaternion4f *)((int)(pCVar4 + 4) + 8);
        core_actor_cpp_archiveActor_FUN_0040b6f0(ppCVar7,"boxListPart");
        pCVar3 = pCVar3 + 6;
        ppCVar7 = ppCVar7 + 0x12;
        pCVar6 = (CQuaternion4f *)((int)(pCVar6 + 4) + 8);
      } while (iVar1 < this_ptr->box_count);
    }
  }
  if ((2 < g_CBoneGuyClassVersion) && (g_CBoneGuyClassVersion < 5)) {
    core_actor_cpp_archiveFloat_FUN_0040b5f0
              (&(this_ptr->base).victim_height,"victimHeight");
    return;
  }
  return;
}
