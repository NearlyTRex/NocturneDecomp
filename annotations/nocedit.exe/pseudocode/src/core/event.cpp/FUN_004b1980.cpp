// Name: core_event.cpp_FUN_004b1980
// Address: 004b1980
// Address Range: [[004b1980, 004b199b]]
// Convention: unknown
// Signature: undefined core_event.cpp_FUN_004b1980()

#include "nocturne.h"

undefined4 core_event_cpp_FUN_004b1980(void)

{
  int in_stack_00000004;
  
  if (0.0 < *(float *)(in_stack_00000004 + 0x2618)) {
    return 1;
  }
  return 0;
}


// Assembly code:
// 004b1980: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_event.cpp_FUN_004b1980
//   XREF to: Stack[0x4] (READ)
// 004b1984: FLD float ptr [EAX + 0x2618]
// 004b198a: FLDZ
// 004b198c: FCOMPP
// 004b198e: FNSTSW AX
// 004b1990: SAHF
// 004b1991: JNC 0x004b1999
//   XREF to: 004b1999 (CONDITIONAL_JUMP)
// 004b1993: MOV EAX,0x1
// 004b1998: RET
// 004b1999: XOR EAX,EAX
//   Label: LAB_004b1999
// 004b199b: RET
