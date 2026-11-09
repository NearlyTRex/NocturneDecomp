// Name: core_gabriela.cpp_CGabriella_archive_FUN_004c9ef0
// Address: 004c9ef0
// Address Range: [[004c9ef0, 004c9f92]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_archive_FUN_004c9ef0(CGabriella *this_ptr)

#include "nocturne.h"

void __cdecl core_gabriela_cpp_CGabriella_archive_FUN_004c9ef0(CGabriella *this_ptr)

{
  core_hero_cpp_FUN_004eab00((CHero *)this_ptr);
  if ((1 < g_CGabriellaClassVersion) && (g_CGabriellaClassVersion < 4)) {
    core_actor_cpp_archiveActor_FUN_0040b6f0(&this_ptr->field_0x1ff78,"?objectToPickUp" + 1)
    ;
    core_actor_cpp_archiveActor_FUN_0040b6f0(&this_ptr->field_0x1ff74,"doorToOpen");
    core_actor_cpp_archiveActor_FUN_0040b6f0(&this_ptr->field_0x1ff80,"leverToPull");
    core_actor_cpp_archiveActor_FUN_0040b6f0(&this_ptr->field_0x1ff84,"ladderToClimb");
  }
  if (g_CGabriellaClassVersion != 2) {
    return;
  }
  core_actor_cpp_archiveActor_FUN_0040b6f0(&this_ptr->field_0x25b0,"lhCarryObject");
  core_actor_cpp_archiveActor_FUN_0040b6f0(&this_ptr->field_0x2628,"rhCarryObject");
  return;
}
