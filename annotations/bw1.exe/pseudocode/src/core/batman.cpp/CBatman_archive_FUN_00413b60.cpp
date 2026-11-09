// Name: core_batman.cpp_CBatman_archive_FUN_00413b60
// Address: 00413b60
// Address Range: [[00413b60, 00413c1a]]
// Convention: __cdecl
// Signature: void __cdecl core_batman_cpp_CBatman_archive_FUN_00413b60(CBatman *this_ptr)

#include "nocturne.h"

void __cdecl core_batman_cpp_CBatman_archive_FUN_00413b60(CBatman *this_ptr)

{
  core_enemy_cpp_CEnemy_archive_FUN_004a0520((CEnemy *)this_ptr);
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0xc1d0,"?speed" + 1);
  core_actor_cpp_FUN_0040b7f0
            ((CDeformableModelInstance *)&this_ptr->field_0x158,"modelName");
  core_actor_cpp_FUN_0040b870((CMotionController *)&this_ptr->field_0x158,"motion state");
  if (g_CBatmanClassVersion < 2) {
    if (g_CBatmanClassVersion < 3) {
      return;
    }
  }
  else {
    core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0xc26c,"fallEvent");
    if (g_CBatmanClassVersion < 3) {
      return;
    }
  }
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0xc308,"mistState");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0xc30c,"vanishTimer");
  core_actor_cpp_archiveVector_FUN_0040b1c0(&this_ptr->field_0xc310,"newPos");
  return;
}
