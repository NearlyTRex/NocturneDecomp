// Name: core_spike.cpp_CSpike_ctor_FUN_005b8220
// Address: 005b8220
// Address Range: [[005b8220, 005b8359]]
// Convention: __cdecl
// Signature: CSpike * __cdecl core_spike_cpp_CSpike_ctor_FUN_005b8220(CSpike *this_ptr)

#include "nocturne.h"

CSpike * __cdecl core_spike_cpp_CSpike_ctor_FUN_005b8220(CSpike *this_ptr)

{
  char cVar1;
  CSpike *pCVar2;
  CSpike_ptr_344 this_ptr_00;
  char *pcVar2;
  char *pcVar3;
  
  pCVar2 = (CSpike *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&pCVar2->model);
  pcVar2 = "none";
  ADJ(this_ptr_00)->base.vtable._ub = &g_CSpikeVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"bgate.kfm");
  ADJ(this_ptr_00)->spike_type = 0;
  ADJ(this_ptr_00)->spike_state = 0;
  pcVar3 = ADJ(this_ptr_00)->start_event;
  ADJ(this_ptr_00)->are_we_active = 0;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  pcVar2 = "none";
  pcVar3 = ADJ(this_ptr_00)->stop_event;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  pcVar2 = "none";
  pcVar3 = ADJ(this_ptr_00)->extend_event;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  pcVar2 = "none";
  pcVar3 = ADJ(this_ptr_00)->retract_event;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  ADJ(this_ptr_00)->extend_time = 1.0;
  ADJ(this_ptr_00)->retract_time = 1.0;
  ADJ(this_ptr_00)->extend_sound[0] = '\0';
  ADJ(this_ptr_00)->retract_sound[0] = '\0';
  ADJ(this_ptr_00)->period = 1.0;
  ADJ(this_ptr_00)->damage_strength = 0.1;
  ADJ(this_ptr_00)->param = 0.0;
  return ADJ(this_ptr_00);
}
