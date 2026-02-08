// Name: crt_unknown.c_FUN_0060403f
// Address: 0060403f
// Address Range: [[0060403f, 006040d6]]
// Convention: __cdecl
// Signature: void __cdecl crt_unknown_c_FUN_0060403f (undefined4 param_1,float10 *param_2,undefined4 param_3,char *param_4,uint param_5, char *param_6,char *param_7,char *param_8,uint param_9,undefined4 param_10,char *param_11)

#include "nocturne.h"

void __cdecl
FUN_0060403f
          (uint param_1,float10 *param_2,uint param_3,char *param_4,uint param_5,
          char *param_6,char *param_7,char *param_8,uint param_9,uint param_10,char *param_11)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  float10 *in_EDX;
  int iVar4;
  int unaff_EBP;
  int *unaff_ESI;
  int unaff_EDI;
  char *unaff_retaddr;
  
  iVar2 = *(int *)(unaff_EBP + -0x18);
  if (0 < iVar2) {
    *(int *)(unaff_EBP + -0x18) = iVar2 + -8;
    if (unaff_EDI == 0) {
      if ((*(ushort *)(unaff_EBP + -0x40) & 0x7fff) == 0) goto LAB_00604135;
      in_EDX = *(float10 **)(unaff_EBP + -0x18);
      if (0 < (int)in_EDX) {
        *(float10 *)(unaff_EBP + -0x54) = (float10)(int)ROUND(*(float10 *)(unaff_EBP + -0x48));
        *(float10 *)(unaff_EBP + -0x48) =
             *(float10 *)(unaff_EBP + -0x48) - *(float10 *)(unaff_EBP + -0x54);
        in_EDX = (float10 *)(unaff_EBP + -0x54);
        *(ushort *)(unaff_EBP + -0x4c) = 0x4019;
        *(uint *)(unaff_EBP + -0x50) = 3200000000;
        iVar2 = 0;
        *(uint *)(unaff_EBP + -0x54) = 0;
        *(float10 *)(unaff_EBP + -0x48) = *in_EDX * *(float10 *)(unaff_EBP + -0x48);
      }
    }
    FUN_006040d7
              ((uint)in_EDX,iVar2,unaff_retaddr,param_1,(char *)param_2,param_3,param_4,param_5,
               param_6,param_7);
    FUN_0060411c();
    return;
  }
LAB_00604135:
  iVar2 = *(int *)(unaff_EBP + -0x24);
  iVar4 = *(int *)(unaff_EBP + -0x20) + 7;
  for (pcVar1 = (char *)(unaff_EBP + -0x93); *(int *)(unaff_EBP + -0x20) = iVar4, *pcVar1 == '0';
      pcVar1 = pcVar1 + 1) {
    iVar2 = iVar2 + -1;
    iVar4 = *(int *)(unaff_EBP + -0x20) + -1;
  }
  iVar4 = *unaff_ESI;
  if ((*(byte *)(unaff_ESI + 2) & 2) == 0) {
    if ((*(byte *)(unaff_ESI + 2) & 1) != 0) {
      if (unaff_ESI[1] < 1) {
        iVar4 = iVar4 + unaff_ESI[1];
      }
      else {
        iVar4 = iVar4 + 1;
      }
      *(int *)(unaff_EBP + -0x20) = (*(int *)(unaff_EBP + -0x20) + 1) - unaff_ESI[1];
    }
  }
  else {
    iVar3 = *(int *)(unaff_EBP + -0x20) + unaff_ESI[1];
    *(int *)(unaff_EBP + -0x20) = iVar3;
    iVar4 = iVar4 + iVar3 + 1;
  }
  if (-1 < iVar4) {
    if (iVar2 < iVar4) {
      iVar4 = iVar2;
    }
    iVar3 = 0xf;
    if ((*(byte *)(unaff_ESI + 2) & 0x20) != 0) {
      iVar3 = 0x14;
    }
    if ((*(byte *)(unaff_ESI + 2) & 0x40) != 0) {
      iVar3 = iVar3 * 2;
    }
    if (iVar3 < iVar4) {
      iVar4 = iVar3 + 1;
    }
    *(byte *)(unaff_EBP + -0x10) = 0x30;
    if ((iVar4 < iVar2) && (0x34 < (byte)pcVar1[iVar4])) {
      *(byte *)(unaff_EBP + -0x10) = 0x39;
    }
    pcVar1 = pcVar1 + iVar4;
    iVar2 = iVar4;
    while( true ) {
      pcVar1 = pcVar1 + -1;
      iVar2 = iVar2 + -1;
      if (*pcVar1 != *(char *)(unaff_EBP + -0x10)) break;
      iVar4 = iVar4 + -1;
    }
    if (*(char *)(unaff_EBP + -0x10) == '9') {
      *pcVar1 = *pcVar1 + '\x01';
    }
    if (iVar2 < 0) {
      iVar4 = iVar4 + 1;
      *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
    }
  }
  if (iVar4 < 1) {
    *(uint *)(unaff_EBP + -0x20) = 0;
    *(byte *)(unaff_EBP + -0x94) = 0x30;
    unaff_ESI[5] = 0;
  }
  if (((*(byte *)(unaff_ESI + 2) & 2) == 0) &&
     (((*(byte *)(unaff_ESI + 2) & 4) == 0 ||
      (((*(int *)(unaff_EBP + -0x20) < -4 || (*unaff_ESI <= *(int *)(unaff_EBP + -0x20))) &&
       ((*(byte *)(unaff_ESI + 2) & 8) == 0)))))) {
    FUN_00604478();
  }
  else {
    FUN_00604267();
  }
  FUN_0060445e(*(ushort *)(unaff_EBP + -0x14));
  return;
}
