// Name: crt_unknown.c_FUN_0060b586
// Address: 0060b586
// Address Range: [[0060b586, 0060b5e7]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060b586()
// Cross-references:
//   crt_string.c_parseFloatString_FUN_00605b9b (00605b9b) at 00605cfb [UNCONDITIONAL_CALL]
// Function calls:
//   crt_unknown.c_FUN_0060b5e8

#include "nocturne.h"

/* Signature: void FUN_0060b586(undefined4 param_1, undefined8* param_2, char* param_3) */

void crt_unknown_c_FUN_0060b586(byte *param_1,undefined4 param_2,undefined8 *unaff_EBX)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  undefined8 uVar16;
  
  iVar11 = 0;
  uVar6 = 0;
  uVar12 = 0;
  for (; *param_1 != 0; param_1 = param_1 + 1) {
    bVar13 = CARRY4(uVar12,uVar12);
    bVar14 = CARRY4(uVar6,uVar6);
    uVar5 = uVar6 * 2;
    uVar7 = uVar5 + bVar13;
    uVar1 = (uint)CARRY4(uVar12 * 2,uVar12 * 2);
    uVar8 = uVar7 * 2 + uVar1;
    uVar2 = (uint)CARRY4(uVar12 * 4,uVar12);
    bVar15 = CARRY4(uVar8,uVar6);
    uVar8 = uVar8 + uVar6;
    uVar9 = uVar8 + uVar2;
    uVar6 = uVar12 * 10;
    uVar3 = (uint)CARRY4(uVar12 * 5,uVar12 * 5);
    uVar10 = uVar9 * 2 + uVar3;
    uVar12 = uVar6 + (*param_1 & 0xffffff0f);
    uVar4 = (uint)CARRY4(uVar6,*param_1 & 0xffffff0f);
    uVar6 = uVar10 + uVar4;
    iVar11 = (iVar11 * 5 + (uint)(bVar14 || CARRY4(uVar5,(uint)bVar13)) * 2 +
              (uint)(CARRY4(uVar7,uVar7) || CARRY4(uVar7 * 2,uVar1)) +
             (uint)(bVar15 || CARRY4(uVar8,uVar2))) * 2 +
             (uint)(CARRY4(uVar9,uVar9) || CARRY4(uVar9 * 2,uVar3)) + (uint)CARRY4(uVar10,uVar4);
  }
  uVar16 = crt_unknown_c_FUN_0060b5e8(uVar6,iVar11);
  *unaff_EBX = uVar16;
  *(short *)(unaff_EBX + 1) = (short)param_1;
  return;
}


// Assembly code:
// 0060b586: PUSH EBP
//   Label: crt_unknown.c_FUN_0060b586
// 0060b587: PUSH ESI
// 0060b588: PUSH EDI
// 0060b589: PUSH ECX
// 0060b58a: PUSH EBX
// 0060b58b: PUSH EDX
// 0060b58c: MOV ESI,EAX
// 0060b58e: SUB EDX,EDX
// 0060b590: SUB ECX,ECX
// 0060b592: SUB EBP,EBP
// 0060b594: SUB EAX,EAX
// 0060b596: MOV AL,byte ptr [ESI]
//   Label: LAB_0060b596
// 0060b598: CMP AL,0x0
// 0060b59a: JZ 0x0060b5cb
//   XREF to: 0060b5cb (CONDITIONAL_JUMP)
// 0060b59c: MOV EDI,EDX
// 0060b59e: MOV EBX,ECX
// 0060b5a0: MOV EAX,EBP
// 0060b5a2: ADD EBP,EBP
// 0060b5a4: ADC ECX,ECX
// 0060b5a6: ADC EDX,EDX
// 0060b5a8: ADD EBP,EBP
// 0060b5aa: ADC ECX,ECX
// 0060b5ac: ADC EDX,EDX
// 0060b5ae: ADD EBP,EAX
// 0060b5b0: ADC ECX,EBX
// 0060b5b2: ADC EDX,EDI
// 0060b5b4: ADD EBP,EBP
// 0060b5b6: ADC ECX,ECX
// 0060b5b8: ADC EDX,EDX
// 0060b5ba: SUB EAX,EAX
// 0060b5bc: MOV AL,byte ptr [ESI]
// 0060b5be: AND AL,0xf
// 0060b5c0: ADD EBP,EAX
// 0060b5c2: ADC ECX,0x0
// 0060b5c5: ADC EDX,0x0
// 0060b5c8: INC ESI
// 0060b5c9: JMP 0x0060b596
//   XREF to: 0060b596 (UNCONDITIONAL_JUMP)
// 0060b5cb: MOV EAX,ECX
//   Label: LAB_0060b5cb
// 0060b5cd: MOV EDI,0x405e
// 0060b5d2: CALL crt_unknown.c_FUN_0060b5e8
//   XREF to: 0060b5e8 (UNCONDITIONAL_CALL)
// 0060b5d7: POP EBP
// 0060b5d8: MOV dword ptr [EBP + 0x4],EDX
// 0060b5db: MOV dword ptr [EBP],EAX
// 0060b5de: MOV word ptr [EBP + 0x8],SI
// 0060b5e2: POP EBX
// 0060b5e3: POP ECX
// 0060b5e4: POP EDI
// 0060b5e5: POP ESI
// 0060b5e6: POP EBP
// 0060b5e7: RET
