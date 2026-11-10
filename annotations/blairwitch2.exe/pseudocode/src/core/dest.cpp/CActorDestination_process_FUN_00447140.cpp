// Name: core_dest.cpp_CActorDestination_process_FUN_00447140
// Address: 00447140
// Address Range: [[00447140, 00447345]]
// Convention: __cdecl
// Signature: void __cdecl core_dest_cpp_CActorDestination_process_FUN_00447140(CActorDestination *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dest_cpp_CActorDestination_process_FUN_00447140(CActorDestination *this_ptr,float delta_time)

{
  CDemonActor *pCVar1;
  int iVar2;
  byte bVar3;
  float afStackY_1034 [1013];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  CDemonActor *pCStack_1c;
  CDemonActor *pCStack_18;
  
  bVar3 = 0;
  if ((this_ptr->needs_actor_search != 0) &&
     (pCVar1 = this_ptr->dest_actor, pCVar1 == (CDemonActor *)0x0)) {
    pCStack_1c = pCVar1;
    for (pCStack_18 = pCVar1; (int)pCStack_18 < g_CDemonSetPtr->actor_count;
        pCStack_18 = (CDemonActor *)(pCStack_18->actor_name + 1)) {
      pCVar1 = *(CDemonActor **)(&pCStack_1c[0x7b3].field_0x188 + (int)g_CDemonSetPtr->cameras);
      fStack_34 = *(float *)&(this_ptr->base).field_0x20 - *(float *)&pCVar1->field_0x20;
      fStack_30 = *(float *)&(this_ptr->base).field_0x24 - *(float *)&pCVar1->field_0x24;
      fStack_2c = *(float *)&(this_ptr->base).field_0x28 - *(float *)&pCVar1->field_0x28;
      fStack_4c = fStack_34;
      (&stack0xffffffb8)[(uint)bVar3 * 0xfffffffe] =
           (float)*(uint *)((int)&stack0xffffffd0 + (uint)bVar3 * -8);
      *(uint *)((int)&stack0xffffffbc + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)((int)&stack0xffffffd4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      if ((SQRT(fStack_44 * fStack_44 + fStack_4c * fStack_4c + fStack_48 * fStack_48) <
           (float)_DAT_005cea62) &&
         (iVar2 = core_dest_cpp_CActorDestination_acceptsActor_FUN_004473f0(this_ptr,pCVar1),
         iVar2 != 0)) break;
      pCStack_1c = (CDemonActor *)(pCStack_1c->actor_name + 4);
    }
  }
  pCVar1 = this_ptr->dest_actor;
  if (pCVar1 != (CDemonActor *)0x0) {
    fStack_28 = *(float *)&pCVar1->field_0x20 - *(float *)&(this_ptr->base).field_0x20;
    fStack_24 = *(float *)&pCVar1->field_0x24 - *(float *)&(this_ptr->base).field_0x24;
    fStack_20 = *(float *)&pCVar1->field_0x28 - *(float *)&(this_ptr->base).field_0x28;
    fStack_40 = fStack_28;
    (&stack0xffffffc4)[(uint)bVar3 * 0xfffffffe] =
         (float)*(uint *)((int)&stack0xffffffdc + (uint)bVar3 * -8);
    *(uint *)((int)&stack0xffffffc8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xffffffe0 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    if (&stack0xffffffa8 != &stack0xffffffc0) {
      fStack_58 = fStack_40;
      fStack_54 = fStack_3c;
      fStack_50 = fStack_38;
    }
    if ((((float)_DAT_005cea5a <= ABS(fStack_58)) || ((float)_DAT_005cea5a <= ABS(fStack_54))) ||
       ((float)_DAT_005cea5a <= ABS(fStack_50))) {
      this_ptr->triggered = 0;
      this_ptr->needs_actor_search = 0;
      return;
    }
    if ((this_ptr->persistent_event_flag != 0) ||
       ((this_ptr->triggered == 0 && (this_ptr->needs_actor_search == 0)))) {
      core_event_cpp_CEventList_executeCommands_FUN_004894f0(0x01C38BC0,this_ptr->what_event);
    }
    this_ptr->triggered = 1;
  }
  this_ptr->needs_actor_search = 0;
  return;
}
