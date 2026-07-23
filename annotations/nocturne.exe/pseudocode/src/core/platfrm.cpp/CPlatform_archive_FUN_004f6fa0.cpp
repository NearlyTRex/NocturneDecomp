// Name: core_platfrm.cpp_CPlatform_archive_FUN_004f6fa0
// Address: 004f6fa0
// Address Range: [[004f6fa0, 004f7355]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_CPlatform_archive_FUN_004f6fa0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_platfrm_cpp_CPlatform_archive_FUN_004f6fa0(int param_1)

{
  int iVar1;
  int iVar2;
  int local_1c;
  uint local_18;
  int local_14;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00(param_1 + 0x150,"modelName");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x34c,"toStartEvent");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x3b0,"toEndEvent");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x414,"stopEvent");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x478,"startSound");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x48c,"stopSound");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x4a0,"activeSound");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x2e8,"courseFilename");
  if (*(char *)(param_1 + 0x2e8) == '\0') {
    core_actor_cpp_archiveVector_FUN_0040c450(param_1 + 0x314,"startPos");
    core_actor_cpp_archiveQuaternion_FUN_0040c630(param_1 + 0x32c,"origOrient");
    core_actor_cpp_archiveVector_FUN_0040c450(param_1 + 800,"endPos");
    core_actor_cpp_archiveQuaternion_FUN_0040c630(param_1 + 0x33c,"endOrient");
  }
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x2cc,"state");
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x2d4,"param");
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x2e4,"travelTimeToStart");
  if (0x0000000B < 7) {
    *(uint *)(param_1 + 0x2e0) = *(uint *)(param_1 + 0x2e4);
  }
  else {
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x2e0,"travelTimeToEnd");
  }
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x2d0,"groundType");
  if (1 < 0x0000000B) {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x4b8,"oneShot");
  }
  if (2 < 0x0000000B) {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x4bc,"blockVirtualDirectorFlag");
  }
  if (3 < 0x0000000B) {
    core_actor_cpp_archiveInteger_FUN_0040c900
              (param_1 + 0x4c0,"renderInBackgroundWhenNotMovingFlag");
  }
  if (4 < 0x0000000B) {
    core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x4c4,"cameraWhileMoving");
  }
  if (5 < 0x0000000B) {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x504,"plotAsBoxInShadow");
  }
  if (7 < 0x0000000B) {
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x2d8,"goalParam");
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x2dc,"currentMovementRate");
    if (DAT_00763e88 == 1) {
      core_actor_cpp_archiveInteger_FUN_0040c900(&local_1c,"attachCount");
      if (10 < local_1c) {
        _DAT_01cc4800 = "..\\core\\platfrm.cpp";
        _DAT_01cc4804 = 0x316;
        FUN_004c8440("CPlatform::archive - too many attached actors.");
      }
      iVar2 = 0;
      iVar1 = param_1;
      if (0 < local_1c) {
        do {
          core_actor_cpp_archiveActor_FUN_0040c980(&local_18,"attach actor");
          *(uint *)(iVar1 + 0x514) = local_18;
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 0x34;
        } while (iVar2 < local_1c);
      }
    }
    else {
      local_14 = 0;
      iVar1 = param_1;
      do {
        if (*(int *)(iVar1 + 0x514) != 0) {
          local_14 = local_14 + 1;
        }
        iVar1 = iVar1 + 0x34;
      } while (iVar1 != param_1 + 0x208);
      iVar2 = 0;
      core_actor_cpp_archiveInteger_FUN_0040c900(&local_14,"attachCount");
      iVar1 = param_1;
      do {
        if (*(int *)(iVar1 + 0x514) != 0) {
          core_actor_cpp_archiveActor_FUN_0040c980
                    (iVar2 * 0x34 + param_1 + 0x514,"attach actor");
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0x34;
      } while (iVar2 < 10);
    }
  }
  if (8 < 0x0000000B) {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x508,"pushFlag");
  }
  if (9 < 0x0000000B) {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x50c,"recomputeFog");
  }
  if (10 < 0x0000000B) {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x510,"plotInShadowFlag");
    return;
  }
  return;
}
