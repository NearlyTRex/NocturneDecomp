// Name: core_set.cpp_FUN_0056fba0
// Address: 0056fba0
// Address Range: [[0056fba0, 0056fbcc]]
// Convention: unknown
// Signature: undefined core_set.cpp_FUN_0056fba0()
// Cross-references:
//   core_set.cpp_CDemonSet_FUN_0056fbd0 (0056fbd0) at 0056fc90 [DATA]

#include "nocturne.h"

undefined4 core_set_cpp_FUN_0056fba0(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  
  if (*(float *)(in_stack_00000008 + 4) < *(float *)(in_stack_00000004 + 4)) {
    return 1;
  }
  if (*(float *)(in_stack_00000004 + 4) < *(float *)(in_stack_00000008 + 4)) {
    return 0xffffffff;
  }
  return 0;
}


// Assembly code:
// 0056fba0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_set.cpp_FUN_0056fba0
//   XREF to: Stack[0x4] (READ)
// 0056fba4: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0056fba8: FLD float ptr [EDX + 0x4]
// 0056fbab: FCOMP float ptr [ECX + 0x4]
// 0056fbae: FNSTSW AX
// 0056fbb0: SAHF
// 0056fbb1: JA 0x0056fbc4
//   XREF to: 0056fbc4 (CONDITIONAL_JUMP)
// 0056fbb3: FLD float ptr [EDX + 0x4]
// 0056fbb6: FCOMP float ptr [ECX + 0x4]
// 0056fbb9: FNSTSW AX
// 0056fbbb: SAHF
// 0056fbbc: JNC 0x0056fbca
//   XREF to: 0056fbca (CONDITIONAL_JUMP)
// 0056fbbe: MOV EAX,0xffffffff
// 0056fbc3: RET
// 0056fbc4: MOV EAX,0x1
//   Label: LAB_0056fbc4
// 0056fbc9: RET
// 0056fbca: XOR EAX,EAX
//   Label: LAB_0056fbca
// 0056fbcc: RET
