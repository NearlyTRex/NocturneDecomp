// Name: core_skeleton.cpp_FUN_00569f50
// Address: 00569f50
// Address Range: [[00569f50, 00569fa4]]
// Convention: unknown
// Signature: void core_skeleton_cpp_FUN_00569f50(CDeformableModelInstance *param_1,char *param_2)

#include "nocturne.h"

void core_skeleton_cpp_FUN_00569f50(CDeformableModelInstance *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = &param_1->field_0x2350;
  do {
    cVar1 = *param_2;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  *(uint *)&param_1->field_0x23a0 = 0;
  core_skeleton_cpp_FUN_00569ae0(param_1);
  core_skeleton_cpp_FUN_00569b00(param_1);
  *(uint *)&param_1->field_0x2320 = 0xffffffff;
  return;
}
