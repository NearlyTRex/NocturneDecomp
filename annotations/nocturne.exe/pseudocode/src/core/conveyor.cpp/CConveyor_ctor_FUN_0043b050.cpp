// Name: core_conveyor.cpp_CConveyor_ctor_FUN_0043b050
// Address: 0043b050
// Address Range: [[0043b050, 0043b106]]
// Convention: unknown
// Signature: int core_conveyor_cpp_CConveyor_ctor_FUN_0043b050(undefined4 param_1)

#include "nocturne.h"

int core_conveyor_cpp_CConveyor_ctor_FUN_0043b050(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_004f5d90(param_1);
  *(byte ***)(iVar2 + 0x14c) = &PTR_FUN_0059b734;
  pcVar3 = "none";
  *(uint *)(iVar2 + 0x720) = 0x3f800000;
  *(uint *)(iVar2 + 0x728) = 0x3f800000;
  *(uint *)(iVar2 + 0x724) = 0x3dcccccd;
  pcVar4 = (char *)(iVar2 + 0x738);
  *(uint *)(iVar2 + 0x800) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "none";
  pcVar4 = (char *)(iVar2 + 0x79c);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + 0x72c) = 0;
  *(uint *)(iVar2 + 0x730) = 0;
  *(uint *)(iVar2 + 0x734) = 0x3f800000;
  *(byte *)(iVar2 + 0x804) = 0;
  return iVar2;
}
