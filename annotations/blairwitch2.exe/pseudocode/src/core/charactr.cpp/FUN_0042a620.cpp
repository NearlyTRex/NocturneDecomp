// Name: FUN_0042a620
// Address: 0042a620
// Address Range: [[0042a620, 0042a791]]
// Convention: unknown
// Signature: void FUN_0042a620(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042a620(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float local_14;
  
  if ((*(int *)(param_1 + 0x2d04) < 0) || (*(int *)(param_1 + 0x2830) <= *(int *)(param_1 + 0x2d04))
     ) {
    _DAT_01d046a0 = "..\\core\\charactr.cpp";
    _DAT_01d046a4 = 0x11fe;
    FUN_004e4500("CCharacter::chooseNextLayerAction - invalid layerActionIndex");
  }
  if ((float)_DAT_005cd22e <= *(float *)(param_1 + 0x2d08)) {
    if (*(float *)(param_1 + 0x2d08) <= (float)_DAT_005cd236) {
      return;
    }
    iVar2 = *(int *)(param_1 + 0x2838 + *(int *)(param_1 + 0x2d04) * 0x38);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x2834 + *(int *)(param_1 + 0x2d04) * 0x38);
  }
  if (param_2 != iVar2) {
    local_14 = 999.0;
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x2830)) {
      piVar4 = (int *)(param_1 + 0x2834);
      do {
        if ((piVar4[10] < 0) || (*piVar4 != iVar2)) {
          if ((piVar4[10] < 1) &&
             ((piVar4[1] == iVar2 &&
              (fVar1 = (float)piVar4[0xd] +
                       *(float *)(*piVar4 * 0x58 + param_1 + param_2 * 4 + 0x10230),
              fVar1 < local_14)))) {
            *(uint *)(param_1 + 0x2d08) = 0x3f800000;
            *(int *)(param_1 + 0x2d04) = iVar3;
            local_14 = fVar1;
          }
        }
        else {
          fVar1 = (float)piVar4[0xd] +
                  *(float *)(param_2 * 4 + 0x10230 + piVar4[1] * 0x58 + param_1);
          if (fVar1 < local_14) {
            *(uint *)(param_1 + 0x2d08) = 0;
            *(int *)(param_1 + 0x2d04) = iVar3;
            local_14 = fVar1;
          }
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 0xe;
      } while (iVar3 < *(int *)(param_1 + 0x2830));
    }
  }
  return;
}
