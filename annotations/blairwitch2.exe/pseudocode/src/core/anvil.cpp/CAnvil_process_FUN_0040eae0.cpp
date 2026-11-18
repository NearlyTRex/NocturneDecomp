// Name: core_anvil.cpp_CAnvil_process_FUN_0040eae0
// Address: 0040eae0
// Address Range: [[0040eae0, 0040ec04]]
// Convention: __cdecl
// Signature: void __cdecl core_anvil_cpp_CAnvil_process_FUN_0040eae0(CAnvil *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_anvil_cpp_CAnvil_process_FUN_0040eae0(CAnvil *this_ptr,float delta_time)

{
  CHero *pCVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  SDamageInfo SStack_48;
  
  iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                    (g_CEventListPtr,this_ptr->drop_condition);
  iVar3 = g_INT_01cedef4;
  if (iVar4 != 0) {
    this_ptr->triggered = 1;
    pCVar1 = g_CHero_PTR_ARRAY_01cedee4[iVar3];
    (this_ptr->base).location.position.x = (pCVar1->base).base.location.position.x;
    (this_ptr->base).location.position.y = (pCVar1->base).base.location.position.y;
    (this_ptr->base).location.position.z = (pCVar1->base).base.location.position.z;
    (this_ptr->base).location.area_id = (pCVar1->base).base.location.area_id;
    (this_ptr->base).location.position.y =
         this_ptr->drop_height + (this_ptr->base).location.position.y;
  }
  if (this_ptr->triggered != 0) {
    fVar2 = this_ptr->yvel - delta_time * (float)32;
    this_ptr->yvel = fVar2;
    iVar3 = g_INT_01cedef4;
    (this_ptr->base).location.position.y = fVar2 + (this_ptr->base).location.position.y;
    if ((this_ptr->base).location.position.y <
        (g_CHero_PTR_ARRAY_01cedee4[iVar3]->base).base.location.position.y) {
      (this_ptr->base).location.position.y =
           (g_CHero_PTR_ARRAY_01cedee4[iVar3]->base).base.location.position.y;
      this_ptr->yvel = 0.0;
    }
    if ((this_ptr->base).location.position.y <
        (g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->base).base.location.position.y +
        (float)6) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_48);
      SStack_48.damage_amount = 9999.9;
      SStack_48.damage_type = DAMAGE_TYPE_CRUSHED;
      SStack_48.attacker = &this_ptr->base;
      SStack_48.wielder = &this_ptr->base;
      (*(((g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->base).base.vtable._uc)->_uc).processDamage)
                (&g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->base,&SStack_48);
      return;
    }
  }
  return;
}
