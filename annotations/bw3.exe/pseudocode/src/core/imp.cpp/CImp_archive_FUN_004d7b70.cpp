// Name: core_imp.cpp_CImp_archive_FUN_004d7b70
// Address: 004d7b70
// Address Range: [[004d7b70, 004d7bb7]]
// Convention: __cdecl
// Signature: void __cdecl core_imp_cpp_CImp_archive_FUN_004d7b70(CImp *this_ptr)

#include "nocturne.h"

void __cdecl core_imp_cpp_CImp_archive_FUN_004d7b70(CImp *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_00489120(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b830(&(this_ptr->base).field_0xcdcc,"@speed" + 1);
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ba30(model_ptr,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040bab0(&model_ptr->base,"motion state");
  return;
}
