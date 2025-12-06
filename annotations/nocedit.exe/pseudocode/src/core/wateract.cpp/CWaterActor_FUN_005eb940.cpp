// Name: core_wateract.cpp_CWaterActor_FUN_005eb940
// Address: 005eb940
// Address Range: [[005eb940, 005ebaaa]]
// Convention: __cdecl
// Signature: void core_wateract.cpp_CWaterActor_FUN_005eb940(CWaterActor * this_ptr)

#include "nocturne.h"

void __cdecl core_wateract_cpp_CWaterActor_FUN_005eb940(CWaterActor *this_ptr)

{
  CActorPropertyList *in_stack_00000008;
  char *pcStack00000010;
  void **ppvStack00000018;
  char *pcStack00000028;
  int *piStack0000002c;
  uint uStack00000030;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base_actor,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e1e0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e2d0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e2d0(in_stack_00000008);
  pcStack00000010 = (char *)&this_ptr->move_event;
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  pcStack00000010 = "Move down condition";
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  ppvStack00000018 = (void **)0x0;
  pcStack00000010 = "Parameter";
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  ppvStack00000018 = &PTR_s_Lowered_006846d0;
  pcStack00000010 = "State";
  core_actor_cpp_CActorPropertyList_FUN_0040e640(in_stack_00000008);
  ppvStack00000018 = (void **)"Patch size";
  pcStack00000010 = (char *)0x5eba4b;
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  ppvStack00000018 = (void **)0x5eba60;
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  pcStack00000028 = (char *)0x0;
  ppvStack00000018 = (void **)0x5eba77;
  core_actor_cpp_CActorPropertyList_FUN_0040e1e0(in_stack_00000008);
  piStack0000002c = (int *)0x0;
  pcStack00000028 = (char *)&this_ptr->col_g;
  core_actor_cpp_CActorPropertyList_FUN_0040e1e0(in_stack_00000008);
  uStack00000030 = 0;
  piStack0000002c = &this_ptr->col_b;
  pcStack00000028 = "Blue value";
  core_actor_cpp_CActorPropertyList_FUN_0040e1e0(in_stack_00000008);
  return;
}
