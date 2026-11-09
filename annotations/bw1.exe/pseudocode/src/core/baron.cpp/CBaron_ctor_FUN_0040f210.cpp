// Name: core_baron.cpp_CBaron_ctor_FUN_0040f210
// Address: 0040f210
// Address Range: [[0040f210, 0040f2f1]]
// Convention: __cdecl
// Signature: CBaron * __cdecl core_baron_cpp_CBaron_ctor_FUN_0040f210(CBaron *this_ptr)

#include "nocturne.h"

CBaron * __cdecl core_baron_cpp_CBaron_ctor_FUN_0040f210(CBaron *this_ptr)

{
  char cVar1;
  CBaron *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = (CBaron *)core_hero_cpp_FUN_004ea830((CHero *)this_ptr);
  *(byte ***)&pCVar2->field_0x154 = &g_CBaronVTable;
  core_skeleton_cpp_FUN_00569f50(&pCVar2->field_0x158,0x5d337e);
  *(uint *)&pCVar2->field_0x20080 = 0x3f800000;
  *(uint *)&pCVar2->field_0x2007c = 0;
  *(uint *)&pCVar2->field_0x20078 = *(uint *)&pCVar2->field_0x2007c;
  *(uint *)&pCVar2->field_0x20074 = *(uint *)&pCVar2->field_0x20078;
  *(uint *)&pCVar2->field_0x20084 = 0;
  pcVar3 = (char *)0x5d3388;
  *(uint *)&pCVar2->field_0x20088 = 0;
  *(uint *)&pCVar2->field_0xfc = 1;
  pcVar4 = &pCVar2->field_0x1ffac;
  *(uint *)&pCVar2->field_0x200a4 = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = (char *)0x5d338d;
  pcVar4 = &pCVar2->field_0x20010;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            ((CKeyFramedModelInstance *)&DAT_007c351c,"baronshell.kfm");
  *(uint *)&pCVar2->field_0x200a8 = 0;
  return pCVar2;
}
