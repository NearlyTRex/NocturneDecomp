// Name: crt_stdlib.c_wcstoxl_FUN_1000fc30
// Address: 1000fc30
// Address Range: [[1000fc30, 1000fe35]]
// Convention: __cdecl
// Signature: ulong __cdecl crt_stdlib_c_wcstoxl_FUN_1000fc30(wchar_t *nptr,wchar_t **endptr,int base,int flags)

#include "nocturne.h"

ulong __cdecl wcstoxl(wchar_t *nptr,wchar_t **endptr,int base,int flags)

{
  wchar_t *pwVar1;
  wint_t wVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  wchar_t *pwVar8;
  uint uVar9;
  wchar_t c;
  
  uVar7 = 0;
  c = *nptr;
  iVar3 = iswctype(c,8);
  pwVar1 = nptr;
  while (pwVar8 = pwVar1 + 1, iVar3 != 0) {
    c = *pwVar8;
    iVar3 = iswctype(c,8);
    pwVar1 = pwVar8;
  }
  if (c == L'-') {
    c = *pwVar8;
    flags = flags | 2;
    pwVar8 = pwVar1 + 2;
  }
  else if (c == L'+') {
    c = *pwVar8;
    pwVar8 = pwVar1 + 2;
  }
  if (((base < 0) || (base == 1)) || (0x24 < base)) {
    if (endptr != (wchar_t **)0x0) {
      *endptr = nptr;
    }
    return 0;
  }
  if (base == 0) {
    if (c == L'0') {
      if ((*pwVar8 == L'x') || (*pwVar8 == L'X')) {
        base = 0x10;
      }
      else {
        base = 8;
      }
    }
    else {
      base = 10;
    }
  }
  if (((base == 0x10) && (c == L'0')) && ((*pwVar8 == L'x' || (*pwVar8 == L'X')))) {
    c = pwVar8[1];
    pwVar8 = pwVar8 + 2;
  }
  uVar4 = (uint)(0xffffffff / (ulonglong)(uint)base);
  do {
    iVar3 = iswctype(c,4);
    if (iVar3 == 0) {
      iVar3 = iswctype(c,0x103);
      if (iVar3 == 0) {
LAB_1000fd8c:
        pwVar8 = pwVar8 + -1;
        if ((flags & 8U) == 0) {
          if (endptr != (wchar_t **)0x0) {
            pwVar8 = nptr;
          }
          uVar7 = 0;
        }
        else if (((flags & 4U) != 0) ||
                (((flags & 1U) == 0 &&
                 ((((flags & 2U) != 0 && (0x80000000 < uVar7)) ||
                  (((flags & 2U) == 0 && (0x7fffffff < uVar7)))))))) {
          piVar5 = _errno();
          *piVar5 = 0x22;
          if ((flags & 1U) == 0) {
            if ((flags & 2U) == 0) {
              uVar7 = 0x7fffffff;
            }
            else {
              uVar7 = 0x80000000;
            }
          }
          else {
            uVar7 = 0xffffffff;
          }
        }
        if (endptr != (wchar_t **)0x0) {
          *endptr = pwVar8;
        }
        if ((flags & 2U) != 0) {
          uVar7 = -uVar7;
        }
        return uVar7;
      }
      wVar2 = towupper(c);
      uVar6 = wVar2 - 0x37;
    }
    else {
      uVar6 = (ushort)c - 0x30;
    }
    if ((uint)base <= uVar6) goto LAB_1000fd8c;
    uVar9 = flags | 8;
    if ((uVar7 < uVar4) ||
       ((uVar4 == uVar7 && (uVar6 <= (uint)(0xffffffff % (ulonglong)(uint)base))))) {
      uVar7 = uVar7 * base + uVar6;
    }
    else {
      uVar9 = flags | 0xc;
    }
    c = *pwVar8;
    pwVar8 = pwVar8 + 1;
    flags = uVar9;
  } while( true );
}
