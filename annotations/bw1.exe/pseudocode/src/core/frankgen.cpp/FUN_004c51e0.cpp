// Name: core_frankgen.cpp_FUN_004c51e0
// Address: 004c51e0
// Address Range: [[004c51e0, 004c5212] [004c5269, 004c5292] [004c53e2, 004c5404]]
// Convention: unknown
// Signature: void core_frankgen_cpp_FUN_004c51e0(CFrankenstienMachine *param_1)

#include "nocturne.h"

void core_frankgen_cpp_FUN_004c51e0(CFrankenstienMachine *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  core_actor_cpp_FUN_00408850((CDemonActor *)param_1);
  param_1->field_0x160 = 0;
  *(uint *)&param_1->field_0x488 = 0;
  switch(*(uint *)&param_1->field_0x158) {
  case 0:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
              ((CKeyFramedModelInstance *)&param_1->field_0x184,"frankxbed.kfm");
    pcVar2 = "frankxbed.pth";
    pcVar3 = &param_1->field_0x160;
    do {
      cVar1 = *pcVar2;
      *pcVar3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar3[1] = cVar1;
      pcVar3 = pcVar3 + 2;
    } while (cVar1 != '\0');
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
              ((CKeyFramedModelInstance *)&param_1->field_0x30c,"frankxbody.kfm");
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
              ((CKeyFramedModelInstance *)&param_1->field_0x30c);
    break;
  case 1:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
              ((CKeyFramedModelInstance *)&param_1->field_0x184,"frankxcrn1.kfm");
    *(uint *)&param_1->field_0x488 = 0xae;
    break;
  case 2:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
              ((CKeyFramedModelInstance *)&param_1->field_0x184,"frankxcrn2.kfm");
    *(uint *)&param_1->field_0x488 = 0x8c;
    break;
  case 3:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
              ((CKeyFramedModelInstance *)&param_1->field_0x184,"frankxcrn3.kfm");
    *(uint *)&param_1->field_0x488 = 0x16a;
    break;
  case 4:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
              ((CKeyFramedModelInstance *)&param_1->field_0x184,"frankxstch.kfm");
    break;
  case 5:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
              ((CKeyFramedModelInstance *)&param_1->field_0x184,"frankxarm.kfm");
    break;
  case 6:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
              ((CKeyFramedModelInstance *)&param_1->field_0x184,"frankxflap1.kfm");
    pcVar2 = "frankxflap1.pth";
    pcVar3 = &param_1->field_0x160;
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
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
              ((CKeyFramedModelInstance *)&param_1->field_0x184,"frankxflap2.kfm");
    pcVar2 = "frankxflap2.pth";
    pcVar3 = &param_1->field_0x160;
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
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
              ((CKeyFramedModelInstance *)&param_1->field_0x184,"frankxramp.kfm");
    pcVar2 = "frankxramp.pth";
    pcVar3 = &param_1->field_0x160;
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
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
            ((CKeyFramedModelInstance *)&param_1->field_0x184);
  if (param_1->field_0x160 != '\0') {
    core_course_cpp_CCourse_load_FUN_00447db0
              ((CCourse *)&param_1->field_0x300,&param_1->field_0x160);
    core_frankgen_cpp_FUN_004c5c60(param_1);
    return;
  }
  core_frankgen_cpp_FUN_004c5c60(param_1);
  return;
}
