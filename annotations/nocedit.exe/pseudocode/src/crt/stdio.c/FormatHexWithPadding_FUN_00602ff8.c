// Name: crt_stdio.c_FormatHexWithPadding_FUN_00602ff8
// Address: 00602ff8
// Address Range: [[00602ff8, 0060305a]]
// Convention: __cdecl
// Signature: void crt_stdio.c_FormatHexWithPadding_FUN_00602ff8(int value, char * buffer, int width)
// Cross-references:
//   crt_stdio.c_ConvertFormatSpec_FUN_00603238 (00603238) at 00603745 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_IntegerToString_FUN_00607d18

#include "nocturne.h"

void __cdecl crt_stdio_c_FormatHexWithPadding_FUN_00602ff8(int value,char *buffer,int width)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  int in_stack_00000010;
  
  bVar7 = 0;
  crt_stdio_c_IntegerToString_FUN_00607d18(value,buffer,0x10);
  uVar4 = 0xffffffff;
  pcVar5 = buffer;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + (uint)bVar7 * -2 + 1;
  } while (cVar2 != '\0');
  iVar3 = in_stack_00000010 + -1;
  if (~uVar4 - 1 != 0) {
    pcVar5 = buffer + (~uVar4 - 1);
    pcVar6 = buffer + iVar3;
    do {
      pcVar1 = pcVar5 + -1;
      pcVar5 = pcVar5 + -1;
      iVar3 = iVar3 + -1;
      *pcVar6 = *pcVar1;
      pcVar6 = pcVar6 + -1;
    } while (pcVar5 != buffer);
  }
  pcVar5 = buffer + iVar3;
  for (; -1 < iVar3; iVar3 = iVar3 + -1) {
    *pcVar5 = '0';
    pcVar5 = pcVar5 + -1;
  }
  buffer[in_stack_00000010] = '\0';
  return;
}


// Assembly code:
// 00602ff8: PUSH EBX
//   Label: crt_stdio.c_FormatHexWithPadding_FUN_00602ff8
// 00602ff9: PUSH ESI
// 00602ffa: PUSH EDI
// 00602ffb: PUSH EBP
// 00602ffc: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00603000: PUSH 0x10
// 00603002: PUSH EBP
// 00603003: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 00603007: PUSH EDX
// 00603008: CALL crt_stdio.c_IntegerToString_FUN_00607d18
//   XREF to: 00607d18 (UNCONDITIONAL_CALL)
// 0060300d: ADD ESP,0xc
// 00603010: MOV EDI,EBP
// 00603012: PUSH ES
// 00603013: MOV AX,DS
// 00603015: MOV ES,AX
// 00603017: SUB ECX,ECX
// 00603019: DEC ECX
// 0060301a: XOR EAX,EAX
// 0060301c: SCASB.REPNE ES:EDI
// 0060301e: NOT ECX
// 00603020: DEC ECX
// 00603021: POP ES
// 00603022: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00603026: DEC EAX
// 00603027: TEST ECX,ECX
// 00603029: JZ 0x00603040
//   XREF to: 00603040 (CONDITIONAL_JUMP)
// 0060302b: MOV ESI,EBP
// 0060302d: LEA EBX,[EAX + EBP*0x1]
// 00603030: LEA EDX,[ECX + EBP*0x1]
// 00603033: DEC EBX
//   Label: LAB_00603033
// 00603034: MOV CL,byte ptr [EDX + -0x1]
// 00603037: DEC EDX
// 00603038: DEC EAX
// 00603039: MOV byte ptr [EBX + 0x1],CL
// 0060303c: CMP EDX,ESI
// 0060303e: JNZ 0x00603033
//   XREF to: 00603033 (CONDITIONAL_JUMP)
// 00603040: LEA EDX,[EAX + EBP*0x1]
//   Label: LAB_00603040
// 00603043: TEST EAX,EAX
//   Label: LAB_00603043
// 00603045: JL 0x0060304e
//   XREF to: 0060304e (CONDITIONAL_JUMP)
// 00603047: DEC EAX
// 00603048: MOV byte ptr [EDX],0x30
// 0060304b: DEC EDX
// 0060304c: JMP 0x00603043
//   XREF to: 00603043 (UNCONDITIONAL_JUMP)
// 0060304e: ADD EBP,dword ptr [ESP + 0x1c]
//   Label: LAB_0060304e
//   XREF to: Stack[0xc] (READ)
// 00603052: MOV byte ptr [EBP],0x0
// 00603056: POP EBP
// 00603057: POP EDI
// 00603058: POP ESI
// 00603059: POP EBX
// 0060305a: RET
