// Name: core_anvil.cpp_CAnvil_process_FUN_0040e680
// Address: 0040e680
// Address Range: [[0040e680, 0040e7a4]]
// Convention: __cdecl
// Signature: void __cdecl core_anvil_cpp_CAnvil_process_FUN_0040e680(CAnvil *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_anvil_cpp_CAnvil_process_FUN_0040e680(CAnvil *this_ptr,float delta_time)

{
  int iVar1;
  float fVar2;
  int iVar3;
  SDamageInfo aSStack_48 [4];
  uint uStack_44;
  uint uStack_18;
  CAnvil *pCStack_14;
  CAnvil *pCStack_10;
  
  iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                    (0x01C51D80,this_ptr->drop_condition);
  iVar1 = _DAT_01d06ab4;
  if (iVar3 != 0) {
    this_ptr->triggered = 1;
    iVar1 = *(int *)(iVar1 * 4 + 0x1d06aa4);
    (this_ptr->base).location.position.x = *(float *)(iVar1 + 0x20);
    (this_ptr->base).location.position.y = *(float *)(iVar1 + 0x24);
    (this_ptr->base).location.position.z = *(float *)(iVar1 + 0x28);
    (this_ptr->base).location.area_id = *(int *)(iVar1 + 0x2c);
    (this_ptr->base).location.position.y =
         this_ptr->drop_height + (this_ptr->base).location.position.y;
  }
  if (this_ptr->triggered != 0) {
    fVar2 = this_ptr->yvel - delta_time * (float)_DAT_005d327f;
    this_ptr->yvel = fVar2;
    iVar1 = _DAT_01d06ab4;
    (this_ptr->base).location.position.y = fVar2 + (this_ptr->base).location.position.y;
    iVar1 = *(int *)(iVar1 * 4 + 0x1d06aa4);
    if ((this_ptr->base).location.position.y < *(float *)(iVar1 + 0x24)) {
      (this_ptr->base).location.position.y = *(float *)(iVar1 + 0x24);
      this_ptr->yvel = 0.0;
    }
    if ((this_ptr->base).location.position.y <
        *(float *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x24) + (float)_DAT_005d3287) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_48);
      uStack_44 = 0x461c3f9a;
      uStack_18 = 8;
      pCStack_14 = this_ptr;
      iVar1 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      pCStack_10 = this_ptr;
      (**(code **)(*(int *)(iVar1 + 0x154) + 0x108))(iVar1,aSStack_48);
      return;
    }
  }
  return;
}
