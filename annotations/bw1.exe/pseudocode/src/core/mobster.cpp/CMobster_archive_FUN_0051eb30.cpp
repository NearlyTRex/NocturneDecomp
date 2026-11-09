// Name: core_mobster.cpp_CMobster_archive_FUN_0051eb30
// Address: 0051eb30
// Address Range: [[0051eb30, 0051ec57]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_CMobster_archive_FUN_0051eb30(CMobster *this_ptr)

#include "nocturne.h"

void __cdecl core_mobster_cpp_CMobster_archive_FUN_0051eb30(CMobster *this_ptr)

{
  core_enemy_cpp_CEnemy_archive_FUN_004a0520((CEnemy *)this_ptr);
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0xc1d0,"?speed" + 1);
  core_actor_cpp_FUN_0040b7f0
            ((CDeformableModelInstance *)&this_ptr->field_0x158,"modelName");
  if (g_CMobsterClassVersion < 4) {
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0xc1e0,"guardDistance");
  }
  core_actor_cpp_FUN_0040b870((CMotionController *)&this_ptr->field_0x158,"motion state");
  if (g_CMobsterClassVersion == 2) {
    core_actor_cpp_archiveClothList_FUN_0040bce0(&this_ptr->field_0x2ca0,"clothList");
  }
  if (4 < g_CMobsterClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0xc284,"postMode");
    core_actor_cpp_archiveActor_FUN_0040b6f0(&this_ptr->field_0xc288,"ourPost");
  }
  if (5 < g_CMobsterClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b6f0(&this_ptr->field_0xc28c,"vehicle");
    core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0xc290,"sideOfCar");
  }
  if (g_CMobsterClassVersion < 7) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0xc294,"holdPosFlag");
  core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0xc298,"holdPosCond");
  return;
}
