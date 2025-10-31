// Name: core_set.cpp_FUN_00571440
// Address: 00571440
// Address Range: [[00571440, 0057146f]]
// Convention: unknown
// Signature: undefined core_set.cpp_FUN_00571440()

#include "nocturne.h"

undefined4 core_set_cpp_FUN_00571440(void)

{
  float *in_stack_00000004;
  float *in_stack_00000008;
  
  if (((*in_stack_00000004 == *in_stack_00000008) && (in_stack_00000004[1] == in_stack_00000008[1]))
     && (in_stack_00000004[2] == in_stack_00000008[2])) {
    return 0;
  }
  return 1;
}


// Assembly code:
// 00571440: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_set.cpp_FUN_00571440
//   XREF to: Stack[0x4] (READ)
// 00571444: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00571448: FLD float ptr [EDX]
// 0057144a: FCOMP float ptr [ECX]
// 0057144c: FNSTSW AX
// 0057144e: SAHF
// 0057144f: JZ 0x00571457
//   XREF to: 00571457 (CONDITIONAL_JUMP)
// 00571451: MOV EAX,0x1
//   Label: LAB_00571451
// 00571456: RET
// 00571457: FLD float ptr [EDX + 0x4]
//   Label: LAB_00571457
// 0057145a: FCOMP float ptr [ECX + 0x4]
// 0057145d: FNSTSW AX
// 0057145f: SAHF
// 00571460: JNZ 0x00571451
//   XREF to: 00571451 (CONDITIONAL_JUMP)
// 00571462: FLD float ptr [EDX + 0x8]
// 00571465: FCOMP float ptr [ECX + 0x8]
// 00571468: FNSTSW AX
// 0057146a: SAHF
// 0057146b: JNZ 0x00571451
//   XREF to: 00571451 (CONDITIONAL_JUMP)
// 0057146d: XOR EAX,EAX
// 0057146f: RET
