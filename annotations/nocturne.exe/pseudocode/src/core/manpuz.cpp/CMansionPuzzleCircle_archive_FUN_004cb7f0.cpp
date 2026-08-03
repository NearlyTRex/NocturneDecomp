// Name: core_manpuz.cpp_CMansionPuzzleCircle_archive_FUN_004cb7f0
// Address: 004cb7f0
// Address Range: [[004cb7f0, 004cb8d2]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_archive_FUN_004cb7f0(CMansionPuzzleCircle *this_ptr)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_archive_FUN_004cb7f0(CMansionPuzzleCircle *this_ptr)

{
  int iVar1;
  int *int_ptr;
  CColor3i *int_ptr_00;
  int *int_ptr_01;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(&this_ptr->base);
  if (1 < INT_005bad50) {
    core_actor_cpp_archiveVector_FUN_0040c450(&this_ptr->gem_pos,"pGemPos");
    core_actor_cpp_archiveOrientation_FUN_0040c4f0
              (&(this_ptr->gem_orient).orient,"pGemOrient");
    core_actor_cpp_archiveVector_FUN_0040c450(&(this_ptr->emitter_pos).f,"pEmitterPos");
  }
  if (2 < INT_005bad50) {
    int_ptr = &this_ptr->panels[0].color.b;
    iVar1 = 0;
    int_ptr_01 = &this_ptr->panels[0].color.g;
    int_ptr_00 = &this_ptr->panels[0].color;
    do {
      core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->panels[iVar1].exists,"exists");
      core_actor_cpp_archiveInteger_FUN_0040c900(&int_ptr_00->r,"r");
      core_actor_cpp_archiveInteger_FUN_0040c900(int_ptr_01,"g");
      iVar1 = iVar1 + 1;
      int_ptr_00 = (CColor3i *)((int)(int_ptr_00 + 8) + 4);
      int_ptr_01 = int_ptr_01 + 0x19;
      core_actor_cpp_archiveInteger_FUN_0040c900(int_ptr,"b");
      int_ptr = int_ptr + 0x19;
    } while (iVar1 < 0xc);
  }
  return;
}
