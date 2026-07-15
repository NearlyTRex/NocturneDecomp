// Name: crt_math.c__strgtold12_FUN_1000c7b0
// Address: 1000c7b0
// Address Range: [[1000c7b0, 1000cdd9]]
// Convention: __cdecl
// Signature: uint __cdecl crt_math_c__strgtold12_FUN_1000c7b0(_LDBL12 *pld12,char **p_end_ptr,char *str,int mult12,int scale,int decpt,int implicit_e)

#include "nocturne.h"

uint __cdecl _strgtold12(_LDBL12 *pld12,char **p_end_ptr,char *str,int mult12,int scale,int decpt,int implicit_e)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  byte bVar8;
  ushort *puVar9;
  ushort *puVar10;
  char *pcVar11;
  byte *pbVar12;
  int iVar13;
  uint uVar14;
  ushort local_52;
  uint local_50;
  byte *local_4c;
  int local_48;
  uint local_40;
  int local_3c;
  ushort local_28 [11];
  char local_11;
  _LDBL12 local_c;
  
  local_3c = 1;
  puVar10 = local_28;
  iVar13 = 0;
  local_52 = 0;
  local_50 = 0;
  bVar2 = false;
  bVar4 = false;
  bVar3 = false;
  bVar5 = false;
  iVar7 = 0;
  bVar6 = false;
  local_48 = 0;
  local_40 = 0;
  local_4c = (byte *)str;
  for (; (((bVar8 = *str, bVar8 == 0x20 || (bVar8 == 9)) || (bVar8 == 10)) || (bVar8 == 0xd));
      str = str + 1) {
  }
  do {
    bVar8 = *str;
    pbVar12 = (byte *)(str + 1);
    switch(iVar7) {
    case 0:
      if (((char)bVar8 < '1') || ('9' < (char)bVar8)) {
        if (DAT_10017694 == bVar8) {
          iVar7 = 5;
        }
        else if (bVar8 == 0x2b) {
          local_52 = 0;
          iVar7 = 2;
        }
        else if (bVar8 == 0x2d) {
          local_52 = 0x8000;
          iVar7 = 2;
        }
        else {
          if (bVar8 != 0x30) goto switchD_1000ca60_caseD_2c;
          iVar7 = 1;
        }
        break;
      }
      iVar7 = 3;
      goto LAB_1000cc64;
    case 1:
      bVar2 = true;
      if (('0' < (char)bVar8) && ((char)bVar8 < ':')) {
        iVar7 = 3;
        goto LAB_1000cc64;
      }
      if (DAT_10017694 == bVar8) {
        iVar7 = 4;
      }
      else {
        switch(bVar8) {
        case 0x2b:
        case 0x2d:
          iVar7 = 0xb;
          pbVar12 = (byte *)str;
          break;
        default:
          goto switchD_1000ca60_caseD_2c;
        case 0x30:
          iVar7 = 1;
          break;
        case 0x44:
        case 0x45:
        case 100:
        case 0x65:
          iVar7 = 6;
        }
      }
      break;
    case 2:
      if (('0' < (char)bVar8) && ((char)bVar8 < ':')) {
        iVar7 = 3;
        goto LAB_1000cc64;
      }
      if (DAT_10017694 == bVar8) {
        iVar7 = 5;
      }
      else if (bVar8 == 0x30) {
        iVar7 = 1;
      }
      else {
        iVar7 = 10;
        pbVar12 = local_4c;
      }
      break;
    case 3:
      bVar2 = true;
      while( true ) {
        if (DAT_10017690 < 2) {
          uVar14 = *(ushort *)(PTR_DAT_10017480 + (uint)bVar8 * 2) & 4;
        }
        else {
          uVar14 = _isctype((uint)bVar8,4);
        }
        if (uVar14 == 0) break;
        if (local_50 < 0x19) {
          local_50 = local_50 + 1;
          *(byte *)puVar10 = bVar8 - 0x30;
          bVar8 = *pbVar12;
          puVar10 = (ushort *)((int)puVar10 + 1);
          pbVar12 = pbVar12 + 1;
        }
        else {
          bVar8 = *pbVar12;
          pbVar12 = pbVar12 + 1;
          local_48 = local_48 + 1;
        }
      }
      if (DAT_10017694 == bVar8) {
        iVar7 = 4;
      }
      else {
        switch(bVar8) {
        case 0x2b:
        case 0x2d:
          iVar7 = 0xb;
          pbVar12 = pbVar12 + -1;
          break;
        default:
          goto switchD_1000ca60_caseD_2c;
        case 0x44:
        case 0x45:
        case 100:
        case 0x65:
          iVar7 = 6;
        }
      }
      break;
    case 4:
      bVar2 = true;
      bVar4 = true;
      if (local_50 == 0) {
        while (bVar8 == 0x30) {
          local_48 = local_48 + -1;
          bVar8 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        }
      }
      while( true ) {
        if (DAT_10017690 < 2) {
          uVar14 = *(ushort *)(PTR_DAT_10017480 + (uint)bVar8 * 2) & 4;
        }
        else {
          uVar14 = _isctype((uint)bVar8,4);
        }
        if (uVar14 == 0) break;
        puVar9 = puVar10;
        if (local_50 < 0x19) {
          puVar9 = (ushort *)((int)puVar10 + 1);
          local_50 = local_50 + 1;
          local_48 = local_48 + -1;
          *(byte *)puVar10 = bVar8 - 0x30;
        }
        bVar8 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        puVar10 = puVar9;
      }
      switch(bVar8) {
      case 0x2b:
      case 0x2d:
        iVar7 = 0xb;
        pbVar12 = pbVar12 + -1;
        break;
      default:
        goto switchD_1000ca60_caseD_2c;
      case 0x44:
      case 0x45:
      case 100:
      case 0x65:
        iVar7 = 6;
      }
      break;
    case 5:
      bVar4 = true;
      if (DAT_10017690 < 2) {
        uVar14 = *(ushort *)(PTR_DAT_10017480 + (uint)bVar8 * 2) & 4;
      }
      else {
        uVar14 = _isctype((uint)bVar8,4);
      }
      if (uVar14 != 0) {
        iVar7 = 4;
        goto LAB_1000cc64;
      }
      iVar7 = 10;
      pbVar12 = local_4c;
      break;
    case 6:
      local_4c = (byte *)(str + -1);
      if (('0' < (char)bVar8) && ((char)bVar8 < ':')) {
        iVar7 = 9;
        goto LAB_1000cc64;
      }
      if (bVar8 == 0x2b) {
        iVar7 = 7;
      }
      else if (bVar8 == 0x2d) {
        local_3c = -1;
        iVar7 = 7;
      }
      else if (bVar8 == 0x30) {
        iVar7 = 8;
      }
      else {
        iVar7 = 10;
        pbVar12 = local_4c;
      }
      break;
    case 7:
      if (('0' < (char)bVar8) && ((char)bVar8 < ':')) {
        iVar7 = 9;
        goto LAB_1000cc64;
      }
      if (bVar8 == 0x30) {
        iVar7 = 8;
      }
      else {
        iVar7 = 10;
        pbVar12 = local_4c;
      }
      break;
    case 8:
      bVar3 = true;
      while (bVar8 == 0x30) {
        bVar8 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      }
      if (('0' < (char)bVar8) && ((char)bVar8 < ':')) {
        iVar7 = 9;
        goto LAB_1000cc64;
      }
      goto switchD_1000ca60_caseD_2c;
    case 9:
      bVar3 = true;
      iVar13 = 0;
      while( true ) {
        if (DAT_10017690 < 2) {
          uVar14 = *(ushort *)(PTR_DAT_10017480 + (uint)bVar8 * 2) & 4;
        }
        else {
          uVar14 = _isctype((uint)bVar8,4);
        }
        if (uVar14 == 0) goto LAB_1000cbea;
        iVar13 = (char)bVar8 + -0x30 + iVar13 * 10;
        if (0x1450 < iVar13) break;
        bVar8 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      }
      iVar13 = 0x1451;
LAB_1000cbea:
      while( true ) {
        if (DAT_10017690 < 2) {
          uVar14 = *(ushort *)(PTR_DAT_10017480 + (uint)bVar8 * 2) & 4;
        }
        else {
          uVar14 = _isctype((uint)bVar8,4);
        }
        if (uVar14 == 0) break;
        bVar8 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      }
switchD_1000ca60_caseD_2c:
      iVar7 = 10;
LAB_1000cc64:
      pbVar12 = pbVar12 + -1;
      break;
    case 0xb:
      if (implicit_e == 0) goto switchD_1000ca60_caseD_2c;
      local_4c = (byte *)str;
      if (bVar8 == 0x2b) {
        iVar7 = 7;
      }
      else if (bVar8 == 0x2d) {
        local_3c = -1;
        iVar7 = 7;
      }
      else {
        iVar7 = 10;
        pbVar12 = (byte *)str;
      }
    }
    str = (char *)pbVar12;
  } while (iVar7 != 10);
  *p_end_ptr = (char *)pbVar12;
  if (bVar2) {
    if (0x18 < local_50) {
      if ('\x04' < local_11) {
        local_11 = local_11 + '\x01';
      }
      puVar10 = (ushort *)((int)puVar10 + -1);
      local_48 = local_48 + 1;
      local_50 = 0x18;
    }
    if (local_50 == 0) {
      local_c.ld12._0_2_ = 0;
      local_c.ld12[6] = '\0';
      local_c.ld12[7] = '\0';
      local_c.ld12[8] = '\0';
      local_c.ld12[9] = '\0';
      local_c.ld12._10_2_ = 0;
      local_28[0]._0_1_ = '\0';
      local_28[0]._1_1_ = '\0';
      local_28[1]._0_1_ = '\0';
      local_28[1]._1_1_ = '\0';
      goto LAB_1000cd62;
    }
    pcVar11 = (char *)((int)puVar10 + -1);
    cVar1 = *pcVar11;
    while (cVar1 == '\0') {
      pcVar11 = pcVar11 + -1;
      local_50 = local_50 - 1;
      local_48 = local_48 + 1;
      cVar1 = *pcVar11;
    }
    _mtold12((char *)local_28,local_50,(uint *)&local_c);
    if (local_3c < 0) {
      iVar13 = -iVar13;
    }
    uVar14 = iVar13 + local_48;
    if (!bVar3) {
      uVar14 = uVar14 + scale;
    }
    if (!bVar4) {
      uVar14 = uVar14 - decpt;
    }
    if ((int)uVar14 < 0x1451) {
      if (-0x1451 < (int)uVar14) {
        _multtenpow12(&local_c,uVar14,mult12);
        local_28._0_4_ = local_c.ld12._2_4_;
        goto LAB_1000cd62;
      }
      bVar6 = true;
    }
    else {
      bVar5 = true;
    }
  }
  local_c.ld12._6_4_ = local_28._0_4_;
  local_c.ld12._0_2_ = local_28[0];
  local_c.ld12._10_2_ = local_28[0];
