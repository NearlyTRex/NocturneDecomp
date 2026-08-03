// Name: core_trigger.cpp_CTrigger_onLaserHit_FUN_00548530
// Address: 00548530
// Address Range: [[00548530, 0054857c]]
// Convention: unknown
// Signature: void core_trigger_cpp_CTrigger_onLaserHit_FUN_00548530(CDemonActor *param_1,SLaserInfo *param_2)

#include "nocturne.h"

void core_trigger_cpp_CTrigger_onLaserHit_FUN_00548530(CDemonActor *param_1,SLaserInfo *param_2)

{
  core_actor_cpp_CDemonActor_onLaserHit_FUN_0040ab10(param_1,param_2);
  if ((*(int *)(param_1[1].actor_name + 0x1c) == 5) &&
     (param_1[2].orient_matrix.m[1].y == (float)param_2->laser_type)) {
    param_1[2].orient_matrix.m[1].x = 1.4013e-45;
  }
  param_2->transparency = 0.0;
  param_2->reflectivity = 1.0;
  param_2->stored_angle = param_2->incidence_angle;
  return;
}
