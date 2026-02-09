// Name: core_barrier.cpp_CBarrier_archive_FUN_00414340
// Address: 00414340
// Address Range: [[00414340, 00414398]]
// Convention: __cdecl
// Signature: void __cdecl core_barrier_cpp_CBarrier_archive_FUN_00414340(CBarrier *this_ptr)

#include "nocturne.h"

void __cdecl core_barrier_cpp_CBarrier_archive_FUN_00414340(CBarrier *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c1c0(&this_ptr->base);
  core_actor_cpp_archiveVector_FUN_0040b340(&this_ptr->size,"size");
  if (g_CBarrierClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b5c0
            (this_ptr->effect_class_name_list,"effectClassNameList");
  core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->add_to_path_grid,"addToPathGrid");
  return;
}
