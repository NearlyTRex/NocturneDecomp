// Name: FUN_0048ff70
// Address: 0048ff70
// Address Range: [[0048ff70, 004901c7]]
// Convention: unknown
// Signature: void FUN_0048ff70(int *param_1,char *param_2,int param_3,int param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048ff70(int *param_1,char *param_2,int param_3,int param_4,uint param_5)

{
  char cVar1;
  byte uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  byte local_440 [300];
  byte local_314 [260];
  byte local_210 [256];
  byte local_110 [256];
  
  if (3 < *param_1) {
    _DAT_01cc4800 = "@..\\engine\\font.cpp" + 1;
    _DAT_01cc4804 = 0xd7;
    FUN_004c8440("Too many bitmaps");
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
  FUN_00566ad0(param_1 + *param_1 * 0x14 + 1);
  iVar5 = param_3 * param_4;
  param_1[*param_1 + 0x55] = param_3;
  iVar3 = FUN_004568c0(&DAT_0058177f,param_2);
  if (iVar3 < iVar5) {
    FUN_00563c90(local_440,"Invalid font file size (%s).",param_2);
    _DAT_01cc4800 = "..\\engine\\font.cpp";
    _DAT_01cc4804 = 0xec;
    FUN_004c8440(local_440);
  }
  iVar3 = FUN_00564c18(iVar5);
  param_1[*param_1 + 0x51] = iVar3;
  if (param_1[*param_1 + 0x51] == 0) {
    FUN_00563c90(local_440,"Unable to allocate memory for font bitmap (%s).",param_2);
    _DAT_01cc4804 = 0xf4;
    _DAT_01cc4800 = "..\\engine\\font.cpp";
    FUN_004c8440(local_440);
  }
  FUN_0042d240(param_2,param_1[*param_1 + 0x51],iVar5);
  FUN_00566498(param_2,0,local_110,local_210,0);
  FUN_0056626c(local_314,0,local_110,local_210,&DAT_005817f6);
  iVar3 = FUN_00456a60(&DAT_005817fd,local_314,&DAT_005817fa);
  if (iVar3 != 0) {
    iVar5 = 0;
    do {
      uVar2 = FUN_00564570(iVar3);
      *(byte *)((int)param_1 + iVar5 + *param_1 * 0x300 + 0x164) = uVar2;
      uVar2 = FUN_00564570(iVar3);
      *(byte *)((int)param_1 + iVar5 + *param_1 * 0x300 + 0x165) = uVar2;
      uVar2 = FUN_00564570(iVar3);
      iVar5 = iVar5 + 3;
      *(byte *)((int)param_1 + iVar5 + *param_1 * 0x300 + 0x163) = uVar2;
    } while (iVar5 != 0x300);
    FUN_00563380(iVar3);
  }
  FUN_00490470(param_1,*param_1,param_3,param_4,param_5);
  *param_1 = *param_1 + 1;
  FUN_004931b0(param_1);
  return;
}
