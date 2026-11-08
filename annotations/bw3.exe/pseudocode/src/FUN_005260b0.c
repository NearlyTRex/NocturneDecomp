// Name: FUN_005260b0
// Address: 005260b0
// Address Range: [[005260b0, 005262e3]]
// Convention: unknown
// Signature: undefined4 FUN_005260b0(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005260b0(int param_1,uint param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  
  if (*(int *)(param_1 + 0x20b64) != 0) {
    return 0;
  }
  iVar1 = param_1 + 0x158;
  fVar2 = (float)FUN_004fc350(iVar1,0);
  fVar3 = (float)FUN_004fc350(iVar1,1);
  fVar4 = (float)FUN_004fc350(iVar1,4);
  fVar5 = (float)FUN_004fc350(iVar1,7);
  fVar6 = (float)FUN_004fc350(iVar1,8);
  fVar7 = (float)FUN_004fc350(iVar1,9);
  fVar8 = (float)FUN_004fc350(iVar1,10);
  fVar9 = (float)FUN_004fc350(iVar1,0xb);
  fVar10 = (float)FUN_004fc350(iVar1,0xc);
  fVar11 = (float)FUN_004fc350(iVar1,0xd);
  fVar12 = (float)FUN_004fc350(iVar1,0xe);
  fVar13 = (float)FUN_004fc350(iVar1,0xf);
  fVar14 = (float)FUN_004fc350(iVar1,0x10);
  fVar15 = (float)FUN_004fc350(iVar1,5);
  fVar16 = (float)FUN_004fc350(iVar1,6);
  fVar18 = (float)_DAT_005cd95f;
  switch(param_2) {
  case 4:
    fVar19 = (float)FUN_00433a60(param_1,0);
    if (fVar19 < (float)_DAT_005cd967) {
      return 0;
    }
  case 3:
    if (fVar16 + fVar15 + fVar14 + fVar13 + fVar12 + fVar11 + fVar10 + fVar9 + fVar8 + fVar7 + fVar6
                                                                                               + 
                                                  fVar5 + fVar4 + fVar3 + fVar2 <= fVar18) {
      return 0;
    }
    break;
  case 6:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
    fVar18 = (float)FUN_00433a60(param_1,0);
    if (fVar18 < (float)_DAT_005cd967) {
      return 0;
    }
  }
  uVar17 = FUN_004d4840(param_1,param_2);
  return uVar17;
}
