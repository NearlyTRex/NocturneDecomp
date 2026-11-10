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
  SDamageInfo aSStack_48 [4];
  uint uStack_44;
  uint uStack_18;
  CAnvil *pCStack_14;
  CAnvil *pCStack_10;
  
  iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                    (0x01C38BC0,this_ptr->drop_condition);
  iVar1 = _DAT_01cedef4;
  if (iVar3 != 0) {
    this_ptr->triggered = 1;
    iVar1 = *(int *)(iVar1 * 4 + 0x1cedee4);
    *(uint *)&(this_ptr->base).field_0x20 = *(uint *)(iVar1 + 0x20);
    *(uint *)&(this_ptr->base).field_0x24 = *(uint *)(iVar1 + 0x24);
    *(uint *)&(this_ptr->base).field_0x28 = *(uint *)(iVar1 + 0x28);
    *(uint *)&(this_ptr->base).field_0x2c = *(uint *)(iVar1 + 0x2c);
    *(float *)&(this_ptr->base).field_0x24 =
         this_ptr->drop_height + *(float *)&(this_ptr->base).field_0x24;
  }
  if (this_ptr->triggered != 0) {
    fVar2 = this_ptr->yvel - delta_time * (float)_DAT_005cb314;
    this_ptr->yvel = fVar2;
    iVar1 = _DAT_01cedef4;
    *(float *)&(this_ptr->base).field_0x24 = fVar2 + *(float *)&(this_ptr->base).field_0x24;
    iVar1 = *(int *)(iVar1 * 4 + 0x1cedee4);
    if (*(float *)&(this_ptr->base).field_0x24 < *(float *)(iVar1 + 0x24)) {
      *(uint *)&(this_ptr->base).field_0x24 = *(uint *)(iVar1 + 0x24);
      this_ptr->yvel = 0.0;
    }
    if (*(float *)&(this_ptr->base).field_0x24 <
        *(float *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x24) + (float)_DAT_005cb31c) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_48);
      uStack_44 = 0x461c3f9a;
      uStack_18 = 8;
      pCStack_14 = this_ptr;
      iVar1 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
      pCStack_10 = this_ptr;
      (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x110))(iVar1,aSStack_48);
      return;
    }
  }
  return;
}
