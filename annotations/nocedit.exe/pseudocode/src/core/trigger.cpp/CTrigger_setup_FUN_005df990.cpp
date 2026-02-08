// Name: core_trigger.cpp_CTrigger_setup_FUN_005df990
// Address: 005df990
// Address Range: [[005df990, 005df99a]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_CTrigger_setup_FUN_005df990(CTrigger *this_ptr)

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_setup_FUN_005df990(CTrigger *this_ptr)

{
  char cVar1;
  int iVar2;
  CDemonMission *pCVar3;
  int iVar4;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  pCVar3 = g_CDemonMissionPtr;
  (this_ptr->base).is_renderable = 0;
  iVar4 = pCVar3->is_in_editor;
  (this_ptr->base).unk6 = 1;
  iVar2 = this_ptr->hero_triggers_me;
  (this_ptr->base).is_transparent = iVar4;
  if (iVar2 == 5) {
    (this_ptr->base).unk6 = 0;
  }
  if (this_ptr->hero_triggers_me == 4) {
    (this_ptr->base).unk6 = 0;
  }
  if (this_ptr->hero_triggers_me == 7) {
    (this_ptr->base).unk6 = 0;
  }
  this_ptr->unk2[4] = '\0';
  this_ptr->unk2[5] = '\0';
  this_ptr->unk2[6] = '\0';
  this_ptr->unk2[7] = '\0';
  this_ptr->unk4[0] = '\0';
  this_ptr->unk4[1] = '\0';
  this_ptr->unk4[2] = '\0';
  this_ptr->unk4[3] = '\0';
  iVar4 = stricmp(this_ptr->on_event,"none");
  if (iVar4 == 0) {
    this_ptr->on_event[0] = '\0';
  }
  iVar4 = stricmp(this_ptr->off_event,"none");
  if (iVar4 == 0) {
    this_ptr->off_event[0] = '\0';
  }
  cVar1 = this_ptr->on_event[0];
  (this_ptr->base).unk7 = 0.0;
  if ((cVar1 == '\0') && (this_ptr->off_event[0] == '\0')) {
    (this_ptr->base).unk7 = 1.4013e-45;
    return;
  }
  return;
}
