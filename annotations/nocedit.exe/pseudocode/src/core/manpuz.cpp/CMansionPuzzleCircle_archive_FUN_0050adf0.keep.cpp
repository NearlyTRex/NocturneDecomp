// Name: core_manpuz.cpp_CMansionPuzzleCircle_archive_FUN_0050adf0
// Address: 0050adf0
// MANUAL RECONSTRUCTION
// Address Range: [[0050adf0, 0050aed2]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_archive_FUN_0050adf0(CMansionPuzzleCircle *this_ptr)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_archive_FUN_0050adf0(CMansionPuzzleCircle *this_ptr)

{
  int iVar1;

  core_actor_cpp_CDemonActor_archive_FUN_0040c1c0(&this_ptr->base);
  if (1 < g_CMansionPuzzleCircleClassVersion) {
    core_actor_cpp_archiveVector_FUN_0040b340(&this_ptr->gem_pos,"pGemPos");
    core_actor_cpp_archiveOrientation_FUN_0040b3e0
              (&(this_ptr->gem_orient).orient,"pGemOrient");
    core_actor_cpp_archiveVector_FUN_0040b340(&(this_ptr->emitter_pos).f,"pEmitterPos");
  }
  if (2 < g_CMansionPuzzleCircleClassVersion) {
    iVar1 = 0;
    do {
      core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->panels[iVar1].exists,"exists");
      core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->panels[iVar1].color.r,"r");
      core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->panels[iVar1].color.g,"g");
      core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->panels[iVar1].color.b,"b");
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xc);
  }
  return;
}
