// Name: crt_unknown.c_staticFinal_FUN_00608bb0
// Address: 00608bb0
// Address Range: [[00608bb0, 00608bcb]]
// Convention: unknown
// Signature: undefined crt_unknown.c_staticFinal_FUN_00608bb0()
// Globals:
//   SIOControlBlock* g_IOControlBlock = 00000000
// Function calls:
//   crt_memory.c_free_FUN_00601cd0

#include "nocturne.h"

void crt_unknown_c_staticFinal_FUN_00608bb0(void)

{
  if (g_IOControlBlock != (SIOControlBlock *)0x0) {
    crt_memory_c_free_FUN_00601cd0(g_IOControlBlock);
    g_IOControlBlock = (SIOControlBlock *)0x0;
  }
  return;
}


// Assembly code:
// 00608bb0: MOV EDX,dword ptr [0x0068526c]
//   Label: crt_unknown.c_staticFinal_FUN_00608bb0
//   XREF to: 0068526c (READ)
// 00608bb6: TEST EDX,EDX
// 00608bb8: JZ 0x00608bcb
//   XREF to: 00608bcb (CONDITIONAL_JUMP)
// 00608bba: PUSH EDX
// 00608bbb: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 00608bc0: XOR ECX,ECX
// 00608bc2: ADD ESP,0x4
// 00608bc5: MOV dword ptr [0x0068526c],ECX
//   XREF to: 0068526c (WRITE)
// 00608bcb: RET
//   Label: LAB_00608bcb
