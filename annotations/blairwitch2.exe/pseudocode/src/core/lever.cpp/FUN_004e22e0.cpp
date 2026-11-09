// Name: core_lever.cpp_FUN_004e22e0
// Address: 004e22e0
// Address Range: [[004e22e0, 004e24ba]]
// Convention: unknown
// Signature: void core_lever_cpp_FUN_004e22e0(CDemonActor *param_1)

#include "nocturne.h"

void core_lever_cpp_FUN_004e22e0(CDemonActor *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char acStack_d4 [200];
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(param_1);
  pcVar3 = acStack_d4;
  if (DAT_007bc038 == 1) {
    core_actor_cpp_archiveString_FUN_0040b730(acStack_d4,"?modelName" + 1);
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
              ((CKeyFramedModelInstance *)(param_1 + 1),acStack_d4);
  }
  else {
    pcVar2 = &param_1[1].field_0x78;
    do {
      cVar1 = *pcVar2;
      *pcVar3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar3[1] = cVar1;
      pcVar3 = pcVar3 + 2;
    } while (cVar1 != '\0');
    core_actor_cpp_archiveString_FUN_0040b730(acStack_d4,"modelName");
  }
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x180,"leverType");
  core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0x188,"onEvent");
  core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0x1ec,"offEvent");
  core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0x250,"sound");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x184,"param");
  if (1 < g_CLeverClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)(param_1 + 2),"momentaryFlag");
  }
  if (2 < g_CLeverClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b9e0(&param_1[2].field_0x4,"linkedLever");
  }
  if (3 < g_CLeverClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960
              ((int *)&param_1[2].field_0x8,"endVertexIndex");
  }
  if (4 < g_CLeverClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[2].field_0xc,"moving");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[2].field_0x10,"moveToPct");
  }
  if (5 < g_CLeverClassVersion) {
    core_actor_cpp_archiveRules_FUN_0040c170(&param_1[2].field_0x14,"rules");
  }
  if (6 < g_CLeverClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960
              ((int *)&param_1[3].field_0x14c,"allowedSides");
  }
  if (g_CLeverClassVersion < 8) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b960
            ((int *)&param_1[3].field_0x150,"enableCollision");
  return;
}
