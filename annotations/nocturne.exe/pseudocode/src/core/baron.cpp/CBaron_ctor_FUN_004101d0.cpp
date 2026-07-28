// Name: core_baron.cpp_CBaron_ctor_FUN_004101d0
// Address: 004101d0
// Address Range: [[004101d0, 004102b1]]
// Convention: __cdecl
// Signature: CBaron * __cdecl core_baron_cpp_CBaron_ctor_FUN_004101d0(CBaron *this_ptr)

#include "nocturne.h"

CBaron * __cdecl core_baron_cpp_CBaron_ctor_FUN_004101d0(CBaron *this_ptr)

{
  char cVar1;
  CBaron *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = (CBaron *)core_hero_cpp_FUN_004b46d0(this_ptr);
  (pCVar2->base).base.base.vtable._ub =
       (CDemonActor_vtable *)&PTR_core_baron_cpp_CBaron_setup_FUN_004102c0_00599ac4;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
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
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            ((CKeyFramedModelInstance *)&DAT_0076436c,"baronshell.kfm");
  pCVar2->shell_visible = 0;
  return pCVar2;
}
