// Name: core_simbox.cpp_CSimBox_ctor_FUN_00516ba0
// Address: 00516ba0
// Address Range: [[00516ba0, 00516c5e]]
// Convention: unknown
// Signature: int core_simbox_cpp_CSimBox_ctor_FUN_00516ba0(undefined4 param_1)

#include "nocturne.h"

int core_simbox_cpp_CSimBox_ctor_FUN_00516ba0(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = core_actor_cpp_FUN_00409d30(param_1);
  iVar2 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490(iVar2 + 0x150);
  iVar2 = core_box_cpp_CBox_ctor_FUN_0041a610(iVar2 + 0x200);
  *(byte ***)(iVar2 + -0x204) = &PTR_core_simbox_cpp_CSimBox_setup_FUN_00516c60_005a1d74;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (iVar2 + -0x200,"question.kfm");
  pcVar3 = "none";
  pcVar4 = (char *)(iVar2 + -0x7c);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + -0x10) = 0;
  *(uint *)(iVar2 + -0x14) = *(uint *)(iVar2 + -0x10);
  *(uint *)(iVar2 + -0x18) = *(uint *)(iVar2 + -0x14);
  *(uint *)(iVar2 + -4) = 0;
  *(uint *)(iVar2 + -8) = *(uint *)(iVar2 + -4);
  *(uint *)(iVar2 + -0xc) = *(uint *)(iVar2 + -8);
  *(uint *)(iVar2 + -0x84) = 0;
  *(uint *)(iVar2 + -0x80) = 0x42c80000;
  return iVar2 + -0x350;
}
