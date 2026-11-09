// Name: core_platfrm.cpp_FUN_00512420
// Address: 00512420
// Address Range: [[00512420, 005127e5]]
// Convention: unknown
// Signature: void core_platfrm_cpp_FUN_00512420(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_platfrm_cpp_FUN_00512420(CDemonActor *param_1)

{
  CDemonActor *pCVar1;
  int iVar2;
  int iStack_1c;
  uint uStack_18;
  int iStack_14;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c280(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b9b0(param_1 + 1,"?modelName" + 1);
  core_actor_cpp_archiveString_FUN_0040b680(&param_1[2].field_0xa4,"toStartEvent");
  core_actor_cpp_archiveString_FUN_0040b680(&param_1[2].field_0x108,"toEndEvent");
  core_actor_cpp_archiveString_FUN_0040b680(&param_1[3].field_0x14,"stopEvent");
  core_actor_cpp_archiveString_FUN_0040b680(&param_1[3].field_0x78,"startSound");
  core_actor_cpp_archiveString_FUN_0040b680(&param_1[3].field_0x8c,"stopSound");
  core_actor_cpp_archiveString_FUN_0040b680(&param_1[3].field_0xa0,"activeSound");
  core_actor_cpp_archiveString_FUN_0040b680(&param_1[2].field_0x40,"courseFilename");
  if (param_1[2].field_0x40 == '\0') {
    core_actor_cpp_archiveVector_FUN_0040b400(&param_1[2].field_0x6c,"startPos");
    core_actor_cpp_archiveQuaternion_FUN_0040b5e0(&param_1[2].field_0x84,"origOrient");
    core_actor_cpp_archiveVector_FUN_0040b400(&param_1[2].field_0x78,"endPos");
    core_actor_cpp_archiveQuaternion_FUN_0040b5e0(&param_1[2].field_0x94,"endOrient");
  }
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&param_1[2].field_0x24,"state");
  core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[2].field_0x2c,"param");
  core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[2].field_0x3c,"travelTimeToStart");
  if (g_CPlatformClassVersion < 7) {
    *(uint *)&param_1[2].field_0x38 = *(uint *)&param_1[2].field_0x3c;
  }
  else {
    core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[2].field_0x38,"travelTimeToEnd");
  }
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&param_1[2].field_0x28,"groundType");
  if (1 < g_CPlatformClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&param_1[3].field_0xb8,"oneShot");
  }
  if (2 < g_CPlatformClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)&param_1[3].field_0xbc,"blockVirtualDirectorFlag");
  }
  if (3 < g_CPlatformClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)&param_1[3].field_0xc0,"renderInBackgroundWhenNotMovingFlag");
  }
  if (4 < g_CPlatformClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b680(&param_1[3].field_0xc4,"cameraWhileMoving");
  }
  if (5 < g_CPlatformClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)&param_1[3].field_0x104,"plotAsBoxInShadow");
  }
  if (7 < g_CPlatformClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[2].field_0x30,"goalParam");
    core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[2].field_0x34,"currentMovementRate");
    if (DAT_007df9b8 == 1) {
      core_actor_cpp_archiveInteger_FUN_0040b8b0(&iStack_1c,"attachCount");
      if (10 < iStack_1c) {
        _DAT_01d71de0 = "..\\core\\platfrm.cpp";
        _DAT_01d71de4 = 0x316;
        core_main_c_FUN_004e4330("CPlatform::archive - too many attached actors.");
      }
      iVar2 = 0;
      pCVar1 = param_1;
      if (0 < iStack_1c) {
        do {
          core_actor_cpp_archiveActor_FUN_0040b930(&uStack_18,"attach actor");
          *(uint *)&pCVar1[3].field_0x114 = uStack_18;
          iVar2 = iVar2 + 1;
          pCVar1 = (CDemonActor *)&pCVar1->field_0x34;
        } while (iVar2 < iStack_1c);
      }
    }
    else {
      iStack_14 = 0;
      pCVar1 = param_1;
      do {
        if (*(int *)&pCVar1[3].field_0x114 != 0) {
          iStack_14 = iStack_14 + 1;
        }
        pCVar1 = (CDemonActor *)&pCVar1->field_0x34;
      } while (pCVar1 != (CDemonActor *)&param_1[1].field_0xb0);
      iVar2 = 0;
      core_actor_cpp_archiveInteger_FUN_0040b8b0(&iStack_14,"attachCount");
      pCVar1 = param_1;
      do {
        if (*(int *)&pCVar1[3].field_0x114 != 0) {
          core_actor_cpp_archiveActor_FUN_0040b930
                    (&param_1[3].field_0x114 + iVar2 * 0x34,"attach actor");
        }
        iVar2 = iVar2 + 1;
        pCVar1 = (CDemonActor *)&pCVar1->field_0x34;
      } while (iVar2 < 10);
    }
  }
  if (8 < g_CPlatformClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&param_1[3].field_0x108,"pushFlag");
  }
  if (9 < g_CPlatformClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)&param_1[3].field_0x10c,"recomputeFog");
  }
  if (10 < g_CPlatformClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)&param_1[3].field_0x110,"plotInShadowFlag");
    return;
  }
  return;
}
