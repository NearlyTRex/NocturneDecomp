// Name: FUN_00535a80
// Address: 00535a80
// Address Range: [[00535a80, 00535d9c]]
// Convention: unknown
// Signature: void FUN_00535a80(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00535a80(int param_1)

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
  
  if (*(int *)(0x01D2130C + 0x24) != 0) {
    if (*(int *)(0x01D2130C + 0x230) != 0) {
      local_38 = FUN_005806a0();
    }
    local_28 = 0;
    _DAT_0203b37c = 0;
    if (0 < _DAT_0203ad1c) {
      local_30 = 0;
      do {
        iVar3 = *(int *)(local_30 + 0x203ad20);
        if (*(int *)(iVar3 + 0x1cb4) != 0) {
          uVar1 = *(uint *)(iVar3 + 0x140);
          FUN_0045c530(iVar3,0);
          FUN_0045d070();
          if (*(int *)(iVar3 + 0x1cd0) != 0) {
            FUN_00533b80(param_1,*(uint *)(iVar3 + 0x140));
            FUN_00539f30(param_1);
            FUN_005346b0(param_1);
            local_18 = 0;
            iVar4 = param_1;
            if (0 < *(int *)(param_1 + 0x15f6fc)) {
              do {
                iVar5 = 0;
                (**(code **)(*(int *)(*(int *)(iVar4 + 0x15f700) + 0x154) + 0x10))();
                if (0 < *(int *)(param_1 + 0x15acc8)) {
                  do {
                    FUN_0053adf0(param_1,iVar5);
                    (**(code **)(*(int *)(*(int *)(iVar4 + 0x15f700) + 0x154) + 0x10))();
                    iVar5 = iVar5 + 1;
                    FUN_0053af20();
                  } while (iVar5 < *(int *)(param_1 + 0x15acc8));
                }
                FUN_0046d500(DAT_005f2afc);
                local_18 = local_18 + 1;
                iVar4 = iVar4 + 4;
              } while (local_18 < *(int *)(param_1 + 0x15f6fc));
            }
            FUN_004ce5b0();
            FUN_004a1ad0();
          }
          FUN_0045c7e0();
          *(uint *)(iVar3 + 0x140) = uVar1;
        }
        local_30 = local_30 + 4;
        local_28 = local_28 + 1;
      } while (local_28 < _DAT_0203ad1c);
    }
    local_24 = 0;
    if (0 < _DAT_0203a598) {
      local_2c = 0;
      do {
        iVar3 = *(int *)(&DAT_0203a59c + local_2c);
        if (*(int *)(iVar3 + 0x1cb4) != 0) {
          FUN_0045c530(iVar3,1);
          FUN_00539f30(param_1);
          iVar5 = 0;
          iVar4 = param_1;
          _DAT_01549b10 = iVar3;
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
              FUN_0046d500(DAT_005f2afc);
              iVar4 = iVar4 + 4;
            } while (iVar5 < *(int *)(param_1 + 0x15f6fc));
          }
          FUN_004ce5b0();
          FUN_004a1ad0();
          _DAT_01549b10 = 0;
          FUN_0045c7e0();
        }
        local_2c = local_2c + 4;
        local_24 = local_24 + 1;
      } while (local_24 < _DAT_0203a598);
    }
    if (*(int *)(0x01D2130C + 0x230) != 0) {
      iVar3 = FUN_005806a0();
      FUN_00441ff0(PTR_DAT_005f1690,"@renderStaticLights : %3.2f ms\n" + 1,
                   ((double)(iVar3 - local_38) * _DAT_005d055f * _DAT_005d0567 * _DAT_005d056f) /
                   (double)*(float *)(0x01D2130C + 0x314));
      return;
    }
  }
  return;
}
