// Name: core_frankgen.cpp_FUN_004ac230
// Address: 004ac230
// Address Range: [[004ac230, 004ac262] [004ac2b9, 004ac2e2] [004ac432, 004ac454]]
// Convention: unknown
// Signature: void core_frankgen_cpp_FUN_004ac230(CFrankenstienMachine *param_1)

#include "nocturne.h"

void core_frankgen_cpp_FUN_004ac230(CFrankenstienMachine *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  core_actor_cpp_FUN_00408a80((CDemonActor *)param_1);
  param_1->field_0x2bc = 0;
  *(uint *)&param_1->field_0x5e4 = 0;
  switch(*(uint *)&param_1->field_0x2b4) {
  case 0:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
              ((CKeyFramedModelInstance *)&param_1->field_0x2e0,"frankxbed.kfm");
    pcVar2 = "frankxbed.pth";
    pcVar3 = &param_1->field_0x2bc;
    do {
      cVar1 = *pcVar2;
      *pcVar3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar3[1] = cVar1;
      pcVar3 = pcVar3 + 2;
    } while (cVar1 != '\0');
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
              ((CKeyFramedModelInstance *)&param_1->field_0x468,"frankxbody.kfm");
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
              ((CKeyFramedModelInstance *)&param_1->field_0x468);
    break;
  case 1:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
              ((CKeyFramedModelInstance *)&param_1->field_0x2e0,"frankxcrn1.kfm");
    *(uint *)&param_1->field_0x5e4 = 0xae;
    break;
  case 2:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
              ((CKeyFramedModelInstance *)&param_1->field_0x2e0,"frankxcrn2.kfm");
    *(uint *)&param_1->field_0x5e4 = 0x8c;
    break;
  case 3:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
              ((CKeyFramedModelInstance *)&param_1->field_0x2e0,"frankxcrn3.kfm");
    *(uint *)&param_1->field_0x5e4 = 0x16a;
    break;
  case 4:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
              ((CKeyFramedModelInstance *)&param_1->field_0x2e0,"frankxstch.kfm");
    break;
  case 5:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
              ((CKeyFramedModelInstance *)&param_1->field_0x2e0,"frankxarm.kfm");
    break;
  case 6:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
              ((CKeyFramedModelInstance *)&param_1->field_0x2e0,"frankxflap1.kfm");
    pcVar2 = "frankxflap1.pth";
    pcVar3 = &param_1->field_0x2bc;
    do {
      cVar1 = *pcVar2;
      *pcVar3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar3[1] = cVar1;
      pcVar3 = pcVar3 + 2;
    } while (cVar1 != '\0');
    break;
  case 7:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
              ((CKeyFramedModelInstance *)&param_1->field_0x2e0,"frankxflap2.kfm");
    pcVar2 = "frankxflap2.pth";
    pcVar3 = &param_1->field_0x2bc;
    do {
      cVar1 = *pcVar2;
      *pcVar3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar3[1] = cVar1;
      pcVar3 = pcVar3 + 2;
    } while (cVar1 != '\0');
    break;
  case 8:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
              ((CKeyFramedModelInstance *)&param_1->field_0x2e0,"frankxramp.kfm");
    pcVar2 = "frankxramp.pth";
    pcVar3 = &param_1->field_0x2bc;
    do {
      cVar1 = *pcVar2;
      *pcVar3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar3[1] = cVar1;
      pcVar3 = pcVar3 + 2;
    } while (cVar1 != '\0');
  }
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
            ((CKeyFramedModelInstance *)&param_1->field_0x2e0);
  if (param_1->field_0x2bc != '\0') {
    core_course_cpp_CCourse_load_FUN_00438af0
              ((CCourse *)&param_1->field_0x45c,&param_1->field_0x2bc);
    core_frankgen_cpp_FUN_004accb0(param_1);
    return;
  }
  core_frankgen_cpp_FUN_004accb0(param_1);
  return;
}
