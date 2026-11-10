// Name: core_manpuz.cpp_CMansionPuzzleCircle_archive_FUN_004e7470
// Address: 004e7470
// Address Range: [[004e7470, 004e7552]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_archive_FUN_004e7470(CMansionPuzzleCircle *this_ptr)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_archive_FUN_004e7470(CMansionPuzzleCircle *this_ptr)

{
  int iVar1;
  int *int_ptr;
  int *int_ptr_00;
  int *int_ptr_01;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(&this_ptr->base);
  if (1 < g_CMansionPuzzleCircleClassVersion) {
    core_actor_cpp_archiveVector_FUN_0040b4b0(&this_ptr->gem_pos,"pGemPos");
    core_actor_cpp_archiveOrientation_FUN_0040b550(&this_ptr->gem_orient,"pGemOrient");
    core_actor_cpp_archiveVector_FUN_0040b4b0(&this_ptr->emitter_pos,"pEmitterPos");
  }
  if (2 < g_CMansionPuzzleCircleClassVersion) {
    int_ptr = (int *)&this_ptr->panels[0].field_0x54;
    iVar1 = 0;
    int_ptr_01 = (int *)&this_ptr->panels[0].field_0x50;
    int_ptr_00 = (int *)&this_ptr->panels[0].field_0x4c;
    do {
      core_actor_cpp_archiveInteger_FUN_0040b960
                ((int *)(this_ptr->panels + iVar1),"exists");
      core_actor_cpp_archiveInteger_FUN_0040b960(int_ptr_00,&DAT_005dc6cc);
      core_actor_cpp_archiveInteger_FUN_0040b960(int_ptr_01,&DAT_005dc6ce);
      iVar1 = iVar1 + 1;
      int_ptr_00 = int_ptr_00 + 0x19;
      int_ptr_01 = int_ptr_01 + 0x19;
      core_actor_cpp_archiveInteger_FUN_0040b960(int_ptr,&DAT_005dc6d0);
      int_ptr = int_ptr + 0x19;
    } while (iVar1 < 0xc);
  }
  return;
}
