// Name: core_manpuz.cpp_FUN_004e7470
// Address: 004e7470
// Address Range: [[004e7470, 004e7552]]
// Convention: unknown
// Signature: void core_manpuz_cpp_FUN_004e7470(CDemonActor *param_1)

#include "nocturne.h"

void core_manpuz_cpp_FUN_004e7470(CDemonActor *param_1)

{
  int iVar1;
  int *int_ptr;
  int *int_ptr_00;
  int *int_ptr_01;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(param_1);
  if (1 < g_CMansionPuzzleCircleClassVersion) {
    core_actor_cpp_archiveVector_FUN_0040b4b0(&param_1[2].field_0x1c0,"pGemPos");
    core_actor_cpp_archiveOrientation_FUN_0040b550(&param_1[2].field_0x1cc,"pGemOrient");
    core_actor_cpp_archiveVector_FUN_0040b4b0(&param_1[2].field_0x1d8,"pEmitterPos");
  }
  if (2 < g_CMansionPuzzleCircleClassVersion) {
    int_ptr = (int *)&param_1[2].field_0x238;
    iVar1 = 0;
    int_ptr_01 = (int *)&param_1[2].field_0x234;
    int_ptr_00 = (int *)&param_1[2].field_0x230;
    do {
      core_actor_cpp_archiveInteger_FUN_0040b960
                ((int *)(&param_1[2].field_0x1e4 + iVar1 * 100),"exists");
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
