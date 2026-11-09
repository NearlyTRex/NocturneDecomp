// Name: core_mission.cpp_FUN_004f6a80
// Address: 004f6a80
// Address Range: [[004f6a80, 004f6be5]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_FUN_004f6a80(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_mission_cpp_FUN_004f6a80(CDemonMission *this_ptr)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = 0;
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Setting up actors");
  core_level_cpp_FUN_004e0000(0x01D70AB8,pcVar1,uVar6);
  core_skeleton_cpp_FUN_005503c0();
  iVar5 = 0;
  for (iVar3 = *(int *)(this_ptr + 0x143c); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x14c)) {
    iVar5 = iVar5 + 1;
    (**(code **)(*(int *)(iVar3 + 0x154) + 4))(iVar3);
  }
  if (*(int *)(this_ptr + 0x1008) == 0) {
    core_skeleton_cpp_FUN_005503f0();
  }
  iVar3 = *(int *)(this_ptr + 0x143c);
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar2 = iVar5 * 3 >> 0x1f;
    do {
      iVar4 = iVar4 + 1;
      (*(code *)**(uint **)(iVar3 + 0x154))(iVar3);
      if (iVar4 == (int)((iVar5 + (iVar5 >> 0x1f) * -4) - (uint)((iVar5 >> 0x1f) << 1 < 0)) >> 2) {
        uVar6 = 0;
        pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Setting up actors");
        core_level_cpp_FUN_004e0000(0x01D70AB8,pcVar1,uVar6);
      }
      if (iVar4 == iVar5 / 2) {
        uVar6 = 0;
        pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Setting up actors");
        core_level_cpp_FUN_004e0000(0x01D70AB8,pcVar1,uVar6);
      }
      if (iVar4 == (int)((iVar5 * 3 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2) {
        uVar6 = 0;
        pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Setting up actors");
        core_level_cpp_FUN_004e0000(0x01D70AB8,pcVar1,uVar6);
      }
      iVar3 = *(int *)(iVar3 + 0x14c);
    } while (iVar3 != 0);
  }
  *(uint *)(this_ptr + 0x1454) = *(uint *)this_ptr;
  return;
}
