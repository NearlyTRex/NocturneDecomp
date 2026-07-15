// Name: crt_ctype.c__towupper_FUN_100107d0
// Address: 100107d0
// Address Range: [[100107d0, 1001086b]]
// Convention: __cdecl
// Signature: wint_t __cdecl crt_ctype_c__towupper_FUN_100107d0(wint_t c)

#include "nocturne.h"

wint_t __cdecl _towupper(wint_t c)

{
  int iVar1;
  ushort in_stack_00000006;
  BOOL in_stack_fffffffc;
  
  if (c == 0xffff) {
    return 0xffff;
  }
  if (DAT_10017760 == 0) {
    if ((0x60 < c) && (c < 0x7b)) {
      _c = (uint)(ushort)(c - 0x20);
    }
    return c;
  }
  if (c < 0x100) {
    iVar1 = iswctype(c,2);
    if (iVar1 == 0) {
      return c;
    }
  }
  iVar1 = __crtLCMapStringA_v2
                    (DAT_10017760,0x200,(LPCSTR)&c,1,&stack0xfffffffe,1,0,in_stack_fffffffc);
  if (iVar1 == 0) {
    return c;
  }
  return (wint_t)((uint)in_stack_fffffffc >> 0x10);
}
