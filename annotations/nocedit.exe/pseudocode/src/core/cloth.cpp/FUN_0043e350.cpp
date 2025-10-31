// Name: core_cloth.cpp_FUN_0043e350
// Address: 0043e350
// Address Range: [[0043e350, 0043e37c]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_0043e350()
// Globals:
//   undefined4 DAT_02d7a7b8

#include "nocturne.h"

int core_cloth_cpp_FUN_0043e350(void)

{
  float *in_stack_00000004;
  
  return ((int)(in_stack_00000004[2] * in_stack_00000004[2] +
               *in_stack_00000004 * *in_stack_00000004 + in_stack_00000004[1] * in_stack_00000004[1]
               ) >> 1) + DAT_02d7a7b8;
}


// Assembly code:
// 0043e350: SUB ESP,0x4
//   Label: core_cloth.cpp_FUN_0043e350
// 0043e353: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0043e357: FLD float ptr [EAX + 0x4]
// 0043e35a: FMUL ST0
// 0043e35c: FLD float ptr [EAX]
// 0043e35e: FMUL ST0
// 0043e360: FADDP
// 0043e362: FLD float ptr [EAX + 0x8]
// 0043e365: FMUL ST0
// 0043e367: FADDP
// 0043e369: FSTP float ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 0043e36c: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 0043e36f: MOV EDX,dword ptr [0x02d7a7b8]
//   XREF to: 02d7a7b8 (READ)
// 0043e375: SAR EAX,0x1
// 0043e377: ADD EAX,EDX
// 0043e379: ADD ESP,0x4
// 0043e37c: RET
