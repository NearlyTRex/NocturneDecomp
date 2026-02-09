// Name: core_baron.cpp_CBaron_ctor_FUN_00412bc0
// Address: 00412bc0
// Address Range: [[00412bc0, 00412ca1]]
// Convention: __cdecl
// Signature: CBaron * __cdecl core_baron_cpp_CBaron_ctor_FUN_00412bc0(CBaron *this_ptr)

#include "nocturne.h"

CBaron * __cdecl core_baron_cpp_CBaron_ctor_FUN_00412bc0(CBaron *this_ptr)

{
  char cVar1;
  CBaron *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = (CBaron *)core_hero_cpp_CHero_ctor_FUN_004f2340(&this_ptr->base);
  (pCVar2->base).base.base.vtable._ub = &g_CBaronVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar2->base).base.model,"baron.dfm");
  pCVar2->unk1[0xc] = '\0';
  pCVar2->unk1[0xd] = '\0';
  pCVar2->unk1[0xe] = -0x80;
  pCVar2->unk1[0xf] = '?';
  pCVar2->unk1[8] = '\0';
  pCVar2->unk1[9] = '\0';
  pCVar2->unk1[10] = '\0';
  pCVar2->unk1[0xb] = '\0';
  *(uint *)(pCVar2->unk1 + 4) = *(uint *)(pCVar2->unk1 + 8);
  *(uint *)pCVar2->unk1 = *(uint *)(pCVar2->unk1 + 4);
  pCVar2->unk1[0x10] = '\0';
  pCVar2->unk1[0x11] = '\0';
  pCVar2->unk1[0x12] = '\0';
  pCVar2->unk1[0x13] = '\0';
  pcVar3 = "none";
  pCVar2->unk1[0x14] = '\0';
  pCVar2->unk1[0x15] = '\0';
  pCVar2->unk1[0x16] = '\0';
  pCVar2->unk1[0x17] = '\0';
  (pCVar2->base).base.base.is_transparent = 1;
  pcVar4 = pCVar2->summon_event;
  pCVar2->summoned = 0;
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
  pcVar4 = pCVar2->go_away_event;
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
  pCVar2->unk2 = 0;
  return pCVar2;
}
