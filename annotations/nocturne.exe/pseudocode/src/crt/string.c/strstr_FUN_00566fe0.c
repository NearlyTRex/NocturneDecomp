// Name: crt_string.c_strstr_FUN_00566fe0
// Address: 00566fe0
// Address Range: [[00566fe0, 005670ae]]
// Convention: __cdecl
// Signature: byte * __cdecl crt_string_c_strstr_FUN_00566fe0(byte *param_1,byte *param_2)

#include "nocturne.h"

/* WARNING: Instruction at (ram,0x00567072) overlaps instruction at (ram,0x00567070)
byte * __cdecl strstr(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  bool bVar11;
  bool bVar12;
  
  bVar1 = *param_2;
  if (bVar1 != 0) {
    if (param_2[1] == 0) {
      do {
        if (*param_1 == bVar1) {
          return param_1;
        }
        if (*param_1 == 0) {
          return (byte *)0x0;
        }
        bVar2 = param_1[1];
        if (bVar2 == bVar1) {
          return param_1 + 1;
        }
        param_1 = param_1 + 2;
      } while (bVar2 != 0);
      return (byte *)0x0;
    }
    pbVar4 = (byte *)0xffffffff;
    bVar11 = true;
    pbVar6 = param_1;
    do {
      pbVar9 = pbVar6;
      if (pbVar4 == (byte *)0x0) break;
      pbVar4 = pbVar4 + -1;
      pbVar9 = pbVar6 + 1;
      bVar11 = *pbVar6 == 0;
      pbVar6 = pbVar9;
    } while (!bVar11);
    if (!bVar11) {
      pbVar9 = pbVar4;
    }
    uVar5 = 0xffffffff;
    pbVar6 = param_2;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      bVar1 = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (bVar1 != 0);
    pbVar6 = (byte *)(~uVar5 - 1);
    while( true ) {
      pbVar4 = pbVar9 + (-1 - (int)param_1);
      bVar11 = pbVar4 == pbVar6;
      if (pbVar4 < pbVar6) break;
      if (pbVar4 == (byte *)0x0) {
LAB_00567070_2:
        param_1 = pbVar4;
      }
      else {
        do {
          pbVar7 = param_1;
          if (pbVar4 == (byte *)0x0) break;
          pbVar4 = pbVar4 + -1;
          pbVar7 = param_1 + 1;
          bVar11 = *param_2 == *param_1;
          param_1 = pbVar7;
        } while (!bVar11);
        param_1 = pbVar7;
        if (!bVar11) goto LAB_00567070_2;
      }
      pbVar4 = param_1 + -1;
      if (pbVar4 == (byte *)0x0) break;
      bVar11 = false;
      iVar3 = 0;
      bVar12 = true;
      pbVar7 = pbVar6;
      pbVar8 = pbVar4;
      pbVar10 = param_2;
      do {
        if (pbVar7 == (byte *)0x0) break;
        pbVar7 = pbVar7 + -1;
        bVar11 = *pbVar8 < *pbVar10;
        bVar12 = *pbVar8 == *pbVar10;
        pbVar8 = pbVar8 + 1;
        pbVar10 = pbVar10 + 1;
      } while (bVar12);
      if (!bVar12) {
        iVar3 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      }
      if (iVar3 == 0) {
        return pbVar4;
      }
    }
    param_1 = (byte *)0x0;
  }
  return param_1;
}
