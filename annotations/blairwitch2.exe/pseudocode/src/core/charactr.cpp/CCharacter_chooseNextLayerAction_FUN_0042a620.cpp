// Name: core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_0042a620
// Address: 0042a620
// Address Range: [[0042a620, 0042a791]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_0042a620(CCharacter *this_ptr,int layer_action_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_0042a620(CCharacter *this_ptr,int layer_action_index)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float local_14;
  
  if ((*(int *)&this_ptr->field_0x2d04 < 0) ||
     (*(int *)&this_ptr->field_0x2830 <= *(int *)&this_ptr->field_0x2d04)) {
    _DAT_01d046a0 = "..\\core\\charactr.cpp";
    _DAT_01d046a4 = 0x11fe;
    core_main_c_FUN_004e4500("CCharacter::chooseNextLayerAction - invalid layerActionIndex");
  }
  if ((float)_DAT_005cd22e <= *(float *)&this_ptr->field_0x2d08) {
    if (*(float *)&this_ptr->field_0x2d08 <= (float)_DAT_005cd236) {
      return;
    }
    iVar2 = *(int *)(&this_ptr->field_0x2838 + *(int *)&this_ptr->field_0x2d04 * 0x38);
  }
  else {
    iVar2 = *(int *)(&this_ptr->field_0x2834 + *(int *)&this_ptr->field_0x2d04 * 0x38);
  }
  if (layer_action_index != iVar2) {
    local_14 = 999.0;
    iVar3 = 0;
    if (0 < *(int *)&this_ptr->field_0x2830) {
      piVar4 = (int *)&this_ptr->field_0x2834;
      do {
        if ((piVar4[10] < 0) || (*piVar4 != iVar2)) {
          if ((piVar4[10] < 1) &&
             ((piVar4[1] == iVar2 &&
              (fVar1 = (float)piVar4[0xd] +
                       *(float *)(&this_ptr->field_0x10230 + layer_action_index * 4 + *piVar4 * 0x58
                                 ), fVar1 < local_14)))) {
            *(uint *)&this_ptr->field_0x2d08 = 0x3f800000;
            *(int *)&this_ptr->field_0x2d04 = iVar3;
            local_14 = fVar1;
          }
        }
        else {
          fVar1 = (float)piVar4[0xd] +
                  *(float *)(&this_ptr->field_0x10230 + layer_action_index * 4 + piVar4[1] * 0x58);
          if (fVar1 < local_14) {
            *(uint *)&this_ptr->field_0x2d08 = 0;
            *(int *)&this_ptr->field_0x2d04 = iVar3;
            local_14 = fVar1;
          }
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 0xe;
      } while (iVar3 < *(int *)&this_ptr->field_0x2830);
    }
  }
  return;
}
