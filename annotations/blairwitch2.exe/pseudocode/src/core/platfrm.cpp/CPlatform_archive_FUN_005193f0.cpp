// Name: core_platfrm.cpp_CPlatform_archive_FUN_005193f0
// Address: 005193f0
// Address Range: [[005193f0, 005197a5]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_CPlatform_archive_FUN_005193f0(CPlatform *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_platfrm_cpp_CPlatform_archive_FUN_005193f0(CPlatform *this_ptr)

{
  CPlatform *pCVar1;
  int iVar2;
  int local_1c;
  uint local_18;
  int local_14;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c330((CDemonActor *)this_ptr);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ba60
            (&this_ptr->field_0x2b4,"?modelName" + 1);
  core_actor_cpp_archiveString_FUN_0040b730(&this_ptr->field_0x4b0,"toStartEvent");
  core_actor_cpp_archiveString_FUN_0040b730(&this_ptr->field_0x514,"toEndEvent");
  core_actor_cpp_archiveString_FUN_0040b730(&this_ptr->field_0x578,"stopEvent");
  core_actor_cpp_archiveString_FUN_0040b730(&this_ptr->field_0x5dc,"startSound");
  core_actor_cpp_archiveString_FUN_0040b730(&this_ptr->field_0x5f0,"stopSound");
  core_actor_cpp_archiveString_FUN_0040b730(&this_ptr->field_0x604,"activeSound");
  core_actor_cpp_archiveString_FUN_0040b730(&this_ptr->field_0x44c,"courseFilename");
  if (this_ptr->field_0x44c == '\0') {
    core_actor_cpp_archiveVector_FUN_0040b4b0(&this_ptr->field_0x478,"startPos");
    core_actor_cpp_archiveQuaternion_FUN_0040b690(&this_ptr->field_0x490,"origOrient");
    core_actor_cpp_archiveVector_FUN_0040b4b0(&this_ptr->field_0x484,"endPos");
    core_actor_cpp_archiveQuaternion_FUN_0040b690(&this_ptr->field_0x4a0,"endOrient");
  }
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->field_0x430,"state");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x438,"param");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x448,"travelTimeToStart");
  if (g_CPlatformClassVersion < 7) {
    *(uint *)&this_ptr->field_0x444 = *(uint *)&this_ptr->field_0x448;
  }
  else {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x444,"travelTimeToEnd");
  }
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->field_0x434,"groundType");
  if (1 < g_CPlatformClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->field_0x61c,"oneShot");
  }
  if (2 < g_CPlatformClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960
              ((int *)&this_ptr->field_0x620,"blockVirtualDirectorFlag");
  }
  if (3 < g_CPlatformClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960
              ((int *)&this_ptr->field_0x624,"renderInBackgroundWhenNotMovingFlag");
  }
  if (4 < g_CPlatformClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b730(&this_ptr->field_0x628,"cameraWhileMoving");
  }
  if (5 < g_CPlatformClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960
              ((int *)&this_ptr->field_0x668,"plotAsBoxInShadow");
  }
  if (7 < g_CPlatformClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x43c,"goalParam");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x440,"currentMovementRate");
    if (DAT_007bc038 == 1) {
      core_actor_cpp_archiveInteger_FUN_0040b960(&local_1c,"attachCount");
      if (10 < local_1c) {
        _DAT_01d046a0 = "..\\core\\platfrm.cpp";
        _DAT_01d046a4 = 0x316;
        core_main_c_FUN_004e4500("CPlatform::archive - too many attached actors.");
      }
      iVar2 = 0;
      pCVar1 = this_ptr;
      if (0 < local_1c) {
        do {
          core_actor_cpp_archiveActor_FUN_0040b9e0(&local_18,"attach actor");
          *(uint *)&pCVar1->field_0x678 = local_18;
          iVar2 = iVar2 + 1;
          pCVar1 = (CPlatform *)&pCVar1->field_0x34;
        } while (iVar2 < local_1c);
      }
    }
    else {
      local_14 = 0;
      pCVar1 = this_ptr;
      do {
        if (*(int *)&pCVar1->field_0x678 != 0) {
          local_14 = local_14 + 1;
        }
        pCVar1 = (CPlatform *)&pCVar1->field_0x34;
      } while (pCVar1 != (CPlatform *)&this_ptr->field_0x208);
      iVar2 = 0;
      core_actor_cpp_archiveInteger_FUN_0040b960(&local_14,"attachCount");
      pCVar1 = this_ptr;
      do {
        if (*(int *)&pCVar1->field_0x678 != 0) {
          core_actor_cpp_archiveActor_FUN_0040b9e0
                    (&this_ptr->field_0x678 + iVar2 * 0x34,"attach actor");
        }
        iVar2 = iVar2 + 1;
        pCVar1 = (CPlatform *)&pCVar1->field_0x34;
      } while (iVar2 < 10);
    }
  }
  if (8 < g_CPlatformClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->field_0x66c,"pushFlag");
  }
  if (9 < g_CPlatformClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960
              ((int *)&this_ptr->field_0x670,"recomputeFog");
  }
  if (10 < g_CPlatformClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960
              ((int *)&this_ptr->field_0x674,"plotInShadowFlag");
    return;
  }
  return;
}
