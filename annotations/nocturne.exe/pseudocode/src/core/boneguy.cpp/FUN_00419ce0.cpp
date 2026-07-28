// Name: core_boneguy.cpp_FUN_00419ce0
// Address: 00419ce0
// Address Range: [[00419ce0, 00419f22]]
// Convention: unknown
// Signature: void core_boneguy_cpp_FUN_00419ce0(CEnemy *param_1)

#include "nocturne.h"

void core_boneguy_cpp_FUN_00419ce0(CEnemy *param_1)

{
  CDeformableModelInstance *model_ptr;
  int iVar1;
  CVector3f *vector_ptr;
  CVector3f *vector_ptr_00;
  CQuaternion4f *quat_ptr;
  CQuaternion4f *local_18;
  int *local_14;
  
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(param_1);
  core_actor_cpp_archiveFloat_FUN_0040c880(&param_1->speed,"speed");
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80
            (&(param_1->base).model,"modelName");
  if (g_INT_005ad054 < 4) {
    core_actor_cpp_archiveFloat_FUN_0040c880(&param_1->guard_distance,"guardDistance");
  }
  model_ptr = &(param_1->base).model;
  core_actor_cpp_archiveMotionState_FUN_0040cb00
            (&model_ptr->motion_controller,"motion state");
  if (1 < g_INT_005ad054) {
    core_actor_cpp_archiveString_FUN_0040c6d0
              (param_1[1].base.base.actor_name + 0x14,"deathEvent");
    core_actor_cpp_archiveFloat_FUN_0040c880
              ((float *)param_1[1].base.base.create_event,"recombineTime");
    core_actor_cpp_archiveInteger_FUN_0040c900
              ((int *)&param_1[1].base.model.transformed_vertices[0x5f].y,"blownUp");
    core_actor_cpp_archiveFloat_FUN_0040c880
              (&param_1[1].base.model.transformed_vertices[0x5f].z,"param");
    core_actor_cpp_archiveInteger_FUN_0040c900
              ((int *)(param_1[1].base.base.create_event + 4),"boxCount");
    core_actor_cpp_archivePartStatus_FUN_0040cbf0(model_ptr,"partStatus");
    iVar1 = 0;
    if (0 < *(int *)(param_1[1].base.base.create_event + 4)) {
      local_14 = (int *)(param_1[1].base.base.create_event + 0x4c);
      vector_ptr_00 = (CVector3f *)(param_1[1].base.base.create_event + 0x40);
      quat_ptr = (CQuaternion4f *)(param_1[1].base.base.create_event + 0x20);
      local_18 = (CQuaternion4f *)(param_1[1].base.base.create_event + 0x30);
      vector_ptr = (CVector3f *)(param_1[1].base.base.create_event + 0x14);
      do {
        core_actor_cpp_archiveVector_FUN_0040c450
                  ((CVector3f *)(param_1[1].base.base.create_event + iVar1 * 0x48 + 8),
                   "boxListPos");
        core_actor_cpp_archiveVector_FUN_0040c450(vector_ptr,"boxListOrient");
        core_actor_cpp_archiveQuaternion_FUN_0040c630(quat_ptr,"boxListDestOrient");
        core_actor_cpp_archiveQuaternion_FUN_0040c630(local_18,"boxListStartOrient");
        core_actor_cpp_archiveVector_FUN_0040c450(vector_ptr_00,"sourcePos");
        iVar1 = iVar1 + 1;
        vector_ptr = vector_ptr + 6;
        quat_ptr = (CQuaternion4f *)&quat_ptr[4].y;
        core_actor_cpp_archiveActor_FUN_0040c980((CDemonActor **)local_14,"boxListPart");
        vector_ptr_00 = vector_ptr_00 + 6;
        local_14 = local_14 + 0x12;
        local_18 = (CQuaternion4f *)&local_18[4].y;
      } while (iVar1 < *(int *)(param_1[1].base.base.create_event + 4));
    }
  }
  if ((2 < g_INT_005ad054) && (g_INT_005ad054 < 5)) {
    core_actor_cpp_archiveFloat_FUN_0040c880(&param_1->victim_height,"victimHeight");
    return;
  }
  return;
}
