// Name: FUN_004b6080
// Address: 004b6080
// Address Range: [[004b6080, 004b61e9]]
// Convention: unknown
// Signature: int FUN_004b6080(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004b6080(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = 0;
  switch(param_2) {
  case 0:
    pcVar3 = "@CGabriella" + 1;
    break;
  case 1:
    pcVar3 = "CSvetlana";
    break;
  case 2:
    pcVar3 = "CStranger";
    break;
  case 3:
    pcVar3 = "CScat";
    break;
  case 4:
    pcVar3 = "CBaron";
    break;
  case 5:
    pcVar3 = "CIcePick";
    break;
  case 6:
    pcVar3 = "CHaystack";
    break;
  case 7:
    pcVar3 = "CColonel";
    break;
  case 8:
    pcVar3 = "CMoloch";
    break;
  default:
    _DAT_01cc4800 = "..\\core\\hero.cpp";
    _DAT_01cc4804 = 0x578;
    FUN_004c8440("CHeroPlaceholder::createHero - invalid hero type.");
    goto LAB_004b60b9;
  }
  uVar1 = FUN_0040d540(pcVar3,_DAT_01cae124);
  iVar2 = FUN_0040d890(uVar1);
LAB_004b60b9:
  if (iVar2 == 0) {
    _DAT_01cc4800 = "..\\core\\hero.cpp";
    _DAT_01cc4804 = 0x57d;
    FUN_004c8440("CHeroPlaceholder::createHero - failed.");
  }
  FUN_004d9720(0x01CC9450,iVar2);
  *(uint *)(iVar2 + 0x20) = *(uint *)(param_1 + 0x20);
  *(uint *)(iVar2 + 0x24) = *(uint *)(param_1 + 0x24);
  *(uint *)(iVar2 + 0x28) = *(uint *)(param_1 + 0x28);
  *(uint *)(iVar2 + 0x2c) = *(uint *)(param_1 + 0x2c);
  if ((uint *)(iVar2 + 0x30) != (uint *)(param_1 + 0x30)) {
    *(uint *)(iVar2 + 0x30) = *(uint *)(param_1 + 0x30);
    *(uint *)(iVar2 + 0x34) = *(uint *)(param_1 + 0x34);
    *(uint *)(iVar2 + 0x38) = *(uint *)(param_1 + 0x38);
  }
  FUN_0040a000(iVar2);
  return iVar2;
}
