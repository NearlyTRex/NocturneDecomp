// Name: shape_superopt.cpp_FUN_005c8280
// Address: 005c8280
// Address Range: [[005c8280, 005c84b9]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005c8280()
// Cross-references:
//   shape_superopt.cpp_FUN_005c7b20 (005c7b20) at 005c7d87 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_FUN_005c91e0 (005c91e0) at 005c91fa [UNCONDITIONAL_CALL]
// Function calls:
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_malloc_FUN_006021da

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_FUN_005c8280(undefined1 param_1, undefined4 param_2,
   undefined4 param_3) */

undefined1 * shape_superopt_cpp_FUN_005c8280(void)

{
  bool bVar1;
  int *ptr;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  double *pdVar6;
  int iVar7;
  byte bVar8;
  int *in_stack_0000000c;
  int in_stack_00000010;
  
  bVar8 = 0;
  ptr = (int *)crt_memory_c_malloc_FUN_006021da((int)in_stack_0000000c * 0x60);
  iVar7 = 0;
  if (ptr == (int *)0x0) {
    return (undefined1 *)0x0;
  }
  do {
    iVar5 = 0;
    if (in_stack_00000010 != 0) {
      piVar2 = in_stack_0000000c;
      do {
        if (*piVar2 != -1) break;
        piVar2 = piVar2 + 0x18;
        iVar5 = iVar5 + 1;
      } while (piVar2 < in_stack_0000000c + in_stack_00000010 * 0x18);
    }
    if (iVar5 == in_stack_00000010) {
      piVar2 = ptr;
      for (uVar4 = (uint)(in_stack_00000010 * 0x60) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *in_stack_0000000c = *piVar2;
        piVar2 = piVar2 + (uint)bVar8 * -2 + 1;
        in_stack_0000000c = in_stack_0000000c + (uint)bVar8 * -2 + 1;
      }
      for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(char *)in_stack_0000000c = (char)*piVar2;
        piVar2 = (int *)((int)piVar2 + (uint)bVar8 * -2 + 1);
        in_stack_0000000c = (int *)((int)in_stack_0000000c + (uint)bVar8 * -2 + 1);
      }
      crt_memory_c_free_FUN_005fe659(ptr);
      return &DAT_00000001;
    }
    piVar2 = in_stack_0000000c + iVar5 * 0x18;
    piVar3 = ptr + iVar7 * 0x18;
    *piVar3 = *piVar2;
    piVar3[1] = piVar2[1];
    piVar3[2] = piVar2[2];
    piVar3[3] = piVar2[3];
    piVar3[4] = piVar2[4];
    piVar3[5] = piVar2[5];
    piVar3[6] = piVar2[6];
    piVar3[7] = piVar2[7];
    piVar3[8] = piVar2[8];
    piVar3[9] = piVar2[9];
    piVar3[10] = piVar2[10];
    piVar3[0xb] = piVar2[0xb];
    piVar3[0xc] = piVar2[0xc];
    piVar3[0xd] = piVar2[0xd];
    piVar3[0xe] = piVar2[0xe];
    piVar3[0xf] = piVar2[0xf];
    piVar3[0x10] = piVar2[0x10];
    piVar3[0x11] = piVar2[0x11];
    piVar3[0x12] = piVar2[0x12];
    piVar3[0x13] = piVar2[0x13];
    iVar7 = iVar7 + 1;
    piVar3[0x14] = piVar2[0x14];
    piVar3[0x15] = piVar2[0x15];
    piVar3[0x16] = piVar2[0x16];
    piVar3[0x17] = piVar2[0x17];
    *piVar2 = -1;
    do {
      bVar1 = true;
      if (in_stack_00000010 != 0) {
        iVar5 = iVar7 * 0x60;
        pdVar6 = (double *)(ptr + iVar7 * 0x18 + -0xe);
        piVar2 = in_stack_0000000c;
        do {
          if (!bVar1) break;
          if ((((*piVar2 != -1) && (*(double *)(piVar2 + 4) == *pdVar6)) &&
              (*(double *)(piVar2 + 6) == pdVar6[1])) && (*(double *)(piVar2 + 8) == pdVar6[2])) {
            piVar3 = (int *)(iVar5 + (int)ptr);
            *piVar3 = *piVar2;
            piVar3[1] = piVar2[1];
            piVar3[2] = piVar2[2];
            piVar3[3] = piVar2[3];
            *(double *)(piVar3 + 4) = *(double *)(piVar2 + 4);
            *(undefined8 *)(piVar3 + 6) = *(undefined8 *)(piVar2 + 6);
            *(undefined8 *)(piVar3 + 8) = *(undefined8 *)(piVar2 + 8);
            pdVar6 = pdVar6 + 0xc;
            *(undefined8 *)(piVar3 + 10) = *(undefined8 *)(piVar2 + 10);
            *(undefined8 *)(piVar3 + 0xc) = *(undefined8 *)(piVar2 + 0xc);
            *(undefined8 *)(piVar3 + 0xe) = *(undefined8 *)(piVar2 + 0xe);
            *(undefined8 *)(piVar3 + 0x10) = *(undefined8 *)(piVar2 + 0x10);
            *(undefined8 *)(piVar3 + 0x12) = *(undefined8 *)(piVar2 + 0x12);
            iVar7 = iVar7 + 1;
            iVar5 = iVar5 + 0x60;
            bVar1 = false;
            *(undefined8 *)(piVar3 + 0x14) = *(undefined8 *)(piVar2 + 0x14);
            *(undefined8 *)(piVar3 + 0x16) = *(undefined8 *)(piVar2 + 0x16);
            *piVar2 = -1;
          }
          piVar2 = piVar2 + 0x18;
        } while (piVar2 < in_stack_0000000c + in_stack_00000010 * 0x18);
      }
    } while (!bVar1);
  } while( true );
}


