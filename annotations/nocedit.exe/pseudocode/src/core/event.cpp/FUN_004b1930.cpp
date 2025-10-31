// Name: core_event.cpp_FUN_004b1930
// Address: 004b1930
// Address Range: [[004b1930, 004b1964]]
// Convention: unknown
// Signature: undefined core_event.cpp_FUN_004b1930()

#include "nocturne.h"

float core_event_cpp_FUN_004b1930(void)

{
  float *in_stack_00000004;
  float *in_stack_00000008;
  
  return SQRT((in_stack_00000004[2] - in_stack_00000008[2]) *
              (in_stack_00000004[2] - in_stack_00000008[2]) +
              (in_stack_00000004[1] - in_stack_00000008[1]) *
              (in_stack_00000004[1] - in_stack_00000008[1]) +
              (*in_stack_00000004 - *in_stack_00000008) * (*in_stack_00000004 - *in_stack_00000008))
  ;
}


// Assembly code:
// 004b1930: SUB ESP,0x10
//   Label: core_event.cpp_FUN_004b1930
// 004b1933: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004b1937: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004b193b: FLD float ptr [EDX]
// 004b193d: FSUB float ptr [EAX]
// 004b193f: FMUL ST0
// 004b1941: FLD float ptr [EDX + 0x4]
// 004b1944: FSUB float ptr [EAX + 0x4]
// 004b1947: FMUL ST0
// 004b1949: FLD float ptr [EDX + 0x8]
// 004b194c: FXCH
// 004b194e: FADDP ST2,ST0
// 004b1950: FSUB float ptr [EAX + 0x8]
// 004b1953: FMUL ST0
// 004b1955: FADDP
// 004b1957: FSQRT
// 004b1959: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x8] (WRITE)
// 004b195d: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x8] (READ)
// 004b1961: ADD ESP,0x10
// 004b1964: RET
