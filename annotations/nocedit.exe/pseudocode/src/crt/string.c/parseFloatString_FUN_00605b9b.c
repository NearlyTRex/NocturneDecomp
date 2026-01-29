// Name: crt_string.c_parseFloatString_FUN_00605b9b
// Address: 00605b9b
// Address Range: [[00605b9b, 00605d5c]]
// Convention: __cdecl
// Signature: int __cdecl crt_string_c_parseFloatString_FUN_00605b9b(char *str,void *result,char **endptr)

#include "nocturne.h"

int __cdecl parseFloatString(char *str,void *result,char **endptr)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uStack_44;
  byte local_40 [20];
  uint local_2c;
  uint local_28;
  ushort local_24;
  byte *local_20;
  byte *local_1c;
  int local_18;
  byte local_14;
  
  local_20 = (byte *)str;
  for (; (bVar4 = *str, bVar4 == 0x20 || ((8 < bVar4 && (bVar4 < 0xe))));
      str = (char *)((byte *)str + 1)) {
  }
  local_14 = 0;
  pbVar2 = (byte *)str + 1;
  if ((bVar4 != 0x2b) && (pbVar2 = (byte *)str, bVar4 == 0x2d)) {
    local_14 = 1;
    pbVar2 = (byte *)str + 1;
  }
  bVar4 = 0x30;
  iVar5 = 0;
  iVar7 = 0;
  while( true ) {
    while( true ) {
      bVar1 = *pbVar2;
      pbVar3 = pbVar2 + 1;
      if (bVar1 != 0x2e) break;
      if ((local_14 & 8) != 0) goto LAB_00605c23;
      local_14 = local_14 | 8;
      pbVar2 = pbVar3;
    }
    if ((bVar1 < 0x30) || (0x39 < bVar1)) break;
    if ((local_14 & 8) != 0) {
      iVar7 = iVar7 + 1;
    }
    bVar4 = bVar4 | bVar1;
    if (bVar4 != 0x30) {
      if (iVar5 < 0x13) {
        local_40[iVar5] = bVar1;
      }
      iVar5 = iVar5 + 1;
    }
    local_14 = local_14 | 4;
    pbVar2 = pbVar3;
  }
LAB_00605c23:
  iVar6 = 0;
  if (((local_14 & 4) != 0) && ((bVar1 == 0x65 || (local_20 = pbVar2, bVar1 == 0x45)))) {
    local_20 = pbVar2 + 2;
    if ((*pbVar3 != 0x2b) && (local_20 = pbVar3, *pbVar3 == 0x2d)) {
      local_14 = local_14 | 2;
      local_20 = pbVar2 + 2;
    }
    local_14 = local_14 & 0xfb;
    for (; (bVar4 = *local_20, 0x2f < bVar4 && (bVar4 < 0x3a)); local_20 = local_20 + 1) {
      if (iVar6 < 1000) {
        local_18 = iVar6 * 10;
        iVar6 = (uint)bVar4 + local_18 + -0x30;
      }
      local_14 = local_14 | 4;
    }
    if ((local_14 & 2) != 0) {
      iVar6 = -iVar6;
    }
    local_1c = pbVar2;
    if ((local_14 & 4) == 0) {
      local_20 = pbVar2;
    }
  }
  if (endptr != (char **)0x0) {
    *endptr = (char *)local_20;
  }
  iVar6 = iVar6 - iVar7;
  if (0x13 < iVar5) {
    iVar6 = iVar6 + iVar5 + -0x13;
    iVar5 = 0x13;
  }
  for (; (0 < iVar5 && (local_40[iVar5 + -1] == 0x30)); iVar5 = iVar5 + -1) {
    iVar6 = iVar6 + 1;
  }
  if (iVar5 == 0) {
    *(ushort *)((int)result + 8) = 0;
    *(uint *)((int)result + 4) = 0;
    *(uint *)result = 0;
    iVar5 = 0;
  }
  else {
    local_40[iVar5] = 0;
    uStack_44 = 0x605d00;
    crt_unknown_c_FUN_0060b586(local_40,&local_2c);
    if (iVar6 != 0) {
      uStack_44 = iVar6;
      crt_unknown_c_FUN_00603d60();
    }
    if ((local_14 & 1) != 0) {
      local_24 = local_24 | 0x8000;
    }
    *(ushort *)((int)result + 8) = local_24;
    *(uint *)((int)result + 4) = local_28;
    *(uint *)result = local_2c;
    iVar5 = iVar6 + -1 + iVar5;
    if (iVar5 < 0x135) {
      if (iVar5 < -0x134) {
        iVar5 = 2;
      }
      else {
        iVar5 = 1;
      }
    }
    else {
      iVar5 = 3;
    }
  }
  return iVar5;
}
