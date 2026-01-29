// Name: core_trigger.cpp_CTrigger_FUN_005df990
// Address: 005df990
// Address Range: [[005df990, 005df99a]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_CTrigger_FUN_005df990(CTrigger *this_ptr)

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_FUN_005df990(CTrigger *this_ptr)

{
  char cVar1;
  int iVar2;
  CDemonMission *pCVar3;
  int iVar4;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  pCVar3 = g_CDemonMissionPtr;
  (this_ptr->base).unk5 = 0;
  iVar4 = *(int *)(pCVar3->unk1 + 4);
  (this_ptr->base).unk6 = 1;
  iVar2 = *(int *)(this_ptr->unk + 0x1c);
  (this_ptr->base).is_transparent = iVar4;
  if (iVar2 == 5) {
    (this_ptr->base).unk6 = 0;
  }
  if (*(int *)(this_ptr->unk + 0x1c) == 4) {
    (this_ptr->base).unk6 = 0;
  }
  if (*(int *)(this_ptr->unk + 0x1c) == 7) {
    (this_ptr->base).unk6 = 0;
  }
  this_ptr->unk[0x198] = '\0';
  this_ptr->unk[0x199] = '\0';
  this_ptr->unk[0x19a] = '\0';
  this_ptr->unk[0x19b] = '\0';
  this_ptr->unk[0x210] = '\0';
  this_ptr->unk[0x211] = '\0';
  this_ptr->unk[0x212] = '\0';
  this_ptr->unk[0x213] = '\0';
  iVar4 = stricmp(this_ptr->unk + 0xcc,"none");
  if (iVar4 == 0) {
    this_ptr->unk[0xcc] = '\0';
  }
  iVar4 = stricmp(this_ptr->unk + 0x130,"none");
  if (iVar4 == 0) {
    this_ptr->unk[0x130] = '\0';
  }
  cVar1 = this_ptr->unk[0xcc];
  (this_ptr->base).unk7 = 0;
  if ((cVar1 == '\0') && (this_ptr->unk[0x130] == '\0')) {
    (this_ptr->base).unk7 = 1;
    return;
  }
  return;
}
