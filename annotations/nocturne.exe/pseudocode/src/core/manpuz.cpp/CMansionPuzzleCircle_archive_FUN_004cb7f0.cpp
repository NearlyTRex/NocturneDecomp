// Name: core_manpuz.cpp_CMansionPuzzleCircle_archive_FUN_004cb7f0
// Address: 004cb7f0
// Address Range: [[004cb7f0, 004cb8d2]]
// Convention: unknown
// Signature: void core_manpuz_cpp_CMansionPuzzleCircle_archive_FUN_004cb7f0(CDemonActor *param_1)

#include "nocturne.h"

void core_manpuz_cpp_CMansionPuzzleCircle_archive_FUN_004cb7f0(CDemonActor *param_1)

{
  int iVar1;
  int *int_ptr;
  float *int_ptr_00;
  int *int_ptr_01;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  if (1 < INT_005bad50) {
    core_actor_cpp_archiveVector_FUN_0040c450
              ((CVector3f *)(param_1[4].create_event + 0xc),"pGemPos");
    core_actor_cpp_archiveOrientation_FUN_0040c4f0
              ((COrientation *)(param_1[4].create_event + 0x18),"pGemOrient");
    core_actor_cpp_archiveVector_FUN_0040c450
              ((CVector3f *)(param_1[4].create_event + 0x24),"pEmitterPos");
  }
  if (2 < INT_005bad50) {
    int_ptr = &param_1[4].is_transparent;
    iVar1 = 0;
    int_ptr_01 = &param_1[4].is_renderable;
    int_ptr_00 = &param_1[4].platform_orientation_delta.z;
    do {
      core_actor_cpp_archiveInteger_FUN_0040c900
                ((int *)(param_1[4].create_event + iVar1 * 100 + 0x30),"exists");
      core_actor_cpp_archiveInteger_FUN_0040c900((int *)int_ptr_00,"r");
      core_actor_cpp_archiveInteger_FUN_0040c900(int_ptr_01,"g");
      iVar1 = iVar1 + 1;
      int_ptr_00 = int_ptr_00 + 0x19;
      int_ptr_01 = int_ptr_01 + 0x19;
      core_actor_cpp_archiveInteger_FUN_0040c900(int_ptr,"b");
      int_ptr = int_ptr + 0x19;
    } while (iVar1 < 0xc);
  }
  return;
}
