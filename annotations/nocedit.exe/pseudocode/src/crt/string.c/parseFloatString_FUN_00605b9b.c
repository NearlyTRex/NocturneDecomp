// Name: crt_string.c_parseFloatString_FUN_00605b9b
// Address: 00605b9b
// Address Range: [[00605b9b, 00605d5c]]
// Convention: __cdecl
// Signature: int __cdecl crt_string_c_parseFloatString_FUN_00605b9b(char *str,void *result,char **endptr)

#include "nocturne.h"

int __cdecl parseFloatString(char *str,void *result,char **endptr)

{
  byte bVar6;
  byte *pbVar6;
  byte *pbVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  int iVar7;
  int iVar11;
  ulonglong *in_stack_ffffffc4_00;
  uint local_2c;
  uint local_28;
  ushort local_24;
  byte *local_20;
  byte *pbStack_1c;
  int iStack_18;
  byte bStack_14;
  byte bVar1;
  ulonglong *in_stack_ffffffc4;
  byte *in_stack_ffffffc0;
  bool bVar2;
  bool bVar4;
  bool bVar3;
  bool bVar5;
  
  local_20 = (byte *)str;
  for (; (bVar6 = *str, bVar6 == 0x20 || ((8 < bVar6 && (bVar6 < 0xe)))); str = str + 1) {
  }
  bStack_14 = 0;
  pbVar6 = (byte *)(str + 1);
  if ((bVar6 != 0x2b) && (pbVar6 = (byte *)str, bVar6 == 0x2d)) {
    bStack_14 = 1;
    pbVar6 = (byte *)(str + 1);
  }
  bVar8 = 0x30;
  iVar9 = 0;
  iVar11 = 0;
  while( true ) {
    while( true ) {
      bVar1 = *pbVar6;
      pbVar7 = pbVar6 + 1;
      if (bVar1 != 0x2e) break;
      if ((bStack_14 & 8) != 0) goto LAB_00605c23;
      bStack_14 = bStack_14 | 8;
      pbVar6 = pbVar7;
    }
    if ((bVar1 < 0x30) || (0x39 < bVar1)) break;
    if ((bStack_14 & 8) != 0) {
      iVar11 = iVar11 + 1;
    }
    bVar8 = bVar8 | bVar1;
    if (bVar8 != 0x30) {
      if (iVar9 < 0x13) {
        (&stack0xffffffc0)[iVar9] = bVar1;
      }
      iVar9 = iVar9 + 1;
    }
    bStack_14 = bStack_14 | 4;
    pbVar6 = pbVar7;
  }
LAB_00605c23:
  iVar10 = 0;
  if (((bStack_14 & 4) != 0) && ((bVar1 == 0x65 || (local_20 = pbVar6, bVar1 == 0x45)))) {
    local_20 = pbVar6 + 2;
    if ((*pbVar7 != 0x2b) && (local_20 = pbVar7, *pbVar7 == 0x2d)) {
      bStack_14 = bStack_14 | 2;
      local_20 = pbVar6 + 2;
    }
    bStack_14 = bStack_14 & 0xfb;
    for (; (bVar6 = *local_20, 0x2f < bVar6 && (bVar6 < 0x3a)); local_20 = local_20 + 1) {
      if (iVar10 < 1000) {
        iStack_18 = iVar10 * 10;
        iVar10 = (uint)bVar6 + iStack_18 + -0x30;
      }
      bStack_14 = bStack_14 | 4;
    }
    if ((bStack_14 & 2) != 0) {
      iVar10 = -iVar10;
    }
    pbStack_1c = pbVar6;
    if ((bStack_14 & 4) == 0) {
      local_20 = pbVar6;
    }
  }
  if (endptr != (char **)0x0) {
    *endptr = (char *)local_20;
  }
  iVar7 = iVar10 - iVar11;
  if (0x13 < iVar9) {
    iVar7 = iVar7 + iVar9 + -0x13;
    iVar9 = 0x13;
  }
  for (; (0 < iVar9 && ((&stack0xffffffbf)[iVar9] == '0')); iVar9 = iVar9 + -1) {
    iVar7 = iVar7 + 1;
  }
  if (iVar9 == 0) {
    *(ushort *)((int)result + 8) = 0;
    *(uint *)((int)result + 4) = 0;
    *(uint *)result = 0;
    iVar7 = 0;
  }
  else {
    (&stack0xffffffc0)[iVar9] = 0;
    FUN_0060b586(in_stack_ffffffc0,in_stack_ffffffc4_00);
    if (iVar7 != 0) {
      func_0x00603d60(&local_2c,iVar7);
    }
    if ((bStack_14 & 1) != 0) {
      local_24 = local_24 | 0x8000;
    }
    *(ushort *)((int)result + 8) = local_24;
    *(uint *)((int)result + 4) = local_28;
    *(uint *)result = local_2c;
    iVar7 = iVar7 + -1 + iVar9;
    if (iVar7 < 0x135) {
      if (iVar7 < -0x134) {
        iVar7 = 2;
      }
      else {
        iVar7 = 1;
      }
    }
    else {
      iVar7 = 3;
    }
  }
  return iVar7;
}
