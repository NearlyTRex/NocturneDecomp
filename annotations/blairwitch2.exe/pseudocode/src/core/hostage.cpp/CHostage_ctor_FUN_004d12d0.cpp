// Name: core_hostage.cpp_CHostage_ctor_FUN_004d12d0
// Address: 004d12d0
// Address Range: [[004d12d0, 004d13f2]]
// Convention: __cdecl
// Signature: CHostage * __cdecl core_hostage_cpp_CHostage_ctor_FUN_004d12d0(CHostage *this_ptr)

#include "nocturne.h"

CHostage * __cdecl core_hostage_cpp_CHostage_ctor_FUN_004d12d0(CHostage *this_ptr)

{
  char cVar1;
  CHostage *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = (CHostage *)core_npc_cpp_CNPC_ctor_FUN_00510460((CNPC *)this_ptr);
  *(byte **)&pCVar2->field_0x2b0 = &g_CHostageVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&pCVar2->field_0x2b4,(char *)0x5da107);
  *(uint *)&pCVar2->field_0x246f4 = 0;
  *(uint *)&pCVar2->field_0x246fc = 0;
  pcVar3 = (char *)0x5da113;
  *(uint *)&pCVar2->field_0x24700 = 0;
  *(uint *)&pCVar2->field_0x24704 = 0;
  pcVar4 = &pCVar2->field_0x2434c;
  *(uint *)&pCVar2->field_0x24348 = 0x40a00000;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)&pCVar2->field_0x24708 = 0;
  *(uint *)&pCVar2->field_0x276c = 0;
  *(uint *)&pCVar2->field_0x24720 = 0;
  *(uint *)&pCVar2->field_0x24724 = 0;
  pCVar2->field_0x243b0 = 0;
  pCVar2->field_0x243d0 = 0;
  pCVar2->field_0x24434 = 0;
  pCVar2->field_0x24498 = 0;
  pCVar2->field_0x244fc = 0;
  pCVar2->field_0x24560 = 0;
  pCVar2->field_0x245c4 = 0;
  *(uint *)&pCVar2->field_0x24728 = 0;
  *(uint *)&pCVar2->field_0x2472c = 0;
  *(uint *)&pCVar2->field_0x2471c = 0;
  pCVar2->field_0x25b4 = 0;
  pCVar2->field_0x24628 = 0;
  pCVar2->field_0x2468c = 0;
  *(uint *)&pCVar2->field_0x25b0 = 1;
  return pCVar2;
}
