// Name: core_bodypart.cpp_FUN_0041b510
// Address: 0041b510
// Address Range: [[0041b510, 0041b534]]
// Convention: unknown
// Signature: undefined core_bodypart.cpp_FUN_0041b510()
// Cross-references:
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055f588 [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 actors_other_bodypart.cpp_FUN_0041b510(undefined4 param_1, undefined4
   param_2, undefined4 param_3) */

void core_bodypart_cpp_FUN_0041b510(void)

{
  float *in_stack_00000004;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  
  *in_stack_00000008 = *in_stack_00000004 - *in_stack_0000000c;
  in_stack_00000008[1] = in_stack_00000004[1] - in_stack_0000000c[1];
  in_stack_00000008[2] = in_stack_00000004[2] - in_stack_0000000c[2];
  return;
}


// Assembly code:
// 0041b510: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_bodypart.cpp_FUN_0041b510
//   XREF to: Stack[0x4] (READ)
// 0041b514: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0041b518: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 0041b51c: FLD float ptr [EDX]
// 0041b51e: FSUB float ptr [ECX]
// 0041b520: FSTP float ptr [EAX]
// 0041b522: FLD float ptr [EDX + 0x4]
// 0041b525: FSUB float ptr [ECX + 0x4]
// 0041b528: FSTP float ptr [EAX + 0x4]
// 0041b52b: FLD float ptr [EDX + 0x8]
// 0041b52e: FSUB float ptr [ECX + 0x8]
// 0041b531: FSTP float ptr [EAX + 0x8]
// 0041b534: RET
