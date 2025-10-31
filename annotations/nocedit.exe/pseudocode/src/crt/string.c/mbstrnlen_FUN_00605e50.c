// Name: crt_string.c_mbstrnlen_FUN_00605e50
// Address: 00605e50
// Address Range: [[00605e50, 00605e87]]
// Convention: __watcallStack
// Signature: int crt_string.c_mbstrnlen_FUN_00605e50(char * str, int max_bytes)
// Cross-references:
//   crt_file.c_extract_path_component_FUN_00610400 (00610400) at 0061042a [UNCONDITIONAL_CALL]
//   crt_string.c_strncpy_safe_FUN_005ff130 (005ff130) at 005ff14e [UNCONDITIONAL_CALL]
// Function calls:
//   crt_locale.c_mblen_FUN_00605a40
//   crt_string.c_mbstring_termination_check_FUN_0060b630

#include "nocturne.h"

int __watcallStack crt_string_c_mbstrnlen_FUN_00605e50(char *str,int max_bytes)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  for (; (iVar1 = crt_string_c_mbstring_termination_check_FUN_0060b630(str), iVar1 == 0 &&
         (max_bytes != 0)); max_bytes = max_bytes - uVar2) {
    uVar2 = crt_locale_c_mblen_FUN_00605a40(str);
    if ((uint)max_bytes < uVar2) {
      return iVar3;
    }
    iVar3 = iVar3 + 1;
    str = str + uVar2;
  }
  return iVar3;
}


// Assembly code:
// 00605e50: PUSH EBX
//   Label: crt_string.c_mbstrnlen_FUN_00605e50
// 00605e51: PUSH ESI
// 00605e52: PUSH EDI
// 00605e53: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00605e57: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00605e5b: XOR EDI,EDI
// 00605e5d: PUSH EBX
//   Label: LAB_00605e5d
// 00605e5e: CALL crt_string.c_mbstring_termination_check_FUN_0060b630
//   XREF to: 0060b630 (UNCONDITIONAL_CALL)
// 00605e63: ADD ESP,0x4
// 00605e66: TEST EAX,EAX
// 00605e68: JNZ 0x00605e82
//   XREF to: 00605e82 (CONDITIONAL_JUMP)
// 00605e6a: TEST ESI,ESI
// 00605e6c: JBE 0x00605e82
//   XREF to: 00605e82 (CONDITIONAL_JUMP)
// 00605e6e: PUSH EBX
// 00605e6f: CALL crt_locale.c_mblen_FUN_00605a40
//   XREF to: 00605a40 (UNCONDITIONAL_CALL)
// 00605e74: ADD ESP,0x4
// 00605e77: CMP ESI,EAX
// 00605e79: JC 0x00605e82
//   XREF to: 00605e82 (CONDITIONAL_JUMP)
// 00605e7b: INC EDI
// 00605e7c: SUB ESI,EAX
// 00605e7e: ADD EBX,EAX
// 00605e80: JMP 0x00605e5d
//   XREF to: 00605e5d (UNCONDITIONAL_JUMP)
// 00605e82: MOV EAX,EDI
//   Label: LAB_00605e82
// 00605e84: POP EDI
// 00605e85: POP ESI
// 00605e86: POP EBX
// 00605e87: RET
