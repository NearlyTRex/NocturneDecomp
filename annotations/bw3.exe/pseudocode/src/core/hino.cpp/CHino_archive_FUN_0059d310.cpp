// Name: core_hino.cpp_CHino_archive_FUN_0059d310
// Address: 0059d310
// Address Range: [[0059d310, 0059d357]]
// Convention: __cdecl
// Signature: void __cdecl core_hino_cpp_CHino_archive_FUN_0059d310(CHino *this_ptr)

#include "nocturne.h"

void __cdecl core_hino_cpp_CHino_archive_FUN_0059d310(CHino *this_ptr)

{
  core_enemy_cpp_CEnemy_archive_FUN_00489120((CEnemy *)this_ptr);
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0xcdcc,"@speed" + 1);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ba30
            ((CDeformableModelInstance *)&this_ptr->field_0x158,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040bab0
            ((CMotionController *)&this_ptr->field_0x158,"motion state");
  return;
}
