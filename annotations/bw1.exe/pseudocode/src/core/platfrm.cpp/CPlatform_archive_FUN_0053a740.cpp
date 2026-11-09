// Name: core_platfrm.cpp_CPlatform_archive_FUN_0053a740
// Address: 0053a740
// Address Range: [[0053a740, 0053aaf5]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_CPlatform_archive_FUN_0053a740(CPlatform *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_platfrm_cpp_CPlatform_archive_FUN_0053a740(CPlatform *this_ptr)

{
  CPlatform *pCVar1;
  int iVar2;
  int local_1c;
  uint local_18;
  int local_14;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c040((CDemonActor *)this_ptr);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b770
            (&this_ptr->field_0x158,"modelName");
  core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x354,"toStartEvent");
  core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x3b8,"toEndEvent");
  core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x41c,"stopEvent");
  core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x480,"startSound");
  core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x494,"stopSound");
  core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x4a8,"activeSound");
  core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x2f0,"courseFilename");
  if (this_ptr->field_0x2f0 == '\0') {
    core_actor_cpp_archiveVector_FUN_0040b1c0(&this_ptr->field_0x31c,"startPos");
    core_actor_cpp_archiveQuaternion_FUN_0040b3a0(&this_ptr->field_0x334,"origOrient");
    core_actor_cpp_archiveVector_FUN_0040b1c0(&this_ptr->field_0x328,"endPos");
    core_actor_cpp_archiveQuaternion_FUN_0040b3a0(&this_ptr->field_0x344,"endOrient");
  }
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x2d4,"state");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x2dc,"param");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x2ec,"travelTimeToStart");
  if (g_CPlatformClassVersion < 7) {
    *(uint *)&this_ptr->field_0x2e8 = *(uint *)&this_ptr->field_0x2ec;
  }
  else {
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x2e8,"travelTimeToEnd");
  }
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x2d8,"groundType");
  if (1 < g_CPlatformClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x4c0,"oneShot");
  }
  if (2 < g_CPlatformClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670
              ((int *)&this_ptr->field_0x4c4,"blockVirtualDirectorFlag");
  }
  if (3 < g_CPlatformClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670
              ((int *)&this_ptr->field_0x4c8,"renderInBackgroundWhenNotMovingFlag");
  }
  if (4 < g_CPlatformClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x4cc,"cameraWhileMoving");
  }
  if (5 < g_CPlatformClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670
              ((int *)&this_ptr->field_0x50c,"plotAsBoxInShadow");
  }
  if (7 < g_CPlatformClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x2e0,"goalParam");
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x2e4,"currentMovementRate");
    if (DAT_007c3038 == 1) {
      core_actor_cpp_archiveInteger_FUN_0040b670(&local_1c,"attachCount");
      if (10 < local_1c) {
        _DAT_01d1d400 = "..\\core\\platfrm.cpp";
        _DAT_01d1d404 = 0x316;
        core_main_c_FUN_005030e0("CPlatform::archive - too many attached actors.");
      }
      iVar2 = 0;
      pCVar1 = this_ptr;
      if (0 < local_1c) {
        do {
          core_actor_cpp_archiveActor_FUN_0040b6f0(&local_18,"attach actor");
          *(uint *)&pCVar1->field_0x51c = local_18;
          iVar2 = iVar2 + 1;
          pCVar1 = (CPlatform *)&pCVar1->field_0x34;
        } while (iVar2 < local_1c);
      }
    }
    else {
      local_14 = 0;
      pCVar1 = this_ptr;
      do {
        if (*(int *)&pCVar1->field_0x51c != 0) {
          local_14 = local_14 + 1;
        }
        pCVar1 = (CPlatform *)&pCVar1->field_0x34;
      } while (pCVar1 != (CPlatform *)&this_ptr->field_0x208);
      iVar2 = 0;
      core_actor_cpp_archiveInteger_FUN_0040b670(&local_14,"attachCount");
      pCVar1 = this_ptr;
      do {
        if (*(int *)&pCVar1->field_0x51c != 0) {
          core_actor_cpp_archiveActor_FUN_0040b6f0
                    (&this_ptr->field_0x51c + iVar2 * 0x34,"attach actor");
        }
        iVar2 = iVar2 + 1;
        pCVar1 = (CPlatform *)&pCVar1->field_0x34;
      } while (iVar2 < 10);
    }
  }
  if (8 < g_CPlatformClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x510,"pushFlag");
  }
  if (9 < g_CPlatformClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670
              ((int *)&this_ptr->field_0x514,"recomputeFog");
  }
  if (10 < g_CPlatformClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670
              ((int *)&this_ptr->field_0x518,"plotInShadowFlag");
    return;
  }
  return;
}
