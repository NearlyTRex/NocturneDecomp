// Name: core_manpuz.cpp_CMansionPuzzleCircle_archive_FUN_0050adf0
// Address: 0050adf0
// Address Range: [[0050adf0, 0050aed2]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_archive_FUN_0050adf0(CMansionPuzzleCircle *this_ptr)

#include "nocturne.h"

void __cdecl
core_manpuz_cpp_CMansionPuzzleCircle_archive_FUN_0050adf0(CMansionPuzzleCircle *this_ptr)

{
  int iVar1;
  int *int_ptr;
  int *int_ptr_00;
  int *int_ptr_01;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c1c0(&this_ptr->base);
  if (1 < g_CMansionPuzzleCircleClassVersion) {
    core_actor_cpp_archiveVector_FUN_0040b340(&this_ptr->gem_pos,"pGemPos");
    core_actor_cpp_archiveOrientation_FUN_0040b3e0(&this_ptr->gem_orient,"pGemOrient");
    core_actor_cpp_archiveVector_FUN_0040b340(&this_ptr->emitter_pos,"pEmitterPos");
  }
  if (2 < g_CMansionPuzzleCircleClassVersion) {
    int_ptr = &this_ptr->blue;
    iVar1 = 0;
    int_ptr_01 = &this_ptr->green;
    int_ptr_00 = &this_ptr->red;
    do {
      core_actor_cpp_archiveInteger_FUN_0040b7f0
                ((int *)(this_ptr->unk2 + iVar1 * 100 + -4),"exists");
      core_actor_cpp_archiveInteger_FUN_0040b7f0(int_ptr_00,"r");
      core_actor_cpp_archiveInteger_FUN_0040b7f0(int_ptr_01,"g");
      iVar1 = iVar1 + 1;
      int_ptr_00 = int_ptr_00 + 0x19;
      int_ptr_01 = int_ptr_01 + 0x19;
      core_actor_cpp_archiveInteger_FUN_0040b7f0(int_ptr,"b");
      int_ptr = int_ptr + 0x19;
    } while (iVar1 < 0xc);
  }
  return;
}
