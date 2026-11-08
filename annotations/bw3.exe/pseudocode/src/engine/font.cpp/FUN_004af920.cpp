// Name: FUN_004af920
// Address: 004af920
// Address Range: [[004af920, 004afbec]]
// Convention: unknown
// Signature: void FUN_004af920(int *param_1,char *param_2,int param_3,int param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004af920(int *param_1,char *param_2,int param_3,int param_4,uint param_5)

{
  char cVar1;
  byte uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  byte local_468 [300];
  byte local_33c [256];
  byte local_23c [256];
  byte local_13c [256];
  byte local_3c [44];
  
  if (3 < *param_1) {
    _DAT_01d71de0 = "..\\engine\\font.cpp";
    _DAT_01d71de4 = 0xfa;
    FUN_004e4330("Too many bitmaps");
  }
  piVar6 = param_1 + *param_1 * 0x14 + 1;
  pcVar4 = param_2;
  do {
    cVar1 = *pcVar4;
    *(char *)piVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    *(char *)((int)piVar6 + 1) = cVar1;
    piVar6 = (int *)((int)piVar6 + 2);
  } while (cVar1 != '\0');
  FUN_005a5b10(param_1 + *param_1 * 0x14 + 1);
  iVar5 = param_3 * param_4;
  param_1[*param_1 + 0x69] = param_3;
  iVar3 = FUN_004657f0(&DAT_005c1de8,param_2);
  if (iVar3 < iVar5) {
    FUN_005a28c0(local_468,"Invalid font file size (%s).",param_2);
    _DAT_01d71de0 = "..\\engine\\font.cpp";
    _DAT_01d71de4 = 0x10f;
    FUN_004e4330(local_468);
  }
  iVar3 = FUN_005a40df(iVar5);
  param_1[*param_1 + 0x65] = iVar3;
  if (param_1[*param_1 + 0x65] == 0) {
    FUN_005a28c0(local_468,"Unable to allocate memory for font bitmap (%s).",param_2);
    _DAT_01d71de4 = 0x117;
    _DAT_01d71de0 = "..\\engine\\font.cpp";
    FUN_004e4330(local_468);
  }
  FUN_00438ef0(param_2,param_1[*param_1 + 0x65],iVar5);
  FUN_00465e50(param_2,0,local_23c,local_13c,0);
  FUN_00465e80(local_33c,0,local_23c,local_13c,&DAT_005c1e5f);
  FUN_005738c0(local_3c);
  iVar3 = FUN_00573fc0(local_3c,&DAT_005c1e63,local_33c,1);
  if (iVar3 == 0) {
    _DAT_01d71de0 = "..\\engine\\font.cpp";
    _DAT_01d71de4 = 0x128;
    FUN_004e4330("CBitFont::addBitmap - File not found : %s",local_33c);
  }
  else {
    iVar3 = 0;
    do {
      uVar2 = FUN_00573aa0(local_3c);
      *(byte *)((int)param_1 + iVar3 + *param_1 * 0x300 + 0x1b4) = uVar2;
      uVar2 = FUN_00573aa0(local_3c);
      *(byte *)((int)param_1 + iVar3 + *param_1 * 0x300 + 0x1b5) = uVar2;
      uVar2 = FUN_00573aa0(local_3c);
      iVar3 = iVar3 + 3;
      *(byte *)((int)param_1 + iVar3 + *param_1 * 0x300 + 0x1b3) = uVar2;
    } while (iVar3 != 0x300);
    FUN_00573db0(local_3c);
  }
  FUN_004b0510(param_1,*param_1,param_3,param_4,param_5);
  *param_1 = *param_1 + 1;
  FUN_004b31c0(param_1);
  FUN_00573a40(local_3c,0);
  return;
}
