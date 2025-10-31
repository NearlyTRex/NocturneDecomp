// Name: crt_stdio.c_string_ungetc_FUN_006000f8
// Address: 006000f8
// Address Range: [[006000f8, 006000ff]]
// Convention: __cdecl
// Signature: int crt_stdio.c_string_ungetc_FUN_006000f8(int ch, scanf_state_t * state)
// Cross-references:
//   crt_stdio.c_vsscanf_FUN_00600100 (00600100) at 00600120 [PARAM]

#include "nocturne.h"

int __cdecl crt_stdio_c_string_ungetc_FUN_006000f8(int ch,scanf_state_t *state)

{
  state->input_ptr = (void *)((int)state->input_ptr + -1);
  return (int)state;
}


// Assembly code:
// 006000f8: MOV EAX,dword ptr [ESP + 0x8]
//   Label: crt_stdio.c_string_ungetc_FUN_006000f8
//   XREF to: Stack[0x8] (READ)
// 006000fc: DEC dword ptr [EAX + 0x8]
// 006000ff: RET
