// Name: core_vehicle.cpp_CVehicle_FUN_005e8ba0
// Address: 005e8ba0
// Address Range: [[005e8ba0, 005e8ce7]]
// Convention: __cdecl
// Signature: void __cdecl core_vehicle_cpp_CVehicle_FUN_005e8ba0(CVehicle *this_ptr)

#include "nocturne.h"

void __cdecl core_vehicle_cpp_CVehicle_FUN_005e8ba0(CVehicle *this_ptr)

{
  int iVar1;
  CKeyFramedModelInstance *data_ptr;
  int iVar2;
  CActorPropertyList *in_stack_00000008;
  char local_110 [256];
  CVector3f *local_10;
  char *local_c;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
            (in_stack_00000008,"Model file (.kfm)",(CKeyFramedModelInstance *)this_ptr->unk1,0
            );
  iVar1 = 0;
  if (0 < this_ptr->tire_count) {
    local_c = this_ptr->unk2;
    iVar2 = 0;
    data_ptr = (CKeyFramedModelInstance *)(this_ptr->unk2 + 0x14);
    do {
      sprintf
                (local_110,"%s tire",
                 *(uint *)((int)&PTR_s_Left_front_00684480 + iVar2));
      local_10 = (CVector3f *)(local_c + iVar1 * 0x1b4);
      core_actor_cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
                (in_stack_00000008,local_110,data_ptr,0);
      core_actor_cpp_CActorPropertyList_addVector_FUN_0040e260
                (in_stack_00000008,"bpos",local_10,
                 (CDemonActor_CActorPropertyValidatorFunc *)0x0);
      iVar2 = iVar2 + 4;
      iVar1 = iVar1 + 1;
      data_ptr = (CKeyFramedModelInstance *)(data_ptr[1].part_visibility_flags + 0xe);
    } while (iVar1 < this_ptr->tire_count);
  }
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (in_stack_00000008,"Current time",&this_ptr->cur_time,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (in_stack_00000008,"Total time",&this_ptr->total_time,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addString_FUN_0040e290
            (in_stack_00000008,"Course name",this_ptr->unk3,0x1f,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  return;
}
