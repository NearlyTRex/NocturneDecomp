// Name: crt_unknown.c_FUN_00603dc8
// Address: 00603dc8
// Address Range: [[00603dc8, 0060403e]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_00603dc8(void)

#include "nocturne.h"

void crt_unknown_c_FUN_00603dc8(void)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  byte *puVar7;
  byte *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ushort in_FPUControlWord;
  float10 fVar12;
  uint *in_stack_00000004;
  int *in_stack_00000008;
  byte *in_stack_0000000c;
  char local_97 [63];
  byte auStack_58 [8];
  ushort uStack_50;
  uint local_4c;
  uint uStack_48;
  byte uStack_44;
  byte bStack_43;
  ushort uStack_42;
  byte local_40 [8];
  ushort uStack_38;
  float10 local_34;
  uint local_28;
  uint local_24;
  char *local_20;
  byte *local_1c;
  uint local_18;
  char cStack_14;
  
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
  iVar11 = 0;
  in_stack_00000008[6] = 0;
  uVar2 = crt_unknown_c_FUN_0060b07a();
  switch(uVar2) {
  case 0:
  case 4:
    in_stack_00000008[5] = 0;
    local_24 = 0;
    break;
  case 1:
    iVar10 = (CONCAT11(bStack_43,uStack_44) - 0x3ffe) * 0x7597;
    uVar9 = 100000;
    iVar4 = iVar10 % 100000;
    local_24 = iVar10 / 100000 - 4;
    if (local_24 != 0) {
      if ((int)local_24 < 0) {
        uVar3 = 3 - local_24 & 0xfffffffc;
        uVar9 = -uVar3;
        uVar6 = local_24;
        local_24 = uVar9;
LAB_00603fc8:
        crt_unknown_c_FUN_00603d60(&local_4c,iVar4,uVar9,uVar6,&local_4c,uVar3);
      }
      else {
        uVar1 = CONCAT11(bStack_43,uStack_44);
        iVar4 = CONCAT22(uStack_42,uVar1);
        if ((uVar1 < 0x4019) || ((uVar1 == 0x4019 && (uStack_48 < 3200000000)))) {
          local_24 = 0;
        }
        else {
          uVar1 = CONCAT11(bStack_43,uStack_44);
          if ((0x4033 < uVar1) &&
             ((uVar6 = CONCAT22(uStack_42,uVar1), uVar1 != 0x4034 ||
              ((0x8e1bc9be < uStack_48 &&
               ((uVar6 = uStack_48, uStack_48 != 0x8e1bc9bf || (0x3ffffff < local_4c)))))))) {
            local_24 = local_24 & 0xfffffffc;
            uVar3 = -local_24;
            goto LAB_00603fc8;
          }
          _local_40 = (float10)CONCAT28(0x4019,0xbebc200000000000);
          _local_40 = (float10)((unkuint10)stack0xffffffc4 << 0x20);
          iVar11 = (int)ROUND((float10)CONCAT19(bStack_43,
                                                CONCAT18(uStack_44,CONCAT44(uStack_48,local_4c))) /
                              _local_40);
          local_34 = (float10)iVar11;
          _local_40 = _local_40 * (float10)iVar11;
          fVar12 = (float10)CONCAT19(bStack_43,CONCAT18(uStack_44,CONCAT44(uStack_48,local_4c))) -
                   _local_40;
          local_4c = SUB104(fVar12,0);
          uStack_48 = (uint)((unkuint10)fVar12 >> 0x20);
          uStack_44 = (byte)((unkuint10)fVar12 >> 0x40);
          bStack_43 = (byte)((unkuint10)fVar12 >> 0x48);
          local_24 = 8;
        }
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
  puVar8 = local_1c;
  iVar4 = 0xf;
  if ((*(byte *)(in_stack_00000008 + 2) & 0x20) != 0) {
    iVar4 = 0x14;
  }
  if ((*(byte *)(in_stack_00000008 + 2) & 0x40) != 0) {
    iVar4 = iVar4 * 2;
  }
  if (iVar4 + 4 < (int)local_1c) {
    local_1c = (byte *)(iVar4 + 4);
  }
  puVar7 = local_1c;
  local_97[0] = '\0';
  local_28 = 0;
  local_20 = local_97;
  if (0 < (int)local_1c) {
    local_1c = local_1c + -8;
    if (iVar11 != 0) {
LAB_006040c9:
      crt_unknown_c_FUN_006040d7(iVar11,puVar8,local_97,puVar7,puVar8,puVar7);
      crt_unknown_c_FUN_0060411c();
      return;
    }
    if ((CONCAT11(bStack_43,uStack_44) & 0x7fff) != 0) {
      iVar11 = (int)ROUND((float10)CONCAT19(bStack_43,
                                            CONCAT18(uStack_44,CONCAT44(uStack_48,local_4c))));
      puVar8 = local_1c;
      if (0 < (int)local_1c) {
        puVar8 = auStack_58;
        _auStack_58 = (float10)CONCAT28(0x4019,0xbebc200000000000);
        puVar7 = (byte *)0x0;
        _auStack_58 = (float10)((unkuint10)stack0xffffffac << 0x20);
        fVar12 = _auStack_58 *
                 ((float10)CONCAT19(bStack_43,CONCAT18(uStack_44,CONCAT44(uStack_48,local_4c))) -
                 (float10)iVar11);
        local_4c = SUB104(fVar12,0);
        uStack_48 = (uint)((unkuint10)fVar12 >> 0x20);
        uStack_44 = (byte)((unkuint10)fVar12 >> 0x40);
        bStack_43 = (byte)((unkuint10)fVar12 >> 0x48);
      }
      goto LAB_006040c9;
    }
  }
  iVar11 = 0;
  uVar9 = local_24 + 7;
  for (pcVar5 = local_97; local_24 = uVar9, *pcVar5 == '0'; pcVar5 = pcVar5 + 1) {
    iVar11 = iVar11 + -1;
    uVar9 = uVar9 - 1;
  }
  iVar4 = *in_stack_00000008;
  if ((*(byte *)(in_stack_00000008 + 2) & 2) == 0) {
    if ((*(byte *)(in_stack_00000008 + 2) & 1) != 0) {
      if (in_stack_00000008[1] < 1) {
        iVar4 = iVar4 + in_stack_00000008[1];
      }
      else {
        iVar4 = iVar4 + 1;
      }
      local_24 = (uVar9 + 1) - in_stack_00000008[1];
    }
  }
  else {
    local_24 = uVar9 + in_stack_00000008[1];
    iVar4 = iVar4 + uVar9 + in_stack_00000008[1] + 1;
  }
  if (-1 < iVar4) {
    if (iVar11 < iVar4) {
      iVar4 = iVar11;
    }
    iVar10 = 0xf;
    if ((*(byte *)(in_stack_00000008 + 2) & 0x20) != 0) {
      iVar10 = 0x14;
    }
    if ((*(byte *)(in_stack_00000008 + 2) & 0x40) != 0) {
      iVar10 = iVar10 * 2;
    }
    if (iVar10 < iVar4) {
      iVar4 = iVar10 + 1;
    }
    cStack_14 = '0';
    if ((iVar4 < iVar11) && (0x34 < (byte)pcVar5[iVar4])) {
      cStack_14 = '9';
    }
    pcVar5 = pcVar5 + iVar4;
    iVar11 = iVar4;
    while( true ) {
      pcVar5 = pcVar5 + -1;
      iVar11 = iVar11 + -1;
      if (*pcVar5 != cStack_14) break;
      iVar4 = iVar4 + -1;
    }
    if (cStack_14 == '9') {
      *pcVar5 = *pcVar5 + '\x01';
    }
    if (iVar11 < 0) {
      local_24 = local_24 + 1;
      iVar4 = iVar4 + 1;
    }
  }
  if (iVar4 < 1) {
    local_24 = 0;
    in_stack_00000008[5] = 0;
  }
  if (((*(byte *)(in_stack_00000008 + 2) & 2) == 0) &&
     (((*(byte *)(in_stack_00000008 + 2) & 4) == 0 ||
      ((((int)local_24 < -4 || (*in_stack_00000008 <= (int)local_24)) &&
       ((*(byte *)(in_stack_00000008 + 2) & 8) == 0)))))) {
    crt_unknown_c_FUN_00604478();
  }
  else {
    crt_unknown_c_FUN_00604267();
  }
LAB_00603d56:
  crt_unknown_c_FUN_0060445e(local_18 & 0xffff);
  return;
}
