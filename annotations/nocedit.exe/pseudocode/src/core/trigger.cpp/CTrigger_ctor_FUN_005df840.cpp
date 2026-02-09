// Name: core_trigger.cpp_CTrigger_ctor_FUN_005df840
// Address: 005df840
// Address Range: [[005df840, 005df983]]
// Convention: __cdecl
// Signature: CTrigger * __cdecl core_trigger_cpp_CTrigger_ctor_FUN_005df840(CTrigger *this_ptr)

#include "nocturne.h"

CTrigger * __cdecl core_trigger_cpp_CTrigger_ctor_FUN_005df840(CTrigger *this_ptr)

{
  char cVar1;
  CTrigger *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = (CTrigger *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  (pCVar2->base).vtable._ub = &g_CTriggerVTable;
  (pCVar2->trigger_size).x = 5.0;
  (pCVar2->trigger_size).y = 9.0;
  (pCVar2->trigger_size).z = 5.0;
  pCVar2->shape = 0;
  pCVar2->event_type = 0;
  pcVar3 = "nobody";
  pCVar2->on_event[0] = '\0';
  pCVar2->off_event[0] = '\0';
  pCVar2->trigger_state = 0;
  pcVar4 = pCVar2->actor_name;
  pCVar2->hero_triggers_me = 0;
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
  pCVar2->unk2[0] = '\0';
  pCVar2->unk2[1] = '\0';
  pCVar2->unk2[2] = '\0';
  pCVar2->unk2[3] = '\0';
  pCVar2->unk2[4] = '\0';
  pCVar2->unk2[5] = '\0';
  pCVar2->unk2[6] = '\0';
  pCVar2->unk2[7] = '\0';
  pCVar2->laser_type = 1;
  pCVar2->hit_points = 100.0;
  (pCVar2->base).health = 0x96;
  pCVar2->unk4[0] = '\0';
  pCVar2->unk4[1] = '\0';
  pCVar2->unk4[2] = '\0';
  pCVar2->unk4[3] = '\0';
  pCVar2->unk3 = 0;
  pCVar2->test_radius = 99999.9;
  pCVar2->auto_aim_at_me = 1;
  pCVar2->damage_actor_name_wildcard_name[0] = '\0';
  pCVar2->unk4[4] = '\0';
  pCVar2->unk4[5] = '\0';
  pCVar2->unk4[6] = '\0';
  pCVar2->unk4[7] = '\0';
  return pCVar2;
}
