// Name: core_filmreel.cpp_CFilmReel_FUN_004bee30
// Address: 004bee30
// Address Range: [[004bee30, 004bee79]]
// Convention: __cdecl
// Signature: void __cdecl core_filmreel_cpp_CFilmReel_FUN_004bee30(void)

#include "nocturne.h"

/* Signature: byte actors_other_filmreel.cpp_CFilmReel_FUN_004bee30(uint param_1,
   uint param_2) */

void __cdecl core_filmreel_cpp_CFilmReel_FUN_004bee30(void)

{
  int in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_dest_cpp_FUN_0046fe80();
  core_actor_cpp_CActorPropertyList_addChoice_FUN_0040e350
            (in_stack_00000008,"Key reel",(void *)(in_stack_00000004 + 0x370),1,
             "CFilmReel",(CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (in_stack_00000008,"Key event",(char *)(in_stack_00000004 + 0x374));
  return;
}
