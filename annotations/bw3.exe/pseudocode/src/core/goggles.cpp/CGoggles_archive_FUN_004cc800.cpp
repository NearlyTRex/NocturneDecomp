// Name: core_goggles.cpp_CGoggles_archive_FUN_004cc800
// Address: 004cc800
// Address Range: [[004cc800, 004cc824]]
// Convention: __cdecl
// Signature: void __cdecl core_goggles_cpp_CGoggles_archive_FUN_004cc800(CGoggles *this_ptr)

#include "nocturne.h"

void __cdecl core_goggles_cpp_CGoggles_archive_FUN_004cc800(CGoggles *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c280((CDemonActor *)this_ptr);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b9b0
            (&this_ptr->field_0x158,"modelName");
  return;
}
