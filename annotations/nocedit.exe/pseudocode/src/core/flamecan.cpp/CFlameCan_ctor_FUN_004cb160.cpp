// Name: core_flamecan.cpp_CFlameCan_ctor_FUN_004cb160
// Address: 004cb160
// Address Range: [[004cb160, 004cb1f8]]
// Convention: __cdecl
// Signature: CFlameCan * __cdecl core_flamecan_cpp_CFlameCan_ctor_FUN_004cb160(CFlameCan *this_ptr)

#include "nocturne.h"

CFlameCan * __cdecl core_flamecan_cpp_CFlameCan_ctor_FUN_004cb160(CFlameCan *this_ptr)

{
  char cVar1;
  CFlameCan *pCVar2;
  CFlameCan_ptr_344 pCVar3;
  CFlameCan_ptr_832 pCVar4;
  char *pcVar2;
  char *pcVar3;
  
  pCVar2 = (CFlameCan *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&pCVar2->model);
  pCVar4 = core_flame_cpp_CFlame_ctor_FUN_004c9aa0(&ADJ(pCVar3)->flame);
  pcVar2 = "none";
  ADJ(pCVar4)->base.vtable._ub = &g_CFlameCanVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&ADJ(pCVar4)->model,"question.kfm");
  ADJ(pCVar4)->on_fire = 0;
  pcVar3 = ADJ(pCVar4)->on_fire_condition;
  ADJ(pCVar4)->time_to_explode = 10.0;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  ADJ(pCVar4)->is_visible = 0;
  return ADJ(pCVar4);
}
