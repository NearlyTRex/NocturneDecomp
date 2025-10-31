// Name: core_set.cpp_FUN_00571410
// Address: 00571410
// Address Range: [[00571410, 0057143f]]
// Convention: unknown
// Signature: undefined core_set.cpp_FUN_00571410()

#include "nocturne.h"

undefined4 core_set_cpp_FUN_00571410(void)

{
  float *in_stack_00000004;
  float *in_stack_00000008;
  
  if (((*in_stack_00000004 == *in_stack_00000008) && (in_stack_00000004[1] == in_stack_00000008[1]))
     && (in_stack_00000004[2] == in_stack_00000008[2])) {
    return 1;
  }
  return 0;
}


// Assembly code:
// 00571410: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_set.cpp_FUN_00571410
//   XREF to: Stack[0x4] (READ)
// 00571414: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00571418: FLD float ptr [EDX]
// 0057141a: FCOMP float ptr [ECX]
// 0057141c: FNSTSW AX
// 0057141e: SAHF
// 0057141f: JZ 0x00571424
//   XREF to: 00571424 (CONDITIONAL_JUMP)
// 00571421: XOR EAX,EAX
//   Label: LAB_00571421
// 00571423: RET
// 00571424: FLD float ptr [EDX + 0x4]
//   Label: LAB_00571424
// 00571427: FCOMP float ptr [ECX + 0x4]
// 0057142a: FNSTSW AX
// 0057142c: SAHF
// 0057142d: JNZ 0x00571421
//   XREF to: 00571421 (CONDITIONAL_JUMP)
// 0057142f: FLD float ptr [EDX + 0x8]
// 00571432: FCOMP float ptr [ECX + 0x8]
// 00571435: FNSTSW AX
// 00571437: SAHF
// 00571438: JNZ 0x00571421
//   XREF to: 00571421 (CONDITIONAL_JUMP)
// 0057143a: MOV EAX,0x1
// 0057143f: RET
