// Name: core_trigger.cpp_CTrigger_ctor_FUN_0056dfa0
// Address: 0056dfa0
// Address Range: [[0056dfa0, 0056e0e9]]
// Convention: __cdecl
// Signature: CTrigger * __cdecl core_trigger_cpp_CTrigger_ctor_FUN_0056dfa0(CTrigger *this_ptr)

#include "nocturne.h"

CTrigger * __cdecl core_trigger_cpp_CTrigger_ctor_FUN_0056dfa0(CTrigger *this_ptr)

{
  char cVar1;
  CTrigger *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = (CTrigger *)core_actor_cpp_CDemonActor_ctor_FUN_00408600((CDemonActor *)this_ptr);
  *(byte **)&pCVar2->field_0x154 = &g_CTriggerVTable;
  *(uint *)&pCVar2->field_0x160 = 0x40a00000;
  *(uint *)&pCVar2->field_0x164 = 0x41100000;
  *(uint *)&pCVar2->field_0x168 = 0x40a00000;
  *(uint *)&pCVar2->field_0x170 = 0;
  *(uint *)&pCVar2->field_0x15c = 0;
  pcVar3 = "nobody";
  pCVar2->field_0x224 = 0;
  pCVar2->field_0x288 = 0;
  *(uint *)&pCVar2->field_0x16c = 0;
  pcVar4 = &pCVar2->field_0x178;
  *(uint *)&pCVar2->field_0x174 = 0;
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
  pcVar4 = &pCVar2->field_0x1c8;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)&pCVar2->field_0x218 = 0;
  *(uint *)&pCVar2->field_0x21c = 0x3e800000;
  *(uint *)&pCVar2->field_0x220 = 0x3f800000;
  *(uint *)&pCVar2->field_0x2ec = 0;
  *(uint *)&pCVar2->field_0x2f0 = 0;
  *(uint *)&pCVar2->field_0x2f4 = 1;
  *(uint *)&pCVar2->field_0x2f8 = 0x42c80000;
  *(uint *)&pCVar2->field_0x64 = 0x96;
  *(uint *)&pCVar2->field_0x36c = 0;
  *(uint *)&pCVar2->field_0x300 = 0;
  *(uint *)&pCVar2->field_0x158 = 0x47c34ff3;
  *(uint *)&pCVar2->field_0x304 = 1;
  pCVar2->field_0x308 = 0;
  *(uint *)&pCVar2->field_0x370 = 0;
  *(CTrigger **)&pCVar2->field_0x2fc = pCVar2;
  return pCVar2;
}
