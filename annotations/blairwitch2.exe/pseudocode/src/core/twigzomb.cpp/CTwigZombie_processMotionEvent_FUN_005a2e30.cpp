// Name: core_twigzomb.cpp_CTwigZombie_processMotionEvent_FUN_005a2e30
// Address: 005a2e30
// Address Range: [[005a2e30, 005a2e81]]
// Convention: __cdecl
// Signature: void __cdecl core_twigzomb_cpp_CTwigZombie_processMotionEvent_FUN_005a2e30(CTwigZombie *this_ptr,int event_id)

#include "nocturne.h"

void __cdecl core_twigzomb_cpp_CTwigZombie_processMotionEvent_FUN_005a2e30(CTwigZombie *this_ptr,int event_id)

{
  char *sound_name;
  
  if (0x21fb < (uint)event_id) {
    if ((uint)event_id < 0x21fd) {
      sound_name = "twigfootstep0?.wav";
    }
    else {
      if (event_id != 0x21fd) goto LAB_005a2e65;
      sound_name = "twigswing0?.wav";
    }
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (0x0264B290,(CDemonActor *)this_ptr,sound_name,
               &(this_ptr->base).base.base.base.location.position);
  }
LAB_005a2e65:
  unkafter_basicene_cpp_FUN_0059e880(this_ptr,event_id);
  return;
}
