// Name: $I10_OUTPUT
// Address: 1000cf50
// Address Range: [[1000cf50, 1000d2ea]]
// Convention: __cdecl
// Signature: undefined4 __cdecl _I10_OUTPUT(int param_1,uint param_2,ushort param_3,int param_4,byte param_5,short *param_6)

#include "nocturne.h"

/* Library Function - Single Match
uint __cdecl _I10_OUTPUT(int param_1,uint param_2,ushort param_3,int param_4,byte param_5,short *param_6)

{
  short *psVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  short *psVar7;
  int iVar8;
  short sVar9;
  ushort local_28;
  ushort uStack_26;
  ushort uStack_24;
  ushort uStack_22;
  ushort uStack_20;
  byte local_1e;
  char cStack_1d;
  uint local_1c;
  byte local_18;
  byte local_17;
  byte local_16;
  byte local_15;
  byte local_14;
  byte local_13;
  byte local_12;
  byte local_11;
  byte local_10;
  byte local_f;
  byte local_e;
  byte local_d;
  uint local_c;
  uint local_8;
  uint local_4;
  
  local_18 = 0xcc;
  local_17 = 0xcc;
  local_16 = 0xcc;
  local_15 = 0xcc;
  local_14 = 0xcc;
  local_13 = 0xcc;
  local_12 = 0xcc;
  local_11 = 0xcc;
  local_10 = 0xcc;
  local_f = 0xcc;
  local_e = 0xfb;
  local_d = 0x3f;
  local_1c = 1;
  uVar2 = param_3 & 0x7fff;
  if ((param_3 & 0x8000) == 0) {
    *(byte *)(param_6 + 1) = 0x20;
  }
  else {
    *(byte *)(param_6 + 1) = 0x2d;
  }
  if (((uVar2 == 0) && (param_2 == 0)) && (param_1 == 0)) {
    *(byte *)(param_6 + 1) = 0x20;
    *param_6 = 0;
    *(byte *)((int)param_6 + 3) = 1;
    *(byte *)(param_6 + 2) = 0x30;
    *(byte *)((int)param_6 + 5) = 0;
    return 1;
  }
  if (uVar2 == 0x7fff) {
    *param_6 = 1;
    if (((param_2 != 0x80000000) || (param_1 != 0)) && ((param_2 & 0x40000000) == 0)) {
      param_6[2] = 0x2331;
      param_6[3] = 0x4e53;
      param_6[4] = 0x4e41;
      *(byte *)(param_6 + 5) = 0;
      *(byte *)((int)param_6 + 3) = 6;
      return 0;
    }
    if ((((param_3 & 0x8000) != 0) && (param_2 == 0xc0000000)) && (param_1 == 0)) {
      param_6[2] = 0x2331;
      param_6[3] = 0x4e49;
      param_6[4] = 0x44;
      *(byte *)((int)param_6 + 3) = 5;
      return 0;
    }
    if ((param_2 == 0x80000000) && (param_1 == 0)) {
      param_6[2] = 0x2331;
      param_6[3] = 0x4e49;
      param_6[4] = 0x46;
      *(byte *)((int)param_6 + 3) = 5;
      return 0;
    }
    param_6[2] = 0x2331;
    param_6[3] = 0x4e51;
    param_6[4] = 0x4e41;
    *(byte *)(param_6 + 5) = 0;
    *(byte *)((int)param_6 + 3) = 6;
    return 0;
  }
  local_1e = (byte)uVar2;
  cStack_1d = (char)(uVar2 >> 8);
  uStack_22 = (ushort)param_2;
  uStack_20 = (ushort)(param_2 >> 0x10);
  sVar9 = (short)(((uint)(uVar2 >> 8) + (param_2 >> 0x18) * 2) * 0x4d + (uint)uVar2 * 0x4d10 +
                  -0x134312f4 >> 0x10);
  uStack_26 = (ushort)param_1;
  uStack_24 = (ushort)((uint)param_1 >> 0x10);
  local_28 = 0;
  ___multtenpow12(&local_28,-(int)sVar9,1);
  if (0x3ffe < CONCAT11(cStack_1d,local_1e)) {
    sVar9 = sVar9 + 1;
    FUN_1000e8f0(&local_28,&local_18);
  }
  *param_6 = sVar9;
  if (((param_5 & 1) != 0) && (param_4 = param_4 + sVar9, param_4 < 1)) {
    *(byte *)(param_6 + 1) = 0x20;
    *param_6 = 0;
    *(byte *)((int)param_6 + 3) = 1;
    *(byte *)(param_6 + 2) = 0x30;
    *(byte *)((int)param_6 + 5) = 0;
    return 1;
  }
  if (0x15 < param_4) {
    param_4 = 0x15;
  }
  iVar8 = 8;
  uVar2 = CONCAT11(cStack_1d,local_1e);
  local_1e = 0;
  cStack_1d = '\0';
  iVar4 = uVar2 - 0x3ffe;
  do {
    ___shl_12(&local_28);
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  if (iVar4 < 0) {
    for (uVar5 = -iVar4 & 0xff; uVar5 != 0; uVar5 = uVar5 - 1) {
      ___shr_12(&local_28);
    }
  }
  psVar1 = param_6 + 2;
  param_4 = param_4 + 1;
  psVar7 = psVar1;
  psVar6 = psVar1;
  if (0 < param_4) {
    do {
      psVar6 = (short *)((int)psVar7 + 1);
      local_c = CONCAT22(uStack_26,local_28);
      local_8 = CONCAT22(uStack_22,uStack_24);
      local_4 = CONCAT13(cStack_1d,CONCAT12(local_1e,uStack_20));
      ___shl_12(&local_28);
      ___shl_12(&local_28);
      ___add_12(&local_28,&local_c);
      ___shl_12(&local_28);
      param_4 = param_4 + -1;
      *(char *)psVar7 = cStack_1d + '0';
      cStack_1d = '\0';
      psVar7 = psVar6;
    } while (param_4 != 0);
  }
  psVar7 = psVar6 + -1;
  if (*(char *)((int)psVar6 + -1) < '5') {
    if (psVar7 < psVar1) {
LAB_1000d2c9:
      *param_6 = 0;
      *(char *)psVar1 = '0';
      *(byte *)(param_6 + 1) = 0x20;
      *(byte *)((int)param_6 + 3) = 1;
      *(byte *)((int)param_6 + 5) = 0;
      return 1;
    }
    do {
      if ((char)*psVar7 != '0') break;
      psVar7 = (short *)((int)psVar7 + -1);
    } while (psVar1 <= psVar7);
    if (psVar7 < psVar1) goto LAB_1000d2c9;
    goto LAB_1000d29b;
  }
  if (psVar7 < psVar1) {
LAB_1000d295:
    *param_6 = *param_6 + 1;
    psVar7 = (short *)((int)psVar7 + 1);
  }
  else {
    do {
      if ((char)*psVar7 != '9') break;
      *(char *)psVar7 = '0';
      psVar7 = (short *)((int)psVar7 + -1);
    } while (psVar1 <= psVar7);
    if (psVar7 < psVar1) goto LAB_1000d295;
  }
  *(char *)psVar7 = (char)*psVar7 + '\x01';
LAB_1000d29b:
  cVar3 = ((char)psVar7 - (char)param_6) + -3;
  *(char *)((int)param_6 + 3) = cVar3;
  *(byte *)(cVar3 + 4 + (int)param_6) = 0;
  return local_1c;
}
