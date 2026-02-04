// Name: core_boneguy.cpp_CBoneGuy_archive_FUN_0041d270
// Address: 0041d270
// Address Range: [[0041d270, 0041d4b2]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBoneGuy_archive_FUN_0041d270(CBoneGuy *this_ptr)

#include "nocturne.h"

void __cdecl core_boneguy_cpp_CBoneGuy_archive_FUN_0041d270(CBoneGuy *this_ptr)

{
  CDeformableModelInstance *motion_controller;
  int iVar1;
  CVector3f *vector_ptr;
  CVector3f *vector_ptr_00;
  CQuaternion4f *quat_ptr;
  CQuaternion4f *local_18;
  CDemonActor *local_14;
  
  core_enemy_cpp_CEnemy_archive_FUN_004a9660(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b770(&(this_ptr->base).speed,"speed");
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040b970
            (&(this_ptr->base).base.model,"modelName");
  if (g_CBoneGuyClassVersion < 4) {
    core_actor_cpp_archiveFloat_FUN_0040b770
              (&(this_ptr->base).guard_distance,"guardDistance");
  }
  motion_controller = &(this_ptr->base).base.model;
  core_actor_cpp_archiveMotionState_FUN_0040b9f0
            (&motion_controller->motion_controller,"motion state");
  if (1 < g_CBoneGuyClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->death_event,"deathEvent");
    core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->recombine_time,"recombineTime");
    core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->blown_up,"blownUp");
    core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->param,"param");
    core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->box_count,"boxCount");
    core_actor_cpp_archivePartStatus_FUN_0040bae0(motion_controller,"partStatus");
    iVar1 = 0;
    if (0 < this_ptr->box_count) {
      local_14 = (CDemonActor *)this_ptr->unk2;
      vector_ptr_00 = &this_ptr->source_pos;
      quat_ptr = &this_ptr->box_list_dest_orient;
      local_18 = &this_ptr->box_list_start_orient;
      vector_ptr = &this_ptr->box_list_orient;
      do {
        core_actor_cpp_archiveVector_FUN_0040b340
                  ((CVector3f *)(this_ptr->unk2 + iVar1 * 0x48 + -0x44),"boxListPos");
        core_actor_cpp_archiveVector_FUN_0040b340(vector_ptr,"boxListOrient");
        core_actor_cpp_archiveQuaternion_FUN_0040b520(quat_ptr,"boxListDestOrient");
        core_actor_cpp_archiveQuaternion_FUN_0040b520(local_18,"boxListStartOrient");
        core_actor_cpp_archiveVector_FUN_0040b340(vector_ptr_00,"sourcePos");
        iVar1 = iVar1 + 1;
        vector_ptr = vector_ptr + 6;
        quat_ptr = (CQuaternion4f *)&quat_ptr[4].y;
        core_actor_cpp_archiveActor_FUN_0040b870(local_14,"boxListPart");
        vector_ptr_00 = vector_ptr_00 + 6;
        local_14 = (CDemonActor *)((local_14->orient_matrix).m + 1);
        local_18 = (CQuaternion4f *)&local_18[4].y;
      } while (iVar1 < this_ptr->box_count);
    }
  }
  if ((2 < g_CBoneGuyClassVersion) && (g_CBoneGuyClassVersion < 5)) {
    core_actor_cpp_archiveFloat_FUN_0040b770
              (&(this_ptr->base).victim_height,"victimHeight");
    return;
  }
  return;
}
