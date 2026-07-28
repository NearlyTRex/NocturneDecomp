// Name: core_trigger.cpp_CTrigger_setup_FUN_00547a00
// Address: 00547a00
// Address Range: [[00547a00, 00547af0]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_CTrigger_setup_FUN_00547a00(CTrigger *this_ptr)

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_setup_FUN_00547a00(CTrigger *this_ptr)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(&this_ptr->base);
  iVar3 = 0x01CC9450;
  (this_ptr->base).is_renderable = 0;
  iVar3 = *(int *)(iVar3 + 4);
  (this_ptr->base).collision_disabled = 1;
  iVar2 = this_ptr->hero_triggers_me;
  (this_ptr->base).is_transparent = iVar3;
  if (iVar2 == 5) {
    (this_ptr->base).collision_disabled = 0;
  }
  if (this_ptr->hero_triggers_me == 4) {
    (this_ptr->base).collision_disabled = 0;
  }
  if (this_ptr->hero_triggers_me == 7) {
    (this_ptr->base).collision_disabled = 0;
  }
  this_ptr->event_flag = 0;
  this_ptr->cached_actor = (CDemonActor *)0x0;
  iVar3 = _stricmp(this_ptr->on_event,"none");
  if (iVar3 == 0) {
    this_ptr->on_event[0] = '\0';
  }
  iVar3 = _stricmp(this_ptr->off_event,"none");
  if (iVar3 == 0) {
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
