// Name: ___strgtold12
// Address: 1000c7b0
// Address Range: [[1000c7b0, 1000cdd9]]
// Convention: __cdecl
// Signature: uint __cdecl ___strgtold12(_LDBL12 *pld12,char **p_end_ptr,char *str,int mult12,int scale,int decpt,int implicit_E)

#include "nocturne.h"

/* Library Function - Single Match
uint __cdecl ___strgtold12(_LDBL12 *pld12,char **p_end_ptr,char *str,int mult12,int scale,int decpt,int implicit_E)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  char *pcVar10;
  char *pcVar11;
  byte *pbVar12;
  int iVar13;
  ushort local_52;
  uint local_50;
  byte *local_4c;
  int local_48;
  uint local_40;
  int local_3c;
  uint local_28 [5];
  char local_11;
  ushort local_c;
  uint local_a;
  uint local_6;
  ushort local_2;
  
  local_3c = 1;
  pcVar11 = (char *)local_28;
  iVar13 = 0;
  local_52 = 0;
  local_50 = 0;
  bVar2 = false;
  bVar4 = false;
  bVar3 = false;
  bVar5 = false;
  iVar8 = 0;
  bVar6 = false;
  local_48 = 0;
  local_40 = 0;
  local_4c = (byte *)str;
  for (; (((bVar9 = *str, bVar9 == 0x20 || (bVar9 == 9)) || (bVar9 == 10)) || (bVar9 == 0xd));
      str = str + 1) {
  }
  do {
    bVar9 = *str;
    pbVar12 = (byte *)(str + 1);
    switch(iVar8) {
    case 0:
      if (((char)bVar9 < '1') || ('9' < (char)bVar9)) {
        if (DAT_10017694 == bVar9) {
          iVar8 = 5;
        }
        else if (bVar9 == 0x2b) {
          local_52 = 0;
          iVar8 = 2;
        }
        else if (bVar9 == 0x2d) {
          local_52 = 0x8000;
          iVar8 = 2;
        }
        else {
          if (bVar9 != 0x30) goto switchD_1000ca60_caseD_2c;
          iVar8 = 1;
        }
        break;
      }
      iVar8 = 3;
      goto LAB_1000cc64;
    case 1:
      bVar2 = true;
      if (('0' < (char)bVar9) && ((char)bVar9 < ':')) {
        iVar8 = 3;
        goto LAB_1000cc64;
      }
      if (DAT_10017694 == bVar9) {
        iVar8 = 4;
      }
      else {
        switch(bVar9) {
        case 0x2b:
        case 0x2d:
          iVar8 = 0xb;
          pbVar12 = (byte *)str;
          break;
        default:
          goto switchD_1000ca60_caseD_2c;
        case 0x30:
          iVar8 = 1;
          break;
        case 0x44:
        case 0x45:
        case 100:
        case 0x65:
          iVar8 = 6;
        }
      }
      break;
    case 2:
      if (('0' < (char)bVar9) && ((char)bVar9 < ':')) {
        iVar8 = 3;
        goto LAB_1000cc64;
      }
      if (DAT_10017694 == bVar9) {
        iVar8 = 5;
      }
      else if (bVar9 == 0x30) {
        iVar8 = 1;
      }
      else {
        iVar8 = 10;
        pbVar12 = local_4c;
      }
      break;
    case 3:
      bVar2 = true;
      while( true ) {
        if (DAT_10017690 < 2) {
          uVar7 = *(ushort *)(PTR_DAT_10017480 + (uint)bVar9 * 2) & 4;
        }
        else {
          uVar7 = __isctype((uint)bVar9,4);
        }
        if (uVar7 == 0) break;
        if (local_50 < 0x19) {
          local_50 = local_50 + 1;
          *pcVar11 = bVar9 - 0x30;
          bVar9 = *pbVar12;
          pcVar11 = pcVar11 + 1;
          pbVar12 = pbVar12 + 1;
        }
        else {
          bVar9 = *pbVar12;
          pbVar12 = pbVar12 + 1;
          local_48 = local_48 + 1;
        }
      }
      if (DAT_10017694 == bVar9) {
        iVar8 = 4;
      }
      else {
        switch(bVar9) {
        case 0x2b:
        case 0x2d:
          iVar8 = 0xb;
          pbVar12 = pbVar12 + -1;
          break;
        default:
          goto switchD_1000ca60_caseD_2c;
        case 0x44:
        case 0x45:
        case 100:
        case 0x65:
          iVar8 = 6;
        }
      }
      break;
    case 4:
      bVar2 = true;
      bVar4 = true;
      if (local_50 == 0) {
        while (bVar9 == 0x30) {
          local_48 = local_48 + -1;
          bVar9 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        }
      }
      while( true ) {
        if (DAT_10017690 < 2) {
          uVar7 = *(ushort *)(PTR_DAT_10017480 + (uint)bVar9 * 2) & 4;
        }
        else {
          uVar7 = __isctype((uint)bVar9,4);
        }
        if (uVar7 == 0) break;
        pcVar10 = pcVar11;
        if (local_50 < 0x19) {
          pcVar10 = pcVar11 + 1;
          local_50 = local_50 + 1;
          local_48 = local_48 + -1;
          *pcVar11 = bVar9 - 0x30;
        }
        bVar9 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        pcVar11 = pcVar10;
      }
      switch(bVar9) {
      case 0x2b:
      case 0x2d:
        iVar8 = 0xb;
        pbVar12 = pbVar12 + -1;
        break;
      default:
        goto switchD_1000ca60_caseD_2c;
      case 0x44:
      case 0x45:
      case 100:
      case 0x65:
        iVar8 = 6;
      }
      break;
    case 5:
      bVar4 = true;
      if (DAT_10017690 < 2) {
        uVar7 = *(ushort *)(PTR_DAT_10017480 + (uint)bVar9 * 2) & 4;
      }
      else {
        uVar7 = __isctype((uint)bVar9,4);
      }
      if (uVar7 != 0) {
        iVar8 = 4;
        goto LAB_1000cc64;
      }
      iVar8 = 10;
      pbVar12 = local_4c;
      break;
    case 6:
      local_4c = (byte *)(str + -1);
      if (('0' < (char)bVar9) && ((char)bVar9 < ':')) {
        iVar8 = 9;
        goto LAB_1000cc64;
      }
      if (bVar9 == 0x2b) {
        iVar8 = 7;
      }
      else if (bVar9 == 0x2d) {
        local_3c = -1;
        iVar8 = 7;
      }
      else if (bVar9 == 0x30) {
        iVar8 = 8;
      }
      else {
        iVar8 = 10;
        pbVar12 = local_4c;
      }
      break;
    case 7:
      if (('0' < (char)bVar9) && ((char)bVar9 < ':')) {
        iVar8 = 9;
        goto LAB_1000cc64;
      }
      if (bVar9 == 0x30) {
        iVar8 = 8;
      }
      else {
        iVar8 = 10;
        pbVar12 = local_4c;
      }
      break;
    case 8:
      bVar3 = true;
      while (bVar9 == 0x30) {
        bVar9 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      }
      if (('0' < (char)bVar9) && ((char)bVar9 < ':')) {
        iVar8 = 9;
        goto LAB_1000cc64;
      }
      goto switchD_1000ca60_caseD_2c;
    case 9:
      bVar3 = true;
      iVar13 = 0;
      while( true ) {
        if (DAT_10017690 < 2) {
          uVar7 = *(ushort *)(PTR_DAT_10017480 + (uint)bVar9 * 2) & 4;
        }
        else {
          uVar7 = __isctype((uint)bVar9,4);
        }
        if (uVar7 == 0) goto LAB_1000cbea;
        iVar13 = (char)bVar9 + -0x30 + iVar13 * 10;
        if (0x1450 < iVar13) break;
        bVar9 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      }
      iVar13 = 0x1451;
LAB_1000cbea:
      while( true ) {
        if (DAT_10017690 < 2) {
          uVar7 = *(ushort *)(PTR_DAT_10017480 + (uint)bVar9 * 2) & 4;
        }
        else {
          uVar7 = __isctype((uint)bVar9,4);
        }
        if (uVar7 == 0) break;
        bVar9 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      }
switchD_1000ca60_caseD_2c:
      iVar8 = 10;
LAB_1000cc64:
      pbVar12 = pbVar12 + -1;
      break;
    case 0xb:
      if (implicit_E == 0) goto switchD_1000ca60_caseD_2c;
      local_4c = (byte *)str;
      if (bVar9 == 0x2b) {
        iVar8 = 7;
      }
      else if (bVar9 == 0x2d) {
        local_3c = -1;
        iVar8 = 7;
      }
      else {
        iVar8 = 10;
        pbVar12 = (byte *)str;
      }
    }
    str = (char *)pbVar12;
  } while (iVar8 != 10);
  *p_end_ptr = (char *)pbVar12;
  if (bVar2) {
    if (0x18 < local_50) {
      if ('\x04' < local_11) {
        local_11 = local_11 + '\x01';
      }
      pcVar11 = pcVar11 + -1;
      local_48 = local_48 + 1;
      local_50 = 0x18;
    }
    if (local_50 == 0) {
      local_c = 0;
      local_6 = 0;
      local_2 = 0;
      local_28[0] = 0;
      goto LAB_1000cd62;
    }
    pcVar11 = pcVar11 + -1;
    cVar1 = *pcVar11;
    while (cVar1 == '\0') {
      pcVar11 = pcVar11 + -1;
      local_50 = local_50 - 1;
      local_48 = local_48 + 1;
      cVar1 = *pcVar11;
    }
    ___mtold12(local_28,local_50,&local_c);
    if (local_3c < 0) {
      iVar13 = -iVar13;
    }
    iVar13 = iVar13 + local_48;
    if (!bVar3) {
      iVar13 = iVar13 + scale;
    }
    if (!bVar4) {
      iVar13 = iVar13 - decpt;
    }
    if (iVar13 < 0x1451) {
      if (-0x1451 < iVar13) {
        ___multtenpow12(&local_c,iVar13,mult12);
        local_28[0] = local_a;
        goto LAB_1000cd62;
      }
      bVar6 = true;
    }
    else {
      bVar5 = true;
    }
  }
  local_6 = local_28[0];
  local_c = (ushort)local_28[0];
  local_2 = (ushort)local_28[0];
LAB_1000cd62:
  if (bVar2) {
    if (bVar5) {
      local_2 = 0x7fff;
      local_6 = 0x80000000;
      local_c = 0;
      local_28[0] = 0;
      local_40 = 2;
    }
    else if (bVar6) {
      local_c = 0;
      local_6 = 0;
      local_2 = 0;
      local_28[0] = 0;
      local_40 = 1;
    }
  }
  else {
    local_c = 0;
    local_6 = 0;
    local_2 = 0;
    local_28[0] = 0;
    local_40 = 4;
  }
  *(uint *)(pld12->ld12 + 2) = local_28[0];
  *(ushort *)pld12->ld12 = local_c;
  *(uint *)(pld12->ld12 + 6) = local_6;
  *(ushort *)(pld12->ld12 + 10) = local_52 | local_2;
  return local_40;
}
