// Name: core_hero.cpp_FUN_004eab00
// Address: 004eab00
// Address Range: [[004eab00, 004ead76]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_FUN_004eab00(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_FUN_004eab00(CHero *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  int iVar1;
  char local_d4 [100];
  char local_70 [100];
  int local_c;
  
  model_ptr = (CDeformableModelInstance *)(this_ptr + 0x158);
  if (g_CHeroClassVersion < 4) {
    core_actor_cpp_CDemonActor_archive_FUN_0040c040((CDemonActor *)this_ptr);
    if (1 < g_CHeroClassVersion) {
      core_actor_cpp_FUN_0040b870((CMotionController *)model_ptr,"motion state");
    }
    if (2 < g_CHeroClassVersion) {
      core_actor_cpp_FUN_0040b960
                ((CDeformableModelInstance *)(this_ptr + 0x158),"partStatus");
      core_actor_cpp_archiveActor_FUN_0040b6f0(this_ptr + 0x26fc,"grabbedBy");
      core_actor_cpp_archiveFloat_FUN_0040b5f0(this_ptr + 0x2538,"hitPoints");
    }
  }
  else {
    core_charactr_cpp_FUN_0042c7f0(this_ptr);
    core_actor_cpp_FUN_0040b870((CMotionController *)model_ptr,"motion state");
    core_actor_cpp_FUN_0040b960(model_ptr,"partStatus");
    if (g_CHeroClassVersion < 8) {
      core_actor_cpp_archiveActor_FUN_0040b6f0(this_ptr + 0x26fc,"grabbedBy");
      *(uint *)(this_ptr + 0x2700) = 0;
    }
    if (4 < g_CHeroClassVersion) {
      core_actor_cpp_archiveInteger_FUN_0040b670((int *)(this_ptr + 0xc1d4),"controlType");
    }
    if (6 < g_CHeroClassVersion) {
      core_actor_cpp_archiveActor_FUN_0040b6f0(this_ptr + 0x1ff78,"objectToPickUp");
      core_actor_cpp_archiveActor_FUN_0040b6f0(this_ptr + 0x1ff74,"doorToOpen");
      core_actor_cpp_archiveActor_FUN_0040b6f0(this_ptr + 0x1ff80,"leverToPull");
      core_actor_cpp_archiveActor_FUN_0040b6f0(this_ptr + 0x1ff84,"ladderToClimb");
      core_actor_cpp_archiveActor_FUN_0040b6f0(this_ptr + 0x1ff7c,"pushedObject");
    }
    if (g_CHeroClassVersion == 10) {
      core_actor_cpp_archiveInteger_FUN_0040b670(&local_c,"keys");
    }
    if ((7 < g_CHeroClassVersion) && (g_CHeroClassVersion < 0xb)) {
      iVar1 = 0;
      do {
        FUN_005bfb40(local_70,"keyNameList[%d]",iVar1);
        iVar1 = iVar1 + 1;
        core_actor_cpp_archiveString_FUN_0040b440(local_d4,local_70);
      } while (iVar1 < 0x20);
    }
    if (8 < g_CHeroClassVersion) {
      core_actor_cpp_archiveInteger_FUN_0040b670((int *)(this_ptr + 0x1ffa8),"AITask");
    }
    if (0xb < g_CHeroClassVersion) {
      core_actor_cpp_archiveInteger_FUN_0040b670
                ((int *)(this_ptr + 0x1ff54),"isWearingGasMask");
    }
    if (0xc < g_CHeroClassVersion) {
      core_actor_cpp_archiveInteger_FUN_0040b670
                ((int *)(this_ptr + 0x1ff58),"isWearingGoggles");
    }
    if (5 < g_CHeroClassVersion) {
      if (DAT_007c3038 != 1) {
        core_inv_cpp_FUN_004f95b0((CInventory *)(this_ptr + 0x1fae8),DAT_007c3034);
        return;
      }
      core_inv_cpp_CInventory_load_FUN_004f97a0((CInventory *)(this_ptr + 0x1fae8),DAT_007c3034);
      return;
    }
  }
  return;
}
