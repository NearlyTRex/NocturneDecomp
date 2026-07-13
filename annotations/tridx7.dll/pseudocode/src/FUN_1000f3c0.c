// Name: FUN_1000f3c0
// Address: 1000f3c0
// Address Range: [[1000f3c0, 1000f630]]
// Convention: unknown
// Signature: void FUN_1000f3c0(byte *param_1,undefined4 param_2,int *param_3,int *param_4)

#include "nocturne.h"

void FUN_1000f3c0(byte *param_1,uint param_2,int *param_3,int *param_4)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  char local_9;
  byte uStack_8;
  ushort uStack_7;
  
  bVar1 = *param_1;
  do {
    if ((bVar1 == 0) || (*param_4 == 0)) {
      return;
    }
    local_9 = '\0';
    DAT_10018214 = 0;
    uVar5 = 0;
    pbVar2 = param_1 + 1;
    do {
      pbVar6 = pbVar2;
      uVar4 = uVar5;
      uStack_8 = SUB41(pbVar6,0);
      uStack_7 = (ushort)((uint)pbVar6 >> 8);
      uVar5 = uVar4 + 1;
      bVar1 = *param_1;
      pbVar2 = pbVar6 + 1;
    } while (*pbVar6 == bVar1);
    if (0x52 < (int)(char)bVar1 - 0x27U) goto switchD_1000f436_caseD_28;
    uStack_7 = 0;
    uStack_8 = *(byte *)((int)&PTR_caseD_41_1000f638 + (char)bVar1 + 1);
    switch(bVar1) {
    case 0x27:
      if ((uVar5 & 1) == 0) {
        pbVar6 = param_1 + uVar5;
      }
      else {
        pbVar6 = param_1 + uVar5;
        if (*pbVar6 == 0) {
          DAT_10018214 = 0;
          return;
        }
        do {
          if (*param_4 == 0) break;
          bVar1 = *pbVar6;
          if (bVar1 == 0x27) {
            pbVar6 = pbVar6 + 1;
            break;
          }
          if ((PTR_DAT_10017480[(uint)bVar1 * 2 + 1] & 0x80) != 0) {
            pbVar6 = pbVar6 + 1;
            *(byte *)*param_3 = bVar1;
            *param_3 = *param_3 + 1;
            *param_4 = *param_4 + -1;
          }
          bVar1 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          *(byte *)*param_3 = bVar1;
          *param_3 = *param_3 + 1;
          *param_4 = *param_4 + -1;
        } while (*pbVar6 != 0);
      }
      goto LAB_1000f620;
    case 0x41:
    case 0x61:
      iVar3 = FUN_1000ff20(param_1,"am/pm");
      if (iVar3 == 0) {
        local_9 = 'p';
        pbVar6 = param_1 + 5;
      }
      else {
        iVar3 = FUN_1000ff20(param_1,"a/p");
        if (iVar3 == 0) {
          pbVar6 = param_1 + 3;
        }
        local_9 = 'p';
      }
      break;
    case 0x48:
      if (uVar5 == 1) {
        DAT_10018214 = 1;
      }
      else if (uVar5 != 2) break;
      local_9 = 'H';
      break;
    case 0x4d:
      switch(uVar4) {
      case 0:
        DAT_10018214 = 1;
      case 1:
        local_9 = 'm';
        break;
      case 2:
        local_9 = 'b';
        break;
      case 3:
        local_9 = 'B';
      }
      break;
    case 100:
      switch(uVar4) {
      case 0:
        DAT_10018214 = 1;
      case 1:
        local_9 = 'd';
        break;
      case 2:
        local_9 = 'a';
        break;
      case 3:
        local_9 = 'A';
      }
      break;
    case 0x68:
      if (uVar5 == 1) {
        DAT_10018214 = 1;
      }
      else if (uVar5 != 2) break;
      local_9 = 'I';
      break;
    case 0x6d:
      if (uVar5 == 1) {
        DAT_10018214 = 1;
      }
      else if (uVar5 != 2) break;
      local_9 = 'M';
      break;
    case 0x73:
      if (uVar5 == 1) {
        DAT_10018214 = 1;
      }
      else if (uVar5 != 2) break;
      local_9 = 'S';
      break;
    case 0x79:
      if (uVar5 == 2) {
        local_9 = 'y';
      }
      else if (uVar5 == 4) {
        local_9 = 'Y';
      }
    }
switchD_1000f436_caseD_28:
    if (local_9 == '\0') {
      if ((PTR_DAT_10017480[(uint)*param_1 * 2 + 1] & 0x80) != 0) {
        *(byte *)*param_3 = *param_1;
        *param_3 = *param_3 + 1;
        *param_4 = *param_4 + -1;
        param_1 = param_1 + 1;
      }
      pbVar6 = param_1 + 1;
      *(byte *)*param_3 = *param_1;
      *param_3 = *param_3 + 1;
      *param_4 = *param_4 + -1;
    }
    else {
      FUN_1000ed30(CONCAT22(uStack_7,CONCAT11(uStack_8,local_9)),param_2,param_3,param_4);
    }
LAB_1000f620:
    bVar1 = *pbVar6;
    param_1 = pbVar6;
  } while( true );
}
