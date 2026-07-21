// Name: core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_0042aa50
// Address: 0042aa50
// Address Range: [[0042aa50, 0042abc1]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_0042aa50(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_0042aa50(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float local_14;
  
  if ((*(int *)(param_1 + 0x2a84) < 0) || (*(int *)(param_1 + 0x2620) <= *(int *)(param_1 + 0x2a84))
     ) {
    _DAT_01cc4800 = "..\\core\\charactr.cpp";
    _DAT_01cc4804 = 0xfb4;
    FUN_004c8440("CCharacter::chooseNextLayerAction - invalid layerActionIndex");
  }
  if ((float)_DAT_0057a462 <= *(float *)(param_1 + 0x2a88)) {
    if (*(float *)(param_1 + 0x2a88) <= (float)_DAT_0057a46a) {
      return;
    }
    iVar2 = *(int *)(param_1 + 0x2628 + *(int *)(param_1 + 0x2a84) * 0x38);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x2624 + *(int *)(param_1 + 0x2a84) * 0x38);
  }
  if (param_2 != iVar2) {
    local_14 = 999.0;
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x2620)) {
      piVar4 = (int *)(param_1 + 0x2624);
      do {
        if ((piVar4[10] < 0) || (*piVar4 != iVar2)) {
          if ((piVar4[10] < 1) &&
             ((piVar4[1] == iVar2 &&
              (fVar1 = (float)piVar4[0xd] +
                       *(float *)(*piVar4 * 0x50 + param_1 + param_2 * 4 + 0xb64c), fVar1 < local_14
              )))) {
            *(uint *)(param_1 + 0x2a88) = 0x3f800000;
            *(int *)(param_1 + 0x2a84) = iVar3;
            local_14 = fVar1;
          }
        }
        else {
          fVar1 = (float)piVar4[0xd] + *(float *)(param_2 * 4 + 0xb64c + piVar4[1] * 0x50 + param_1)
          ;
          if (fVar1 < local_14) {
            *(uint *)(param_1 + 0x2a88) = 0;
            *(int *)(param_1 + 0x2a84) = iVar3;
            local_14 = fVar1;
          }
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 0xe;
      } while (iVar3 < *(int *)(param_1 + 0x2620));
    }
  }
  return;
}
