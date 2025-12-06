// Name: core_baron.cpp_CBaron_ctor_FUN_00412bc0
// Address: 00412bc0
// Address Range: [[00412bc0, 00412ca1]]
// Convention: __cdecl
// Signature: CBaron * core_baron.cpp_CBaron_ctor_FUN_00412bc0(CBaron * this_ptr)

#include "nocturne.h"

CBaron * __cdecl core_baron_cpp_CBaron_ctor_FUN_00412bc0(CBaron *this_ptr)

{
  char cVar1;
  CBaron *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = (CBaron *)core_hero_cpp_FUN_004f2340();
  (pCVar2->field0_0x0).base_character.base_actor.vtable = &g_CBaronVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar2->field0_0x0).base_character.model,"baron.dfm");
  pCVar2->field1_0x1fbd4[0xd4] = '\0';
  pCVar2->field1_0x1fbd4[0xd5] = '\0';
  pCVar2->field1_0x1fbd4[0xd6] = -0x80;
  pCVar2->field1_0x1fbd4[0xd7] = '?';
  pCVar2->field1_0x1fbd4[0xd0] = '\0';
  pCVar2->field1_0x1fbd4[0xd1] = '\0';
  pCVar2->field1_0x1fbd4[0xd2] = '\0';
  pCVar2->field1_0x1fbd4[0xd3] = '\0';
  *(uint *)(pCVar2->field1_0x1fbd4 + 0xcc) = *(uint *)(pCVar2->field1_0x1fbd4 + 0xd0);
  *(uint *)(pCVar2->field1_0x1fbd4 + 200) = *(uint *)(pCVar2->field1_0x1fbd4 + 0xcc);
  pCVar2->field1_0x1fbd4[0xd8] = '\0';
  pCVar2->field1_0x1fbd4[0xd9] = '\0';
  pCVar2->field1_0x1fbd4[0xda] = '\0';
  pCVar2->field1_0x1fbd4[0xdb] = '\0';
  pcVar3 = "none";
  pCVar2->field1_0x1fbd4[0xdc] = '\0';
  pCVar2->field1_0x1fbd4[0xdd] = '\0';
  pCVar2->field1_0x1fbd4[0xde] = '\0';
  pCVar2->field1_0x1fbd4[0xdf] = '\0';
  (pCVar2->field0_0x0).base_character.base_actor.is_transparent = 1;
  pcVar4 = pCVar2->field1_0x1fbd4;
  pCVar2->field1_0x1fbd4[0xf8] = '\0';
  pCVar2->field1_0x1fbd4[0xf9] = '\0';
  pCVar2->field1_0x1fbd4[0xfa] = '\0';
  pCVar2->field1_0x1fbd4[0xfb] = '\0';
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "none";
  pcVar4 = pCVar2->field1_0x1fbd4 + 100;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&g_CKeyFramedModelInstanceInstance,"baronshell.kfm");
  pCVar2->field1_0x1fbd4[0xfc] = '\0';
  pCVar2->field1_0x1fbd4[0xfd] = '\0';
  pCVar2->field1_0x1fbd4[0xfe] = '\0';
  pCVar2->field1_0x1fbd4[0xff] = '\0';
  return pCVar2;
}
