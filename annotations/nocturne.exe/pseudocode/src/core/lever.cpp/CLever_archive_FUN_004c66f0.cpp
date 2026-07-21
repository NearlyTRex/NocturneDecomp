// Name: core_lever.cpp_CLever_archive_FUN_004c66f0
// Address: 004c66f0
// Address Range: [[004c66f0, 004c68ca]]
// Convention: unknown
// Signature: void core_lever_cpp_CLever_archive_FUN_004c66f0(int param_1)

#include "nocturne.h"

void core_lever_cpp_CLever_archive_FUN_004c66f0(int param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char local_d4 [200];
  
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  pcVar3 = local_d4;
  if (DAT_00763e88 == 1) {
    core_actor_cpp_archiveString_FUN_0040c6d0(local_d4,"?modelName" + 1);
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(param_1 + 0x150,local_d4);
  }
  else {
    pcVar2 = (char *)(param_1 + 0x1c8);
    do {
      cVar1 = *pcVar2;
      *pcVar3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar3[1] = cVar1;
      pcVar3 = pcVar3 + 2;
    } while (cVar1 != '\0');
    core_actor_cpp_archiveString_FUN_0040c6d0(local_d4,"modelName");
  }
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x2d0,"leverType");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x2d8,"onEvent");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x33c,"offEvent");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x3a0,"sound");
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x2d4,"param");
  if (1 < 0x00000008) {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x404,"momentaryFlag");
  }
  if (2 < 0x00000008) {
    core_actor_cpp_archiveActor_FUN_0040c980(param_1 + 0x408,"linkedLever");
  }
  if (3 < 0x00000008) {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x40c,"endVertexIndex");
  }
  if (4 < 0x00000008) {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x410,"moving");
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x414,"moveToPct");
  }
  if (5 < 0x00000008) {
    core_actor_cpp_archiveRules_FUN_0040d110(param_1 + 0x418,"rules");
  }
  if (6 < 0x00000008) {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x804,"allowedSides");
  }
  if (0x00000008 < 8) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x808,"enableCollision");
  return;
}
