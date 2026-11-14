// Name: core_door.cpp_FUN_0045efe0
// Address: 0045efe0
// Address Range: [[0045efe0, 0045f018]]
// Convention: unknown
// Signature: void core_door_cpp_FUN_0045efe0(CDoor *param_1,EDoorState param_2)

#include "nocturne.h"

void core_door_cpp_FUN_0045efe0(CDoor *param_1,EDoorState param_2)

{
  param_1->door_state = param_2;
  if (param_2 == DOOR_STATE_CLOSED) {
    param_1->param = 0.0;
  }
  if (param_1->door_state == DOOR_STATE_OPEN) {
    param_1->param = param_1->max_param;
  }
  core_door_cpp_CDoor_reposition_FUN_0045f030(param_1);
  return;
}
