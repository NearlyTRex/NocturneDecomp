// Name: core_lever.cpp_CLever_archive_FUN_004e0830
// Address: 004e0830
// Address Range: [[004e0830, 004e0a0a]]
// Convention: __cdecl
// Signature: void __cdecl core_lever_cpp_CLever_archive_FUN_004e0830(CLever *this_ptr)

#include "nocturne.h"

void __cdecl core_lever_cpp_CLever_archive_FUN_004e0830(CLever *this_ptr)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char acStack_d4 [200];
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c280((CDemonActor *)this_ptr);
  pcVar3 = acStack_d4;
  if (DAT_007df9b8 == 1) {
    core_actor_cpp_archiveString_FUN_0040b680(acStack_d4,"?modelName" + 1);
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
              ((CKeyFramedModelInstance *)&this_ptr->field_0x158,acStack_d4);
  }
  else {
    pcVar2 = &this_ptr->field_0x1d0;
    do {
      cVar1 = *pcVar2;
      *pcVar3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar3[1] = cVar1;
      pcVar3 = pcVar3 + 2;
    } while (cVar1 != '\0');
    core_actor_cpp_archiveString_FUN_0040b680(acStack_d4,"modelName");
  }
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0x2d8,"leverType");
  core_actor_cpp_archiveString_FUN_0040b680(&this_ptr->field_0x2e0,"onEvent");
  core_actor_cpp_archiveString_FUN_0040b680(&this_ptr->field_0x344,"offEvent");
  core_actor_cpp_archiveString_FUN_0040b680(&this_ptr->field_0x3a8,"sound");
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0x2dc,"param");
  if (1 < g_CLeverClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)&this_ptr->field_0x40c,"momentaryFlag");
  }
  if (2 < g_CLeverClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b930(&this_ptr->field_0x410,"linkedLever");
  }
  if (3 < g_CLeverClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)&this_ptr->field_0x414,"endVertexIndex");
  }
  if (4 < g_CLeverClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0x418,"moving");
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0x41c,"moveToPct");
  }
  if (5 < g_CLeverClassVersion) {
    core_actor_cpp_archiveRules_FUN_0040c0c0(&this_ptr->field_0x420,"rules");
  }
  if (6 < g_CLeverClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)&this_ptr->field_0x80c,"allowedSides");
  }
  if (g_CLeverClassVersion < 8) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b8b0
            ((int *)&this_ptr->field_0x810,"enableCollision");
  return;
}
