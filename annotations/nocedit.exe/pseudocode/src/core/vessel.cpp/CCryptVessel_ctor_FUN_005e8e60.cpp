// Name: core_vessel.cpp_CCryptVessel_ctor_FUN_005e8e60
// Address: 005e8e60
// Address Range: [[005e8e60, 005e8fb7]]
// Convention: __cdecl
// Signature: CCryptVessel * __cdecl core_vessel_cpp_CCryptVessel_ctor_FUN_005e8e60(CCryptVessel *this_ptr)

#include "nocturne.h"

CCryptVessel * __cdecl core_vessel_cpp_CCryptVessel_ctor_FUN_005e8e60(CCryptVessel *this_ptr)

{
  char cVar1;
  CCryptVessel *pCVar2;
  CCryptVessel_ptr_344 pCVar3;
  CCryptVessel_ptr_964 pCVar4;
  CCryptVessel_ptr_1644 this_ptr_00;
  char *pcVar2;
  char *pcVar3;
  
  pCVar2 = (CCryptVessel *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&pCVar2->model);
  pCVar4 = core_flame_cpp_CFlame_ctor_FUN_004c9aa0(&ADJ(pCVar3)->flame);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&ADJ(pCVar4)->orb_model);
  pcVar2 = "none";
  ADJ(this_ptr_00)->base.vtable._ub = &g_CCryptVesselVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&ADJ(this_ptr_00)->model,"vsslbase.kfm");
  ADJ(this_ptr_00)->carrier = (CDemonActor *)0x0;
  ADJ(this_ptr_00)->prey = (CCryptVessel *)0x0;
  pcVar3 = ADJ(this_ptr_00)->destroyed_event;
  ADJ(this_ptr_00)->neutral = (CCryptVessel *)0x0;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  ADJ(this_ptr_00)->start_loc = (CActorDestination *)0x0;
  ADJ(this_ptr_00)->end_loc = (CActorDestination *)0x0;
  pcVar2 = "none";
  ADJ(this_ptr_00)->timer = 0.0;
  pcVar3 = ADJ(this_ptr_00)->win_event;
  ADJ(this_ptr_00)->state = 0;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  ADJ(this_ptr_00)->eat_distance = 10.0;
  ADJ(this_ptr_00)->init_frame = 1;
  ADJ(this_ptr_00)->visual_type = 0;
  ADJ(this_ptr_00)->spin_angle = 0.0;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"vsslorb.kfm");
  ADJ(this_ptr_00)->is_visible = 1;
  ADJ(this_ptr_00)->base.is_transparent = 1;
  ADJ(this_ptr_00)->water_anim_timer = 0.0;
  ADJ(this_ptr_00)->puzzle_complete = 0;
  return ADJ(this_ptr_00);
}
