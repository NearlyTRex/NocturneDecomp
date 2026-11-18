// Name: core_trigger.cpp_CTrigger_setup_FUN_005778a0
// Address: 005778a0
// Address Range: [[005778a0, 00577993]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_CTrigger_setup_FUN_005778a0(CTrigger *this_ptr)

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_setup_FUN_005778a0(CTrigger *this_ptr)

{
  char cVar1;
  ETriggerCause EVar2;
  CDemonMission *pCVar3;
  int iVar4;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408a80(&this_ptr->base);
  pCVar3 = g_CDemonMission_PTR_00618170;
  (this_ptr->base).is_renderable = 0;
  iVar4 = pCVar3->is_in_editor;
  (this_ptr->base).collision_disabled = 1;
  EVar2 = this_ptr->trigger_cause;
  (this_ptr->base).is_transparent = iVar4;
  if (EVar2 == TRIGGER_CAUSE_LASER) {
    (this_ptr->base).collision_disabled = 0;
  }
  if (this_ptr->trigger_cause == TRIGGER_CAUSE_BULLET) {
    (this_ptr->base).collision_disabled = 0;
  }
  if (this_ptr->trigger_cause == TRIGGER_CAUSE_DAMAGE) {
    (this_ptr->base).collision_disabled = 0;
  }
  this_ptr->event_flag = 0;
  this_ptr->cached_actor = (CDemonActor *)0x0;
  iVar4 = _stricmp(this_ptr->on_event,"none");
  if (iVar4 == 0) {
    this_ptr->on_event[0] = '\0';
  }
  iVar4 = _stricmp(this_ptr->off_event,"none");
  if (iVar4 == 0) {
    this_ptr->off_event[0] = '\0';
  }
  cVar1 = this_ptr->on_event[0];
  (this_ptr->base).process_disabled = 0;
  if ((cVar1 == '\0') && (this_ptr->off_event[0] == '\0')) {
    (this_ptr->base).process_disabled = 1;
    return;
  }
  return;
}
