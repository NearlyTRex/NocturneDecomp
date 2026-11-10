// Name: core_trigger.cpp_CTrigger_ctor_FUN_005776f0
// Address: 005776f0
// Address Range: [[005776f0, 00577839]]
// Convention: __cdecl
// Signature: CTrigger * __cdecl core_trigger_cpp_CTrigger_ctor_FUN_005776f0(CTrigger *this_ptr)

#include "nocturne.h"

CTrigger * __cdecl core_trigger_cpp_CTrigger_ctor_FUN_005776f0(CTrigger *this_ptr)

{
  char cVar1;
  CTrigger *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = (CTrigger *)core_actor_cpp_CDemonActor_ctor_FUN_00408790(&this_ptr->base);
  (pCVar2->base).vtable._ub = &g_CTriggerVTable;
  *(uint *)&pCVar2->field_0x2bc = 0x40a00000;
  *(uint *)&pCVar2->field_0x2c0 = 0x41100000;
  *(uint *)&pCVar2->field_0x2c4 = 0x40a00000;
  *(uint *)&pCVar2->field_0x2cc = 0;
  *(uint *)&pCVar2->field_0x2b8 = 0;
  pcVar3 = "nobody";
  pCVar2->on_event[0] = '\0';
  pCVar2->off_event[0] = '\0';
  *(uint *)&pCVar2->field_0x2c8 = 0;
  pcVar4 = pCVar2->actor_name;
  pCVar2->trigger_cause = TRIGGER_CAUSE_HERO;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "CDemonActor";
  pcVar4 = pCVar2->actor_type;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pCVar2->pressure_plate = 0;
  pCVar2->light_min = 0.25;
  pCVar2->light_max = 1.0;
  pCVar2->prev_triggered = 0;
  pCVar2->event_flag = 0;
  pCVar2->laser_type = 1;
  pCVar2->hit_points = 100.0;
  (pCVar2->base).health = 0x96;
  pCVar2->cached_actor = (CDemonActor *)0x0;
  *(uint *)&pCVar2->field_0x45c = 0;
  *(uint *)&pCVar2->field_0x2b4 = 0x47c34ff3;
  *(uint *)&pCVar2->field_0x460 = 1;
  pCVar2->field_0x464 = 0;
  pCVar2->damage_cooldown = 0.0;
  *(CTrigger **)&pCVar2->field_0x458 = pCVar2;
  return pCVar2;
}