LAB_1000cd62:
  if (bVar2) {
    if (bVar5) {
      local_c.ld12._10_2_ = 0x7fff;
      local_c.ld12[6] = '\0';
      local_c.ld12[7] = '\0';
      local_c.ld12[8] = '\0';
      local_c.ld12[9] = 0x80;
      local_c.ld12._0_2_ = 0;
      local_28[0]._0_1_ = '\0';
      local_28[0]._1_1_ = '\0';
      local_28[1]._0_1_ = '\0';
      local_28[1]._1_1_ = '\0';
      local_40 = 2;
    }
    else if (bVar6) {
      local_c.ld12._0_2_ = 0;
      local_c.ld12[6] = '\0';
      local_c.ld12[7] = '\0';
      local_c.ld12[8] = '\0';
      local_c.ld12[9] = '\0';
      local_c.ld12._10_2_ = 0;
      local_28[0]._0_1_ = '\0';
      local_28[0]._1_1_ = '\0';
      local_28[1]._0_1_ = '\0';
      local_28[1]._1_1_ = '\0';
      local_40 = 1;
    }
  }
  else {
    local_c.ld12._0_2_ = 0;
    local_c.ld12[6] = '\0';
    local_c.ld12[7] = '\0';
    local_c.ld12[8] = '\0';
    local_c.ld12[9] = '\0';
    local_c.ld12._10_2_ = 0;
    local_28[0]._0_1_ = '\0';
    local_28[0]._1_1_ = '\0';
    local_28[1]._0_1_ = '\0';
    local_28[1]._1_1_ = '\0';
    local_40 = 4;
  }
  *(uint *)(pld12->ld12 + 2) = local_28._0_4_;
  *(ushort *)pld12->ld12 = local_c.ld12._0_2_;
  *(uint *)(pld12->ld12 + 6) = local_c.ld12._6_4_;
  *(ushort *)(pld12->ld12 + 10) = local_52 | local_c.ld12._10_2_;
  return local_40;
}
