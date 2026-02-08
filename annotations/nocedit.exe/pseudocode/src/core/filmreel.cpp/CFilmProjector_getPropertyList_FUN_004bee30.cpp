// Name: core_filmreel.cpp_CFilmProjector_getPropertyList_FUN_004bee30
// Address: 004bee30
// Address Range: [[004bee30, 004bee79]]
// Convention: __cdecl
// Signature: void __cdecl core_filmreel_cpp_CFilmProjector_getPropertyList_FUN_004bee30 (CFilmProjector *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_filmreel_cpp_CFilmProjector_getPropertyList_FUN_004bee30
          (CFilmProjector *this_ptr,CActorPropertyList *property_list)

{
  core_dest_cpp_CActorDestination_getPropertyList_FUN_0046fe80(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addChoice_FUN_0040e350
            (property_list,"Key reel",(CDemonActor **)this_ptr->unk,1,"CFilmReel",
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (property_list,"Key event",this_ptr->unk + 4);
  return;
}
