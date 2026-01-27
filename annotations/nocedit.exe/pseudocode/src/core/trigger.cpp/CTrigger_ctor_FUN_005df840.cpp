// Name: core_trigger.cpp_CTrigger_ctor_FUN_005df840
// Address: 005df840
// Address Range: [[005df840, 005df983]]
// Convention: __cdecl
// Signature: CTrigger * core_trigger.cpp_CTrigger_ctor_FUN_005df840(CTrigger * this_ptr)

#include "nocturne.h"

CTrigger * __cdecl core_trigger_cpp_CTrigger_ctor_FUN_005df840(CTrigger *this_ptr)

{
  char cVar1;
  CTrigger *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = (CTrigger *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  (pCVar2->base).vtable._ub = &g_CTriggerVTable;
  pCVar2->unk[8] = '\0';
  pCVar2->unk[9] = '\0';
  pCVar2->unk[10] = -0x60;
  pCVar2->unk[0xb] = '@';
  pCVar2->unk[0xc] = '\0';
  pCVar2->unk[0xd] = '\0';
  pCVar2->unk[0xe] = '\x10';
  pCVar2->unk[0xf] = 'A';
  pCVar2->unk[0x10] = '\0';
  pCVar2->unk[0x11] = '\0';
  pCVar2->unk[0x12] = -0x60;
  pCVar2->unk[0x13] = '@';
  pCVar2->unk[0x18] = '\0';
  pCVar2->unk[0x19] = '\0';
  pCVar2->unk[0x1a] = '\0';
  pCVar2->unk[0x1b] = '\0';
  pCVar2->unk[4] = '\0';
  pCVar2->unk[5] = '\0';
  pCVar2->unk[6] = '\0';
  pCVar2->unk[7] = '\0';
  pcVar3 = "nobody";
  pCVar2->unk[0xcc] = '\0';
  pCVar2->unk[0x130] = '\0';
  pCVar2->unk[0x14] = '\0';
  pCVar2->unk[0x15] = '\0';
  pCVar2->unk[0x16] = '\0';
  pCVar2->unk[0x17] = '\0';
  pcVar4 = pCVar2->unk + 0x20;
  pCVar2->unk[0x1c] = '\0';
  pCVar2->unk[0x1d] = '\0';
  pCVar2->unk[0x1e] = '\0';
  pCVar2->unk[0x1f] = '\0';
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
  pcVar4 = pCVar2->unk + 0x70;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pCVar2->unk[0xc0] = '\0';
  pCVar2->unk[0xc1] = '\0';
  pCVar2->unk[0xc2] = '\0';
  pCVar2->unk[0xc3] = '\0';
  pCVar2->unk[0xc4] = '\0';
  pCVar2->unk[0xc5] = '\0';
  pCVar2->unk[0xc6] = -0x80;
  pCVar2->unk[199] = '>';
  pCVar2->unk[200] = '\0';
  pCVar2->unk[0xc9] = '\0';
  pCVar2->unk[0xca] = -0x80;
  pCVar2->unk[0xcb] = '?';
  pCVar2->unk[0x194] = '\0';
  pCVar2->unk[0x195] = '\0';
  pCVar2->unk[0x196] = '\0';
  pCVar2->unk[0x197] = '\0';
  pCVar2->unk[0x198] = '\0';
  pCVar2->unk[0x199] = '\0';
  pCVar2->unk[0x19a] = '\0';
  pCVar2->unk[0x19b] = '\0';
  pCVar2->unk[0x19c] = '\x01';
  pCVar2->unk[0x19d] = '\0';
  pCVar2->unk[0x19e] = '\0';
  pCVar2->unk[0x19f] = '\0';
  pCVar2->unk[0x1a0] = '\0';
  pCVar2->unk[0x1a1] = '\0';
  pCVar2->unk[0x1a2] = -0x38;
  pCVar2->unk[0x1a3] = 'B';
  (pCVar2->base).health = 0x96;
  pCVar2->unk[0x210] = '\0';
  pCVar2->unk[0x211] = '\0';
  pCVar2->unk[0x212] = '\0';
  pCVar2->unk[0x213] = '\0';
  pCVar2->unk[0x1a4] = '\0';
  pCVar2->unk[0x1a5] = '\0';
  pCVar2->unk[0x1a6] = '\0';
  pCVar2->unk[0x1a7] = '\0';
  pCVar2->unk[0] = -0xd;
  pCVar2->unk[1] = 'O';
  pCVar2->unk[2] = -0x3d;
  pCVar2->unk[3] = 'G';
  pCVar2->unk[0x1a8] = '\x01';
  pCVar2->unk[0x1a9] = '\0';
  pCVar2->unk[0x1aa] = '\0';
  pCVar2->unk[0x1ab] = '\0';
  pCVar2->unk[0x1ac] = '\0';
  pCVar2->unk[0x214] = '\0';
  pCVar2->unk[0x215] = '\0';
  pCVar2->unk[0x216] = '\0';
  pCVar2->unk[0x217] = '\0';
  return pCVar2;
}
