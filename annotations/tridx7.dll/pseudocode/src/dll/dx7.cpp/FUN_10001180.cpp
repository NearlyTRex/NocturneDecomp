// Name: dll_dx7.cpp_FUN_10001180
// Address: 10001180
// Address Range: [[10001180, 100011fa]]
// Convention: unknown
// Signature: void dll_dx7_cpp_FUN_10001180(int param_1)

#include "nocturne.h"

void dll_dx7_cpp_FUN_10001180(int param_1)

{
  byte bVar1;
  int iVar2;
  int in_ECX;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  bool bVar7;
  
  iVar2 = 0;
  bVar7 = *(int *)(in_ECX + 8) == 0;
  if (0 < *(int *)(in_ECX + 8)) {
    pbVar4 = (byte *)(in_ECX + 0x14);
    pbVar6 = (byte *)(param_1 + 8);
    pbVar3 = pbVar4;
LAB_10001199:
    do {
      bVar1 = *pbVar4;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 == *pbVar6) {
        if (bVar1 != 0) {
          bVar1 = pbVar4[1];
          bVar7 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_100011b9;
          pbVar4 = pbVar4 + 2;
          pbVar6 = pbVar6 + 2;
          if (bVar1 != 0) goto LAB_10001199;
        }
        iVar5 = 0;
      }
      else {
LAB_100011b9:
        iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      }
      if (iVar5 == 0) break;
      pbVar4 = pbVar3 + 0x48;
      iVar2 = iVar2 + 1;
      pbVar6 = (byte *)(param_1 + 8);
      pbVar3 = pbVar4;
    } while (iVar2 < *(int *)(in_ECX + 8));
    bVar7 = *(int *)(in_ECX + 8) == iVar2;
  }
  if (!bVar7) {
    dll_dx7_cpp_FUN_100030e0(*(uint *)(iVar2 * 0x48 + 0x10 + in_ECX));
    return;
  }
  dll_dx7_cpp_FUN_10001090(param_1);
  return;
}
