// Name: crt_stdio.c__output_FUN_10005f40
// Address: 10005f40
// Address Range: [[10005f40, 1000680e]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c__output_FUN_10005f40(_FILE *file_handle,char *fmt,va_list args)

#include "nocturne.h"

int __cdecl _output(_FILE *file_handle,char *fmt,va_list args)

{
  char cVar1;
  wchar_t wVar2;
  uint uVar3;
  wchar_t *pwVar4;
  int iVar5;
  short *psVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  byte bVar10;
  wchar_t *pwVar11;
  byte *puVar12;
  byte *puVar13;
  byte *len;
  char *pcVar14;
  byte bVar15;
  double dVar16;
  char local_248 [2];
  char local_246;
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
  
  bVar15 = 0;
  local_230 = 0;
  bVar10 = *fmt;
  local_218 = 0;
  pcVar14 = fmt;
  puVar13 = local_200;
  len = local_200;
  do {
    if ((bVar10 == 0) || (fmt = pcVar14 + 1, local_230 < 0)) {
      return local_230;
    }
    if (((char)bVar10 < ' ') || ('x' < (char)bVar10)) {
      uVar3 = 0;
    }
    else {
      uVar3 = (byte)"kernel32.dll"[(char)bVar10 + 8] & 0xf;
    }
    local_218 = (int)((char)(&DAT_10012320)[uVar3 * 8 + local_218] >> 4);
    switch(local_218) {
    case 0:
switchD_10005fc1_caseD_0:
      local_21c = 0;
      if ((PTR_DAT_10017480[(uint)bVar10 * 2 + 1] & 0x80) != 0) {
        write_char((int)(char)bVar10,file_handle,&local_230);
        bVar10 = *fmt;
        fmt = pcVar14 + 2;
      }
      write_char((int)(char)bVar10,file_handle,&local_230);
      break;
    case 1:
      local_20c = 0;
      local_210 = 0;
      local_224 = 0;
      local_220 = 0;
      local_23c = -1;
      puVar13 = (byte *)0x0;
      local_21c = 0;
      break;
    case 2:
      switch(bVar10) {
      case 0x20:
        puVar13 = (byte *)((uint)puVar13 | 2);
        break;
      case 0x23:
        puVar13 = (byte *)((uint)puVar13 | 0x80);
        break;
      case 0x2b:
        puVar13 = (byte *)((uint)puVar13 | 1);
        break;
      case 0x2d:
        puVar13 = (byte *)((uint)puVar13 | 4);
        break;
      case 0x30:
        puVar13 = (byte *)((uint)puVar13 | 8);
      }
      break;
    case 3:
      if (bVar10 == 0x2a) {
        local_224 = get_int_arg(&args);
        if (local_224 < 0) {
          local_224 = -local_224;
          puVar13 = (byte *)((uint)puVar13 | 4);
        }
      }
      else {
        local_224 = (char)bVar10 + -0x30 + local_224 * 10;
      }
      break;
    case 4:
      local_23c = 0;
      break;
    case 5:
      if (bVar10 == 0x2a) {
        local_23c = get_int_arg(&args);
        if (local_23c < 0) {
          local_23c = -1;
        }
      }
      else {
        local_23c = (char)bVar10 + -0x30 + local_23c * 10;
      }
      break;
    case 6:
      switch(bVar10) {
      case 0x49:
        if ((*fmt != '6') || (pcVar14[2] != '4')) {
          local_218 = 0;
          goto switchD_10005fc1_caseD_0;
        }
        fmt = pcVar14 + 3;
        puVar13 = (byte *)((uint)puVar13 | 0x8000);
        break;
      case 0x68:
        puVar13 = (byte *)((uint)puVar13 | 0x20);
        break;
      case 0x6c:
        puVar13 = (byte *)((uint)puVar13 | 0x10);
        break;
      case 0x77:
        puVar13 = (byte *)((uint)puVar13 | 0x800);
      }
      break;
    case 7:
      pwVar11 = local_240;
      switch(bVar10) {
      case 0x43:
        if (((uint)puVar13 & 0x830) == 0) {
          puVar13 = (byte *)((uint)puVar13 | 0x800);
        }
      case 99:
        if (((uint)puVar13 & 0x810) == 0) {
          len = (byte *)0x1;
          iVar9 = get_int_arg(&args);
          local_200 = (byte *)CONCAT31(local_200._1_3_,(char)iVar9);
        }
        else {
          wVar2 = get_short_arg(&args);
          len = (byte *)_wctomb((char *)&local_200,wVar2);
          if ((int)len < 0) {
            local_210 = 1;
          }
        }
        pwVar11 = (wchar_t *)&local_200;
        break;
      case 0x45:
      case 0x47:
        local_20c = 1;
        bVar10 = bVar10 + 0x20;
      case 0x65:
      case 0x66:
      case 0x67:
        puVar12 = (byte *)((uint)puVar13 | 0x40);
        local_240 = (wchar_t *)&local_200;
        if (local_23c < 0) {
          local_23c = 6;
        }
        else if ((local_23c == 0) && (bVar10 == 0x67)) {
          local_23c = 1;
        }
        local_208 = *(uint *)args;
        local_204 = *(uint *)(args + 4);
        args = args + 8;
        (*(code *)PTR_crt_fpu_c__fptrap_FUN_10009ab0_10016d48)
                  (&local_208,&local_200,(int)(char)bVar10,local_23c,local_20c);
        if ((((uint)puVar13 & 0x80) != 0) && (local_23c == 0)) {
          (*(code *)PTR_crt_fpu_c__fptrap_FUN_10009ab0_10016d54)(&local_200);
        }
        if ((bVar10 == 0x67) && (((uint)puVar13 & 0x80) == 0)) {
          (*(code *)PTR_crt_fpu_c__fptrap_FUN_10009ab0_10016d4c)(&local_200);
        }
        if ((char)local_200 == '-') {
          puVar12 = (byte *)((uint)puVar13 | 0x140);
          local_240 = (wchar_t *)((int)&local_200 + 1);
        }
        uVar3 = 0xffffffff;
        pwVar11 = local_240;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          wVar2 = *pwVar11;
          pwVar11 = (wchar_t *)((int)pwVar11 + (uint)bVar15 * -2 + 1);
        } while ((char)wVar2 != '\0');
        len = (byte *)(~uVar3 - 1);
        puVar13 = puVar12;
        pwVar11 = local_240;
        break;
      case 0x53:
        if (((uint)puVar13 & 0x830) == 0) {
          puVar13 = (byte *)((uint)puVar13 | 0x800);
        }
      case 0x73:
        iVar9 = 0x7fffffff;
        if (local_23c != -1) {
          iVar9 = local_23c;
        }
        local_240 = (wchar_t *)get_int_arg(&args);
        if (((uint)puVar13 & 0x810) == 0) {
          pwVar11 = local_240;
          if (local_240 == (wchar_t *)0x0) {
            local_240 = (wchar_t *)PTR_u_HAN__10016d40;
            pwVar11 = (wchar_t *)PTR_u_HAN__10016d40;
          }
          for (; (iVar9 != 0 && (iVar9 = iVar9 + -1, (char)*pwVar11 != '\0'));
              pwVar11 = (wchar_t *)((int)pwVar11 + 1)) {
          }
          len = (byte *)((int)pwVar11 - (int)local_240);
          pwVar11 = local_240;
        }
        else {
          pwVar4 = local_240;
          if (local_240 == (wchar_t *)0x0) {
            pwVar4 = (wchar_t *)PTR_u__null__10016d44;
          }
          len = (byte *)0x0;
          local_21c = 1;
          pwVar11 = pwVar4;
          local_240 = pwVar4;
          if (0 < iVar9) {
            do {
              pwVar11 = local_240;
              if ((*pwVar4 == L'\0') ||
                 (iVar5 = _wctomb(local_248,*pwVar4), pwVar11 = local_240,
                 iVar5 == 0)) break;
              len = len + iVar5;
              pwVar4 = pwVar4 + 1;
            } while ((int)len < iVar9);
          }
        }
        break;
      case 0x5a:
        psVar6 = (short *)get_int_arg(&args);
        if ((psVar6 == (short *)0x0) ||
           (pwVar11 = *(wchar_t **)(psVar6 + 2), pwVar11 == (wchar_t *)0x0)) {
          uVar3 = 0xffffffff;
          local_240 = (wchar_t *)PTR_u_HAN__10016d40;
          pcVar14 = PTR_u_HAN__10016d40;
          do {
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            cVar1 = *pcVar14;
            pcVar14 = pcVar14 + (uint)bVar15 * -2 + 1;
          } while (cVar1 != '\0');
          len = (byte *)(~uVar3 - 1);
          pwVar11 = local_240;
        }
        else if (((uint)puVar13 & 0x800) == 0) {
          local_21c = 0;
          len = (byte *)(int)*psVar6;
        }
        else {
          local_21c = 1;
          len = (byte *)((uint)(int)*psVar6 >> 1);
        }
        break;
      case 100:
      case 0x69:
        puVar13 = (byte *)((uint)puVar13 | 0x40);
        uVar3 = 10;
        goto LAB_100063d4;
      case 0x6e:
        piVar7 = (int *)get_int_arg(&args);
        if (((uint)puVar13 & 0x20) == 0) {
          *piVar7 = local_230;
        }
        else {
          *(short *)piVar7 = (short)local_230;
        }
        local_210 = 1;
        pwVar11 = local_240;
        break;
      case 0x6f:
        uVar3 = 8;
        if (((uint)puVar13 & 0x80) != 0) {
          puVar13 = (byte *)((uint)puVar13 | 0x200);
        }
        goto LAB_100063d4;
      case 0x70:
        local_23c = 8;
      case 0x58:
        local_214 = 7;
        goto LAB_100063b0;
      case 0x75:
        uVar3 = 10;
        goto LAB_100063d4;
      case 0x78:
        local_214 = 0x27;
LAB_100063b0:
        uVar3 = 0x10;
        if (((uint)puVar13 & 0x80) != 0) {
          local_246 = '0';
          local_220 = 2;
          local_245 = (char)local_214 + 'Q';
        }
LAB_100063d4:
        if (((uint)puVar13 & 0x8000) == 0) {
          if (((uint)puVar13 & 0x20) == 0) {
            if (((uint)puVar13 & 0x40) == 0) {
              uVar8 = get_int_arg(&args);
              goto LAB_10006470;
            }
            iVar9 = get_int_arg(&args);
            local_238 = (double)(longlong)iVar9;
          }
          else if (((uint)puVar13 & 0x40) == 0) {
            uVar8 = get_int_arg(&args);
            uVar8 = uVar8 & 0xffff;
LAB_10006470:
            local_238 = (double)(ulonglong)uVar8;
          }
          else {
            iVar9 = get_int_arg(&args);
            local_238 = (double)(longlong)(int)(short)iVar9;
          }
        }
        else {
          local_238 = (double)get_int64_arg(&args);
        }
        if (((((uint)puVar13 & 0x40) == 0) || (0 < (int)local_238._4_4_)) ||
           (-1 < (longlong)local_238)) {
          local_22c = local_238;
        }
        else {
          puVar13 = (byte *)((uint)puVar13 | 0x100);
          local_22c = __BITCAST_DOUBLE(CONCAT44(-(local_238._4_4_ + ((uint)local_238 != 0)),-(uint)local_238))
          ;
        }
        if (((uint)puVar13 & 0x8000) == 0) {
          local_22c = (double)((ulonglong)local_22c & 0xffffffff);
        }
        if (local_23c < 0) {
          local_23c = 1;
        }
        else {
          puVar13 = (byte *)((uint)puVar13 & 0xfffffff7);
        }
        pwVar11 = (wchar_t *)register0x00000010;
        if ((local_22c._4_4_ == 0) && ((uint)local_22c == 0)) {
          local_220 = 0;
        }
        while( true ) {
          local_240 = (wchar_t *)((int)pwVar11 + -1);
          iVar9 = local_23c + -1;
          if (((local_23c < 1) && (local_22c._4_4_ == 0)) && ((uint)local_22c == 0)) break;
          local_238 = (double)(ulonglong)uVar3;
          local_23c = iVar9;
          dVar16 = _aullrem((uint)local_22c,local_22c._4_4_,uVar3,0);
          iVar9 = SUB84(__BITCAST_UINT64(dVar16),0) + 0x30;
          local_22c = _aulldiv
                                ((uint)local_22c,local_22c._4_4_,(uint)local_238,local_238._4_4_);
          if (0x39 < iVar9) {
            iVar9 = iVar9 + local_214;
          }
          *(char *)local_240 = (char)iVar9;
          pwVar11 = local_240;
        }
        len = &uStack_1 + -(int)local_240;
        local_23c = iVar9;
        if ((((uint)puVar13 & 0x200) != 0) &&
           (((char)*pwVar11 != '0' || (len == (byte *)0x0)))) {
          len = &stack0x00000000 + -(int)local_240;
          *(char *)local_240 = '0';
          pwVar11 = local_240;
        }
      }
      local_240 = pwVar11;
      if (local_210 == 0) {
        if (((uint)puVar13 & 0x40) != 0) {
          if (((uint)puVar13 & 0x100) == 0) {
            if (((uint)puVar13 & 1) == 0) {
              if (((uint)puVar13 & 2) == 0) goto LAB_100066fa;
              local_246 = ' ';
            }
            else {
              local_246 = '+';
            }
          }
          else {
            local_246 = '-';
          }
          local_220 = 1;
        }
LAB_100066fa:
        iVar9 = (local_224 - (int)len) - local_220;
        local_238 = __BITCAST_DOUBLE(CONCAT44(local_238._4_4_,iVar9));
        if (((uint)puVar13 & 0xc) == 0) {
          write_multi_char(0x20,iVar9,file_handle,&local_230);
        }
        write_string(&local_246,local_220,file_handle,&local_230);
        if ((((uint)puVar13 & 8) != 0) && (((uint)puVar13 & 4) == 0)) {
          write_multi_char(0x30,(uint)local_238,file_handle,&local_230);
        }
        if ((local_21c == 0) || (pwVar11 = local_240, puVar12 = len, (int)len < 1)) {
          write_string((char *)local_240,(int)len,file_handle,&local_230);
        }
        else {
          do {
            puVar12 = puVar12 + -1;
            iVar9 = _wctomb(local_244,*pwVar11);
            if (iVar9 < 1) break;
            write_string(local_244,iVar9,file_handle,&local_230);
            pwVar11 = pwVar11 + 1;
          } while (puVar12 != (byte *)0x0);
        }
        if (((uint)puVar13 & 4) != 0) {
          write_multi_char(0x20,(uint)local_238,file_handle,&local_230);
        }
      }
    }
    bVar10 = *fmt;
    pcVar14 = fmt;
  } while( true );
}
