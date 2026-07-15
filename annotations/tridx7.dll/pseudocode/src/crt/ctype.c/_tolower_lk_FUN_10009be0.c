// Name: crt_ctype.c__tolower_lk_FUN_10009be0
// Address: 10009be0
// Address Range: [[10009be0, 10009cc4]]
// Convention: __cdecl
// Signature: uint __cdecl crt_ctype_c__tolower_lk_FUN_10009be0(uint c)

#include "nocturne.h"

uint __cdecl _tolower_lk(uint c)

{
  uint uVar1;
  int iVar2;
  WCHAR local_8 [2];
  byte local_4;
  byte local_3;
  byte local_2;
  
  if (DAT_10017760 == 0) {
    if ((0x40 < (int)c) && ((int)c < 0x5b)) {
      c = c + 0x20;
    }
    return c;
  }
  if ((int)c < 0x100) {
    if (DAT_10017690 < 2) {
      uVar1 = *(ushort *)(PTR_DAT_10017480 + c * 2) & 1;
    }
    else {
      uVar1 = _isctype(c,1);
    }
    if (uVar1 == 0) {
      return c;
    }
  }
  local_4 = (byte)(c >> 8);
  if ((PTR_DAT_10017480[(uint)local_4 * 2 + 1] & 0x80) == 0) {
    iVar2 = 1;
    local_3 = 0;
    local_4 = (byte)c;
  }
  else {
    iVar2 = 2;
    local_2 = 0;
    local_3 = (byte)c;
  }
  iVar2 = __crtLCMapStringA
                    (DAT_10017760,0x100,(LPCSTR)&local_4,iVar2,local_8,3,0);
  if (iVar2 == 0) {
    return c;
  }
  if (iVar2 == 1) {
    return (uint)(byte)local_8[0];
  }
  return (uint)(ushort)local_8[0];
}
