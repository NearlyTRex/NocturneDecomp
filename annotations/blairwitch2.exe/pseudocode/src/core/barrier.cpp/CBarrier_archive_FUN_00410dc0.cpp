// Name: core_barrier.cpp_CBarrier_archive_FUN_00410dc0
// Address: 00410dc0
// Address Range: [[00410dc0, 00410e18]]
// Convention: __cdecl
// Signature: void __cdecl core_barrier_cpp_CBarrier_archive_FUN_00410dc0(CBarrier *this_ptr)

#include "nocturne.h"

void __cdecl core_barrier_cpp_CBarrier_archive_FUN_00410dc0(CBarrier *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(&this_ptr->base);
  core_actor_cpp_archiveVector_FUN_0040b4b0(&this_ptr->size,&DAT_005cb62f);
  if (g_CBarrierClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b730
            (this_ptr->effect_class_name_list,"effectClassNameList");
  core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->add_to_path_grid,"addToPathGrid");
  return;
}