// Assembly code:
// 005c8280: PUSH EBP
//   Label: shape_superopt.cpp_FUN_005c8280
// 005c8281: SUB ESP,0x8
// 005c8284: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 005c8288: LEA EAX,[EDX*0x4 + 0x0]
// 005c828f: SUB EAX,EDX
// 005c8291: SHL EAX,0x5
// 005c8294: PUSH EAX
// 005c8295: CALL crt_memory.c_malloc_FUN_006021da
//   XREF to: 006021da (UNCONDITIONAL_CALL)
// 005c829a: ADD ESP,0x4
// 005c829d: XOR EBP,EBP
// 005c829f: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 005c82a3: TEST EAX,EAX
// 005c82a5: JZ 0x005c84b5
//   XREF to: 005c84b5 (CONDITIONAL_JUMP)
// 005c82ab: PUSH EDI
// 005c82ac: PUSH ESI
// 005c82ad: PUSH EBX
// 005c82ae: MOV ECX,dword ptr [ESP + 0x24]
//   Label: LAB_005c82ae
//   XREF to: Stack[0xc] (READ)
// 005c82b2: XOR EDX,EDX
// 005c82b4: TEST ECX,ECX
// 005c82b6: JBE 0x005c82ca
//   XREF to: 005c82ca (CONDITIONAL_JUMP)
// 005c82b8: IMUL ECX,ECX,0x60
// 005c82bb: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 005c82bf: ADD ECX,EAX
// 005c82c1: CMP dword ptr [EAX],-0x1
//   Label: LAB_005c82c1
// 005c82c4: JZ 0x005c83ce
//   XREF to: 005c83ce (CONDITIONAL_JUMP)
// 005c82ca: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_005c82ca
//   XREF to: Stack[0xc] (READ)
// 005c82ce: CMP EDX,EAX
// 005c82d0: JZ 0x005c847c
//   XREF to: 005c847c (CONDITIONAL_JUMP)
// 005c82d6: IMUL EAX,EDX,0x60
// 005c82d9: ADD EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 005c82dd: IMUL EDX,EBP,0x60
// 005c82e0: ADD EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x8] (READ)
// 005c82e4: MOV ECX,dword ptr [EAX]
// 005c82e6: MOV dword ptr [EDX],ECX
// 005c82e8: MOV ECX,dword ptr [EAX + 0x4]
// 005c82eb: MOV dword ptr [EDX + 0x4],ECX
// 005c82ee: MOV ECX,dword ptr [EAX + 0x8]
// 005c82f1: MOV dword ptr [EDX + 0x8],ECX
// 005c82f4: MOV ECX,dword ptr [EAX + 0xc]
// 005c82f7: LEA EBX,[EAX + 0x10]
// 005c82fa: MOV dword ptr [EDX + 0xc],ECX
// 005c82fd: LEA ECX,[EDX + 0x10]
// 005c8300: MOV ESI,dword ptr [EBX]
// 005c8302: MOV dword ptr [ECX],ESI
// 005c8304: MOV ESI,dword ptr [EBX + 0x4]
// 005c8307: MOV dword ptr [ECX + 0x4],ESI
// 005c830a: MOV ESI,dword ptr [EBX + 0x8]
// 005c830d: MOV dword ptr [ECX + 0x8],ESI
// 005c8310: MOV ESI,dword ptr [EBX + 0xc]
// 005c8313: MOV dword ptr [ECX + 0xc],ESI
// 005c8316: MOV ESI,dword ptr [EBX + 0x10]
// 005c8319: MOV dword ptr [ECX + 0x10],ESI
// 005c831c: MOV ESI,dword ptr [EBX + 0x14]
// 005c831f: MOV dword ptr [ECX + 0x14],ESI
// 005c8322: LEA ECX,[EAX + 0x28]
// 005c8325: LEA EBX,[EDX + 0x28]
// 005c8328: MOV ESI,dword ptr [ECX]
// 005c832a: MOV dword ptr [EBX],ESI
// 005c832c: MOV ESI,dword ptr [ECX + 0x4]
// 005c832f: MOV dword ptr [EBX + 0x4],ESI
// 005c8332: MOV ESI,dword ptr [ECX + 0x8]
// 005c8335: MOV dword ptr [EBX + 0x8],ESI
// 005c8338: MOV ESI,dword ptr [ECX + 0xc]
// 005c833b: MOV dword ptr [EBX + 0xc],ESI
// 005c833e: MOV ESI,dword ptr [ECX + 0x10]
// 005c8341: MOV dword ptr [EBX + 0x10],ESI
// 005c8344: MOV ESI,dword ptr [ECX + 0x14]
// 005c8347: MOV dword ptr [EBX + 0x14],ESI
// 005c834a: LEA EBX,[EAX + 0x40]
// 005c834d: LEA ECX,[EDX + 0x40]
// 005c8350: MOV ESI,dword ptr [EBX]
// 005c8352: MOV dword ptr [ECX],ESI
// 005c8354: MOV ESI,dword ptr [EBX + 0x4]
// 005c8357: MOV dword ptr [ECX + 0x4],ESI
// 005c835a: MOV ESI,dword ptr [EBX + 0x8]
// 005c835d: MOV dword ptr [ECX + 0x8],ESI
// 005c8360: MOV ESI,dword ptr [EBX + 0xc]
// 005c8363: MOV dword ptr [ECX + 0xc],ESI
// 005c8366: LEA ECX,[EAX + 0x50]
// 005c8369: INC EBP
// 005c836a: MOV EBX,dword ptr [ECX]
// 005c836c: MOV dword ptr [EDX + 0x50],EBX
// 005c836f: MOV EBX,dword ptr [ECX + 0x4]
// 005c8372: MOV dword ptr [EDX + 0x54],EBX
// 005c8375: MOV EBX,dword ptr [ECX + 0x8]
// 005c8378: MOV dword ptr [EDX + 0x58],EBX
// 005c837b: MOV EBX,dword ptr [ECX + 0xc]
// 005c837e: MOV dword ptr [EDX + 0x5c],EBX
// 005c8381: MOV dword ptr [EAX],0xffffffff
// 005c8387: MOV EDI,dword ptr [ESP + 0x24]
//   Label: LAB_005c8387
//   XREF to: Stack[0xc] (READ)
// 005c838b: MOV ESI,0x1
// 005c8390: TEST EDI,EDI
// 005c8392: JBE 0x005c83c4
//   XREF to: 005c83c4 (CONDITIONAL_JUMP)
// 005c8394: IMUL EDI,EBP,0x60
// 005c8397: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x8] (READ)
// 005c839b: LEA EBX,[EDI + -0x38]
// 005c839e: ADD EBX,ECX
// 005c83a0: IMUL EAX,dword ptr [ESP + 0x24],0x60
//   XREF to: Stack[0xc] (READ)
// 005c83a5: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 005c83a9: LEA ECX,[EDX + EAX*0x1]
// 005c83ac: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0xc] (WRITE)
// 005c83b0: TEST ESI,ESI
//   Label: LAB_005c83b0
// 005c83b2: JZ 0x005c83c4
//   XREF to: 005c83c4 (CONDITIONAL_JUMP)
// 005c83b4: CMP dword ptr [EDX],-0x1
// 005c83b7: JNZ 0x005c83df
//   XREF to: 005c83df (CONDITIONAL_JUMP)
// 005c83b9: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_005c83b9
//   XREF to: Stack[-0xc] (READ)
// 005c83bd: ADD EDX,0x60
// 005c83c0: CMP EDX,EAX
// 005c83c2: JC 0x005c83b0
//   XREF to: 005c83b0 (CONDITIONAL_JUMP)
// 005c83c4: TEST ESI,ESI
//   Label: LAB_005c83c4
// 005c83c6: JNZ 0x005c82ae
//   XREF to: 005c82ae (CONDITIONAL_JUMP)
// 005c83cc: JMP 0x005c8387
//   XREF to: 005c8387 (UNCONDITIONAL_JUMP)
// 005c83ce: ADD EAX,0x60
//   Label: LAB_005c83ce
// 005c83d1: INC EDX
// 005c83d2: CMP EAX,ECX
// 005c83d4: JC 0x005c82c1
//   XREF to: 005c82c1 (CONDITIONAL_JUMP)
// 005c83da: JMP 0x005c82ca
//   XREF to: 005c82ca (UNCONDITIONAL_JUMP)
// 005c83df: LEA ECX,[EDX + 0x10]
//   Label: LAB_005c83df
// 005c83e2: FLD double ptr [ECX]
// 005c83e4: FCOMP double ptr [EBX]
// 005c83e6: FNSTSW AX
// 005c83e8: SAHF
// 005c83e9: JNZ 0x005c83b9
//   XREF to: 005c83b9 (CONDITIONAL_JUMP)
// 005c83eb: FLD double ptr [ECX + 0x8]
// 005c83ee: FCOMP double ptr [EBX + 0x8]
// 005c83f1: FNSTSW AX
// 005c83f3: SAHF
// 005c83f4: JNZ 0x005c83b9
//   XREF to: 005c83b9 (CONDITIONAL_JUMP)
// 005c83f6: FLD double ptr [ECX + 0x10]
// 005c83f9: FCOMP double ptr [EBX + 0x10]
// 005c83fc: FNSTSW AX
// 005c83fe: SAHF
// 005c83ff: JNZ 0x005c83b9
//   XREF to: 005c83b9 (CONDITIONAL_JUMP)
// 005c8401: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x8] (READ)
// 005c8405: MOV EAX,EDI
// 005c8407: ADD EAX,ESI
// 005c8409: MOV ESI,dword ptr [EDX]
// 005c840b: MOV dword ptr [EAX],ESI
// 005c840d: MOV ESI,dword ptr [EDX + 0x4]
// 005c8410: MOV dword ptr [EAX + 0x4],ESI
// 005c8413: MOV ESI,dword ptr [EDX + 0x8]
// 005c8416: MOV dword ptr [EAX + 0x8],ESI
// 005c8419: MOV ESI,dword ptr [EDX + 0xc]
// 005c841c: MOV dword ptr [EAX + 0xc],ESI
// 005c841f: LEA ESI,[EAX + 0x10]
// 005c8422: FLD double ptr [ECX]
// 005c8424: FSTP double ptr [ESI]
// 005c8426: FLD double ptr [ECX + 0x8]
// 005c8429: FSTP double ptr [ESI + 0x8]
// 005c842c: FLD double ptr [ECX + 0x10]
// 005c842f: FSTP double ptr [ESI + 0x10]
// 005c8432: LEA ESI,[EDX + 0x28]
// 005c8435: ADD EBX,0x60
// 005c8438: LEA ECX,[EAX + 0x28]
// 005c843b: FLD double ptr [ESI]
// 005c843d: FSTP double ptr [ECX]
// 005c843f: FLD double ptr [ESI + 0x8]
// 005c8442: FSTP double ptr [ECX + 0x8]
// 005c8445: FLD double ptr [ESI + 0x10]
// 005c8448: LEA ESI,[EDX + 0x40]
// 005c844b: FSTP double ptr [ECX + 0x10]
// 005c844e: LEA ECX,[EAX + 0x40]
// 005c8451: FLD double ptr [ESI]
// 005c8453: FSTP double ptr [ECX]
// 005c8455: FLD double ptr [ESI + 0x8]
// 005c8458: FSTP double ptr [ECX + 0x8]
// 005c845b: LEA ECX,[EAX + 0x50]
// 005c845e: INC EBP
// 005c845f: LEA EAX,[EDX + 0x50]
// 005c8462: ADD EDI,0x60
// 005c8465: XOR ESI,ESI
// 005c8467: FLD double ptr [EAX]
// 005c8469: FSTP double ptr [ECX]
// 005c846b: FLD double ptr [EAX + 0x8]
// 005c846e: FSTP double ptr [ECX + 0x8]
// 005c8471: MOV dword ptr [EDX],0xffffffff
// 005c8477: JMP 0x005c83b9
//   XREF to: 005c83b9 (UNCONDITIONAL_JUMP)
// 005c847c: LEA ECX,[EAX*0x4 + 0x0]
//   Label: LAB_005c847c
// 005c8483: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x8] (READ)
// 005c8487: SUB ECX,EAX
// 005c8489: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 005c848d: SHL ECX,0x5
// 005c8490: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x8] (READ)
// 005c8494: PUSH EDI
// 005c8495: MOV EAX,ECX
// 005c8497: SHR ECX,0x2
// 005c849a: MOVSD.REP ES:EDI,ESI
// 005c849c: MOV CL,AL
// 005c849e: AND CL,0x3
// 005c84a1: MOVSB.REP ES:EDI,ESI
// 005c84a3: POP EDI
// 005c84a4: PUSH EBX
// 005c84a5: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005c84aa: MOV EAX,0x1
// 005c84af: ADD ESP,0x4
// 005c84b2: POP EBX
// 005c84b3: POP ESI
// 005c84b4: POP EDI
// 005c84b5: ADD ESP,0x8
//   Label: LAB_005c84b5
// 005c84b8: POP EBP
// 005c84b9: RET
