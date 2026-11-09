// Name: core_baron.cpp_CBaron_ctor_FUN_0040f690
// Address: 0040f690
// Address Range: [[0040f690, 0040f771]]
// Convention: __cdecl
// Signature: CBaron * __cdecl core_baron_cpp_CBaron_ctor_FUN_0040f690(CBaron *this_ptr)

#include "nocturne.h"

CBaron * __cdecl core_baron_cpp_CBaron_ctor_FUN_0040f690(CBaron *this_ptr)

{
  char cVar1;
  CBaron *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = (CBaron *)core_hero_cpp_FUN_004ce240(this_ptr);
  *(byte **)&pCVar2->field_0x2b0 = &g_CBaronVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&pCVar2->field_0x2b4,(char *)0x5cb413);
  *(uint *)&pCVar2->field_0x25714 = 0x3f800000;
  *(uint *)&pCVar2->field_0x25710 = 0;
  *(uint *)&pCVar2->field_0x2570c = *(uint *)&pCVar2->field_0x25710;
  *(uint *)&pCVar2->field_0x25708 = *(uint *)&pCVar2->field_0x2570c;
  *(uint *)&pCVar2->field_0x25718 = 0;
  pcVar3 = (char *)0x5cb41d;
  *(uint *)&pCVar2->field_0x2571c = 0;
  *(uint *)&pCVar2->field_0xfc = 1;
  pcVar4 = &pCVar2->field_0x25640;
  *(uint *)&pCVar2->field_0x25738 = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = (char *)0x5cb422;
  pcVar4 = &pCVar2->field_0x256a4;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            ((CKeyFramedModelInstance *)&DAT_007bc51c,"baronshell.kfm");
  *(uint *)&pCVar2->field_0x2573c = 0;
  return pCVar2;
}
