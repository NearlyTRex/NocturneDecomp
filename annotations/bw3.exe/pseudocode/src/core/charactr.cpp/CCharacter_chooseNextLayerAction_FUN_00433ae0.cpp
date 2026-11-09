// Name: core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_00433ae0
// Address: 00433ae0
// Address Range: [[00433ae0, 00433c57]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_00433ae0(CCharacter *this_ptr,int layer_action_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_00433ae0(CCharacter *this_ptr,int layer_action_index)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float local_14;
  
  if ((*(int *)&this_ptr->field_0x2f00 < 0) ||
     (*(int *)&this_ptr->field_0x27c4 <= *(int *)&this_ptr->field_0x2f00)) {
    _DAT_01d71de0 = "..\\core\\charactr.cpp";
    _DAT_01d71de4 = 0x131d;
    core_main_c_FUN_004e4330("CCharacter::chooseNextLayerAction - invalid layerActionIndex");
  }
  if ((float)_DAT_005b882e <= *(float *)&this_ptr->field_0x2f04) {
    if (*(float *)&this_ptr->field_0x2f04 <= (float)_DAT_005b8836) {
      return;
    }
    iVar2 = *(int *)(&this_ptr->field_0x27cc + *(int *)&this_ptr->field_0x2f00 * 0x38);
  }
  else {
    iVar2 = *(int *)(&this_ptr->field_0x27c8 + *(int *)&this_ptr->field_0x2f00 * 0x38);
  }
  if (layer_action_index != iVar2) {
    local_14 = 999.0;
    iVar3 = 0;
    if (0 < *(int *)&this_ptr->field_0x27c4) {
      piVar4 = (int *)&this_ptr->field_0x27c8;
      do {
        if ((piVar4[10] < 0) || (*piVar4 != iVar2)) {
          if ((piVar4[10] < 1) &&
             ((piVar4[1] == iVar2 &&
              (fVar1 = (float)piVar4[0xd] +
                       *(float *)(&this_ptr->field_0xbc74 + layer_action_index * 4 + *piVar4 * 0x84)
              , fVar1 < local_14)))) {
            *(uint *)&this_ptr->field_0x2f04 = 0x3f800000;
            *(int *)&this_ptr->field_0x2f00 = iVar3;
            local_14 = fVar1;
          }
        }
        else {
          fVar1 = (float)piVar4[0xd] +
                  *(float *)(&this_ptr->field_0xbc74 + layer_action_index * 4 + piVar4[1] * 0x84);
          if (fVar1 < local_14) {
            *(uint *)&this_ptr->field_0x2f04 = 0;
            *(int *)&this_ptr->field_0x2f00 = iVar3;
            local_14 = fVar1;
          }
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 0xe;
      } while (iVar3 < *(int *)&this_ptr->field_0x27c4);
    }
  }
  return;
}
