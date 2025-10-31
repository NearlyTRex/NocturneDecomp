// Name: sound_mp3.cpp_FUN_0052eca0
// Address: 0052eca0
// Address Range: [[0052eca0, 0052ece0]]
// Convention: unknown
// Signature: undefined sound_mp3.cpp_FUN_0052eca0()
// Function calls:
//   crt_stdio.c_fseek_FUN_005ffacc

#include "nocturne.h"

void sound_mp3_cpp_FUN_0052eca0(void)

{
  undefined4 *in_stack_00000004;
  
  crt_stdio_c_fseek_FUN_005ffacc((FILE *)*in_stack_00000004,in_stack_00000004[8],0);
  in_stack_00000004[4] = 0;
  in_stack_00000004[5] = 0;
  in_stack_00000004[3] = 0;
  in_stack_00000004[6] = 0;
  in_stack_00000004[7] = 0;
  in_stack_00000004[10] = in_stack_00000004[9];
  return;
}


// Assembly code:
// 0052eca0: PUSH EBX
//   Label: sound_mp3.cpp_FUN_0052eca0
// 0052eca1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0052eca5: PUSH 0x0
// 0052eca7: MOV EDX,dword ptr [EBX + 0x20]
// 0052ecaa: PUSH EDX
// 0052ecab: MOV ECX,dword ptr [EBX]
// 0052ecad: PUSH ECX
// 0052ecae: CALL crt_stdio.c_fseek_FUN_005ffacc
//   XREF to: 005ffacc (UNCONDITIONAL_CALL)
// 0052ecb3: MOV dword ptr [EBX + 0x10],0x0
// 0052ecba: MOV dword ptr [EBX + 0x14],0x0
// 0052ecc1: MOV dword ptr [EBX + 0xc],0x0
// 0052ecc8: MOV dword ptr [EBX + 0x18],0x0
// 0052eccf: MOV dword ptr [EBX + 0x1c],0x0
// 0052ecd6: MOV EAX,dword ptr [EBX + 0x24]
// 0052ecd9: ADD ESP,0xc
// 0052ecdc: MOV dword ptr [EBX + 0x28],EAX
// 0052ecdf: POP EBX
// 0052ece0: RET
