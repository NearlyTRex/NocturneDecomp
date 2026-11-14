// Name: core_schngeis.cpp_CSchnellGeist_archive_FUN_005a3bf0
// Address: 005a3bf0
// Address Range: [[005a3bf0, 005a3c20]]
// Convention: __cdecl
// Signature: void __cdecl core_schngeis_cpp_CSchnellGeist_archive_FUN_005a3bf0(CSchnellGeist *this_ptr)

#include "nocturne.h"

void __cdecl core_schngeis_cpp_CSchnellGeist_archive_FUN_005a3bf0(CSchnellGeist *this_ptr)

{
  core_basicene_cpp_CBasicEnemy_archive_FUN_0059fc10(&this_ptr->base);
  if (g_CSchnellGeistClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->breath_state,"$@BreathState" + 2);
  return;
}
