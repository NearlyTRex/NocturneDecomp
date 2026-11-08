// Name: FUN_00433ae0
// Address: 00433ae0
// Address Range: [[00433ae0, 00433c57]]
// Convention: unknown
// Signature: void FUN_00433ae0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00433ae0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float local_14;
  
  if ((*(int *)(param_1 + 0x2f00) < 0) || (*(int *)(param_1 + 0x27c4) <= *(int *)(param_1 + 0x2f00))
     ) {
    _DAT_01d71de0 = "..\\core\\charactr.cpp";
    _DAT_01d71de4 = 0x131d;
    FUN_004e4330("CCharacter::chooseNextLayerAction - invalid layerActionIndex");
  }
  if ((float)_DAT_005b882e <= *(float *)(param_1 + 0x2f04)) {
    if (*(float *)(param_1 + 0x2f04) <= (float)_DAT_005b8836) {
      return;
    }
    iVar2 = *(int *)(param_1 + 0x27cc + *(int *)(param_1 + 0x2f00) * 0x38);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x27c8 + *(int *)(param_1 + 0x2f00) * 0x38);
  }
  if (param_2 != iVar2) {
    local_14 = 999.0;
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x27c4)) {
      piVar4 = (int *)(param_1 + 0x27c8);
      do {
        if ((piVar4[10] < 0) || (*piVar4 != iVar2)) {
          if ((piVar4[10] < 1) &&
             ((piVar4[1] == iVar2 &&
              (fVar1 = (float)piVar4[0xd] +
                       *(float *)(*piVar4 * 0x84 + param_1 + param_2 * 4 + 0xbc74), fVar1 < local_14
              )))) {
            *(uint *)(param_1 + 0x2f04) = 0x3f800000;
            *(int *)(param_1 + 0x2f00) = iVar3;
            local_14 = fVar1;
          }
        }
        else {
          fVar1 = (float)piVar4[0xd] + *(float *)(param_2 * 4 + 0xbc74 + piVar4[1] * 0x84 + param_1)
          ;
          if (fVar1 < local_14) {
            *(uint *)(param_1 + 0x2f04) = 0;
            *(int *)(param_1 + 0x2f00) = iVar3;
            local_14 = fVar1;
          }
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 0xe;
      } while (iVar3 < *(int *)(param_1 + 0x27c4));
    }
  }
  return;
}
