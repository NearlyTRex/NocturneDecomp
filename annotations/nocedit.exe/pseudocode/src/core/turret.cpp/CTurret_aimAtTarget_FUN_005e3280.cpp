// Name: core_turret.cpp_CTurret_aimAtTarget_FUN_005e3280
// Address: 005e3280
// Address Range: [[005e3280, 005e343e]]
// Convention: __cdecl
// Signature: int __cdecl core_turret_cpp_CTurret_aimAtTarget_FUN_005e3280(CTurret *this_ptr,CVector3f *target_pos,float delta_time)

#include "nocturne.h"

int __cdecl core_turret_cpp_CTurret_aimAtTarget_FUN_005e3280(CTurret *this_ptr,CVector3f *target_pos,float delta_time)

{
  float fVar2;
  float local_38;
  float local_34;
  CVector3f local_30;
  CVector3f local_24;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float fVar1;
  
  local_24.x = target_pos->x - (this_ptr->base).base.location.position.x;
  local_24.y = target_pos->y - (this_ptr->base).base.location.position.y;
  local_24.z = target_pos->z - (this_ptr->base).base.location.position.z;
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_30,&local_24);
  if (local_30.x < -0.5235988f) {
    local_30.x = -0.5235988f;
  }
  if (1.22173f < local_30.x) {
    local_30.x = 1.22173f;
  }
  local_34 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                       (local_30.y - (this_ptr->base).base.orient.vec.y);
  local_38 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                       (local_30.x - (this_ptr->base).base.orient.vec.x);
  fVar2 = delta_time * this_ptr->rotate_deg_per_sec * (float)0.017453292519444399;
  if (local_34 < -fVar2) {
    local_34 = -fVar2;
  }
  if (fVar2 < local_34) {
    local_34 = fVar2;
  }
  if (local_38 < -fVar2) {
    local_38 = -fVar2;
  }
  if (fVar2 < local_38) {
    local_38 = fVar2;
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
