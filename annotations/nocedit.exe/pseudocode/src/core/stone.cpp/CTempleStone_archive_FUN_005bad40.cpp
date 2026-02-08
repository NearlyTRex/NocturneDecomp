// Name: core_stone.cpp_CTempleStone_archive_FUN_005bad40
// Address: 005bad40
// Address Range: [[005bad40, 005bad64]]
// Convention: __cdecl
// Signature: void __cdecl core_stone_cpp_CTempleStone_archive_FUN_005bad40(CTempleStone *this_ptr)

#include "nocturne.h"

void __cdecl core_stone_cpp_CTempleStone_archive_FUN_005bad40(CTempleStone *this_ptr)

{
  core_boxactor_cpp_CBoxActor_archive_FUN_00422060(&this_ptr->base);
  core_actor_cpp_archiveActor_FUN_0040b870
            ((CDemonActor *)&this_ptr->dest_actor,"destActor");
  return;
}
