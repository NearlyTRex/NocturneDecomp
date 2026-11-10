// Name: core_gabriela.cpp_CGabriella_archive_FUN_004b0fb0
// Address: 004b0fb0
// Address Range: [[004b0fb0, 004b1052]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_archive_FUN_004b0fb0(CGabriella *this_ptr)

#include "nocturne.h"

void __cdecl core_gabriela_cpp_CGabriella_archive_FUN_004b0fb0(CGabriella *this_ptr)

{
  core_hero_cpp_FUN_004ce590(this_ptr);
  if ((1 < g_CGabriellaClassVersion) && (g_CGabriellaClassVersion < 4)) {
    core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->field_0x25608,"?objectToPickUp" + 1)
    ;
    core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->field_0x25604,"doorToOpen");
    core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->field_0x25610,"leverToPull");
    core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->field_0x25614,"ladderToClimb");
  }
  if (g_CGabriellaClassVersion != 2) {
    return;
  }
  core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->field_0x2620,"lhCarryObject");
  core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->field_0x2698,"rhCarryObject");
  return;
}
