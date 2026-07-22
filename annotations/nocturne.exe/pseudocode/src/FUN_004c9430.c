// Name: FUN_004c9430
// Address: 004c9430
// Address Range: [[004c9430, 004c9570]]
// Convention: unknown
// Signature: int FUN_004c9430(undefined4 param_1)

#include "nocturne.h"

int FUN_004c9430(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = core_actor_cpp_FUN_00409d30(param_1);
  iVar2 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490(iVar2 + 0x150);
  iVar2 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490(iVar2 + 0x17c);
  iVar2 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490(iVar2 + 0x17c);
  iVar2 = __arrinit(iVar2 + 0x1a0,0xc,&DAT_005a0210);
  iVar2 = __arrinit(iVar2 + 0x4b0,0xc,&DAT_005a0230);
  iVar2 = __arrinit(iVar2 + 0x8a0,2,&DAT_005a0250);
  *(byte ***)(iVar2 + -0x11ec) = &PTR_FUN_005a0054;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (iVar2 + -0x11e8,"doorpuzz.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (iVar2 + -0x106c,"puzz-rec.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (iVar2 + -0xef0,"mirrhack.kfm");
  pcVar3 = "headlite.raw";
  pcVar4 = (char *)(iVar2 + 0x188);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + -0xd6c) = 0;
  *(uint *)(iVar2 + -0xd70) = *(uint *)(iVar2 + -0xd6c);
  *(uint *)(iVar2 + -0xd74) = *(uint *)(iVar2 + -0xd70);
  *(uint *)(iVar2 + -0xd60) = 0;
  *(uint *)(iVar2 + -0xd64) = *(uint *)(iVar2 + -0xd60);
  *(uint *)(iVar2 + -0xd68) = *(uint *)(iVar2 + -0xd64);
  *(uint *)(iVar2 + -0xd54) = 0;
  *(uint *)(iVar2 + -0xd58) = *(uint *)(iVar2 + -0xd54);
  *(uint *)(iVar2 + -0xd5c) = *(uint *)(iVar2 + -0xd58);
  FUN_004ca410(iVar2 + -0x1338);
  return iVar2 + -0x1338;
}
