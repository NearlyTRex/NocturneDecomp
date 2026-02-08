// Name: core_filmreel.cpp_CFilmReel_getPropertyList_FUN_004be960
// Address: 004be960
// Address Range: [[004be960, 004be9a6]]
// Convention: __cdecl
// Signature: void __cdecl core_filmreel_cpp_CFilmReel_getPropertyList_FUN_004be960 (CFilmReel *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_filmreel_cpp_CFilmReel_getPropertyList_FUN_004be960
          (CFilmReel *this_ptr,CActorPropertyList *property_list)

{
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
            (property_list,"Model file (.kfm)",&this_ptr->model,0);
  core_actor_cpp_CActorPropertyList_addString_FUN_0040e290
            (property_list,"Movie name",this_ptr->movie_name,0x1f,
             (CActorPropertyValidatorFunc *)0x0);
  return;
}
