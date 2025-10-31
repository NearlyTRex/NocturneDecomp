// Name: crt_stdio.c_getc_helper_FUN_005fe700
// Address: 005fe700
// Address Range: [[005fe700, 005fe71b]]
// Convention: __cdecl
// Signature: int crt_stdio.c_getc_helper_FUN_005fe700(scanf_state_t * state)
// Cross-references:
//   crt_stdio.c_vfscanf_FUN_005fe738 (005fe738) at 005fe78e [DATA]
// Function calls:
//   crt_stdio.c_fgetc_FUN_005fe840

#include "nocturne.h"

int __cdecl crt_stdio_c_getc_helper_FUN_005fe700(scanf_state_t *state)

{
  int iVar1;
  
  iVar1 = crt_stdio_c_fgetc_FUN_005fe840((FILE *)state->input_ptr);
  if (iVar1 == -1) {
    state->flags = state->flags | 2;
  }
  return iVar1;
}


// Assembly code:
// 005fe700: PUSH EBX
//   Label: crt_stdio.c_getc_helper_FUN_005fe700
// 005fe701: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005fe705: MOV EDX,dword ptr [EBX + 0x8]
// 005fe708: PUSH EDX
// 005fe709: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 005fe70e: ADD ESP,0x4
// 005fe711: MOV EDX,EAX
// 005fe713: CMP EAX,-0x1
// 005fe716: JNZ 0x005fe71c
//   XREF to: 005fe71c (CONDITIONAL_JUMP)
// 005fe718: OR byte ptr [EBX + 0x10],0x2
