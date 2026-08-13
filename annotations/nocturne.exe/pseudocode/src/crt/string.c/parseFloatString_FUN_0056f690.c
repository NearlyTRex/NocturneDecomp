// Name: crt_string.c_parseFloatString_FUN_0056f690
// Address: 0056f690
// Address Range: [[0056f690, 0056f851]]
// Convention: __cdecl
// Signature: int __cdecl crt_string_c_parseFloatString_FUN_0056f690(char *str,void *result,char **endptr)

#include "nocturne.h"

int __cdecl parseFloatString(char *str,void *result,char **endptr)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uStackY_44;
  byte *in_stack_ffffffc0;
  ulonglong *in_stack_ffffffc4;
  uint uStack_2c;
  uint uStack_28;
  ushort uStack_24;
  byte *pbStack_20;
  
  pbStack_20 = (byte *)str;
  for (; (bVar8 = *str, bVar8 == 0x20 || ((8 < bVar8 && (bVar8 < 0xe)))); str = str + 1) {
  }
  bVar5 = false;
  pbVar6 = (byte *)(str + 1);
  if ((bVar8 != 0x2b) && (pbVar6 = (byte *)str, bVar8 == 0x2d)) {
    bVar5 = true;
    pbVar6 = (byte *)(str + 1);
  }
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar8 = 0x30;
  iVar9 = 0;
  iVar11 = 0;
  while( true ) {
    while( true ) {
      bVar1 = *pbVar6;
      pbVar7 = pbVar6 + 1;
      if (bVar1 != 0x2e) break;
      if (bVar2) goto LAB_0056f718;
      bVar2 = true;
      pbVar6 = pbVar7;
    }
    if ((bVar1 < 0x30) || (0x39 < bVar1)) break;
    if (bVar2) {
      iVar11 = iVar11 + 1;
    }
    bVar8 = bVar8 | bVar1;
    if (bVar8 != 0x30) {
      if (iVar9 < 0x13) {
        (&stack0xffffffc0)[iVar9] = bVar1;
      }
      iVar9 = iVar9 + 1;
    }
    bVar3 = true;
    pbVar6 = pbVar7;
  }
LAB_0056f718:
  iVar10 = 0;
  if ((bVar3) && ((bVar1 == 0x65 || (pbStack_20 = pbVar6, bVar1 == 0x45)))) {
    pbStack_20 = pbVar6 + 2;
    if ((*pbVar7 != 0x2b) && (pbStack_20 = pbVar7, *pbVar7 == 0x2d)) {
      bVar4 = true;
      pbStack_20 = pbVar6 + 2;
    }
    bVar2 = false;
    for (; (bVar8 = *pbStack_20, 0x2f < bVar8 && (bVar8 < 0x3a)); pbStack_20 = pbStack_20 + 1) {
      if (iVar10 < 1000) {
        iVar10 = (uint)bVar8 + iVar10 * 10 + -0x30;
      }
      bVar2 = true;
    }
    if (bVar4) {
      iVar10 = -iVar10;
    }
    if (!bVar2) {
      pbStack_20 = pbVar6;
    }
  }
  if (endptr != (char **)0x0) {
    *endptr = (char *)pbStack_20;
  }
  iVar10 = iVar10 - iVar11;
  if (0x13 < iVar9) {
    iVar10 = iVar10 + iVar9 + -0x13;
    iVar9 = 0x13;
  }
  for (; (0 < iVar9 && (*(char *)((int)&uStackY_44 + iVar9 + 3) == '0')); iVar9 = iVar9 + -1) {
    iVar10 = iVar10 + 1;
  }
  if (iVar9 == 0) {
    *(ushort *)((int)result + 8) = 0;
    *(uint *)((int)result + 4) = 0;
    *(uint *)result = 0;
    iVar9 = 0;
  }
  else {
    (&stack0xffffffc0)[iVar9] = 0;
    uStackY_44 = 0x56f7f5;
    None(in_stack_ffffffc0,in_stack_ffffffc4);
    if (iVar10 != 0) {
      uStackY_44 = 0x56f803;
      FUN_0056a320();
    }
    if (bVar5) {
      uStack_24 = uStack_24 | 0x8000;
    }
    *(ushort *)((int)result + 8) = uStack_24;
    *(uint *)((int)result + 4) = uStack_28;
    *(uint *)result = uStack_2c;
    iVar9 = iVar10 + -1 + iVar9;
    if (iVar9 < 0x135) {
      if (iVar9 < -0x134) {
        iVar9 = 2;
      }
      else {
        iVar9 = 1;
      }
    }
    else {
      iVar9 = 3;
    }
  }
  return iVar9;
}
