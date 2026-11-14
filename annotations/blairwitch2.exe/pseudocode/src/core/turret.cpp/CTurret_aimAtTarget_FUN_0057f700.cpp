// Name: core_turret.cpp_CTurret_aimAtTarget_FUN_0057f700
// Address: 0057f700
// Address Range: [[0057f700, 0057f8dd]]
// Convention: __cdecl
// Signature: int __cdecl core_turret_cpp_CTurret_aimAtTarget_FUN_0057f700(CTurret *this_ptr,CVector3f *target_pos,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_turret_cpp_CTurret_aimAtTarget_FUN_0057f700(CTurret *this_ptr,CVector3f *target_pos,float delta_time)

{
  float fVar1;
  byte bVar2;
  float afStackY_1020 [1009];
  float local_58;
  float local_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_2c;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar2 = 0;
  local_50 = target_pos->x - (this_ptr->base).base.location.position.x;
  fStack_4c = target_pos->y - (this_ptr->base).base.location.position.y;
  fStack_48 = target_pos->z - (this_ptr->base).base.location.position.z;
  local_44 = local_50;
  local_40 = fStack_4c;
  local_3c = fStack_48;
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&stack0xffffffb0);
  local_38 = local_2c;
  (&stack0xffffffcc)[(uint)bVar2 * 0xfffffffe] =
       (float)*(uint *)(&stack0xffffffd8 + (uint)bVar2 * -8);
  *(uint *)(&stack0xffffffd0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffdc + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  if (local_38 < 0xBF060A92) {
    local_38 = 0xBF060A92;
  }
  if (0x3F9C61AA < local_38) {
    local_38 = 0x3F9C61AA;
  }
  local_54 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                       (local_34 - (this_ptr->base).base.orient.vec.y);
  local_14 = local_54;
  local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                       (local_38 - (this_ptr->base).base.orient.vec.x);
  local_18 = this_ptr->rotate_deg_per_sec * _DAT_005ed810 * delta_time;
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
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0((CDemonActor *)this_ptr);
  if (((float10)0 != ABS((float10)(local_54 < (float)_DAT_005ed814))) &&
     ((float10)0 != ABS((float10)(local_58 < (float)_DAT_005ed814)))) {
    return 1;
  }
  return 0;
}
