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
  (pCVar2->base).base.base.vtable._ub = &g_CBaronVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar2->base).base.model,"baron.dfm");
  pCVar2->head_blend_weight = 1.0;
  (pCVar2->head_rotation).z = 0.0;
  (pCVar2->head_rotation).y = (pCVar2->head_rotation).z;
  (pCVar2->head_rotation).x = (pCVar2->head_rotation).y;
  pCVar2->target_actor = (CDemonActor *)0x0;
  pcVar3 = "none";
  pCVar2->new_attack = 0;
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
  pCVar2->shell_visible = 0;
  return pCVar2;
}
