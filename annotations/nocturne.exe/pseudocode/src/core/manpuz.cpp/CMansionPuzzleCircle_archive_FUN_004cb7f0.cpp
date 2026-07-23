// Name: core_manpuz.cpp_CMansionPuzzleCircle_archive_FUN_004cb7f0
// Address: 004cb7f0
// Address Range: [[004cb7f0, 004cb8d2]]
// Convention: unknown
// Signature: void core_manpuz_cpp_CMansionPuzzleCircle_archive_FUN_004cb7f0(int param_1)

#include "nocturne.h"

void core_manpuz_cpp_CMansionPuzzleCircle_archive_FUN_004cb7f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  if (1 < 0x00000003) {
    core_actor_cpp_archiveVector_FUN_0040c450(param_1 + 0x5c4,"pGemPos");
    core_actor_cpp_archiveOrientation_FUN_0040c4f0(param_1 + 0x5d0,"pGemOrient");
    core_actor_cpp_archiveVector_FUN_0040c450(param_1 + 0x5dc,"pEmitterPos");
  }
  if (2 < 0x00000003) {
    iVar2 = param_1 + 0x63c;
    iVar1 = 0;
    iVar4 = param_1 + 0x638;
    iVar3 = param_1 + 0x634;
    do {
      core_actor_cpp_archiveInteger_FUN_0040c900(iVar1 * 100 + param_1 + 0x5e8,"exists");
      core_actor_cpp_archiveInteger_FUN_0040c900(iVar3,"r");
      core_actor_cpp_archiveInteger_FUN_0040c900(iVar4,"g");
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 100;
      iVar4 = iVar4 + 100;
      core_actor_cpp_archiveInteger_FUN_0040c900(iVar2,"b");
      iVar2 = iVar2 + 100;
    } while (iVar1 < 0xc);
  }
  return;
}
