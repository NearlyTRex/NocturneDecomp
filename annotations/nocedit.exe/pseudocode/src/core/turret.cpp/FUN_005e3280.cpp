// Name: core_turret.cpp_FUN_005e3280
// Address: 005e3280
// Address Range: [[005e3280, 005e343e]]
// Convention: unknown
// Signature: undefined core_turret.cpp_FUN_005e3280()

#include "nocturne.h"

/* Signature: byte actors_weapon_turret.cpp_FUN_005e3280(uint param_1, uint
   param_2, uint param_3) */

uint core_turret_cpp_FUN_005e3280(void)

{
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  float *in_stack_00000008;
  float in_stack_0000000c;
  float local_2c;
  float fStack_28;
  CVector3f local_24 [2];
  float local_c;
  
  local_24[0].x = *in_stack_00000008 - (in_stack_00000004->location).position.x;
  local_24[0].y = in_stack_00000008[1] - (in_stack_00000004->location).position.y;
  local_24[0].z = in_stack_00000008[2] - (in_stack_00000004->location).position.z;
  core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
            ((CVector3f *)&stack0xffffffd0,local_24);
  core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(fStack_28 - (in_stack_00000004->orient).bank);
  local_2c = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                       (fStack_28 - (in_stack_00000004->orient).pitch);
  in_stack_0000000c =
       in_stack_0000000c *
       *(float *)(in_stack_00000004[5].create_event + 0x48) * (float)0.017453292519444399;
  local_c = -in_stack_0000000c;
  if (fStack_28 < local_c) {
    fStack_28 = local_c;
  }
  if (in_stack_0000000c < fStack_28) {
    fStack_28 = in_stack_0000000c;
  }
  if (local_2c < -in_stack_0000000c) {
    local_2c = -in_stack_0000000c;
  }
  if (in_stack_0000000c < local_2c) {
    local_2c = in_stack_0000000c;
  }
  (in_stack_00000004->orient).bank = (in_stack_00000004->orient).bank + fStack_28;
  (in_stack_00000004->orient).pitch = (in_stack_00000004->orient).pitch + local_2c;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(in_stack_00000004);
  if (((float10)0 != ABS((float10)(local_24[0].x < (float)0.001))) &&
     ((float10)0 != ABS((float10)(fStack_28 < (float)0.001)))) {
    return 1;
  }
  return 0;
}
