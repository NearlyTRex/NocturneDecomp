// Name: core_construc.cpp_CConstruct_getCollisionType_FUN_00438370
// Address: 00438370
// Address Range: [[00438370, 0043838e]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_construc_cpp_CConstruct_getCollisionType_FUN_00438370(CConstruct *this_ptr,SCollisionInfo *param_2)

#include "nocturne.h"

ECollisionType __cdecl core_construc_cpp_CConstruct_getCollisionType_FUN_00438370(CConstruct *this_ptr,SCollisionInfo *param_2)

{
  ECollisionType EVar1;
  
  if (this_ptr->blown_up != 0) {
    return COLLISION_TYPE_NONE;
  }
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_00427680((CCharacter *)this_ptr,param_2)
  ;
  return EVar1;
}
