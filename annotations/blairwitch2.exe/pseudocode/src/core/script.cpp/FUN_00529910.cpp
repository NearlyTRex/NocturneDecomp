// Name: FUN_00529910
// Address: 00529910
// Address Range: [[00529910, 0052998f]]
// Convention: unknown
// Signature: undefined4 FUN_00529910(int param_1,float param_2,float *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00529910(int param_1,float param_2,float *param_3)

{
  if (param_2 < 0.0) {
    _DAT_01d046a0 = "..\\core\\script.cpp";
    _DAT_01d046a4 = 0x10e5;
    FUN_004e4500("CScript::processTimer - invalidTimeToWait");
  }
  if (*(float *)(param_1 + 0x48) < 0.0) {
    *(float *)(param_1 + 0x48) = param_2;
  }
  if (*(float *)(param_1 + 0x48) <= *param_3) {
    *param_3 = *param_3 - *(float *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x48) = 0;
    return 1;
  }
  *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x48) - *param_3;
  *param_3 = 0.0;
  return 0;
}
