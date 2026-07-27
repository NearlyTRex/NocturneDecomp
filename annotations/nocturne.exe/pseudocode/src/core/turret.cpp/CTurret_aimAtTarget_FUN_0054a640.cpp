// Name: core_turret.cpp_CTurret_aimAtTarget_FUN_0054a640
// Address: 0054a640
// Address Range: [[0054a640, 0054a7fe]]
// Convention: unknown
// Signature: undefined4 core_turret_cpp_CTurret_aimAtTarget_FUN_0054a640(int param_1,float *param_2,float param_3)

#include "nocturne.h"

uint core_turret_cpp_CTurret_aimAtTarget_FUN_0054a640(int param_1,float *param_2,float param_3)

{
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  local_24 = *param_2 - *(float *)(param_1 + 0x20);
  local_20 = param_2[1] - *(float *)(param_1 + 0x24);
  local_1c = param_2[2] - *(float *)(param_1 + 0x28);
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_30,&local_24);
  if (local_30 < -0.5235988f) {
    local_30 = -0.5235988f;
  }
  if (1.22173f < local_30) {
    local_30 = 1.22173f;
  }
  local_34 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                              (local_2c - *(float *)(param_1 + 0x34));
  local_c = local_34;
  local_c = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                             (local_30 - *(float *)(param_1 + 0x30));
  local_10 = param_3 * *(float *)(param_1 + 0x770) * (float)0.017453292519444399;
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
  *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + local_34;
  *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + local_38;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(param_1);
  if (((float10)0 != ABS((float10)(local_34 < (float)0.001))) &&
     ((float10)0 != ABS((float10)(local_38 < (float)0.001)))) {
    return 1;
  }
  return 0;
}
