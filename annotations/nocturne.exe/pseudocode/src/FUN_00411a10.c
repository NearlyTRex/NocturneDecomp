// Name: FUN_00411a10
// Address: 00411a10
// Address Range: [[00411a10, 00411adf]]
// Convention: unknown
// Signature: int FUN_00411a10(undefined4 param_1)

#include "nocturne.h"

int FUN_00411a10(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = core_actor_cpp_FUN_00409d30(param_1);
  iVar2 = core_course_cpp_CCourse_ctor_FUN_0043b5d0(iVar2 + 0x170);
  iVar2 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490(iVar2 + 0x10);
  *(byte ***)(iVar2 + -0x34) = &PTR_core_bat_cpp_CBat_setup_FUN_00411ae0_00599e94;
  *(uint *)(iVar2 + -4) = 0;
  *(uint *)(iVar2 + 0x17c) = 0;
  pcVar3 = "batpath.pth";
  *(uint *)(iVar2 + 0x180) = 0x41f00000;
  *(uint *)(iVar2 + 0x184) = 0x3f800000;
  pcVar4 = (char *)(iVar2 + -0x30);
  *(uint *)(iVar2 + 0x188) = 0x41f00000;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(iVar2,"bat.kfm");
  *(byte *)(iVar2 + 0x18c) = 0;
  *(uint *)(iVar2 + 0x1f0) = 0x41700000;
  *(uint *)(iVar2 + 500) = 0x41f00000;
  *(uint *)(iVar2 + 0x1fc) = 0;
  return iVar2 + -0x180;
}
