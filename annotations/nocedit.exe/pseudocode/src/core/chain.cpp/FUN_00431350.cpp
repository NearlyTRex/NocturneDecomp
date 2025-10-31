// Name: core_chain.cpp_FUN_00431350
// Address: 00431350
// Address Range: [[00431350, 0043135e]]
// Convention: unknown
// Signature: undefined core_chain.cpp_FUN_00431350()
// Globals:
//   undefined4 DAT_02d7a7b8

#include "nocturne.h"

int core_chain_cpp_FUN_00431350(void)

{
  int in_stack_00000004;
  
  return (in_stack_00000004 >> 1) + DAT_02d7a7b8;
}


// Assembly code:
// 00431350: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_chain.cpp_FUN_00431350
//   XREF to: Stack[0x4] (READ)
// 00431354: MOV EDX,dword ptr [0x02d7a7b8]
//   XREF to: 02d7a7b8 (READ)
// 0043135a: SAR EAX,0x1
// 0043135c: ADD EAX,EDX
// 0043135e: RET
