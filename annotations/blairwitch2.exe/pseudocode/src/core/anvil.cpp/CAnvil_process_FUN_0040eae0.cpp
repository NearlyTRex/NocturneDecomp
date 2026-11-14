// Name: core_anvil.cpp_CAnvil_process_FUN_0040eae0
// Address: 0040eae0
// Address Range: [[0040eae0, 0040ec04]]
// Convention: __cdecl
// Signature: void __cdecl core_anvil_cpp_CAnvil_process_FUN_0040eae0(CAnvil *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_anvil_cpp_CAnvil_process_FUN_0040eae0(CAnvil *this_ptr,float delta_time)

{
  int iVar1;
  float fVar2;
  int iVar3;
  SDamageInfo SStack_48;
  
  iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                    (0x01C38BC0,this_ptr->drop_condition);
  iVar1 = _DAT_01cedef4;
  if (iVar3 != 0) {
    this_ptr->triggered = 1;
    iVar1 = *(int *)(iVar1 * 4 + 0x1cedee4);
    (this_ptr->base).location.position.x = *(float *)(iVar1 + 0x20);
    (this_ptr->base).location.position.y = *(float *)(iVar1 + 0x24);
    (this_ptr->base).location.position.z = *(float *)(iVar1 + 0x28);
    (this_ptr->base).location.area_id = *(int *)(iVar1 + 0x2c);
    (this_ptr->base).location.position.y =
         this_ptr->drop_height + (this_ptr->base).location.position.y;
  }
  if (this_ptr->triggered != 0) {
    fVar2 = this_ptr->yvel - delta_time * (float)_DAT_005cb314;
    this_ptr->yvel = fVar2;
    iVar1 = _DAT_01cedef4;
    (this_ptr->base).location.position.y = fVar2 + (this_ptr->base).location.position.y;
    iVar1 = *(int *)(iVar1 * 4 + 0x1cedee4);
    if ((this_ptr->base).location.position.y < *(float *)(iVar1 + 0x24)) {
      (this_ptr->base).location.position.y = *(float *)(iVar1 + 0x24);
      this_ptr->yvel = 0.0;
    }
    if ((this_ptr->base).location.position.y <
        *(float *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x24) + (float)_DAT_005cb31c) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_48);
      SStack_48.damage_amount = 9999.9;
      SStack_48.damage_type = DAMAGE_TYPE_CRUSHED;
      SStack_48.attacker = &this_ptr->base;
      iVar1 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
      SStack_48.wielder = &this_ptr->base;
      (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x110))(iVar1,&SStack_48);
      return;
    }
  }
  return;
}
