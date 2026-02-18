// Name: core_turret.cpp_CTurret_FUN_005e3280
// Address: 005e3280
// Address Range: [[005e3280, 005e343e]]
// Convention: __cdecl
// Signature: int __cdecl core_turret_cpp_CTurret_FUN_005e3280(CTurret *this_ptr)

#include "nocturne.h"

int __cdecl core_turret_cpp_CTurret_FUN_005e3280(CTurret *this_ptr)

{
  float fVar1;
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
  
  local_24.x = *in_stack_00000008 - (this_ptr->base).base.location.position.x;
  local_24.y = in_stack_00000008[1] - (this_ptr->base).base.location.position.y;
  local_24.z = in_stack_00000008[2] - (this_ptr->base).base.location.position.z;
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_30,&local_24);
  if (local_30.x < -0.5235988f) {
    local_30.x = -0.5235988f;
  }
  if (1.22173f < local_30.x) {
    local_30.x = 1.22173f;
  }
  local_34 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                       (local_30.y - (this_ptr->base).base.orient.vec.y);
  local_c = local_34;
  local_c = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                      (local_30.x - (this_ptr->base).base.orient.vec.x);
  local_10 = in_stack_0000000c * this_ptr->rotate_deg_per_sec * (float)0.017453292519444399;
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
  fVar1 = (this_ptr->base).base.orient.vec.x;
  (this_ptr->base).base.orient.vec.y = (this_ptr->base).base.orient.vec.y + local_34;
  (this_ptr->base).base.orient.vec.x = fVar1 + local_38;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
  if (((float10)0 != ABS((float10)(local_34 < (float)0.001))) &&
     ((float10)0 != ABS((float10)(local_38 < (float)0.001)))) {
    return 1;
  }
  return 0;
}
