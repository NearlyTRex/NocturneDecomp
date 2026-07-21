// Name: core_pendulum.cpp_CPendulum_ctor_FUN_004f2c30
// Address: 004f2c30
// Address Range: [[004f2c30, 004f2d3a]]
// Convention: unknown
// Signature: int core_pendulum_cpp_CPendulum_ctor_FUN_004f2c30(undefined4 param_1)

#include "nocturne.h"

int core_pendulum_cpp_CPendulum_ctor_FUN_004f2c30(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_00409d30(param_1);
  iVar2 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490(iVar2 + 0x150);
  *(byte ***)(iVar2 + -4) = &PTR_core_pendulum_cpp_CPendulum_setup_FUN_004f2d40_005a1244;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(iVar2,"pend.kfm");
  pcVar3 = &DAT_0058cffb;
  pcVar4 = (char *)(iVar2 + 0x17c);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = &DAT_0058d000;
  pcVar4 = (char *)(iVar2 + 0x1e0);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + 0x244) = 1;
  *(uint *)(iVar2 + 0x248) = 0;
  *(uint *)(iVar2 + 0x250) = 0x3f060a92;
  *(byte *)(iVar2 + 0x254) = 0;
  *(byte *)(iVar2 + 0x278) = 0;
  *(byte *)(iVar2 + 0x298) = 0;
  *(uint *)(iVar2 + 0x274) = 0;
  *(uint *)(iVar2 + 0x2d0) = 0;
  *(uint *)(iVar2 + 0x2d4) = 0;
  *(uint *)(iVar2 + 0x2d8) = 0;
  *(uint *)(iVar2 + 0x2dc) = 0;
  *(uint *)(iVar2 + 0x2e8) = 0;
  *(uint *)(iVar2 + 0x2e4) = 0;
  return iVar2 + -0x150;
}
