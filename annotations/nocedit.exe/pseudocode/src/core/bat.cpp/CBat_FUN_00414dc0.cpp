// Name: core_bat.cpp_CBat_FUN_00414dc0
// Address: 00414dc0
// Address Range: [[00414dc0, 00414ebe]]
// Convention: __cdecl
// Signature: void core_bat.cpp_CBat_FUN_00414dc0(CBat * this_ptr)

#include "nocturne.h"

void __cdecl core_bat_cpp_CBat_FUN_00414dc0(CBat *this_ptr)

{
  int extraout_EAX;
  CActorPropertyList *in_stack_00000008;
  char local_6c [100];
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e3e0(in_stack_00000008);
  crt_stdio_c_sprintf_FUN_005fdbd0
            (local_6c,"Parameter (0..%d)",*(uint *)(this_ptr->course_filename + 0x20));
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  *(uint *)(extraout_EAX + 0x58) = 1;
  core_actor_cpp_CActorPropertyList_FUN_0040e3b0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e2d0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  return;
}
