// Name: crt_stdio.c_string_getc_FUN_006000d0
// Address: 006000d0
// Address Range: [[006000d0, 006000f5]]
// Convention: __cdecl
// Signature: int crt_stdio.c_string_getc_FUN_006000d0(scanf_state_t * state)
// Cross-references:
//   crt_stdio.c_vsscanf_FUN_00600100 (00600100) at 00600126 [DATA]

#include "nocturne.h"

int __cdecl crt_stdio_c_string_getc_FUN_006000d0(scanf_state_t *state)

{
  uint uVar1;
  
                    /* WARNING: Load size is inaccurate */
  uVar1 = (uint)*state->input_ptr;
  if (uVar1 != 0) {
    state->input_ptr = (byte *)((int)state->input_ptr + 1);
    return uVar1;
  }
  state->flags = state->flags | 2;
  return -1;
}


// Assembly code:
// 006000d0: PUSH EBX
//   Label: crt_stdio.c_string_getc_FUN_006000d0
// 006000d1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 006000d5: MOV EDX,dword ptr [EBX + 0x8]
// 006000d8: XOR EAX,EAX
// 006000da: MOV AL,byte ptr [EDX]
// 006000dc: TEST EAX,EAX
// 006000de: JZ 0x006000e6
//   XREF to: 006000e6 (CONDITIONAL_JUMP)
// 006000e0: INC EDX
// 006000e1: MOV dword ptr [EBX + 0x8],EDX
// 006000e4: POP EBX
// 006000e5: RET
// 006000e6: MOV DL,byte ptr [EBX + 0x10]
//   Label: LAB_006000e6
// 006000e9: OR DL,0x2
// 006000ec: MOV EAX,0xffffffff
// 006000f1: MOV byte ptr [EBX + 0x10],DL
// 006000f4: POP EBX
// 006000f5: RET
