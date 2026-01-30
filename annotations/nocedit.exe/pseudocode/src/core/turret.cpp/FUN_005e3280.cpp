// Name: core_turret.cpp_FUN_005e3280
// Address: 005e3280
// Address Range: [[005e3280, 005e343e]]
// Convention: __cdecl
// Signature: int __cdecl core_turret_cpp_FUN_005e3280(void)

#include "nocturne.h"

/* Signature: byte actors_weapon_turret.cpp_FUN_005e3280(uint param_1, uint
   param_2, uint param_3) */

int __cdecl core_turret_cpp_FUN_005e3280(void)

{
  CDemonActor *in_stack_00000004;
  float *in_stack_00000008;
  float in_stack_0000000c;
  float local_38;
  float local_34;
  CVector3f local_30;
  CVector3f local_24;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  local_24.x = *in_stack_00000008 - (in_stack_00000004->location).position.x;
  local_24.y = in_stack_00000008[1] - (in_stack_00000004->location).position.y;
  local_24.z = in_stack_00000008[2] - (in_stack_00000004->location).position.z;
  core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_30,&local_24);
  if (local_30.x < -0.5235988f) {
    local_30.x = -0.5235988f;
  }
  if (1.22173f < local_30.x) {
    local_30.x = 1.22173f;
  }
  local_34 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                       (local_30.y - (in_stack_00000004->orient).bank);
  local_c = local_34;
  local_c = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                      (local_30.x - (in_stack_00000004->orient).pitch);
  local_10 = in_stack_0000000c *
             *(float *)(in_stack_00000004[5].create_event + 0x48) * (float)0.017453292519444399;
  local_18 = -local_10;
  if (local_34 < local_18) {
    local_34 = local_18;
  }
  if (local_10 < local_34) {
    local_34 = local_10;
  }
  local_14 = -local_10;
  local_38 = local_c;
  if (local_c < local_14) {
    local_38 = local_14;
  }
  if (local_10 < local_38) {
    local_38 = local_10;
  }
  (in_stack_00000004->orient).bank = (in_stack_00000004->orient).bank + local_34;
  (in_stack_00000004->orient).pitch = (in_stack_00000004->orient).pitch + local_38;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(in_stack_00000004);
  if (((float10)0 != ABS((float10)(local_34 < (float)0.001))) &&
     ((float10)0 != ABS((float10)(local_38 < (float)0.001)))) {
    return 1;
  }
  return 0;
}
