// Name: crt_ctype.c_iswctype_FUN_10010870
// Address: 10010870
// Address Range: [[10010870, 100108e2]]
// Convention: __cdecl
// Signature: int __cdecl crt_ctype_c_iswctype_FUN_10010870(wint_t c,wctype_t mask)

#include "nocturne.h"

int __cdecl iswctype(wint_t c,wctype_t mask)

{
  BOOL BVar1;
  ushort in_stack_00000006;
  ushort local_2;
  
  if (c == 0xffff) {
    return 0;
  }
  if (c < 0x100) {
    local_2 = *(ushort *)(PTR_DAT_10017484 + (uint)c * 2);
LAB_100108cc:
    return (uint)(local_2 & mask);
  }
  if (DAT_10017760 != 0) {
    BVar1 = __crtGetStringTypeW(1,(LPCWSTR)&c,1,&local_2,0,0);
    if (BVar1 != 0) goto LAB_100108cc;
  }
  return 0;
}
