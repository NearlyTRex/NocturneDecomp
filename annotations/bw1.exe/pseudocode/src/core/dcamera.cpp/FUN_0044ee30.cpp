// Name: core_dcamera.cpp_FUN_0044ee30
// Address: 0044ee30
// Address Range: [[0044ee30, 0044ef23]]
// Convention: unknown
// Signature: void core_dcamera_cpp_FUN_0044ee30(int param_1,float *param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dcamera_cpp_FUN_0044ee30(int param_1,float *param_2,float param_3)

{
  float fVar1;
  byte *puVar2;
  float *pfVar3;
  int iVar4;
  double dVar5;
  int local_24;
  int local_20;
  int local_1c;
  
  memset((void *)0xafd9d8,0,0x12d40);
  if ((param_2 != (float *)0x0) && (local_20 = 0, 0 < *(int *)(param_1 + 0x154))) {
    local_24 = 0;
    local_1c = 0;
    do {
      puVar2 = (byte *)(local_1c + 0xafd9d8);
      pfVar3 = (float *)(local_24 + 0xa1bad8);
      iVar4 = 0;
      if (0 < *(int *)(param_1 + 0x150)) {
        do {
          fVar1 = param_2[2] * pfVar3[2] + *param_2 * *pfVar3 + param_2[1] * pfVar3[1];
          if (0.0 < fVar1) {
            dVar5 = round
                              ((double)(fVar1 * param_3 * (float)_DAT_005d7707 *
                                       (float)_DAT_005d770f));
            local_1c = (int)ROUND(dVar5);
            *puVar2 = (byte)local_1c;
          }
          pfVar3 = pfVar3 + 3;
          iVar4 = iVar4 + 1;
          puVar2 = puVar2 + 1;
        } while (iVar4 < *(int *)(param_1 + 0x150));
      }
      local_24 = local_24 + 0xf00;
      local_1c = local_1c + 0x140;
      local_20 = local_20 + 1;
    } while (local_20 < *(int *)(param_1 + 0x154));
  }
  return;
}
