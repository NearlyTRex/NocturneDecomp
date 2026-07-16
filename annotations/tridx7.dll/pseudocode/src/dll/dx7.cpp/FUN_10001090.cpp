// Name: dll_dx7.cpp_FUN_10001090
// Address: 10001090
// Address Range: [[10001090, 1000117d]]
// Convention: unknown
// Signature: int dll_dx7_cpp_FUN_10001090(int param_1)

#include "nocturne.h"

int dll_dx7_cpp_FUN_10001090(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  byte *pbVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  byte *pbVar11;
  int *piVar12;
  char *pcVar13;
  int *piVar15;
  bool bVar16;
  byte bVar17;
  char *pcVar14;
  
  bVar17 = 0;
  iVar3 = 0;
  if (0 < in_ECX[2]) {
    pbVar5 = (byte *)(in_ECX + 5);
    do {
      pbVar11 = (byte *)(param_1 + 8);
      pbVar9 = pbVar5;
      do {
        bVar2 = *pbVar9;
        bVar16 = bVar2 < *pbVar11;
        if (bVar2 != *pbVar11) {
LAB_100010c9:
          iVar10 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_100010ce;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar9[1];
        bVar16 = bVar2 < pbVar11[1];
        if (bVar2 != pbVar11[1]) goto LAB_100010c9;
        pbVar9 = pbVar9 + 2;
        pbVar11 = pbVar11 + 2;
      } while (bVar2 != 0);
      iVar10 = 0;
LAB_100010ce:
      if (iVar10 == 0) break;
      pbVar5 = pbVar5 + 0x48;
      iVar3 = iVar3 + 1;
    } while (iVar3 < in_ECX[2]);
  }
  iVar10 = in_ECX[2];
  if (iVar3 < iVar10) {
    in_ECX[iVar3 * 0x12 + 0x15] = in_ECX[3];
    in_ECX[3] = in_ECX[3] + 1;
    return in_ECX[iVar3 * 0x12 + 4];
  }
  iVar3 = *in_ECX;
  if (iVar10 < iVar3) {
    in_ECX[2] = iVar10 + 1;
  }
  else {
    uVar7 = 0xffffffff;
    iVar10 = 0;
    iVar4 = 0;
    if (0 < iVar3) {
      puVar6 = (uint *)(in_ECX + 0x15);
      do {
        if (*puVar6 < uVar7) {
          uVar7 = *puVar6;
          iVar10 = iVar4;
        }
        puVar6 = puVar6 + 0x12;
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar3);
    }
  }
  dll_dx7_cpp_FUN_100030e0(in_ECX[iVar10 * 0x12 + 4]);
  uVar7 = 0xffffffff;
  in_ECX[iVar10 * 0x12 + 0x15] = in_ECX[3];
  pcVar14 = (char *)(param_1 + 8);
  do {
    pcVar13 = pcVar14;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar13 = pcVar14 + (uint)bVar17 * -2 + 1;
    cVar1 = *pcVar14;
    pcVar14 = pcVar13;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  piVar12 = (int *)(pcVar13 + -uVar7);
  piVar15 = in_ECX + iVar10 * 0x12 + 5;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *piVar15 = *piVar12;
    piVar12 = piVar12 + (uint)bVar17 * -2 + 1;
    piVar15 = piVar15 + (uint)bVar17 * -2 + 1;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(char *)piVar15 = (char)*piVar12;
    piVar12 = (int *)((int)piVar12 + (uint)bVar17 * -2 + 1);
    piVar15 = (int *)((int)piVar15 + (uint)bVar17 * -2 + 1);
  }
  in_ECX[3] = in_ECX[3] + 1;
  return in_ECX[iVar10 * 0x12 + 4];
}
