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
  
  pCVar2 = (CTrigger *)core_actor_cpp_CDemonActor_ctor_FUN_00408790((CDemonActor *)this_ptr);
  *(byte **)&pCVar2->field_0x2b0 = &g_CTriggerVTable;
  *(uint *)&pCVar2->field_0x2bc = 0x40a00000;
  *(uint *)&pCVar2->field_0x2c0 = 0x41100000;
  *(uint *)&pCVar2->field_0x2c4 = 0x40a00000;
  *(uint *)&pCVar2->field_0x2cc = 0;
  *(uint *)&pCVar2->field_0x2b8 = 0;
  pcVar3 = "nobody";
  pCVar2->field_0x380 = 0;
  pCVar2->field_0x3e4 = 0;
  *(uint *)&pCVar2->field_0x2c8 = 0;
  pcVar4 = &pCVar2->field_0x2d4;
  *(uint *)&pCVar2->field_0x2d0 = 0;
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
  pcVar4 = &pCVar2->field_0x324;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)&pCVar2->field_0x374 = 0;
  *(uint *)&pCVar2->field_0x378 = 0x3e800000;
  *(uint *)&pCVar2->field_0x37c = 0x3f800000;
  *(uint *)&pCVar2->field_0x448 = 0;
  *(uint *)&pCVar2->field_0x44c = 0;
  *(uint *)&pCVar2->field_0x450 = 1;
  *(uint *)&pCVar2->field_0x454 = 0x42c80000;
  *(uint *)&pCVar2->field_0x64 = 0x96;
  *(uint *)&pCVar2->field_0x4c8 = 0;
  *(uint *)&pCVar2->field_0x45c = 0;
  *(uint *)&pCVar2->field_0x2b4 = 0x47c34ff3;
  *(uint *)&pCVar2->field_0x460 = 1;
  pCVar2->field_0x464 = 0;
  *(uint *)&pCVar2->field_0x4cc = 0;
  *(CTrigger **)&pCVar2->field_0x458 = pCVar2;
  return pCVar2;
}
