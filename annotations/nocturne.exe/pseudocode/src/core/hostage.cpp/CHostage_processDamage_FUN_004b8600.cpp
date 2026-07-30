// Name: core_hostage.cpp_CHostage_processDamage_FUN_004b8600
// Address: 004b8600
// Address Range: [[004b8600, 004b86ff]]
// Convention: unknown
// Signature: void core_hostage_cpp_CHostage_processDamage_FUN_004b8600(CNPC *param_1,SDamageInfo *param_2)

#include "nocturne.h"

void core_hostage_cpp_CHostage_processDamage_FUN_004b8600(CNPC *param_1,SDamageInfo *param_2)

{
  CDeformableModelInstance *this_ptr;
  int iVar1;
  float fVar2;
  
  if (param_1[1].base.model.transformed_vertices[0x2b].y == 0.0) {
    param_2->damage_amount = 0.0;
  }
  fVar2 = (param_1->base).hit_points - param_2->damage_amount;
  this_ptr = &(param_1->base).model;
  (param_1->base).hit_points = fVar2;
  if (fVar2 <= 0.0) {
    (param_1->base).hit_points = 0.0;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&this_ptr->motion_controller,6,1)
    ;
    (*((param_1->base).base.vtable._ub)->spawnFlies)((CDemonActor *)param_1,0x32,25.0);
    (*((param_1->base).base.vtable._ub)->playSound)
              ((CDemonActor *)param_1,(char *)&param_1[1].base.model.transformed_vertices[0x22].y);
  }
  else if (0.0 < param_2->damage_amount) {
    if ((param_1->base).grabbed_by == (CDemonActor *)0x0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&this_ptr->motion_controller,4,1);
      fVar2 = DAT_00763e44;
      param_1[1].base.model.transformed_vertices[0x2f].z = 3.0;
      param_1[1].base.model.transformed_vertices[0x2f].y = fVar2;
    }
    iVar1 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50
                      ((uint)param_1[1].base.model.transformed_vertices[0x2a].z);
    if (iVar1 == 0) {
      fVar2 = (float)(*((param_1->base).base.vtable._ub)->playSound)
                               ((CDemonActor *)param_1,
                                (char *)(param_1[1].base.model.transformed_vertices + 0x1a));
      param_1[1].base.model.transformed_vertices[0x2a].z = fVar2;
      core_npc_cpp_CNPC_processDamage_FUN_004eeea0(param_1,param_2);
      return;
    }
  }
  core_npc_cpp_CNPC_processDamage_FUN_004eeea0(param_1,param_2);
  return;
}
