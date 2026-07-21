// Name: FUN_004b49a0
// Address: 004b49a0
// Address Range: [[004b49a0, 004b4bf9]]
// Convention: unknown
// Signature: int FUN_004b49a0(int param_1)

#include "nocturne.h"

int FUN_004b49a0(int param_1)

{
  int iVar1;
  int iVar2;
  byte local_d4 [100];
  byte local_70 [100];
  byte local_c [4];
  
  iVar2 = param_1 + 0x150;
  if (0x0000000C < 4) {
    iVar1 = core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
    if (1 < 0x0000000C) {
      iVar1 = FUN_0040cb00(iVar2,"motion state");
    }
    if (2 < 0x0000000C) {
      core_actor_cpp_archivePartStatus_FUN_0040cbf0(param_1 + 0x150,"partStatus");
      core_actor_cpp_archiveActor_FUN_0040c980(param_1 + 0x2590,"grabbedBy");
      iVar1 = core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x2434,"hitPoints");
    }
  }
  else {
    core_charactr_cpp_CCharacter_archive_FUN_004244b0(param_1);
    FUN_0040cb00(iVar2,"motion state");
    core_actor_cpp_archivePartStatus_FUN_0040cbf0(iVar2,"partStatus");
    if (0x0000000C < 8) {
      core_actor_cpp_archiveActor_FUN_0040c980(param_1 + 0x2590,"grabbedBy");
      *(uint *)(param_1 + 0x2594) = 0;
    }
    if (4 < 0x0000000C) {
      core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0xbc90,"controlType");
    }
    if (6 < 0x0000000C) {
      core_actor_cpp_archiveActor_FUN_0040c980(param_1 + 0x1fa08,"objectToPickUp");
      core_actor_cpp_archiveActor_FUN_0040c980(param_1 + 0x1fa04,"doorToOpen");
      core_actor_cpp_archiveActor_FUN_0040c980(param_1 + 0x1fa10,"leverToPull");
      core_actor_cpp_archiveActor_FUN_0040c980(param_1 + 0x1fa14,"ladderToClimb");
      core_actor_cpp_archiveActor_FUN_0040c980(param_1 + 0x1fa0c,"pushedObject");
    }
    if (0x0000000C == 10) {
      core_actor_cpp_archiveInteger_FUN_0040c900(local_c,&DAT_00585765);
    }
    iVar1 = 0x0000000C;
    if ((7 < 0x0000000C) && (0x0000000C < 0xb)) {
      iVar2 = 0;
      do {
        _sprintf(local_70,"keyNameList[%d]",iVar2);
        iVar2 = iVar2 + 1;
        iVar1 = core_actor_cpp_archiveString_FUN_0040c6d0(local_d4,local_70);
      } while (iVar2 < 0x20);
    }
    if (8 < 0x0000000C) {
      iVar1 = core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x1fa38,"AITask");
    }
    if (0xb < 0x0000000C) {
      iVar1 = core_actor_cpp_archiveInteger_FUN_0040c900
                        (param_1 + 0x1fa00,"isWearingGasMask");
    }
    if (5 < 0x0000000C) {
      if (DAT_00763e88 != 1) {
        iVar2 = core_inv_cpp_CInventory_save_FUN_004c0fa0(param_1 + 0x1f5a0,DAT_00763e84);
        return iVar2;
      }
      iVar2 = core_inv_cpp_CInventory_load_FUN_004c1190(param_1 + 0x1f5a0,DAT_00763e84);
      return iVar2;
    }
  }
  return iVar1;
}
