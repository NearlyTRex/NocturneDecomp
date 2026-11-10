// Name: core_trigger.cpp_CTrigger_setup_FUN_005778a0
// Address: 005778a0
// Address Range: [[005778a0, 00577993]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_CTrigger_setup_FUN_005778a0(CTrigger *this_ptr)

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_setup_FUN_005778a0(CTrigger *this_ptr)

{
  char cVar1;
  uint uVar2;
  ETriggerCause EVar3;
  int iVar4;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408a80(&this_ptr->base);
  iVar4 = 0x01D182F0;
  *(uint *)&(this_ptr->base).field_0xf8 = 0;
  uVar2 = *(uint *)(iVar4 + 0x1008);
  *(uint *)&(this_ptr->base).field_0x100 = 1;
  EVar3 = this_ptr->trigger_cause;
  *(uint *)&(this_ptr->base).field_0xfc = uVar2;
  if (EVar3 == TRIGGER_CAUSE_LASER) {
    *(uint *)&(this_ptr->base).field_0x100 = 0;
  }
  if (this_ptr->trigger_cause == TRIGGER_CAUSE_BULLET) {
    *(uint *)&(this_ptr->base).field_0x100 = 0;
  }
  if (this_ptr->trigger_cause == TRIGGER_CAUSE_DAMAGE) {
    *(uint *)&(this_ptr->base).field_0x100 = 0;
  }
  this_ptr->event_flag = 0;
  this_ptr->cached_actor = (CDemonActor *)0x0;
  iVar4 = _stricmp(this_ptr->on_event,(char *)0x5ecd76);
  if (iVar4 == 0) {
    this_ptr->on_event[0] = '\0';
  }
  iVar4 = _stricmp(this_ptr->off_event,(char *)0x5ecd7b);
  if (iVar4 == 0) {
    this_ptr->off_event[0] = '\0';
  }
  cVar1 = this_ptr->on_event[0];
  *(uint *)&(this_ptr->base).field_0x104 = 0;
  if ((cVar1 == '\0') && (this_ptr->off_event[0] == '\0')) {
    *(uint *)&(this_ptr->base).field_0x104 = 1;
    return;
  }
  return;
}
