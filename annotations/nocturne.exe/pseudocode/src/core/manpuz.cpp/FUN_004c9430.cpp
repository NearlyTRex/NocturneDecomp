// Name: core_manpuz.cpp_FUN_004c9430
// Address: 004c9430
// Address Range: [[004c9430, 004c9570]]
// Convention: unknown
// Signature: int core_manpuz_cpp_FUN_004c9430(undefined4 param_1)

#include "nocturne.h"

int core_manpuz_cpp_FUN_004c9430(uint param_1)

{
  char cVar1;
  int iVar2;
  CKeyFramedModelInstance *pCVar3;
  void *pvVar4;
  char *pcVar5;
  char *pcVar6;
  
  iVar2 = core_actor_cpp_FUN_00409d30(param_1);
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490
                     ((CKeyFramedModelInstance *)(iVar2 + 0x150));
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490(pCVar3 + 1);
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490(pCVar3 + 1);
  pvVar4 = __arrinit
                     (pCVar3[1].part_visibility_flags + 9,0xc,&g_SPanelTypeInfo_005a0210);
  pvVar4 = __arrinit
                     ((void *)((int)pvVar4 + 0x4b0),0xc,&g_SGemTypeInfo_005a0230);
  pvVar4 = __arrinit
                     ((void *)((int)pvVar4 + 0x8a0),2,&g_SReflectorTypeInfo_005a0250);
  *(byte ***)((int)pvVar4 + -0x11ec) = &PTR_core_manpuz_cpp_FUN_004c9580_005a0054;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            ((CKeyFramedModelInstance *)((int)pvVar4 + -0x11e8),"doorpuzz.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            ((CKeyFramedModelInstance *)((int)pvVar4 + -0x106c),"puzz-rec.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            ((CKeyFramedModelInstance *)((int)pvVar4 + -0xef0),"mirrhack.kfm");
  pcVar5 = "headlite.raw";
  pcVar6 = (char *)((int)pvVar4 + 0x188);
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  *(uint *)((int)pvVar4 + -0xd6c) = 0;
  *(uint *)((int)pvVar4 + -0xd70) = *(uint *)((int)pvVar4 + -0xd6c);
  *(uint *)((int)pvVar4 + -0xd74) = *(uint *)((int)pvVar4 + -0xd70);
  *(uint *)((int)pvVar4 + -0xd60) = 0;
  *(uint *)((int)pvVar4 + -0xd64) = *(uint *)((int)pvVar4 + -0xd60);
  *(uint *)((int)pvVar4 + -0xd68) = *(uint *)((int)pvVar4 + -0xd64);
  *(uint *)((int)pvVar4 + -0xd54) = 0;
  *(uint *)((int)pvVar4 + -0xd58) = *(uint *)((int)pvVar4 + -0xd54);
  *(uint *)((int)pvVar4 + -0xd5c) = *(uint *)((int)pvVar4 + -0xd58);
  core_manpuz_cpp_FUN_004ca410((int)pvVar4 + -0x1338);
  return (int)pvVar4 + -0x1338;
}
