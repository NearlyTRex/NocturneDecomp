// Name: FUN_004a7d00
// Address: 004a7d00
// Address Range: [[004a7d00, 004a7fca]]
// Convention: unknown
// Signature: void FUN_004a7d00(int *param_1,char *param_2,int param_3,int param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a7d00(int *param_1,char *param_2,int param_3,int param_4,uint param_5)

{
  char cVar1;
  byte uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  byte local_464 [300];
  byte local_338 [256];
  byte local_238 [256];
  byte local_138 [256];
  byte local_38 [40];
  
  if (3 < *param_1) {
    _DAT_01d046a0 = "..\\engine\\font.cpp";
    _DAT_01d046a4 = 0xfa;
    FUN_004e4500("Too many bitmaps");
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
  FUN_005ba840(param_1 + *param_1 * 0x14 + 1);
  iVar5 = param_3 * param_4;
  param_1[*param_1 + 0x69] = param_3;
  iVar3 = FUN_00460aa0(&DAT_005d6751,param_2);
  if (iVar3 < iVar5) {
    FUN_005b7790(local_464,"Invalid font file size (%s).",param_2);
    _DAT_01d046a0 = "..\\engine\\font.cpp";
    _DAT_01d046a4 = 0x10f;
    FUN_004e4500(local_464);
  }
  iVar3 = FUN_005b8df8(iVar5);
  param_1[*param_1 + 0x65] = iVar3;
  if (param_1[*param_1 + 0x65] == 0) {
    FUN_005b7790(local_464,"Unable to allocate memory for font bitmap (%s).",param_2);
    _DAT_01d046a4 = 0x117;
    _DAT_01d046a0 = "..\\engine\\font.cpp";
    FUN_004e4500(local_464);
  }
  FUN_0042c520(param_2,param_1[*param_1 + 0x65],iVar5);
  FUN_00461070(param_2,0,local_238,local_138,0);
  FUN_004610a0(local_338,0,local_238,local_138,&DAT_005d67c8);
  FUN_0057cd50(local_38);
  iVar3 = FUN_0057d390(local_38,&DAT_005d67cc,local_338);
  if (iVar3 == 0) {
    _DAT_01d046a0 = "..\\engine\\font.cpp";
    _DAT_01d046a4 = 0x128;
    FUN_004e4500("CBitFont::addBitmap - File not found : %s",local_338);
  }
  else {
    iVar3 = 0;
    do {
      uVar2 = FUN_0057cf20(local_38);
      *(byte *)((int)param_1 + iVar3 + *param_1 * 0x300 + 0x1b4) = uVar2;
      uVar2 = FUN_0057cf20(local_38);
      *(byte *)((int)param_1 + iVar3 + *param_1 * 0x300 + 0x1b5) = uVar2;
      uVar2 = FUN_0057cf20(local_38);
      iVar3 = iVar3 + 3;
      *(byte *)((int)param_1 + iVar3 + *param_1 * 0x300 + 0x1b3) = uVar2;
    } while (iVar3 != 0x300);
    FUN_0057d180(local_38);
  }
  FUN_004a88e0(param_1,*param_1,param_3,param_4,param_5);
  *param_1 = *param_1 + 1;
  FUN_004ab630(param_1);
  FUN_0057cec0(local_38,0);
  return;
}
