// Name: core_anvil.cpp_CAnvil_process_FUN_0040f610
// Address: 0040f610
// Address Range: [[0040f610, 0040f734]]
// Convention: __cdecl
// Signature: void __cdecl core_anvil_cpp_CAnvil_process_FUN_0040f610(CAnvil *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_anvil_cpp_CAnvil_process_FUN_0040f610(CAnvil *this_ptr,float delta_time)

{
  int iVar1;
  float fVar2;
  int iVar3;
  SDamageInfo local_48;
  
  iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                    (0x01C03A10,this_ptr->drop_condition);
  iVar1 = _DAT_01cae0e8;
  if (iVar3 != 0) {
    this_ptr->triggered = 1;
    iVar1 = *(int *)(iVar1 * 4 + 0x1cae0d8);
    (this_ptr->base).location.position.x = *(float *)(iVar1 + 0x20);
    (this_ptr->base).location.position.y = *(float *)(iVar1 + 0x24);
    (this_ptr->base).location.position.z = *(float *)(iVar1 + 0x28);
    (this_ptr->base).location.area_id = *(int *)(iVar1 + 0x2c);
    (this_ptr->base).location.position.y =
         this_ptr->drop_height + (this_ptr->base).location.position.y;
  }
  if (this_ptr->triggered != 0) {
    fVar2 = this_ptr->yvel - delta_time * (float)32;
    this_ptr->yvel = fVar2;
    iVar1 = _DAT_01cae0e8;
    (this_ptr->base).location.position.y = fVar2 + (this_ptr->base).location.position.y;
    iVar1 = *(int *)(iVar1 * 4 + 0x1cae0d8);
    if ((this_ptr->base).location.position.y < *(float *)(iVar1 + 0x24)) {
      (this_ptr->base).location.position.y = *(float *)(iVar1 + 0x24);
      this_ptr->yvel = 0.0;
    }
    if ((this_ptr->base).location.position.y <
        *(float *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x24) + (float)6) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_48);
      local_48.damage_amount = 9999.9;
      local_48.damage_type = DAMAGE_TYPE_CRUSHED;
      local_48.attacker = &this_ptr->base;
      iVar1 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
      local_48.wielder = &this_ptr->base;
      (**(code **)(*(int *)(iVar1 + 0x14c) + 0x100))(iVar1,&local_48);
      return;
    }
  }
  return;
}
