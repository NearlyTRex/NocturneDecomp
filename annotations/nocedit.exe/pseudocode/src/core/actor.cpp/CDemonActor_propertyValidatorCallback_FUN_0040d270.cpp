// Name: core_actor.cpp_CDemonActor_propertyValidatorCallback_FUN_0040d270
// Address: 0040d270
// Address Range: [[0040d270, 0040d28b]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_CDemonActor_propertyValidatorCallback_FUN_0040d270(CDemonActor *this_ptr,char *new_value)

#include "nocturne.h"

int __cdecl core_actor_cpp_CDemonActor_propertyValidatorCallback_FUN_0040d270(CDemonActor *this_ptr,char *new_value)

{
  int iVar1;
  
  iVar1 = core_msnedit_cpp_CDemonMission_validateNewActorName_FUN_0053d220
                    (g_CDemonMissionPtr,this_ptr->actor_name,new_value);
  return iVar1;
}
