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
  CVector3f *vector_ptr;
  CVector3f *vector_ptr_00;
  CQuaternion4f *quat_ptr;
  CQuaternion4f *pCStack_18;
  CBodyPart **ppCStack_14;
  
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
      ppCStack_14 = &this_ptr->boxes[0].body_part;
      vector_ptr_00 = &this_ptr->boxes[0].source_pos;
      quat_ptr = &this_ptr->boxes[0].dest_orient;
      pCStack_18 = &this_ptr->boxes[0].start_orient;
      vector_ptr = &this_ptr->boxes[0].orient;
      do {
        core_actor_cpp_archiveVector_FUN_0040b1c0(&this_ptr->boxes[iVar1].pos,"boxListPos")
        ;
        core_actor_cpp_archiveVector_FUN_0040b1c0(vector_ptr,"boxListOrient");
        core_actor_cpp_archiveQuaternion_FUN_0040b3a0(quat_ptr,"boxListDestOrient");
        core_actor_cpp_archiveQuaternion_FUN_0040b3a0(pCStack_18,"boxListStartOrient");
        core_actor_cpp_archiveVector_FUN_0040b1c0(vector_ptr_00,"sourcePos");
        iVar1 = iVar1 + 1;
        vector_ptr = vector_ptr + 6;
        quat_ptr = (CQuaternion4f *)&quat_ptr[4].y;
        core_actor_cpp_archiveActor_FUN_0040b6f0((CDemonActor **)ppCStack_14,"boxListPart")
        ;
        vector_ptr_00 = vector_ptr_00 + 6;
        ppCStack_14 = ppCStack_14 + 0x12;
        pCStack_18 = (CQuaternion4f *)&pCStack_18[4].y;
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
