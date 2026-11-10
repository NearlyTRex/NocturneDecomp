// Name: core_hero.cpp_CHero_archive_FUN_004d27b0
// Address: 004d27b0
// Address Range: [[004d27b0, 004d2a6f]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_archive_FUN_004d27b0(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_archive_FUN_004d27b0(CHero *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  int iVar1;
  char local_d4 [100];
  char local_70 [100];
  int local_c;
  
  model_ptr = (CDeformableModelInstance *)(this_ptr + 0x158);
  if (g_CHeroClassVersion < 4) {
    core_actor_cpp_CDemonActor_archive_FUN_0040c280((CDemonActor *)this_ptr);
    if (1 < g_CHeroClassVersion) {
      core_actor_cpp_archiveMotionState_FUN_0040bab0
                ((CMotionController *)model_ptr,"motion state");
    }
    if (2 < g_CHeroClassVersion) {
      core_actor_cpp_archivePartStatus_FUN_0040bba0
                ((CDeformableModelInstance *)(this_ptr + 0x158),"partStatus");
      core_actor_cpp_archiveActor_FUN_0040b930(this_ptr + 0x26fc,"grabbedBy");
      core_actor_cpp_archiveFloat_FUN_0040b830(this_ptr + 0x2538,"hitPoints");
    }
  }
  else {
    core_charactr_cpp_CCharacter_archive_FUN_0042b450((CCharacter *)this_ptr);
    core_actor_cpp_archiveMotionState_FUN_0040bab0
              ((CMotionController *)model_ptr,"motion state");
    core_actor_cpp_archivePartStatus_FUN_0040bba0(model_ptr,"partStatus");
    if (g_CHeroClassVersion < 8) {
      core_actor_cpp_archiveActor_FUN_0040b930(this_ptr + 0x26fc,"grabbedBy");
      *(uint *)(this_ptr + 0x2700) = 0;
    }
    if (4 < g_CHeroClassVersion) {
      core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)(this_ptr + 0xcdd0),"controlType");
    }
    if (6 < g_CHeroClassVersion) {
      core_actor_cpp_archiveActor_FUN_0040b930(this_ptr + 0x20b98,"objectToPickUp");
      core_actor_cpp_archiveActor_FUN_0040b930(this_ptr + 0x20b94,"doorToOpen");
      core_actor_cpp_archiveActor_FUN_0040b930(this_ptr + 0x20ba0,"leverToPull");
      core_actor_cpp_archiveActor_FUN_0040b930(this_ptr + 0x20ba4,"ladderToClimb");
      core_actor_cpp_archiveActor_FUN_0040b930(this_ptr + 0x20b9c,"pushedObject");
    }
    if (g_CHeroClassVersion == 10) {
      core_actor_cpp_archiveInteger_FUN_0040b8b0(&local_c,&DAT_005c4bbf);
    }
    if ((7 < g_CHeroClassVersion) && (g_CHeroClassVersion < 0xb)) {
      iVar1 = 0;
      do {
        _sprintf(local_70,"keyNameList[%d]");
        iVar1 = iVar1 + 1;
        core_actor_cpp_archiveString_FUN_0040b680(local_d4,local_70);
      } while (iVar1 < 0x20);
    }
    if (8 < g_CHeroClassVersion) {
      core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)(this_ptr + 0x20bc8),"AITask");
    }
    if (0xb < g_CHeroClassVersion) {
      core_actor_cpp_archiveInteger_FUN_0040b8b0
                ((int *)(this_ptr + 0x20b58),"isWearingGasMask");
    }
    if (0xc < g_CHeroClassVersion) {
      core_actor_cpp_archiveInteger_FUN_0040b8b0
                ((int *)(this_ptr + 0x20b5c),"isWearingGoggles");
    }
    if (5 < g_CHeroClassVersion) {
      if (DAT_007df9b8 == 1) {
        core_inv_cpp_CInventory_load_FUN_004dc750((CInventory *)(this_ptr + 0x206e8),DAT_007df9b4);
      }
      else {
        core_inv_cpp_CInventory_save_FUN_004dc560((CInventory *)(this_ptr + 0x206e8),DAT_007df9b4);
      }
    }
    if (0xd < g_CHeroClassVersion) {
      core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)(this_ptr + 0x20b80),&DAT_005c4bfd);
      core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)(this_ptr + 0x20b84),"bullets");
    }
    if (0xe < g_CHeroClassVersion) {
      core_actor_cpp_archiveFloat_FUN_0040b830(this_ptr + 0x20b88,"light_radius");
      return;
    }
  }
  return;
}
