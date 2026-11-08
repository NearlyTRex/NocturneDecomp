// Name: FUN_0054ac20
// Address: 0054ac20
// Address Range: [[0054ac20, 0054ac9f]]
// Convention: unknown
// Signature: undefined4 FUN_0054ac20(int param_1,float param_2,float *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0054ac20(int param_1,float param_2,float *param_3)

{
  if (param_2 < 0.0) {
    _DAT_01d1d400 = "..\\core\\script.cpp";
    _DAT_01d1d404 = 0xf7d;
    FUN_005030e0("CScript::processTimer - invalidTimeToWait");
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
