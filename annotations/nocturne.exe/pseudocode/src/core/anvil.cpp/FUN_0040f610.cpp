// Name: core_anvil.cpp_FUN_0040f610
// Address: 0040f610
// Address Range: [[0040f610, 0040f734]]
// Convention: unknown
// Signature: void core_anvil_cpp_FUN_0040f610(CDemonActor *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_anvil_cpp_FUN_0040f610(CDemonActor *param_1,float param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  SDamageInfo local_48;
  
  iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                    (0x01C03A10,(char *)&param_1[2].location.area_id);
  iVar1 = _DAT_01cae0e8;
  if (iVar3 != 0) {
    param_1[2].create_event[0x1c] = '\x01';
    param_1[2].create_event[0x1d] = '\0';
    param_1[2].create_event[0x1e] = '\0';
    param_1[2].create_event[0x1f] = '\0';
    iVar1 = *(int *)(iVar1 * 4 + 0x1cae0d8);
    (param_1->location).position.x = *(float *)(iVar1 + 0x20);
    (param_1->location).position.y = *(float *)(iVar1 + 0x24);
    (param_1->location).position.z = *(float *)(iVar1 + 0x28);
    (param_1->location).area_id = *(int *)(iVar1 + 0x2c);
    (param_1->location).position.y =
         *(float *)(param_1[2].create_event + 0x18) + (param_1->location).position.y;
  }
  if (*(int *)(param_1[2].create_event + 0x1c) != 0) {
    fVar2 = *(float *)(param_1[2].create_event + 0x20) - param_2 * (float)32;
    *(float *)(param_1[2].create_event + 0x20) = fVar2;
    iVar1 = _DAT_01cae0e8;
    (param_1->location).position.y = fVar2 + (param_1->location).position.y;
    iVar1 = *(int *)(iVar1 * 4 + 0x1cae0d8);
    if ((param_1->location).position.y < *(float *)(iVar1 + 0x24)) {
      (param_1->location).position.y = *(float *)(iVar1 + 0x24);
      param_1[2].create_event[0x20] = '\0';
      param_1[2].create_event[0x21] = '\0';
      param_1[2].create_event[0x22] = '\0';
      param_1[2].create_event[0x23] = '\0';
    }
    if ((param_1->location).position.y <
        *(float *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x24) + (float)6) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_48);
      local_48.damage_amount = 9999.9;
      local_48.damage_type = DAMAGE_TYPE_CRUSHED;
      local_48.attacker = param_1;
      iVar1 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
      local_48.wielder = param_1;
      (**(code **)(*(int *)(iVar1 + 0x14c) + 0x100))(iVar1,&local_48);
      return;
    }
  }
  return;
}
