// Name: FUN_0056a6dc
// Address: 0056a6dc
// Address Range: [[0056a5ff, 0056a696] [0056a6dc, 0056a826]]
// Convention: unknown
// Signature: undefined2 FUN_0056a6dc(void)

#include "nocturne.h"

ushort FUN_0056a6dc(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  byte *unaff_EBX;
  int unaff_EBP;
  int *unaff_ESI;
  int iVar4;
  int iStack00000004;
  
  while( true ) {
    *unaff_EBX = 0;
    *(byte **)(unaff_EBP + -0x1c) = unaff_EBX;
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 8;
    iStack00000004 = *(int *)(unaff_EBP + -0x18);
    if ((iStack00000004 < 1) ||
       (*(int *)(unaff_EBP + -0x18) = iStack00000004 + -8,
       (*(ushort *)(unaff_EBP + -0x40) & 0x7fff) == 0)) break;
    if (0 < *(int *)(unaff_EBP + -0x18)) {
      *(float10 *)(unaff_EBP + -0x54) = (float10)(int)ROUND(*(float10 *)(unaff_EBP + -0x48));
      *(float10 *)(unaff_EBP + -0x48) =
           *(float10 *)(unaff_EBP + -0x48) - *(float10 *)(unaff_EBP + -0x54);
      *(ushort *)(unaff_EBP + -0x4c) = 0x4019;
      *(uint *)(unaff_EBP + -0x50) = 3200000000;
      iStack00000004 = 0;
      *(uint *)(unaff_EBP + -0x54) = 0;
      *(float10 *)(unaff_EBP + -0x48) =
           *(float10 *)(unaff_EBP + -0x54) * *(float10 *)(unaff_EBP + -0x48);
    }
    unaff_EBX = *(byte **)(unaff_EBP + -0x1c);
    FUN_0056a697();
  }
  iVar4 = *(int *)(unaff_EBP + -0x24);
  iVar3 = *(int *)(unaff_EBP + -0x20) + 7;
  for (pcVar1 = (char *)(unaff_EBP + -0x93); *(int *)(unaff_EBP + -0x20) = iVar3, *pcVar1 == '0';
      pcVar1 = pcVar1 + 1) {
    iVar4 = iVar4 + -1;
    iVar3 = *(int *)(unaff_EBP + -0x20) + -1;
  }
  iVar3 = *unaff_ESI;
  if ((*(byte *)(unaff_ESI + 2) & 2) == 0) {
    if ((*(byte *)(unaff_ESI + 2) & 1) != 0) {
      if (unaff_ESI[1] < 1) {
        iVar3 = iVar3 + unaff_ESI[1];
      }
      else {
        iVar3 = iVar3 + 1;
      }
      *(int *)(unaff_EBP + -0x20) = (*(int *)(unaff_EBP + -0x20) + 1) - unaff_ESI[1];
    }
  }
  else {
    iVar2 = *(int *)(unaff_EBP + -0x20) + unaff_ESI[1];
    *(int *)(unaff_EBP + -0x20) = iVar2;
    iVar3 = iVar3 + iVar2 + 1;
  }
  if (-1 < iVar3) {
    if (iVar4 < iVar3) {
      iVar3 = iVar4;
    }
    iVar2 = 0xf;
    if ((*(byte *)(unaff_ESI + 2) & 0x20) != 0) {
      iVar2 = 0x14;
    }
    if ((*(byte *)(unaff_ESI + 2) & 0x40) != 0) {
      iVar2 = iVar2 * 2;
    }
    if (iVar2 < iVar3) {
      iVar3 = iVar2 + 1;
    }
    *(byte *)(unaff_EBP + -0x10) = 0x30;
    if ((iVar3 < iVar4) && (0x34 < (byte)pcVar1[iVar3])) {
      *(byte *)(unaff_EBP + -0x10) = 0x39;
    }
    pcVar1 = pcVar1 + iVar3;
    iVar4 = iVar3;
    while( true ) {
      pcVar1 = pcVar1 + -1;
      iVar4 = iVar4 + -1;
      if (*pcVar1 != *(char *)(unaff_EBP + -0x10)) break;
      iVar3 = iVar3 + -1;
    }
    if (*(char *)(unaff_EBP + -0x10) == '9') {
      *pcVar1 = *pcVar1 + '\x01';
    }
    if (iVar4 < 0) {
      iVar3 = iVar3 + 1;
      *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
    }
  }
  if (iVar3 < 1) {
    *(uint *)(unaff_EBP + -0x20) = 0;
    *(byte *)(unaff_EBP + -0x94) = 0x30;
    unaff_ESI[5] = 0;
  }
  if (((*(byte *)(unaff_ESI + 2) & 2) == 0) &&
     (((*(byte *)(unaff_ESI + 2) & 4) == 0 ||
      (((*(int *)(unaff_EBP + -0x20) < -4 || (*unaff_ESI <= *(int *)(unaff_EBP + -0x20))) &&
       ((*(byte *)(unaff_ESI + 2) & 8) == 0)))))) {
    iStack00000004 = *(uint *)(unaff_EBP + 0x10);
    FUN_0056aa38();
  }
  else {
    iStack00000004 = *(uint *)(unaff_EBP + 0x10);
    FUN_0056a827();
  }
  return *(ushort *)(unaff_EBP + -0x14);
}
