// Name: core_vehicle.cpp_CVehicle_FUN_005e8ba0
// Address: 005e8ba0
// Address Range: [[005e8ba0, 005e8ce7]]
// Convention: __cdecl
// Signature: void core_vehicle.cpp_CVehicle_FUN_005e8ba0(CVehicle * this_ptr)

#include "nocturne.h"

void __cdecl core_vehicle_cpp_CVehicle_FUN_005e8ba0(CVehicle *this_ptr)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  int iVar2;
  CActorPropertyList *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000018;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base_actor,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e3b0(in_stack_00000008);
  iVar1 = 0;
  if (0 < *(int *)(in_stack_0000000c + 0x938)) {
    iVar2 = 0;
    do {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (&stack0xfffffef8,"%s tire",
                 *(uint *)((int)&PTR_s_Left_front_00684480 + iVar2));
      core_actor_cpp_CActorPropertyList_FUN_0040e3b0(in_stack_00000008);
      core_actor_cpp_CActorPropertyList_FUN_0040e260(in_stack_00000008);
      iVar2 = iVar2 + 4;
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_stack_00000018 + 0x938));
  }
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e290(in_stack_00000008);
  return;
}
