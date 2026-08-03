// Name: core_barrier.cpp_CBarrier_archive_FUN_00411800
// Address: 00411800
// Address Range: [[00411800, 00411858]]
// Convention: __cdecl
// Signature: void __cdecl core_barrier_cpp_CBarrier_archive_FUN_00411800(CBarrier *this_ptr)

#include "nocturne.h"

void __cdecl core_barrier_cpp_CBarrier_archive_FUN_00411800(CBarrier *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(&this_ptr->base);
  core_actor_cpp_archiveVector_FUN_0040c450(&this_ptr->size,"size");
  if (g_INT_005acf80 < 2) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040c6d0
            (this_ptr->effect_class_name_list,"effectClassNameList");
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->add_to_path_grid,"addToPathGrid");
  return;
}
