// Name: core_turret.cpp_CTurret_aimAtTarget_FUN_005a3350
// Address: 005a3350
// Address Range: [[005a3350, 005a352d]]
// Convention: __cdecl
// Signature: int __cdecl core_turret_cpp_CTurret_aimAtTarget_FUN_005a3350(CTurret *this_ptr,CVector3f *target_pos,float delta_time)

#include "nocturne.h"

int __cdecl core_turret_cpp_CTurret_aimAtTarget_FUN_005a3350(CTurret *this_ptr,CVector3f *target_pos,float delta_time)

{
  float fVar1;
  byte bVar2;
  float afStackY_1020 [1009];
  float local_58;
  float local_54;
  CVector3f local_50;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34 [2];
  CVector3f local_2c;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar2 = 0;
  local_50.x = target_pos->x - (this_ptr->base).base.location.position.x;
  local_50.y = target_pos->y - (this_ptr->base).base.location.position.y;
  local_50.z = target_pos->z - (this_ptr->base).base.location.position.z;
  local_44 = local_50.x;
  local_40 = local_50.y;
  local_3c = local_50.z;
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&local_50,&local_2c);
  local_38 = local_2c.x;
  local_34[(uint)bVar2 * -2] = *(float *)((int)&local_2c + (uint)bVar2 * -8 + 4);
  local_34[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
       *(float *)((int)&local_2c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  if (local_38 < -0.5235988f) {
    local_38 = -0.5235988f;
  }
  if (1.22173f < local_38) {
    local_38 = 1.22173f;
  }
  local_54 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                       (local_34[0] - (this_ptr->base).base.orient.vec.y);
  local_14 = local_54;
  local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                       (local_38 - (this_ptr->base).base.orient.vec.x);
  local_18 = this_ptr->rotate_deg_per_sec * 0.01745329f * delta_time;
  local_1c = -local_18;
  if (local_54 < local_1c) {
    local_54 = local_1c;
  }
  if (local_18 < local_54) {
    local_54 = local_18;
  }
  local_20 = -local_18;
  local_58 = local_14;
  if (local_14 < local_20) {
    local_58 = local_20;
  }
  if (local_18 < local_58) {
    local_58 = local_18;
  }
  fVar1 = (this_ptr->base).base.orient.vec.x;
  (this_ptr->base).base.orient.vec.y = (this_ptr->base).base.orient.vec.y + local_54;
  (this_ptr->base).base.orient.vec.x = fVar1 + local_58;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0((CDemonActor *)this_ptr);
  if (((float10)0 != ABS((float10)(local_54 < (float)0.001))) &&
     ((float10)0 != ABS((float10)(local_58 < (float)0.001)))) {
    return 1;
  }
  return 0;
}
