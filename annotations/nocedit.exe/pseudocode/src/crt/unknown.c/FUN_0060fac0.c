// Name: crt_unknown.c_FUN_0060fac0
// Address: 0060fac0
// Address Range: [[0060fac0, 0060fb39]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060fac0()
// Cross-references:
//   crt_env.c_putenv_internal_FUN_0060ee80 (0060ee80) at 0060f018 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00610900 (00610900) at 0061093c [UNCONDITIONAL_CALL]
// Function calls:
//   crt_locale.c_mbtowc_FUN_0060b1c0
//   crt_string.c_mbtowc_next_FUN_00605a70

#include "nocturne.h"

int crt_unknown_c_FUN_0060fac0(void)

{
  int iVar1;
  int iVar2;
  wchar_t *in_stack_00000004;
  char *in_stack_00000008;
  int in_stack_0000000c;
  
  iVar2 = 0;
  if (in_stack_00000004 == (wchar_t *)0x0) {
    while ((iVar1 = iVar2, *in_stack_00000008 != '\0' &&
           (iVar1 = crt_locale_c_mbtowc_FUN_0060b1c0((wchar_t *)0x0,in_stack_00000008,2),
           iVar1 != -1))) {
      in_stack_00000008 = crt_string_c_mbtowc_next_FUN_00605a70(in_stack_00000008);
      iVar2 = iVar2 + 1;
    }
  }
  else {
    for (; iVar1 = iVar2, in_stack_0000000c != 0; in_stack_0000000c = in_stack_0000000c + -1) {
      if (*in_stack_00000008 == '\0') {
        *in_stack_00000004 = L'\0';
        return iVar2;
      }
      iVar1 = crt_locale_c_mbtowc_FUN_0060b1c0(in_stack_00000004,in_stack_00000008,2);
      if (iVar1 == -1) {
        return -1;
      }
      in_stack_00000008 = crt_string_c_mbtowc_next_FUN_00605a70(in_stack_00000008);
      in_stack_00000004 = in_stack_00000004 + 1;
      iVar2 = iVar2 + 1;
    }
  }
  return iVar1;
}


// Assembly code:
// 0060fac0: PUSH EBX
//   Label: crt_unknown.c_FUN_0060fac0
// 0060fac1: PUSH ESI
// 0060fac2: PUSH EDI
// 0060fac3: PUSH EBP
// 0060fac4: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0060fac8: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0060facc: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0060fad0: XOR ESI,ESI
// 0060fad2: TEST EDI,EDI
// 0060fad4: JZ 0x0060fb0e
//   XREF to: 0060fb0e (CONDITIONAL_JUMP)
// 0060fad6: TEST EBP,EBP
//   Label: LAB_0060fad6
// 0060fad8: JBE 0x0060fb33
//   XREF to: 0060fb33 (CONDITIONAL_JUMP)
// 0060fada: CMP byte ptr [EBX],0x0
// 0060fadd: JZ 0x0060faf5
//   XREF to: 0060faf5 (CONDITIONAL_JUMP)
// 0060fadf: PUSH 0x2
// 0060fae1: PUSH EBX
// 0060fae2: PUSH EDI
// 0060fae3: CALL crt_locale.c_mbtowc_FUN_0060b1c0
//   XREF to: 0060b1c0 (UNCONDITIONAL_CALL)
// 0060fae8: ADD ESP,0xc
// 0060faeb: CMP EAX,-0x1
// 0060faee: JNZ 0x0060fafc
//   XREF to: 0060fafc (CONDITIONAL_JUMP)
// 0060faf0: POP EBP
// 0060faf1: POP EDI
// 0060faf2: POP ESI
// 0060faf3: POP EBX
// 0060faf4: RET
// 0060faf5: MOV word ptr [EDI],0x0
//   Label: LAB_0060faf5
// 0060fafa: JMP 0x0060fb33
//   XREF to: 0060fb33 (UNCONDITIONAL_JUMP)
// 0060fafc: PUSH EBX
//   Label: LAB_0060fafc
// 0060fafd: DEC EBP
// 0060fafe: CALL crt_string.c_mbtowc_next_FUN_00605a70
//   XREF to: 00605a70 (UNCONDITIONAL_CALL)
// 0060fb03: ADD EDI,0x2
// 0060fb06: INC ESI
// 0060fb07: ADD ESP,0x4
// 0060fb0a: MOV EBX,EAX
// 0060fb0c: JMP 0x0060fad6
//   XREF to: 0060fad6 (UNCONDITIONAL_JUMP)
// 0060fb0e: CMP byte ptr [EBX],0x0
//   Label: LAB_0060fb0e
// 0060fb11: JZ 0x0060fb33
//   XREF to: 0060fb33 (CONDITIONAL_JUMP)
// 0060fb13: PUSH 0x2
// 0060fb15: PUSH EBX
// 0060fb16: PUSH 0x0
// 0060fb18: CALL crt_locale.c_mbtowc_FUN_0060b1c0
//   XREF to: 0060b1c0 (UNCONDITIONAL_CALL)
// 0060fb1d: ADD ESP,0xc
// 0060fb20: CMP EAX,-0x1
// 0060fb23: JZ 0x0060fb35
//   XREF to: 0060fb35 (CONDITIONAL_JUMP)
// 0060fb25: PUSH EBX
// 0060fb26: CALL crt_string.c_mbtowc_next_FUN_00605a70
//   XREF to: 00605a70 (UNCONDITIONAL_CALL)
// 0060fb2b: INC ESI
// 0060fb2c: ADD ESP,0x4
// 0060fb2f: MOV EBX,EAX
// 0060fb31: JMP 0x0060fb0e
//   XREF to: 0060fb0e (UNCONDITIONAL_JUMP)
// 0060fb33: MOV EAX,ESI
//   Label: LAB_0060fb33
// 0060fb35: POP EBP
//   Label: LAB_0060fb35
// 0060fb36: POP EDI
// 0060fb37: POP ESI
// 0060fb38: POP EBX
// 0060fb39: RET
