// Name: crt_math.c_UDivMod64_FUN_0060d3ed
// Address: 0060d3ed
// Address Range: [[0060d3ed, 0060d47a]]
// Convention: __cdecl
// Signature: void crt_math.c_UDivMod64_FUN_0060d3ed(ulonglong dividend, ulonglong divisor)
// Cross-references:
//   crt_stdlib.c_i64toa_FUN_0060ad40 (0060ad40) at 0060ad8f [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Returns: EDX:EAX = quotient, ECX:EBX = remainder */

void __cdecl crt_math_c_UDivMod64_FUN_0060d3ed(ulonglong dividend,ulonglong divisor)

{
  uint uVar1;
  uint uVar2;
  uint in_EAX;
  uint in_ECX;
  uint in_EDX;
  uint unaff_EBX;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  
  if (in_ECX == 0) {
    return;
  }
  if (in_ECX < in_EDX) {
    uVar4 = 0;
    uVar5 = 0;
    iVar3 = 0;
    do {
      bVar6 = CARRY4(unaff_EBX,unaff_EBX);
      unaff_EBX = unaff_EBX * 2;
      bVar7 = CARRY4(in_ECX,in_ECX) || CARRY4(in_ECX * 2,(uint)bVar6);
      in_ECX = in_ECX * 2 + (uint)bVar6;
      if (bVar7) goto LAB_0060d44d;
      iVar3 = iVar3 + 1;
    } while ((in_ECX < in_EDX) || ((in_ECX <= in_EDX && (unaff_EBX <= in_EAX))));
    bVar6 = false;
    do {
      do {
        bVar7 = CARRY4(uVar4,uVar4);
        uVar1 = uVar4 * 2;
        uVar4 = uVar1 + bVar6;
        uVar1 = (uint)(bVar7 || CARRY4(uVar1,(uint)bVar6));
        bVar7 = CARRY4(uVar5,uVar5) || CARRY4(uVar5 * 2,uVar1);
        uVar5 = uVar5 * 2 + uVar1;
        iVar3 = iVar3 + -1;
        if (iVar3 < 0) {
          return;
        }
LAB_0060d44d:
        uVar1 = in_ECX & 1;
        in_ECX = in_ECX >> 1 | (uint)bVar7 << 0x1f;
        unaff_EBX = unaff_EBX >> 1 | (uint)(uVar1 != 0) << 0x1f;
        bVar6 = in_EAX < unaff_EBX;
        in_EAX = in_EAX - unaff_EBX;
        uVar1 = (uint)bVar6;
        bVar7 = in_ECX <= in_EDX;
        uVar2 = in_EDX - in_ECX;
        in_EDX = uVar2 - uVar1;
        bVar6 = bVar7 && uVar1 <= uVar2;
      } while (bVar7 && uVar1 <= uVar2);
      do {
        bVar6 = CARRY4(uVar4,uVar4);
        uVar4 = uVar4 * 2;
        uVar5 = uVar5 * 2 + (uint)bVar6;
        iVar3 = iVar3 + -1;
        if (iVar3 < 0) {
          return;
        }
        uVar1 = in_ECX & 1;
        in_ECX = in_ECX >> 1;
        unaff_EBX = unaff_EBX >> 1 | (uint)(uVar1 != 0) << 0x1f;
        bVar6 = CARRY4(in_EAX,unaff_EBX);
        in_EAX = in_EAX + unaff_EBX;
        uVar1 = (uint)bVar6;
        bVar7 = CARRY4(in_EDX,in_ECX);
        uVar2 = in_EDX + in_ECX;
        bVar6 = bVar7 || CARRY4(uVar2,uVar1);
        in_EDX = uVar2 + uVar1;
      } while (!bVar7 && !CARRY4(uVar2,uVar1));
    } while( true );
  }
  if ((in_ECX == in_EDX) && (unaff_EBX <= in_EAX)) {
    return;
  }
  return;
}


