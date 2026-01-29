// Name: core_vehicle.cpp_CVehicle_FUN_005e8ba0
// Address: 005e8ba0
// Address Range: [[005e8ba0, 005e8ce7]]
// Convention: __cdecl
// Signature: void __cdecl core_vehicle_cpp_CVehicle_FUN_005e8ba0(CVehicle *this_ptr)

#include "nocturne.h"

void __cdecl core_vehicle_cpp_CVehicle_FUN_005e8ba0(CVehicle *this_ptr)

{
  int iVar1;
  int iVar2;
  CActorPropertyList *in_stack_00000008;
  char local_110 [256];
  char *local_10;
  char *local_c;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e3b0(in_stack_00000008);
  iVar1 = 0;
  if (0 < this_ptr->tire_count) {
    local_c = this_ptr->unk2;
    iVar2 = 0;
    do {
      sprintf
                (local_110,"%s tire",
                 *(uint *)((int)&PTR_s_Left_front_00684480 + iVar2));
      local_10 = local_c + iVar1 * 0x1b4;
      core_actor_cpp_CActorPropertyList_FUN_0040e3b0(in_stack_00000008);
      core_actor_cpp_CActorPropertyList_FUN_0040e260(in_stack_00000008);
      iVar2 = iVar2 + 4;
      iVar1 = iVar1 + 1;
    } while (iVar1 < this_ptr->tire_count);
  }
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e290(in_stack_00000008);
  return;
}
