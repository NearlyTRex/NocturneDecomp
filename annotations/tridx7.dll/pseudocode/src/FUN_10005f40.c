// Name: FUN_10005f40
// Address: 10005f40
// Address Range: [[10005f40, 1000680e]]
// Convention: unknown
// Signature: int FUN_10005f40(undefined4 param_1,byte *param_2,undefined4 *param_3)

#include "nocturne.h"

int FUN_10005f40(uint param_1,byte *param_2,uint *param_3)

{
  char cVar1;
  ulonglong uVar2;
  byte *pbVar3;
  byte uVar4;
  wchar_t wVar5;
  short sVar6;
  uint uVar7;
  wchar_t *pwVar8;
  int iVar9;
  short *psVar10;
  int *piVar11;
  int iVar12;
  byte bVar13;
  wchar_t *pwVar14;
  byte *puVar15;
  byte *puVar16;
  byte *puVar17;
  char *pcVar18;
  uint uVar19;
  byte bVar20;
  ulonglong uVar21;
  longlong lVar22;
  char local_248 [2];
  byte local_246;
  char local_245;
  char local_244 [4];
  wchar_t *local_240;
  int local_23c;
  ulonglong local_238;
  int local_230;
  ulonglong local_22c;
  int local_224;
  int local_220;
  int local_21c;
  int local_218;
  int local_214;
  int local_210;
  uint local_20c;
  uint local_208;
  uint local_204;
  uint local_200;
  byte uStack_1;
  
  uVar21 = CONCAT44(local_238._4_4_,(int)local_238);
  bVar20 = 0;
  local_230 = 0;
  bVar13 = *param_2;
  local_218 = 0;
  pbVar3 = param_2;
  puVar16 = local_200;
  puVar17 = local_200;
  do {
    if ((bVar13 == 0) || (param_2 = pbVar3 + 1, local_230 < 0)) {
      return local_230;
    }
    if (((char)bVar13 < ' ') || ('x' < (char)bVar13)) {
      uVar7 = 0;
    }
    else {
      uVar7 = (byte)"kernel32.dll"[(char)bVar13 + 8] & 0xf;
    }
    local_218 = (int)((char)(&DAT_10012320)[uVar7 * 8 + local_218] >> 4);
    local_238 = uVar21;
    switch(local_218) {
    case 0:
switchD_10005fc1_caseD_0:
      local_21c = 0;
      if ((PTR_DAT_10017480[(uint)bVar13 * 2 + 1] & 0x80) != 0) {
        write_char((int)(char)bVar13,param_1,&local_230);
        bVar13 = *param_2;
        param_2 = pbVar3 + 2;
      }
      write_char((int)(char)bVar13,param_1,&local_230);
      uVar21 = local_238;
      break;
    case 1:
      local_20c = 0;
      local_210 = 0;
      local_224 = 0;
      local_220 = 0;
      local_23c = -1;
      puVar16 = (byte *)0x0;
      local_21c = 0;
      break;
    case 2:
      switch(bVar13) {
      case 0x20:
        puVar16 = (byte *)((uint)puVar16 | 2);
        break;
      case 0x23:
        puVar16 = (byte *)((uint)puVar16 | 0x80);
        break;
      case 0x2b:
        puVar16 = (byte *)((uint)puVar16 | 1);
        break;
      case 0x2d:
        puVar16 = (byte *)((uint)puVar16 | 4);
        break;
      case 0x30:
        puVar16 = (byte *)((uint)puVar16 | 8);
      }
      break;
    case 3:
      if (bVar13 == 0x2a) {
        local_224 = FUN_100069f0(&param_3);
        uVar21 = local_238;
        if (local_224 < 0) {
          local_224 = -local_224;
          puVar16 = (byte *)((uint)puVar16 | 4);
        }
      }
      else {
        local_224 = (char)bVar13 + -0x30 + local_224 * 10;
      }
      break;
    case 4:
      local_23c = 0;
      break;
    case 5:
      if (bVar13 == 0x2a) {
        local_23c = FUN_100069f0(&param_3);
        uVar21 = local_238;
        if (local_23c < 0) {
          local_23c = -1;
        }
      }
      else {
        local_23c = (char)bVar13 + -0x30 + local_23c * 10;
      }
      break;
    case 6:
      switch(bVar13) {
      case 0x49:
        if ((*param_2 != 0x36) || (pbVar3[2] != 0x34)) {
          local_218 = 0;
          goto switchD_10005fc1_caseD_0;
        }
        param_2 = pbVar3 + 3;
        puVar16 = (byte *)((uint)puVar16 | 0x8000);
        break;
      case 0x68:
        puVar16 = (byte *)((uint)puVar16 | 0x20);
        break;
      case 0x6c:
        puVar16 = (byte *)((uint)puVar16 | 0x10);
        break;
      case 0x77:
        puVar16 = (byte *)((uint)puVar16 | 0x800);
      }
      break;
    case 7:
      pwVar14 = local_240;
      switch(bVar13) {
      case 0x43:
        if (((uint)puVar16 & 0x830) == 0) {
          puVar16 = (byte *)((uint)puVar16 | 0x800);
        }
      case 99:
        if (((uint)puVar16 & 0x810) == 0) {
          puVar17 = (byte *)0x1;
          uVar4 = FUN_100069f0(&param_3);
          local_200 = (byte *)CONCAT31(local_200._1_3_,uVar4);
        }
        else {
          wVar5 = FUN_10006a20();
          puVar17 = (byte *)_wctomb((char *)&local_200,wVar5);
          if ((int)puVar17 < 0) {
            local_210 = 1;
          }
        }
        pwVar14 = (wchar_t *)&local_200;
        uVar21 = local_238;
        break;
      case 0x45:
      case 0x47:
        local_20c = 1;
        bVar13 = bVar13 + 0x20;
      case 0x65:
      case 0x66:
      case 0x67:
        puVar15 = (byte *)((uint)puVar16 | 0x40);
        local_240 = (wchar_t *)&local_200;
        if (local_23c < 0) {
          local_23c = 6;
        }
        else if ((local_23c == 0) && (bVar13 == 0x67)) {
          local_23c = 1;
        }
        local_208 = *param_3;
        local_204 = param_3[1];
        param_3 = param_3 + 2;
        (*(code *)PTR___fptrap_10016d48)
                  (&local_208,&local_200,(int)(char)bVar13,local_23c,local_20c);
        if ((((uint)puVar16 & 0x80) != 0) && (local_23c == 0)) {
          (*(code *)PTR___fptrap_10016d54)(&local_200);
        }
        if ((bVar13 == 0x67) && (((uint)puVar16 & 0x80) == 0)) {
          (*(code *)PTR___fptrap_10016d4c)(&local_200);
        }
        if ((char)local_200 == '-') {
          puVar15 = (byte *)((uint)puVar16 | 0x140);
          local_240 = (wchar_t *)((int)&local_200 + 1);
        }
        uVar7 = 0xffffffff;
        pwVar14 = local_240;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          wVar5 = *pwVar14;
          pwVar14 = (wchar_t *)((int)pwVar14 + (uint)bVar20 * -2 + 1);
        } while ((char)wVar5 != '\0');
        puVar17 = (byte *)(~uVar7 - 1);
        puVar16 = puVar15;
        pwVar14 = local_240;
        uVar21 = local_238;
        break;
      case 0x53:
        if (((uint)puVar16 & 0x830) == 0) {
          puVar16 = (byte *)((uint)puVar16 | 0x800);
        }
      case 0x73:
        iVar12 = 0x7fffffff;
        if (local_23c != -1) {
          iVar12 = local_23c;
        }
        local_240 = (wchar_t *)FUN_100069f0(&param_3);
        uVar21 = local_238;
        if (((uint)puVar16 & 0x810) == 0) {
          pwVar14 = local_240;
          if (local_240 == (wchar_t *)0x0) {
            local_240 = (wchar_t *)PTR_DAT_10016d40;
            pwVar14 = (wchar_t *)PTR_DAT_10016d40;
          }
          for (; (iVar12 != 0 && (iVar12 = iVar12 + -1, (char)*pwVar14 != '\0'));
              pwVar14 = (wchar_t *)((int)pwVar14 + 1)) {
          }
          puVar17 = (byte *)((int)pwVar14 - (int)local_240);
          pwVar14 = local_240;
        }
        else {
          pwVar8 = local_240;
          if (local_240 == (wchar_t *)0x0) {
            pwVar8 = (wchar_t *)PTR_DAT_10016d44;
          }
          puVar17 = (byte *)0x0;
          local_21c = 1;
          pwVar14 = pwVar8;
          local_240 = pwVar8;
          if (0 < iVar12) {
            do {
              pwVar14 = local_240;
              uVar21 = local_238;
              if (*pwVar8 == L'\0') break;
              iVar9 = _wctomb(local_248,*pwVar8);
              pwVar14 = local_240;
              uVar21 = local_238;
              if (iVar9 == 0) break;
              puVar17 = puVar17 + iVar9;
              pwVar8 = pwVar8 + 1;
            } while ((int)puVar17 < iVar12);
          }
        }
        break;
      case 0x5a:
        psVar10 = (short *)FUN_100069f0(&param_3);
        uVar21 = local_238;
        if ((psVar10 == (short *)0x0) ||
           (pwVar14 = *(wchar_t **)(psVar10 + 2), pwVar14 == (wchar_t *)0x0)) {
          uVar7 = 0xffffffff;
          local_240 = (wchar_t *)PTR_DAT_10016d40;
          pcVar18 = PTR_DAT_10016d40;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            cVar1 = *pcVar18;
            pcVar18 = pcVar18 + (uint)bVar20 * -2 + 1;
          } while (cVar1 != '\0');
          puVar17 = (byte *)(~uVar7 - 1);
          pwVar14 = local_240;
        }
        else if (((uint)puVar16 & 0x800) == 0) {
          local_21c = 0;
          puVar17 = (byte *)(int)*psVar10;
        }
        else {
          local_21c = 1;
          puVar17 = (byte *)((uint)(int)*psVar10 >> 1);
        }
        break;
      case 100:
      case 0x69:
        puVar16 = (byte *)((uint)puVar16 | 0x40);
        uVar19 = 10;
        goto LAB_100063d4;
      case 0x6e:
        piVar11 = (int *)FUN_100069f0(&param_3);
        if (((uint)puVar16 & 0x20) == 0) {
          *piVar11 = local_230;
        }
        else {
          *(short *)piVar11 = (short)local_230;
        }
        local_210 = 1;
        pwVar14 = local_240;
        uVar21 = local_238;
        break;
      case 0x6f:
        uVar19 = 8;
        if (((uint)puVar16 & 0x80) != 0) {
          puVar16 = (byte *)((uint)puVar16 | 0x200);
        }
        goto LAB_100063d4;
      case 0x70:
        local_23c = 8;
      case 0x58:
        local_214 = 7;
        goto LAB_100063b0;
      case 0x75:
        uVar19 = 10;
        goto LAB_100063d4;
      case 0x78:
        local_214 = 0x27;
LAB_100063b0:
        uVar19 = 0x10;
        if (((uint)puVar16 & 0x80) != 0) {
          local_246 = 0x30;
          local_220 = 2;
          local_245 = (char)local_214 + 'Q';
        }
LAB_100063d4:
        if (((uint)puVar16 & 0x8000) == 0) {
          if (((uint)puVar16 & 0x20) == 0) {
            if (((uint)puVar16 & 0x40) == 0) {
              uVar7 = FUN_100069f0(&param_3);
              goto LAB_10006470;
            }
            iVar12 = FUN_100069f0(&param_3);
            uVar21 = (ulonglong)iVar12;
          }
          else if (((uint)puVar16 & 0x40) == 0) {
            uVar7 = FUN_100069f0(&param_3);
            uVar7 = uVar7 & 0xffff;
LAB_10006470:
            uVar21 = (ulonglong)uVar7;
          }
          else {
            sVar6 = FUN_100069f0(&param_3);
            uVar21 = (ulonglong)(int)sVar6;
          }
        }
        else {
          uVar21 = FUN_10006a00(&param_3);
        }
        local_238._4_4_ = (int)(uVar21 >> 0x20);
        local_238._0_4_ = (int)uVar21;
        uVar2 = uVar21;
        if (((((uint)puVar16 & 0x40) != 0) && ((longlong)uVar21 < 0x100000000)) &&
           ((longlong)uVar21 < 0)) {
          puVar16 = (byte *)((uint)puVar16 | 0x100);
          uVar2 = CONCAT44(-(local_238._4_4_ + (uint)((int)local_238 != 0)),-(int)local_238);
        }
        local_22c._4_4_ = (int)(uVar2 >> 0x20);
        local_22c._0_4_ = (int)uVar2;
        if (((uint)puVar16 & 0x8000) == 0) {
          local_22c._4_4_ = 0;
        }
        if (local_23c < 0) {
          local_23c = 1;
        }
        else {
          puVar16 = (byte *)((uint)puVar16 & 0xfffffff7);
        }
        pwVar14 = (wchar_t *)register0x00000010;
        local_22c = CONCAT44(local_22c._4_4_,(int)local_22c);
        if ((local_22c._4_4_ == 0) &&
           (local_22c = CONCAT44(local_22c._4_4_,(int)local_22c), (int)local_22c == 0)) {
          local_220 = 0;
          local_22c = CONCAT44(local_22c._4_4_,(int)local_22c);
        }
        while( true ) {
          local_240 = (wchar_t *)((int)pwVar14 + -1);
          iVar12 = local_23c + -1;
          if ((local_23c < 1) && (local_22c == 0)) break;
          local_238._4_4_ = 0;
          local_23c = iVar12;
          local_238._0_4_ = uVar19;
          iVar12 = __aullrem(local_22c,uVar19,0);
          iVar12 = iVar12 + 0x30;
          lVar22 = __aulldiv(local_22c,(int)local_238,local_238._4_4_);
          uVar21 = CONCAT44(local_238._4_4_,(int)local_238);
          if (0x39 < iVar12) {
            iVar12 = iVar12 + local_214;
          }
          *(char *)local_240 = (char)iVar12;
          pwVar14 = local_240;
          local_22c = lVar22;
        }
        puVar17 = &uStack_1 + -(int)local_240;
        local_22c = 0;
        local_23c = iVar12;
        if ((((uint)puVar16 & 0x200) != 0) &&
           (((char)*pwVar14 != '0' || (puVar17 == (byte *)0x0)))) {
          puVar17 = &stack0x00000000 + -(int)local_240;
          *(char *)local_240 = '0';
          pwVar14 = local_240;
        }
      }
      local_240 = pwVar14;
      local_238._4_4_ = (int)(uVar21 >> 0x20);
      if (local_210 == 0) {
        if (((uint)puVar16 & 0x40) != 0) {
          if (((uint)puVar16 & 0x100) == 0) {
            if (((uint)puVar16 & 1) == 0) {
              if (((uint)puVar16 & 2) == 0) goto LAB_100066fa;
              local_246 = 0x20;
            }
            else {
              local_246 = 0x2b;
            }
          }
          else {
            local_246 = 0x2d;
          }
          local_220 = 1;
        }
LAB_100066fa:
        local_238._0_4_ = (local_224 - (int)puVar17) - local_220;
        if (((uint)puVar16 & 0xc) == 0) {
          write_multi_char(0x20,(int)local_238,param_1,&local_230);
        }
        write_string(&local_246,local_220,param_1,&local_230);
        if ((((uint)puVar16 & 8) != 0) && (((uint)puVar16 & 4) == 0)) {
          write_multi_char(0x30,(int)local_238,param_1,&local_230);
        }
        if ((local_21c == 0) || (pwVar14 = local_240, puVar15 = puVar17, (int)puVar17 < 1)) {
          write_string(local_240,puVar17,param_1,&local_230);
        }
        else {
          do {
            puVar15 = puVar15 + -1;
            iVar12 = _wctomb(local_244,*pwVar14);
            if (iVar12 < 1) break;
            write_string(local_244,iVar12,param_1,&local_230);
            pwVar14 = pwVar14 + 1;
          } while (puVar15 != (byte *)0x0);
        }
        uVar21 = CONCAT44(local_238._4_4_,(int)local_238);
        if (((uint)puVar16 & 4) != 0) {
          write_multi_char(0x20,(int)local_238,param_1,&local_230);
          uVar21 = CONCAT44(local_238._4_4_,(int)local_238);
        }
      }
    }
    bVar13 = *param_2;
    pbVar3 = param_2;
  } while( true );
}