// Assembly code:
// 0060d3ed: OR ECX,ECX
//   Label: crt_math.c_UDivMod64_FUN_0060d3ed
// 0060d3ef: JNZ 0x0060d40b
//   XREF to: 0060d40b (CONDITIONAL_JUMP)
// 0060d3f1: DEC EBX
// 0060d3f2: JZ 0x0060d40a
//   XREF to: 0060d40a (CONDITIONAL_JUMP)
// 0060d3f4: INC EBX
// 0060d3f5: CMP EBX,EDX
// 0060d3f7: JA 0x0060d402
//   XREF to: 0060d402 (CONDITIONAL_JUMP)
// 0060d3f9: MOV ECX,EAX
// 0060d3fb: MOV EAX,EDX
// 0060d3fd: SUB EDX,EDX
// 0060d3ff: DIV EBX
// 0060d401: XCHG EAX,ECX
// 0060d402: DIV EBX
//   Label: LAB_0060d402
// 0060d404: MOV EBX,EDX
// 0060d406: MOV EDX,ECX
// 0060d408: SUB ECX,ECX
// 0060d40a: RET
//   Label: LAB_0060d40a
// 0060d40b: CMP ECX,EDX
//   Label: LAB_0060d40b
// 0060d40d: JC 0x0060d42b
//   XREF to: 0060d42b (CONDITIONAL_JUMP)
// 0060d40f: JNZ 0x0060d423
//   XREF to: 0060d423 (CONDITIONAL_JUMP)
// 0060d411: CMP EBX,EAX
// 0060d413: JA 0x0060d423
//   XREF to: 0060d423 (CONDITIONAL_JUMP)
// 0060d415: SUB EAX,EBX
// 0060d417: MOV EBX,EAX
// 0060d419: SUB ECX,ECX
// 0060d41b: SUB EDX,EDX
// 0060d41d: MOV EAX,0x1
// 0060d422: RET
// 0060d423: SUB ECX,ECX
//   Label: LAB_0060d423
// 0060d425: SUB EBX,EBX
// 0060d427: XCHG EAX,EBX
// 0060d428: XCHG EDX,ECX
// 0060d42a: RET
// 0060d42b: PUSH EBP
//   Label: LAB_0060d42b
// 0060d42c: PUSH ESI
// 0060d42d: PUSH EDI
// 0060d42e: SUB ESI,ESI
// 0060d430: MOV EDI,ESI
// 0060d432: MOV EBP,ESI
// 0060d434: ADD EBX,EBX
//   Label: LAB_0060d434
// 0060d436: ADC ECX,ECX
// 0060d438: JC 0x0060d44d
//   XREF to: 0060d44d (CONDITIONAL_JUMP)
// 0060d43a: INC EBP
// 0060d43b: CMP ECX,EDX
// 0060d43d: JC 0x0060d434
//   XREF to: 0060d434 (CONDITIONAL_JUMP)
// 0060d43f: JA 0x0060d445
//   XREF to: 0060d445 (CONDITIONAL_JUMP)
// 0060d441: CMP EBX,EAX
// 0060d443: JBE 0x0060d434
//   XREF to: 0060d434 (CONDITIONAL_JUMP)
// 0060d445: CLC
//   Label: LAB_0060d445
// 0060d446: ADC ESI,ESI
//   Label: LAB_0060d446
// 0060d448: ADC EDI,EDI
// 0060d44a: DEC EBP
// 0060d44b: JS 0x0060d46f
//   XREF to: 0060d46f (CONDITIONAL_JUMP)
// 0060d44d: RCR ECX,0x1
//   Label: LAB_0060d44d
// 0060d44f: RCR EBX,0x1
// 0060d451: SUB EAX,EBX
// 0060d453: SBB EDX,ECX
// 0060d455: CMC
// 0060d456: JC 0x0060d446
//   XREF to: 0060d446 (CONDITIONAL_JUMP)
// 0060d458: ADD ESI,ESI
//   Label: LAB_0060d458
// 0060d45a: ADC EDI,EDI
// 0060d45c: DEC EBP
// 0060d45d: JS 0x0060d46b
//   XREF to: 0060d46b (CONDITIONAL_JUMP)
// 0060d45f: SHR ECX,0x1
// 0060d461: RCR EBX,0x1
// 0060d463: ADD EAX,EBX
// 0060d465: ADC EDX,ECX
// 0060d467: JNC 0x0060d458
//   XREF to: 0060d458 (CONDITIONAL_JUMP)
// 0060d469: JMP 0x0060d446
//   XREF to: 0060d446 (UNCONDITIONAL_JUMP)
// 0060d46b: ADD EAX,EBX
//   Label: LAB_0060d46b
// 0060d46d: ADC EDX,ECX
// 0060d46f: MOV EBX,EAX
//   Label: LAB_0060d46f
// 0060d471: MOV ECX,EDX
// 0060d473: MOV EAX,ESI
// 0060d475: MOV EDX,EDI
// 0060d477: POP EDI
// 0060d478: POP ESI
// 0060d479: POP EBP
// 0060d47a: RET
