// Name: core_dcamera.cpp_FUN_0044af70
// Address: 0044af70
// Address Range: [[0044af70, 0044b063]]
// Convention: unknown
// Signature: void core_dcamera_cpp_FUN_0044af70(int param_1,float *param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dcamera_cpp_FUN_0044af70(int param_1,float *param_2,float param_3)

{
  float fVar1;
  byte *extraout_ECX;
  float *pfVar2;
  float *extraout_EDX;
  int iVar3;
  float10 fVar4;
  int local_24;
  int local_20;
  byte local_18;
  
  memset((void *)0xb1a288,0,0x12d40);
  if ((param_2 != (float *)0x0) && (local_20 = 0, 0 < *(int *)(param_1 + 0x154))) {
    local_24 = 0;
    do {
      pfVar2 = (float *)(local_24 + 0xa38388);
      iVar3 = 0;
      if (0 < *(int *)(param_1 + 0x150)) {
        do {
          fVar1 = param_2[2] * pfVar2[2] + *param_2 * *pfVar2 + param_2[1] * pfVar2[1];
          if (0.0 < fVar1) {
            fVar4 = (float10)fVar1 * (float10)param_3 * (float10)_DAT_005b9d6e *
                    (float10)_DAT_005b9d76;
            round();
            local_18 = (byte)(int)ROUND(fVar4);
            *extraout_ECX = local_18;
            pfVar2 = extraout_EDX;
          }
          pfVar2 = pfVar2 + 3;
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(param_1 + 0x150));
      }
      local_24 = local_24 + 0xf00;
      local_20 = local_20 + 1;
    } while (local_20 < *(int *)(param_1 + 0x154));
  }
  return;
}
