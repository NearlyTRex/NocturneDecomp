// Name: core_boneguy.cpp_CBoneGuy_archive_FUN_0041d270
// Address: 0041d270
// MANUAL RECONSTRUCTION
// Address Range: [[0041d270, 0041d4b2]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBoneGuy_archive_FUN_0041d270(CBoneGuy *this_ptr)

#include "nocturne.h"

void __cdecl core_boneguy_cpp_CBoneGuy_archive_FUN_0041d270(CBoneGuy *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  int iVar1;
  
  core_enemy_cpp_CEnemy_archive_FUN_004a9660(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b770(&(this_ptr->base).speed,"speed");
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040b970
            (&(this_ptr->base).base.model,"modelName");
  if (g_CBoneGuyClassVersion < 4) {
    core_actor_cpp_archiveFloat_FUN_0040b770
              (&(this_ptr->base).guard_distance,"guardDistance");
  }
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveMotionState_FUN_0040b9f0
            (&model_ptr->motion_controller,"motion state");
  if (1 < g_CBoneGuyClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->death_event,"deathEvent");
    core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->recombine_time,"recombineTime");
    core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->blown_up,"blownUp");
    core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->recombine_interpolation,"param");
    core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->box_count,"boxCount");
    core_actor_cpp_archivePartStatus_FUN_0040bae0(model_ptr,"partStatus");
    iVar1 = 0;
    if (0 < this_ptr->box_count) {
      do {
        core_actor_cpp_archiveVector_FUN_0040b340(&this_ptr->boxes[iVar1].pos,"boxListPos")
        ;
        core_actor_cpp_archiveVector_FUN_0040b340(&this_ptr->boxes[iVar1].orient,"boxListOrient");
        core_actor_cpp_archiveQuaternion_FUN_0040b520(&this_ptr->boxes[iVar1].dest_orient,"boxListDestOrient");
        core_actor_cpp_archiveQuaternion_FUN_0040b520(&this_ptr->boxes[iVar1].start_orient,"boxListStartOrient");
        core_actor_cpp_archiveVector_FUN_0040b340(&this_ptr->boxes[iVar1].source_pos,"sourcePos");
        core_actor_cpp_archiveActor_FUN_0040b870((CDemonActor **)&this_ptr->boxes[iVar1].body_part,"boxListPart");
        iVar1 = iVar1 + 1;
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
