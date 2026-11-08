// Name: FUN_00550260
// Address: 00550260
// Address Range: [[00550260, 0055057c]]
// Convention: unknown
// Signature: void FUN_00550260(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00550260(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_38;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_18;
  
  if (*(int *)(0x01CCF390 + 0x24) != 0) {
    if (*(int *)(0x01CCF390 + 0x228) != 0) {
      local_38 = FUN_005b2420();
    }
    local_28 = 0;
    _DAT_01fe5c1c = 0;
    if (0 < _DAT_01fe55bc) {
      local_30 = 0;
      do {
        iVar3 = *(int *)(local_30 + 0x1fe55c0);
        if (*(int *)(iVar3 + 0x1cb4) != 0) {
          uVar1 = *(uint *)(iVar3 + 0x140);
          FUN_00462820(iVar3,0);
          FUN_00463360();
          if (*(int *)(iVar3 + 0x1cd0) != 0) {
            FUN_0054e3c0(param_1,*(uint *)(iVar3 + 0x140));
            FUN_005545a0(param_1);
            FUN_0054eef0(param_1);
            local_18 = 0;
            iVar4 = param_1;
            if (0 < *(int *)(param_1 + 0x15f6fc)) {
              do {
                iVar5 = 0;
                (**(code **)(*(int *)(*(int *)(iVar4 + 0x15f700) + 0x154) + 0x10))();
                if (0 < *(int *)(param_1 + 0x15acc8)) {
                  do {
                    FUN_00555460(param_1,iVar5);
                    (**(code **)(*(int *)(*(int *)(iVar4 + 0x15f700) + 0x154) + 0x10))();
                    iVar5 = iVar5 + 1;
                    FUN_00555590();
                  } while (iVar5 < *(int *)(param_1 + 0x15acc8));
                }
                FUN_00483e20(DAT_00612560);
                local_18 = local_18 + 1;
                iVar4 = iVar4 + 4;
              } while (local_18 < *(int *)(param_1 + 0x15f6fc));
            }
            FUN_004e5c50();
            FUN_004b5100();
          }
          FUN_00462ad0();
          *(uint *)(iVar3 + 0x140) = uVar1;
        }
        local_30 = local_30 + 4;
        local_28 = local_28 + 1;
      } while (local_28 < _DAT_01fe55bc);
    }
    local_24 = 0;
    if (0 < _DAT_01fe4e38) {
      local_2c = 0;
      do {
        iVar3 = *(int *)(&DAT_01fe4e3c + local_2c);
        if (*(int *)(iVar3 + 0x1cb4) != 0) {
          FUN_00462820(iVar3,1);
          FUN_005545a0(param_1);
          iVar5 = 0;
          iVar4 = param_1;
          _DAT_0152d2a4 = iVar3;
          if (0 < *(int *)(param_1 + 0x15f6fc)) {
            do {
              iVar3 = *(int *)(iVar4 + 0x15f700);
              iVar2 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x10))();
              if (iVar2 == 0) {
                *(byte *)(iVar3 + 0x144) = *(byte *)(iVar3 + 0x144) & 0xfd;
              }
              else {
                *(byte *)(iVar3 + 0x144) = *(byte *)(iVar3 + 0x144) | 0x22;
              }
              iVar5 = iVar5 + 1;
              FUN_00483e20(DAT_00612560);
              iVar4 = iVar4 + 4;
            } while (iVar5 < *(int *)(param_1 + 0x15f6fc));
          }
          FUN_004e5c50();
          FUN_004b5100();
          _DAT_0152d2a4 = 0;
          FUN_00462ad0();
        }
        local_2c = local_2c + 4;
        local_24 = local_24 + 1;
      } while (local_24 < _DAT_01fe4e38);
    }
    if (*(int *)(0x01CCF390 + 0x228) != 0) {
      iVar3 = FUN_005b2420();
      FUN_00445430(PTR_DAT_00611100,"@renderStaticLights : %3.2f ms\n" + 1,
                   ((double)(iVar3 - local_38) * _DAT_005f08c6 * _DAT_005f08ce * _DAT_005f08d6) /
                   (double)*(float *)(0x01CCF390 + 0x294));
      return;
    }
  }
  return;
}
