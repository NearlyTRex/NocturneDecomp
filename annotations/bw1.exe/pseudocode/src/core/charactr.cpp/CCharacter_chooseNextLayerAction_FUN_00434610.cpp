// Name: core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_00434610
// Address: 00434610
// Address Range: [[00434610, 00434781]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_00434610(CCharacter *this_ptr,int layer_action_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_00434610(CCharacter *this_ptr,int layer_action_index)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float local_14;
  
  if ((*(int *)&this_ptr->field_0x2c98 < 0) ||
     (*(int *)&this_ptr->field_0x27c4 <= *(int *)&this_ptr->field_0x2c98)) {
    _DAT_01d1d400 = "..\\core\\charactr.cpp";
    _DAT_01d1d404 = 0x11d8;
    core_main_c_FUN_005030e0("CCharacter::chooseNextLayerAction - invalid layerActionIndex");
  }
  if ((float)_DAT_005d5ee7 <= *(float *)&this_ptr->field_0x2c9c) {
    if (*(float *)&this_ptr->field_0x2c9c <= (float)_DAT_005d5eef) {
      return;
    }
    iVar2 = *(int *)(&this_ptr->field_0x27cc + *(int *)&this_ptr->field_0x2c98 * 0x38);
  }
  else {
    iVar2 = *(int *)(&this_ptr->field_0x27c8 + *(int *)&this_ptr->field_0x2c98 * 0x38);
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
                       *(float *)(&this_ptr->field_0xb9f4 + layer_action_index * 4 + *piVar4 * 0x58)
              , fVar1 < local_14)))) {
            *(uint *)&this_ptr->field_0x2c9c = 0x3f800000;
            *(int *)&this_ptr->field_0x2c98 = iVar3;
            local_14 = fVar1;
          }
        }
        else {
          fVar1 = (float)piVar4[0xd] +
                  *(float *)(&this_ptr->field_0xb9f4 + layer_action_index * 4 + piVar4[1] * 0x58);
          if (fVar1 < local_14) {
            *(uint *)&this_ptr->field_0x2c9c = 0;
            *(int *)&this_ptr->field_0x2c98 = iVar3;
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
