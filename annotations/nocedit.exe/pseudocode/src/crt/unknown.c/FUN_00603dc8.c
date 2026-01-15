// Name: crt_unknown.c_FUN_00603dc8
// Address: 00603dc8
// Address Range: [[00603dc8, 0060403e]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00603dc8()

#include "nocturne.h"

void crt_unknown_c_FUN_00603dc8(void)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ushort in_FPUControlWord;
  float10 fVar9;
  uint *in_stack_00000004;
  int *in_stack_00000008;
  byte *in_stack_0000000c;
  uint local_9c;
  uint local_98;
  uint uStack_94;
  byte *puStack_90;
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
  int local_20;
  byte *local_1c;
  uint local_18;
  char cStack_14;
  
  local_9c = (uint)in_FPUControlWord;
  local_18 = local_9c;
  uVar2 = in_FPUControlWord | 0x300;
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
  iVar8 = 0;
  in_stack_00000008[6] = 0;
  uVar3 = crt_unknown_c_FUN_0060b07a();
  switch(uVar3) {
  case 0:
  case 4:
    in_stack_00000008[5] = 0;
    local_24 = 0;
    break;
  case 1:
    iVar7 = (CONCAT11 /* combine 2-byte values */(bStack_43,uStack_44) - 0x3ffe) * 0x7597;
    iVar4 = iVar7 % 100000;
    local_24 = iVar7 / 100000 - 4;
    if (local_24 != 0) {
      if ((int)local_24 < 0) {
        puStack_90 = (byte *)(3 - local_24 & 0xfffffffc);
        local_24 = -(int)puStack_90;
LAB_00603fc8:
        uStack_94 = &local_4c;
        local_98 = 0x603fcd;
        crt_unknown_c_FUN_00603d60(uStack_94,iVar4);
      }
      else {
        uVar1 = CONCAT11 /* combine 2-byte values */(bStack_43,uStack_44);
        iVar4 = CONCAT22 /* combine 2-byte values */(uStack_42,uVar1);
        if ((uVar1 < 0x4019) || ((uVar1 == 0x4019 && (uStack_48 < 3200000000)))) {
          local_24 = 0;
        }
        else {
          if ((0x4033 < CONCAT11 /* combine 2-byte values */(bStack_43,uStack_44)) &&
             ((CONCAT11 /* combine 2-byte values */(bStack_43,uStack_44) != 0x4034 ||
              ((0x8e1bc9be < uStack_48 && ((uStack_48 != 0x8e1bc9bf || (0x3ffffff < local_4c))))))))
          {
            local_24 = local_24 & 0xfffffffc;
            puStack_90 = (byte *)-local_24;
            goto LAB_00603fc8;
          }
          _local_40 = (float10)CONCAT28 /* combine 2-byte values */(0x4019,0xbebc200000000000);
          _local_40 = (float10)((unkuint10)stack0xffffffc4 << 0x20);
          uStack_94 = (uint *)CONCAT22 /* combine 2-byte values */((short)((uint)&local_34 >> 0x10),uVar2);
          local_98 = (int)uStack_94;
          iVar8 = (int)ROUND((float10)CONCAT19 /* combine 2-byte values */(bStack_43,
                                               CONCAT18 /* combine 2-byte values */(uStack_44,CONCAT44 /* combine 2-byte values */(uStack_48,local_4c))) /
                             _local_40);
          puStack_90 = (byte *)iVar8;
          local_34 = (float10)iVar8;
          _local_40 = _local_40 * (float10)iVar8;
          fVar9 = (float10)CONCAT19 /* combine 2-byte values */(bStack_43,CONCAT18 /* combine 2-byte values */(uStack_44,CONCAT44 /* combine 2-byte values */(uStack_48,local_4c))) -
                  _local_40;
          local_4c = SUB104 /* extract 3-byte value */(fVar9,0);
          uStack_48 = (uint)((unkuint10)fVar9 >> 0x20);
          uStack_44 = (byte)((unkuint10)fVar9 >> 0x40);
          bStack_43 = (byte)((unkuint10)fVar9 >> 0x48);
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
  uStack_94 = (uint *)local_1c;
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
  puStack_90 = local_1c;
  local_98 = CONCAT22 /* combine 2-byte values */(local_98._2_2_,0x30);
  local_28 = 0;
  local_20 = (int)&local_98 + 1;
  if (0 < (int)local_1c) {
    local_1c = local_1c + -8;
    if (iVar8 != 0) {
LAB_006040c9:
      local_98 = 0x6040d5;
      crt_unknown_c_FUN_006040d7(iVar8,uStack_94,(int)&local_98 + 1);
      crt_unknown_c_FUN_0060411c();
      return;
    }
    if ((CONCAT11 /* combine 2-byte values */(bStack_43,uStack_44) & 0x7fff) != 0) {
      iVar8 = (int)ROUND((float10)CONCAT19 /* combine 2-byte values */(bStack_43,
                                           CONCAT18 /* combine 2-byte values */(uStack_44,CONCAT44 /* combine 2-byte values */(uStack_48,local_4c))));
      uStack_94 = (uint *)local_1c;
      if (0 < (int)local_1c) {
        uStack_94 = (uint *)auStack_58;
        _auStack_58 = (float10)CONCAT28 /* combine 2-byte values */(0x4019,0xbebc200000000000);
        puStack_90 = (byte *)0x0;
        _auStack_58 = (float10)((unkuint10)stack0xffffffac << 0x20);
        fVar9 = _auStack_58 *
                ((float10)CONCAT19 /* combine 2-byte values */(bStack_43,CONCAT18 /* combine 2-byte values */(uStack_44,CONCAT44 /* combine 2-byte values */(uStack_48,local_4c))) -
                (float10)iVar8);
        local_4c = SUB104 /* extract 3-byte value */(fVar9,0);
        uStack_48 = (uint)((unkuint10)fVar9 >> 0x20);
        uStack_44 = (byte)((unkuint10)fVar9 >> 0x40);
        bStack_43 = (byte)((unkuint10)fVar9 >> 0x48);
      }
      goto LAB_006040c9;
    }
  }
  iVar8 = 0;
  uVar6 = local_24 + 7;
  for (pcVar5 = (char *)((int)&local_98 + 1); local_24 = uVar6, *pcVar5 == '0'; pcVar5 = pcVar5 + 1)
  {
    iVar8 = iVar8 + -1;
    uVar6 = uVar6 - 1;
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
      local_24 = (uVar6 + 1) - in_stack_00000008[1];
    }
  }
  else {
    local_24 = uVar6 + in_stack_00000008[1];
    iVar4 = iVar4 + uVar6 + in_stack_00000008[1] + 1;
  }
  if (-1 < iVar4) {
    if (iVar8 < iVar4) {
      iVar4 = iVar8;
    }
    iVar7 = 0xf;
    if ((*(byte *)(in_stack_00000008 + 2) & 0x20) != 0) {
      iVar7 = 0x14;
    }
    if ((*(byte *)(in_stack_00000008 + 2) & 0x40) != 0) {
      iVar7 = iVar7 * 2;
    }
    if (iVar7 < iVar4) {
      iVar4 = iVar7 + 1;
    }
    cStack_14 = '0';
    if ((iVar4 < iVar8) && (0x34 < (byte)pcVar5[iVar4])) {
      cStack_14 = '9';
    }
    pcVar5 = pcVar5 + iVar4;
    iVar8 = iVar4;
    while( true ) {
      pcVar5 = pcVar5 + -1;
      iVar8 = iVar8 + -1;
      if (*pcVar5 != cStack_14) break;
      iVar4 = iVar4 + -1;
    }
    if (cStack_14 == '9') {
      *pcVar5 = *pcVar5 + '\x01';
    }
    if (iVar8 < 0) {
      local_24 = local_24 + 1;
      iVar4 = iVar4 + 1;
    }
  }
  if (iVar4 < 1) {
    iVar4 = 1;
    local_24 = 0;
    in_stack_00000008[5] = 0;
  }
  local_98 = iVar4;
  if (((*(byte *)(in_stack_00000008 + 2) & 2) == 0) &&
     (((*(byte *)(in_stack_00000008 + 2) & 4) == 0 ||
      ((((int)local_24 < -4 || (*in_stack_00000008 <= (int)local_24)) &&
       ((*(byte *)(in_stack_00000008 + 2) & 8) == 0)))))) {
    puStack_90 = in_stack_0000000c;
    uStack_94 = (uint *)local_24;
    crt_unknown_c_FUN_00604478();
  }
  else {
    puStack_90 = in_stack_0000000c;
    uStack_94 = (uint *)local_24;
    crt_unknown_c_FUN_00604267();
  }
LAB_00603d56:
  puStack_90 = (byte *)(local_18 & 0xffff);
  crt_unknown_c_FUN_0060445e(puStack_90);
  return;
}
