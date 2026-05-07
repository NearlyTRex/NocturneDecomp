// Name: core_filmreel.cpp_CFilmProjector_ctor_FUN_004bea40
// Address: 004bea40
// MANUAL RECONSTRUCTION
// Address Range: [[004bea40, 004beaf9]]
// Convention: __cdecl
// Signature: CFilmProjector * __cdecl core_filmreel_cpp_CFilmProjector_ctor_FUN_004bea40(CFilmProjector *this_ptr)

#include "nocturne.h"

CFilmProjector * __cdecl core_filmreel_cpp_CFilmProjector_ctor_FUN_004bea40(CFilmProjector *this_ptr)

{
  CFilmProjector *pCVar2;
  CFilmProjector_ptr_500 this_ptr_00;

  pCVar2 = (CFilmProjector *)core_dest_cpp_CActorDestination_ctor_FUN_0046f900(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&pCVar2->model);
  ADJ(this_ptr_00)->base.base.vtable._ub = &g_CFilmProjectorVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"filmreel.kfm");
  ADJ(this_ptr_00)->reel_rotation = 0.0;
  strcpy(ADJ(this_ptr_00)->base.dest_class,"CFilmReel");
  ADJ(this_ptr_00)->prev_dest_state = 0;
  ADJ(this_ptr_00)->key_reel = (CDemonActor *)0x0;
  strcpy(ADJ(this_ptr_00)->key_event,"none");
  ADJ(this_ptr_00)->sfx_handle = 0;
  return ADJ(this_ptr_00);
}
