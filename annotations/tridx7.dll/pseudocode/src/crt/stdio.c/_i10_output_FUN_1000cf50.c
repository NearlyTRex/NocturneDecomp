// Name: crt_stdio.c__i10_output_FUN_1000cf50
// Address: 1000cf50
// Address Range: [[1000cf50, 1000d2ea]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c__i10_output_FUN_1000cf50(int man_lo,uint man_hi,ushort exp_sign,int ndigits,byte flags,short *out)

#include "nocturne.h"

int __cdecl _i10_output(int man_lo,uint man_hi,ushort exp_sign,int ndigits,byte flags,short *out)

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
  _LDBL12 local_28;
  int local_1c;
  _LDBL12 local_18;
  uint local_c;
  uint local_8;
  uint local_4;
  
  local_18.ld12[0] = 0xcc;
  local_18.ld12[1] = 0xcc;
  local_18.ld12[2] = 0xcc;
  local_18.ld12[3] = 0xcc;
  local_18.ld12[4] = 0xcc;
  local_18.ld12[5] = 0xcc;
  local_18.ld12[6] = 0xcc;
  local_18.ld12[7] = 0xcc;
  local_18.ld12[8] = 0xcc;
  local_18.ld12[9] = 0xcc;
  local_18.ld12[10] = 0xfb;
  local_18.ld12[0xb] = '?';
  local_1c = 1;
  uVar2 = exp_sign & 0x7fff;
  if ((exp_sign & 0x8000) == 0) {
    *(byte *)(out + 1) = 0x20;
  }
  else {
    *(byte *)(out + 1) = 0x2d;
  }
  if (((uVar2 == 0) && (man_hi == 0)) && (man_lo == 0)) {
    *(byte *)(out + 1) = 0x20;
    *out = 0;
    *(byte *)((int)out + 3) = 1;
    *(byte *)(out + 2) = 0x30;
    *(byte *)((int)out + 5) = 0;
    return 1;
  }
  if (uVar2 == 0x7fff) {
    *out = 1;
    if (((man_hi != 0x80000000) || (man_lo != 0)) && ((man_hi & 0x40000000) == 0)) {
      out[2] = 0x2331;
      out[3] = 0x4e53;
      out[4] = 0x4e41;
      *(byte *)(out + 5) = 0;
      *(byte *)((int)out + 3) = 6;
      return 0;
    }
    if ((((exp_sign & 0x8000) != 0) && (man_hi == 0xc0000000)) && (man_lo == 0)) {
      out[2] = 0x2331;
      out[3] = 0x4e49;
      out[4] = 0x44;
      *(byte *)((int)out + 3) = 5;
      return 0;
    }
    if ((man_hi == 0x80000000) && (man_lo == 0)) {
      out[2] = 0x2331;
      out[3] = 0x4e49;
      out[4] = 0x46;
      *(byte *)((int)out + 3) = 5;
      return 0;
    }
    out[2] = 0x2331;
    out[3] = 0x4e51;
    out[4] = 0x4e41;
    *(byte *)(out + 5) = 0;
    *(byte *)((int)out + 3) = 6;
    return 0;
  }
  local_28.ld12[10] = (uchar)uVar2;
  local_28.ld12[0xb] = (uchar)(uVar2 >> 8);
  sVar9 = (short)(((uint)(uVar2 >> 8) + (man_hi >> 0x18) * 2) * 0x4d + (uint)uVar2 * 0x4d10 +
                  -0x134312f4 >> 0x10);
  local_28.ld12[0] = '\0';
  local_28.ld12[1] = '\0';
  local_28.ld12._6_4_ = man_hi;
  local_28.ld12._2_4_ = man_lo;
  _multtenpow12(&local_28,-(int)sVar9,1);
  if (0x3ffe < CONCAT11(local_28.ld12[0xb],local_28.ld12[10])) {
    sVar9 = sVar9 + 1;
    __multtwelve(&local_28,&local_18);
  }
  *out = sVar9;
  if (((flags & 1) != 0) && (ndigits = ndigits + sVar9, ndigits < 1)) {
    *(byte *)(out + 1) = 0x20;
    *out = 0;
    *(byte *)((int)out + 3) = 1;
    *(byte *)(out + 2) = 0x30;
    *(byte *)((int)out + 5) = 0;
    return 1;
  }
  if (0x15 < ndigits) {
    ndigits = 0x15;
  }
  iVar8 = 8;
  uVar2 = CONCAT11(local_28.ld12[0xb],local_28.ld12[10]);
  local_28.ld12[10] = '\0';
  local_28.ld12[0xb] = '\0';
  iVar4 = uVar2 - 0x3ffe;
  do {
    _shl_12((uint *)&local_28);
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  if (iVar4 < 0) {
    for (uVar5 = -iVar4 & 0xff; uVar5 != 0; uVar5 = uVar5 - 1) {
      _shr_12((uint *)&local_28);
    }
  }
  psVar1 = out + 2;
  iVar8 = ndigits + 1;
  psVar7 = psVar1;
  psVar6 = psVar1;
  iVar4 = local_28.ld12._2_4_;
  uVar5 = local_28.ld12._6_4_;
  if (0 < iVar8) {
    do {
      local_28.ld12._8_2_ = SUB42(uVar5 >> 0x10,0);
      local_28.ld12._6_2_ = SUB42(uVar5,0);
      local_28.ld12._4_2_ = SUB42((uint)iVar4 >> 0x10,0);
      local_28.ld12._2_2_ = SUB42(iVar4,0);
      psVar6 = (short *)((int)psVar7 + 1);
      local_c = CONCAT22(local_28.ld12._2_2_,local_28.ld12._0_2_);
      local_8 = CONCAT22(local_28.ld12._6_2_,local_28.ld12._4_2_);
      local_4 = CONCAT13(local_28.ld12[0xb],CONCAT12(local_28.ld12[10],local_28.ld12._8_2_));
      local_28.ld12._2_4_ = iVar4;
      local_28.ld12._6_4_ = uVar5;
      _shl_12((uint *)&local_28);
      _shl_12((uint *)&local_28);
      _add_12((uint *)&local_28,&local_c);
      _shl_12((uint *)&local_28);
      iVar8 = iVar8 + -1;
      *(uchar *)psVar7 = local_28.ld12[0xb] + '0';
      local_28.ld12[0xb] = '\0';
      psVar7 = psVar6;
      iVar4 = local_28.ld12._2_4_;
      uVar5 = local_28.ld12._6_4_;
    } while (iVar8 != 0);
  }
  psVar7 = psVar6 + -1;
  if (*(char *)((int)psVar6 + -1) < '5') {
    if (psVar7 < psVar1) {
LAB_1000d2c9:
      *out = 0;
      *(char *)psVar1 = '0';
      *(byte *)(out + 1) = 0x20;
      *(byte *)((int)out + 3) = 1;
      *(byte *)((int)out + 5) = 0;
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
    *out = *out + 1;
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
  cVar3 = ((char)psVar7 - (char)out) + -3;
  *(char *)((int)out + 3) = cVar3;
  *(byte *)(cVar3 + 4 + (int)out) = 0;
  return local_1c;
}
