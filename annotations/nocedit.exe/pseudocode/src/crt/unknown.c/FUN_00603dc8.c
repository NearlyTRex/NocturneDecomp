// Name: crt_unknown.c_FUN_00603dc8
// Address: 00603dc8
// Address Range: [[00603dc8, 0060403e]]
// Convention: __cdecl
// Signature: void __cdecl crt_unknown_c_FUN_00603dc8(void)

#include "nocturne.h"

void __cdecl FUN_00603dc8(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  byte *puVar5;
  byte *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ushort in_FPUControlWord;
  float10 fVar10;
  uint *in_stack_00000004;
  int *in_stack_00000008;
  byte *in_stack_0000000c;
  uint in_stack_ffffff68;
  ushort uVar11;
  uint in_stack_ffffff6c;
  char *in_stack_ffffff70;
  uint in_stack_ffffff74;
  char *in_stack_ffffff78;
  uint in_stack_ffffff7c;
  uint in_stack_ffffff80;
  char *in_stack_ffffff84;
  byte auStack_58 [8];
  ushort uStack_50;
  uint local_4c;
  uint uStack_48;
  byte uStack_44;
  byte bStack_43;
  byte local_40 [8];
  ushort uStack_38;
  float10 local_34;
  uint local_28;
  uint local_24;
  byte *local_20;
  byte *local_1c;
  uint local_18;
  char cStack_14;
  
  uVar11 = (ushort)((uint)in_stack_ffffff68 >> 0x10);
  local_18 = (uint)in_FPUControlWord;
  in_stack_00000008[5] = 0;
  uVar1 = (ushort)in_stack_00000004[2];
  uStack_44 = (byte)uVar1;
  bStack_43 = (byte)(uVar1 >> 8);
  uStack_48 = in_stack_00000004[1];
  local_4c = *in_stack_00000004;
  if ((uVar1 & 0x8000) != 0) {
    in_stack_00000008[5] = -1;
  }
  bStack_43 = bStack_43 & 0x7f;
  in_stack_00000008[7] = 0;
  in_stack_00000008[8] = 0;
  in_stack_00000008[9] = 0;
  in_stack_00000008[10] = 0;
  iVar9 = 0;
  in_stack_00000008[6] = 0;
  uVar2 = FUN_0060b07a(&local_4c);
  switch(uVar2) {
  case 0:
  case 4:
    in_stack_00000008[5] = 0;
    local_24 = 0;
    break;
  case 1:
    local_24 = (int)((CONCAT11(bStack_43,uStack_44) - 0x3ffe) * 0x7597) / 100000 - 4;
    if (local_24 != 0) {
      if ((int)local_24 < 0) {
        local_24 = -(3 - local_24 & 0xfffffffc);
LAB_00603fc8:
        FUN_00603d60();
      }
      else if ((CONCAT11(bStack_43,uStack_44) < 0x4019) ||
              ((CONCAT11(bStack_43,uStack_44) == 0x4019 && (uStack_48 < 3200000000)))) {
        local_24 = 0;
      }
      else {
        if ((0x4033 < CONCAT11(bStack_43,uStack_44)) &&
           ((CONCAT11(bStack_43,uStack_44) != 0x4034 ||
            ((0x8e1bc9be < uStack_48 && ((uStack_48 != 0x8e1bc9bf || (0x3ffffff < local_4c)))))))) {
          local_24 = local_24 & 0xfffffffc;
          goto LAB_00603fc8;
        }
        _local_40 = (float10)CONCAT28(0x4019,0xbebc200000000000);
        _local_40 = (float10)((unkuint10)stack0xffffffc4 << 0x20);
        iVar9 = (int)ROUND((float10)CONCAT19(bStack_43,
                                             CONCAT18(uStack_44,CONCAT44(uStack_48,local_4c))) /
                           _local_40);
        local_34 = (float10)iVar9;
        _local_40 = _local_40 * (float10)iVar9;
        fVar10 = (float10)CONCAT19(bStack_43,CONCAT18(uStack_44,CONCAT44(uStack_48,local_4c))) -
                 _local_40;
        local_4c = SUB104(fVar10,0);
        uStack_48 = (uint)((unkuint10)fVar10 >> 0x20);
        uStack_44 = (byte)((unkuint10)fVar10 >> 0x40);
        bStack_43 = (byte)((unkuint10)fVar10 >> 0x48);
        local_24 = 8;
      }
    }
    break;
  case 2:
    *in_stack_0000000c = 0x6e;
    in_stack_0000000c[1] = 0x61;
    in_stack_0000000c[2] = 0x6e;
    goto LAB_00603e7d;
  case 3:
    *in_stack_0000000c = 0x69;
    in_stack_0000000c[1] = 0x6e;
    in_stack_0000000c[2] = 0x66;
LAB_00603e7d:
    in_stack_0000000c[3] = 0;
    in_stack_00000008[7] = 3;
    goto LAB_00603d56;
  }
  if ((*(byte *)(in_stack_00000008 + 2) & 2) == 0) {
    local_1c = (byte *)(*in_stack_00000008 + 7);
  }
  else {
    local_1c = (byte *)(*in_stack_00000008 + local_24 + 10);
    if (0 < in_stack_00000008[1]) {
      local_1c = local_1c + in_stack_00000008[1];
    }
  }
  puVar6 = local_1c;
  iVar3 = 0xf;
  if ((*(byte *)(in_stack_00000008 + 2) & 0x20) != 0) {
    iVar3 = 0x14;
  }
  if ((*(byte *)(in_stack_00000008 + 2) & 0x40) != 0) {
    iVar3 = iVar3 * 2;
  }
  if ((int)(iVar3 + 4U) < (int)local_1c) {
    local_1c = (byte *)(iVar3 + 4U);
  }
  puVar5 = local_1c;
  local_28 = 0;
  local_20 = &stack0xffffff69;
  if (0 < (int)local_1c) {
    local_1c = local_1c + -8;
    if (iVar9 != 0) {
LAB_006040c9:
      FUN_006040d7
                ((uint)puVar6,puVar5,(char *)CONCAT22(uVar11,0x30),in_stack_ffffff6c,
                 in_stack_ffffff70,in_stack_ffffff74,in_stack_ffffff78,in_stack_ffffff7c,
                 in_stack_ffffff80,in_stack_ffffff84);
      FUN_0060411c();
      return;
    }
    if ((CONCAT11(bStack_43,uStack_44) & 0x7fff) != 0) {
      puVar6 = local_1c;
      if (0 < (int)local_1c) {
        puVar6 = auStack_58;
        _auStack_58 = (float10)CONCAT28(0x4019,0xbebc200000000000);
        puVar5 = (byte *)0x0;
        _auStack_58 = (float10)((unkuint10)stack0xffffffac << 0x20);
        fVar10 = _auStack_58 *
                 ((float10)CONCAT19(bStack_43,CONCAT18(uStack_44,CONCAT44(uStack_48,local_4c))) -
                 (float10)(int)ROUND((float10)CONCAT19(bStack_43,
                                                       CONCAT18(uStack_44,
                                                                CONCAT44(uStack_48,local_4c)))));
        local_4c = SUB104(fVar10,0);
        uStack_48 = (uint)((unkuint10)fVar10 >> 0x20);
        uStack_44 = (byte)((unkuint10)fVar10 >> 0x40);
        bStack_43 = (byte)((unkuint10)fVar10 >> 0x48);
      }
      goto LAB_006040c9;
    }
  }
  iVar9 = 0;
  uVar7 = local_24 + 7;
  for (pcVar4 = &stack0xffffff69; local_24 = uVar7, *pcVar4 == '0'; pcVar4 = pcVar4 + 1) {
    iVar9 = iVar9 + -1;
    uVar7 = uVar7 - 1;
  }
  iVar3 = *in_stack_00000008;
  if ((*(byte *)(in_stack_00000008 + 2) & 2) == 0) {
    if ((*(byte *)(in_stack_00000008 + 2) & 1) != 0) {
      if (in_stack_00000008[1] < 1) {
        iVar3 = iVar3 + in_stack_00000008[1];
      }
      else {
        iVar3 = iVar3 + 1;
      }
      local_24 = (uVar7 + 1) - in_stack_00000008[1];
    }
  }
  else {
    local_24 = uVar7 + in_stack_00000008[1];
    iVar3 = iVar3 + uVar7 + in_stack_00000008[1] + 1;
  }
  if (-1 < iVar3) {
    if (iVar9 < iVar3) {
      iVar3 = iVar9;
    }
    iVar8 = 0xf;
    if ((*(byte *)(in_stack_00000008 + 2) & 0x20) != 0) {
      iVar8 = 0x14;
    }
    if ((*(byte *)(in_stack_00000008 + 2) & 0x40) != 0) {
      iVar8 = iVar8 * 2;
    }
    if (iVar8 < iVar3) {
      iVar3 = iVar8 + 1;
    }
    cStack_14 = '0';
    if ((iVar3 < iVar9) && (0x34 < (byte)pcVar4[iVar3])) {
      cStack_14 = '9';
    }
    pcVar4 = pcVar4 + iVar3;
    iVar9 = iVar3;
    while( true ) {
      pcVar4 = pcVar4 + -1;
      iVar9 = iVar9 + -1;
      if (*pcVar4 != cStack_14) break;
      iVar3 = iVar3 + -1;
    }
    if (cStack_14 == '9') {
      *pcVar4 = *pcVar4 + '\x01';
    }
    if (iVar9 < 0) {
      local_24 = local_24 + 1;
      iVar3 = iVar3 + 1;
    }
  }
  if (iVar3 < 1) {
    local_24 = 0;
    in_stack_00000008[5] = 0;
  }
  if (((*(byte *)(in_stack_00000008 + 2) & 2) == 0) &&
     (((*(byte *)(in_stack_00000008 + 2) & 4) == 0 ||
      ((((int)local_24 < -4 || (*in_stack_00000008 <= (int)local_24)) &&
       ((*(byte *)(in_stack_00000008 + 2) & 8) == 0)))))) {
    FUN_00604478();
  }
  else {
    FUN_00604267();
  }
LAB_00603d56:
  FUN_0060445e();
  return;
}
