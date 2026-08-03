// Name: core_turret.cpp_CTurret_aimAtTarget_FUN_0054a640
// Address: 0054a640
// Address Range: [[0054a640, 0054a7fe]]
// Convention: __cdecl
// Signature: int __cdecl core_turret_cpp_CTurret_aimAtTarget_FUN_0054a640(CTurret *this_ptr,CVector3f *target_pos,float delta_time)

#include "nocturne.h"

int __cdecl core_turret_cpp_CTurret_aimAtTarget_FUN_0054a640(CTurret *this_ptr,CVector3f *target_pos,float delta_time)

{
  float fVar1;
  float local_38;
  float local_34;
  CVector3f local_30;
  CVector3f local_24;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  local_24.x = target_pos->x - (this_ptr->base).base.location.position.x;
  local_24.y = target_pos->y - (this_ptr->base).base.location.position.y;
  local_24.z = target_pos->z - (this_ptr->base).base.location.position.z;
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_30,&local_24);
  if (local_30.x < -0.5235988f) {
    local_30.x = -0.5235988f;
  }
  if (1.22173f < local_30.x) {
    local_30.x = 1.22173f;
  }
  local_34 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                       (local_30.y - (this_ptr->base).base.orient.vec.y);
  local_c = local_34;
  local_c = core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                      (local_30.x - (this_ptr->base).base.orient.vec.x);
  local_10 = delta_time * this_ptr->rotate_deg_per_sec * (float)0.017453292519444399;
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
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000((CDemonActor *)this_ptr);
  if (((float10)0 != ABS((float10)(local_34 < (float)0.001))) &&
     ((float10)0 != ABS((float10)(local_38 < (float)0.001)))) {
    return 1;
  }
  return 0;
}
