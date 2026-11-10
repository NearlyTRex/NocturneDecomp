// Name: core_imp.cpp_CImp_archive_FUN_004d7a50
// Address: 004d7a50
// Address Range: [[004d7a50, 004d7a97]]
// Convention: __cdecl
// Signature: void __cdecl core_imp_cpp_CImp_archive_FUN_004d7a50(CImp *this_ptr)

#include "nocturne.h"

void __cdecl core_imp_cpp_CImp_archive_FUN_004d7a50(CImp *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&(this_ptr->base).speed,"@speed" + 1);
  pCVar1 = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0(pCVar1,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040bb60(pCVar1,"motion state");
  return;
}
