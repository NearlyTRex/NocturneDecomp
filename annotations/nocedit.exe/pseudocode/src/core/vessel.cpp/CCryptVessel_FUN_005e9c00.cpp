// Name: core_vessel.cpp_CCryptVessel_FUN_005e9c00
// Address: 005e9c00
// Address Range: [[005e9c00, 005e9d02]]
// Convention: __cdecl
// Signature: void core_vessel.cpp_CCryptVessel_FUN_005e9c00(CCryptVessel * this_ptr)

#include "nocturne.h"

void __cdecl core_vessel_cpp_CCryptVessel_FUN_005e9c00(CCryptVessel *this_ptr)

{
  CActorPropertyList *in_stack_00000008;
  char *pcStack0000000c;
  float *pfStack00000010;
  void **ppvStack00000014;
  int *piStack00000018;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base_actor,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e3b0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e350(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e350(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e350(in_stack_00000008);
  pcStack0000000c = (char *)0x0;
  core_actor_cpp_CActorPropertyList_FUN_0040e350(in_stack_00000008);
  pfStack00000010 = (float *)this_ptr->win_event;
  pcStack0000000c = "Win event (persistant)";
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  ppvStack00000014 = (void **)0x0;
  pfStack00000010 = &this_ptr->eat_distance;
  pcStack0000000c = "Eat distance";
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  piStack00000018 = &this_ptr->visual_type;
  ppvStack00000014 = &PTR_s_Air_006844b0;
  pfStack00000010 = (float *)0x3;
  pcStack0000000c = "Visual type";
  core_actor_cpp_CActorPropertyList_FUN_0040e640(in_stack_00000008);
  return;
}
