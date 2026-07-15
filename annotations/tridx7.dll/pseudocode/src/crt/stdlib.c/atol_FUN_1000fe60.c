// Name: crt_stdlib.c_atol_FUN_1000fe60
// Address: 1000fe60
// Address Range: [[1000fe60, 1000ff03]]
// Convention: __cdecl
// Signature: long __cdecl crt_stdlib_c_atol_FUN_1000fe60(char *str)

#include "nocturne.h"

long __cdecl atol(char *str)

{
  uint uVar1;
  uint uVar2;
  uint c;
  int iVar3;
  byte *pbVar4;
  
  while( true ) {
    if (DAT_10017690 < 2) {
      uVar1 = *(ushort *)(PTR_DAT_10017480 + (uint)(byte)*str * 2) & 8;
    }
    else {
      uVar1 = _isctype((uint)(byte)*str,8);
    }
    if (uVar1 == 0) break;
    str = str + 1;
  }
  uVar1 = (uint)(byte)*str;
  pbVar4 = (byte *)(str + 1);
  if ((uVar1 == 0x2d) || (c = uVar1, uVar1 == 0x2b)) {
    c = (uint)*pbVar4;
    pbVar4 = (byte *)(str + 2);
  }
  iVar3 = 0;
  while( true ) {
    if (DAT_10017690 < 2) {
      uVar2 = *(ushort *)(PTR_DAT_10017480 + c * 2) & 4;
    }
    else {
      uVar2 = _isctype(c,4);
    }
    if (uVar2 == 0) break;
    iVar3 = (c - 0x30) + iVar3 * 10;
    c = (uint)*pbVar4;
    pbVar4 = pbVar4 + 1;
  }
  if (uVar1 == 0x2d) {
    return -iVar3;
  }
  return iVar3;
}
