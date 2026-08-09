// Name: crt_unknown.c_FUN_0056a388
// Address: 0056a388
// Address Range: [[0056a388, 0056a41d] [0056a590, 0056a696] [0056a6dc, 0056a826]]
// Convention: unknown
// Signature: uint crt_unknown_c_FUN_0056a388(uint *param_1,int *param_2,undefined1 *param_3)

#include "nocturne.h"

uint FUN_0056a388(uint *param_1,int *param_2,byte *param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  byte *puVar6;
  byte *puVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  ushort in_FPUControlWord;
  float10 fVar11;
  char acStack_98 [64];
  byte auStack_58 [8];
  ushort uStack_50;
  uint uStack_4c;
  uint uStack_48;
  byte uStack_44;
  byte bStack_43;
  byte auStack_40 [8];
  ushort uStack_38;
  float10 fStack_34;
  int iStack_28;
  uint uStack_24;
  char *pcStack_20;
  byte *puStack_1c;
  uint uStack_18;
  char cStack_14;
  
  uStack_18 = (uint)in_FPUControlWord;
  param_2[5] = 0;
  uVar1 = (ushort)param_1[2];
  uStack_44 = (byte)uVar1;
  bStack_43 = (byte)(uVar1 >> 8);
  uStack_48 = param_1[1];
  uStack_4c = *param_1;
  if ((uVar1 & 0x8000) != 0) {
    param_2[5] = -1;
  }
  bStack_43 = bStack_43 & 0x7f;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  iVar9 = 0;
  param_2[6] = 0;
  uVar2 = FUN_0056f938(&uStack_4c);
  switch(uVar2) {
  case 0:
  case 4:
    param_2[5] = 0;
    uStack_24 = 0;
    break;
  case 1:
    uStack_24 = (int)((CONCAT11(bStack_43,uStack_44) - 0x3ffe) * 0x7597) / 100000 - 4;
    if (uStack_24 != 0) {
      if ((int)uStack_24 < 0) {
        uVar3 = 3 - uStack_24 & 0xfffffffc;
        uStack_24 = -uVar3;
LAB_0056a588:
        FUN_0056a320(&uStack_4c,uVar3);
      }
      else if ((CONCAT11(bStack_43,uStack_44) < 0x4019) ||
              ((CONCAT11(bStack_43,uStack_44) == 0x4019 && (uStack_48 < 3200000000)))) {
        uStack_24 = 0;
      }
      else {
        if ((0x4033 < CONCAT11(bStack_43,uStack_44)) &&
           ((CONCAT11(bStack_43,uStack_44) != 0x4034 ||
            ((0x8e1bc9be < uStack_48 && ((uStack_48 != 0x8e1bc9bf || (0x3ffffff < uStack_4c))))))))
        {
          uStack_24 = uStack_24 & 0xfffffffc;
          uVar3 = -uStack_24;
          goto LAB_0056a588;
        }
        _auStack_40 = (float10)CONCAT28(0x4019,0xbebc200000000000);
        _auStack_40 = (float10)((unkuint10)stack0xffffffc4 << 0x20);
        iVar9 = (int)ROUND((float10)CONCAT19(bStack_43,
                                             CONCAT18(uStack_44,CONCAT44(uStack_48,uStack_4c))) /
                           _auStack_40);
        fStack_34 = (float10)iVar9;
        _auStack_40 = _auStack_40 * (float10)iVar9;
        fVar11 = (float10)CONCAT19(bStack_43,CONCAT18(uStack_44,CONCAT44(uStack_48,uStack_4c))) -
                 _auStack_40;
        uStack_4c = SUB104(fVar11,0);
        uStack_48 = (uint)((unkuint10)fVar11 >> 0x20);
        uStack_44 = (byte)((unkuint10)fVar11 >> 0x40);
        bStack_43 = (byte)((unkuint10)fVar11 >> 0x48);
        uStack_24 = 8;
      }
    }
    break;
  case 2:
    *param_3 = 0x6e;
    param_3[1] = 0x61;
    param_3[2] = 0x6e;
    goto LAB_0056a43d;
  case 3:
    *param_3 = 0x69;
    param_3[1] = 0x6e;
    param_3[2] = 0x66;
LAB_0056a43d:
    param_3[3] = 0;
    param_2[7] = 3;
    goto LAB_0056a316;
  }
  if ((*(byte *)(param_2 + 2) & 2) == 0) {
    puStack_1c = (byte *)(*param_2 + 7);
  }
  else {
    puStack_1c = (byte *)(*param_2 + uStack_24 + 10);
    if (0 < param_2[1]) {
      puStack_1c = puStack_1c + param_2[1];
    }
  }
  puVar7 = puStack_1c;
  iVar4 = 0xf;
  if ((*(byte *)(param_2 + 2) & 0x20) != 0) {
    iVar4 = 0x14;
  }
  if ((*(byte *)(param_2 + 2) & 0x40) != 0) {
    iVar4 = iVar4 * 2;
  }
  if (iVar4 + 4 < (int)puStack_1c) {
    puStack_1c = (byte *)(iVar4 + 4);
  }
  acStack_98[0] = '0';
  acStack_98[1] = 0;
  iStack_28 = 0;
  pcStack_20 = acStack_98 + 1;
  while (puVar6 = puStack_1c, pcVar5 = pcStack_20, 0 < (int)puStack_1c) {
    puStack_1c = puStack_1c + -8;
    if (iVar9 == 0) {
      if ((CONCAT11(bStack_43,uStack_44) & 0x7fff) == 0) break;
      puVar7 = puStack_1c;
      if (0 < (int)puStack_1c) {
        puVar7 = auStack_58;
        _auStack_58 = (float10)CONCAT28(0x4019,0xbebc200000000000);
        puVar6 = (byte *)0x0;
        _auStack_58 = (float10)((unkuint10)stack0xffffffac << 0x20);
        fVar11 = _auStack_58 *
                 ((float10)CONCAT19(bStack_43,CONCAT18(uStack_44,CONCAT44(uStack_48,uStack_4c))) -
                 (float10)(int)ROUND((float10)CONCAT19(bStack_43,
                                                       CONCAT18(uStack_44,
                                                                CONCAT44(uStack_48,uStack_4c)))));
        uStack_4c = SUB104(fVar11,0);
        uStack_48 = (uint)((unkuint10)fVar11 >> 0x20);
        uStack_44 = (byte)((unkuint10)fVar11 >> 0x40);
        bStack_43 = (byte)((unkuint10)fVar11 >> 0x48);
      }
    }
    FUN_0056a697(puVar7,puVar6);
    *pcVar5 = '\0';
    pcStack_20 = pcVar5;
    iVar9 = 0;
    iStack_28 = iStack_28 + 8;
  }
  iVar4 = uStack_24 + 7;
  pcVar5 = acStack_98;
  iVar9 = iStack_28;
  while (pcVar5 = pcVar5 + 1, uStack_24 = iVar4, *pcVar5 == '0') {
    iVar9 = iVar9 + -1;
    iVar4 = iVar4 + -1;
  }
  iVar8 = *param_2;
  if ((*(byte *)(param_2 + 2) & 2) == 0) {
    if ((*(byte *)(param_2 + 2) & 1) != 0) {
      if (param_2[1] < 1) {
        iVar8 = iVar8 + param_2[1];
      }
      else {
        iVar8 = iVar8 + 1;
      }
      uStack_24 = (iVar4 + 1) - param_2[1];
    }
  }
  else {
    uStack_24 = iVar4 + param_2[1];
    iVar8 = iVar8 + iVar4 + param_2[1] + 1;
  }
  if (-1 < iVar8) {
    if (iVar9 < iVar8) {
      iVar8 = iVar9;
    }
    iVar4 = 0xf;
    if ((*(byte *)(param_2 + 2) & 0x20) != 0) {
      iVar4 = 0x14;
    }
    if ((*(byte *)(param_2 + 2) & 0x40) != 0) {
      iVar4 = iVar4 * 2;
    }
    if (iVar4 < iVar8) {
      iVar8 = iVar4 + 1;
    }
    cStack_14 = '0';
    if ((iVar8 < iVar9) && (0x34 < (byte)pcVar5[iVar8])) {
      cStack_14 = '9';
    }
    pcVar10 = pcVar5 + iVar8;
    iVar9 = iVar8;
    while( true ) {
      pcVar10 = pcVar10 + -1;
      iVar9 = iVar9 + -1;
      if (*pcVar10 != cStack_14) break;
      iVar8 = iVar8 + -1;
    }
    if (cStack_14 == '9') {
      *pcVar10 = *pcVar10 + '\x01';
    }
    if (iVar9 < 0) {
      pcVar5 = pcVar5 + -1;
      uStack_24 = uStack_24 + 1;
      iVar8 = iVar8 + 1;
    }
  }
  if (iVar8 < 1) {
    iVar8 = 1;
    uStack_24 = 0;
    acStack_98[0] = '0';
    pcVar5 = acStack_98;
    param_2[5] = 0;
  }
  if (((*(byte *)(param_2 + 2) & 2) == 0) &&
     (((*(byte *)(param_2 + 2) & 4) == 0 ||
      ((((int)uStack_24 < -4 || (*param_2 <= (int)uStack_24)) && ((*(byte *)(param_2 + 2) & 8) == 0)
       ))))) {
    FUN_0056aa38(param_2,pcVar5,iVar8,uStack_24,param_3);
  }
  else {
    FUN_0056a827(param_2,pcVar5,iVar8,uStack_24,param_3);
  }
LAB_0056a316:
  return uStack_18 & 0xffff;
}
