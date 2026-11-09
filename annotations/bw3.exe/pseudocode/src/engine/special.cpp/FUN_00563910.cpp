// Name: engine_special.cpp_FUN_00563910
// Address: 00563910
// Address Range: [[00563910, 00563968]]
// Convention: unknown
// Signature: void engine_special_cpp_FUN_00563910(CDemonActor *param_1)

#include "nocturne.h"

void engine_special_cpp_FUN_00563910(CDemonActor *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  CDemonActor *pCVar4;
  char *pcVar6;
  byte bVar7;
  CDemonActor *pCVar5;
  
  bVar7 = 0;
  core_actor_cpp_FUN_00408890(param_1);
  pCVar5 = param_1 + 1;
  pCVar4 = pCVar5;
  do {
    cVar1 = *(char *)param_1;
    *(char *)pCVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_1->field_0x1;
    param_1 = (CDemonActor *)&param_1->field_0x2;
    pCVar4->field_0x1 = cVar1;
    pCVar4 = (CDemonActor *)&pCVar4->field_0x2;
  } while (cVar1 != '\0');
  pcVar3 = (char *)0x5d54a8;
  iVar2 = -1;
  do {
    pCVar4 = pCVar5;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pCVar4 = (CDemonActor *)((int)pCVar5 + (uint)bVar7 * -2 + 1);
    cVar1 = *(char *)pCVar5;
    pCVar5 = pCVar4;
  } while (cVar1 != '\0');
  pcVar6 = &pCVar4[-1].field_0x157;
  do {
    cVar1 = *pcVar3;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  return;
}
