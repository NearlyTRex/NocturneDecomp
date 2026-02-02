// Name: core_boxactor.cpp_CLightActor_getPropertyList_FUN_004234e0
// Address: 004234e0
// Address Range: [[004234e0, 0042358b]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CLightActor_getPropertyList_FUN_004234e0 (CLightActor *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_boxactor_cpp_CLightActor_getPropertyList_FUN_004234e0
          (CLightActor *this_ptr,CActorPropertyList *property_list)

{
  core_boxactor_cpp_CBoxActor_getPropertyList_FUN_004226e0(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addAction_FUN_0040e670
            (property_list,"light type",
             core_boxactor_cpp_CLightActor_propertyDisplayTypeCallback_FUN_00423310,
             core_boxactor_cpp_CLightActor_propertyActionTypeCallback_FUN_00423380);
  if (this_ptr->light_actor_type == LIGHT_TYPE_CUSTOM) {
    core_actor_cpp_CActorPropertyList_addVector_FUN_0040e260
              (property_list,"light pos",(CVector3f *)(this_ptr->unk + 0x2fac),
               (CDemonActor_CActorPropertyValidatorFunc *)0x0);
    core_actor_cpp_CActorPropertyList_addVector_FUN_0040e260
              (property_list,"light orient",(CVector3f *)(this_ptr->unk + 0x2fb8),
               (CDemonActor_CActorPropertyValidatorFunc *)0x0);
    core_actor_cpp_CActorPropertyList_addAction_FUN_0040e670
              (property_list,"light FOV",
               core_boxactor_cpp_CLightActor_propertyDisplayFOVCallback_FUN_00423400,
               core_boxactor_cpp_CLightActor_propertyActionFOVCallback_FUN_00423440);
    core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
              (property_list,"light falloff",(float *)(this_ptr->unk + 0x140),
               (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  }
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"light status",(int *)(this_ptr->unk + 0x1cb4));
  return;
}
