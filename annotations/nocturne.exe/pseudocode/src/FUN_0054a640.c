// Name: FUN_0054a640
// Address: 0054a640
// Address Range: [[0054a640, 0054a7fe]]
// Convention: unknown
// Signature: undefined4 FUN_0054a640(int param_1,float *param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0054a640(int param_1,float *param_2,float param_3)

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
  FUN_0054e4a0(&local_30,&local_24);
  if (local_30 < 0xBF060A92) {
    local_30 = 0xBF060A92;
  }
  if (0x3F9C61AA < local_30) {
    local_30 = 0x3F9C61AA;
  }
  local_34 = (float)FUN_0040df00(local_2c - *(float *)(param_1 + 0x34));
  local_c = local_34;
  local_c = (float)FUN_0040df00(local_30 - *(float *)(param_1 + 0x30));
  local_10 = param_3 * *(float *)(param_1 + 0x770) * (float)_DAT_00596ea5;
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
  FUN_0040a000(param_1);
  if (((float10)0 != ABS((float10)(local_34 < (float)_DAT_00596ead))) &&
     ((float10)0 != ABS((float10)(local_38 < (float)_DAT_00596ead)))) {
    return 1;
  }
  return 0;
}
