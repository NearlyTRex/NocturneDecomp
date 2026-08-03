// Name: core_moloch.cpp_CMoloch_archive_FUN_004de680
// Address: 004de680
// Address Range: [[004de680, 004de6f3]]
// Convention: __cdecl
// Signature: void __cdecl core_moloch_cpp_CMoloch_archive_FUN_004de680(CMoloch *this_ptr)

#include "nocturne.h"

void __cdecl core_moloch_cpp_CMoloch_archive_FUN_004de680(CMoloch *this_ptr)

{
  core_hero_cpp_CHero_archive_FUN_004b49a0(&this_ptr->base);
  core_actor_cpp_archiveString_FUN_0040c6d0
            (this_ptr->human_to_demon_condition,"humanToDemonCond");
  core_actor_cpp_archiveString_FUN_0040c6d0
            (this_ptr->demon_to_human_condition,"demonToHumanCond");
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->in_human_form,"inHumanForm");
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->morphing,"morphing");
  core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->morph_timer,"morphTimer");
  return;
}
