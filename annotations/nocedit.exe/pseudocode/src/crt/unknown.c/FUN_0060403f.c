// Name: crt_unknown.c_FUN_0060403f
// Address: 0060403f
// Address Range: [[0060403f, 006040d6]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060403f()
// Cross-references:
//   crt_unknown.c_FUN_0060411c (0060411c) at 00604130 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_unknown.c_FUN_006040d7
//   crt_unknown.c_FUN_0060411c

#include "nocturne.h"

void crt_unknown_c_FUN_0060403f(undefined4 param_1,float10 *param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_EBP;
  int *unaff_ESI;
  int unaff_EDI;
  
  iVar2 = *(int *)(unaff_EBP + -0x18);
  if (0 < iVar2) {
    *(int *)(unaff_EBP + -0x18) = iVar2 + -8;
    if (unaff_EDI == 0) {
      if ((*(ushort *)(unaff_EBP + -0x40) & 0x7fff) == 0) goto LAB_00604135;
      unaff_EDI = (int)ROUND(*(float10 *)(unaff_EBP + -0x48));
      param_2 = *(float10 **)(unaff_EBP + -0x18);
      if (0 < (int)param_2) {
        *(float10 *)(unaff_EBP + -0x54) = (float10)unaff_EDI;
        *(float10 *)(unaff_EBP + -0x48) =
             *(float10 *)(unaff_EBP + -0x48) - *(float10 *)(unaff_EBP + -0x54);
        param_2 = (float10 *)(unaff_EBP + -0x54);
        *(undefined2 *)(unaff_EBP + -0x4c) = 0x4019;
        *(undefined4 *)(unaff_EBP + -0x50) = 3200000000;
        iVar2 = 0;
        *(undefined4 *)(unaff_EBP + -0x54) = 0;
        *(float10 *)(unaff_EBP + -0x48) = *param_2 * *(float10 *)(unaff_EBP + -0x48);
      }
    }
    crt_unknown_c_FUN_006040d7
              (unaff_EDI,param_2,*(undefined4 *)(unaff_EBP + -0x1c),iVar2,param_2,iVar2);
    crt_unknown_c_FUN_0060411c();
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
    *(undefined1 *)(unaff_EBP + -0x10) = 0x30;
    if ((iVar4 < iVar2) && (0x34 < (byte)pcVar1[iVar4])) {
      *(undefined1 *)(unaff_EBP + -0x10) = 0x39;
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
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined1 *)(unaff_EBP + -0x94) = 0x30;
    unaff_ESI[5] = 0;
  }
  if (((*(byte *)(unaff_ESI + 2) & 2) == 0) &&
     (((*(byte *)(unaff_ESI + 2) & 4) == 0 ||
      (((*(int *)(unaff_EBP + -0x20) < -4 || (*unaff_ESI <= *(int *)(unaff_EBP + -0x20))) &&
       ((*(byte *)(unaff_ESI + 2) & 8) == 0)))))) {
    crt_unknown_c_FUN_00604478();
  }
  else {
    crt_unknown_c_FUN_00604267();
  }
  crt_unknown_c_FUN_0060445e(*(undefined2 *)(unaff_EBP + -0x14));
  return;
}


// Assembly code:
// 0060403f: MOV ECX,dword ptr [EBP + -0x18]
//   Label: crt_unknown.c_FUN_0060403f
// 00604042: TEST ECX,ECX
// 00604044: JLE 0x00604135
//   XREF to: 00604135 (CONDITIONAL_JUMP)
// 0060404a: LEA EAX,[ECX + -0x8]
// 0060404d: MOV dword ptr [EBP + -0x18],EAX
// 00604050: TEST EDI,EDI
// 00604052: JNZ 0x006040c9
//   XREF to: 006040c9 (CONDITIONAL_JUMP)
// 00604054: TEST word ptr [EBP + -0x40],0x7fff
// 0060405a: JZ 0x00604135
//   XREF to: 00604135 (CONDITIONAL_JUMP)
// 00604060: LEA EAX,[EBP + -0x48]
// 00604063: FLD extended double ptr [EAX]
// 00604065: PUSH EAX
// 00604066: PUSH EAX
// 00604067: FSTCW word ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 0060406b: POP EAX
// 0060406c: PUSH EAX
// 0060406d: OR AH,0xc
// 00604070: PUSH EAX
// 00604071: FLDCW word ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 00604074: POP EAX
// 00604075: FISTP dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x4] (WRITE)
// 00604079: FLDCW word ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 0060407c: POP EAX
// 0060407d: POP EAX
// 0060407e: MOV EDX,dword ptr [EBP + -0x18]
// 00604081: MOV EDI,EAX
// 00604083: TEST EDX,EDX
// 00604085: JLE 0x006040c9
//   XREF to: 006040c9 (CONDITIONAL_JUMP)
// 00604087: LEA EDX,[EBP + -0x54]
// 0060408a: LEA EBX,[EBP + -0x48]
// 0060408d: PUSH EAX
// 0060408e: FILD dword ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 00604091: POP EAX
// 00604092: FSTP extended double ptr [EDX]
// 00604094: LEA EDX,[EBP + -0x54]
// 00604097: LEA EAX,[EBP + -0x48]
// 0060409a: FLD extended double ptr [EAX]
// 0060409c: FLD extended double ptr [EDX]
// 0060409e: FSUBP
// 006040a0: FSTP extended double ptr [EBX]
// 006040a2: MOV ECX,0x4019
// 006040a7: MOV EBX,0xbebc2000
// 006040ac: LEA EDX,[EBP + -0x54]
// 006040af: LEA EAX,[EBP + -0x48]
// 006040b2: MOV word ptr [EBP + -0x4c],CX
// 006040b6: MOV dword ptr [EBP + -0x50],EBX
// 006040b9: XOR ECX,ECX
// 006040bb: LEA EBX,[EBP + -0x48]
// 006040be: MOV dword ptr [EBP + -0x54],ECX
// 006040c1: FLD extended double ptr [EAX]
// 006040c3: FLD extended double ptr [EDX]
// 006040c5: FMULP
// 006040c7: FSTP extended double ptr [EBX]
// 006040c9: MOV EBX,dword ptr [EBP + -0x1c]
//   Label: LAB_006040c9
// 006040cc: MOV EAX,EDI
// 006040ce: PUSH ECX
// 006040cf: PUSH EDX
// 006040d0: CALL crt_unknown.c_FUN_006040d7
//   XREF to: 006040d7 (UNCONDITIONAL_CALL)
// 006040d5: JMP 0x0060411c
//   XREF to: 0060411c (UNCONDITIONAL_CALL)
