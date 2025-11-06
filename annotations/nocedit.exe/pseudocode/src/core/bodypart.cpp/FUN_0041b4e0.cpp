// Name: core_bodypart.cpp_FUN_0041b4e0
// Address: 0041b4e0
// Address Range: [[0041b4e0, 0041b502]]
// Convention: unknown
// Signature: undefined core_bodypart.cpp_FUN_0041b4e0()
// Cross-references:
//   core_boneguy.cpp_FUN_0041cc40 (0041cc40) at 0041ce4e [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00526d90 (00526d90) at 00526fcf [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_PickupSomethingPossibly_FUN_005fb530 (005fb530) at 005fb7a8 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void core_bodypart_cpp_FUN_0041b4e0(void)

{
  float *in_stack_00000004;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  
  *in_stack_00000008 = *in_stack_00000004 * *in_stack_0000000c;
  in_stack_00000008[1] = in_stack_00000004[1] * *in_stack_0000000c;
  in_stack_00000008[2] = in_stack_00000004[2] * *in_stack_0000000c;
  return;
}


// Assembly code:
// 0041b4e0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_bodypart.cpp_FUN_0041b4e0
//   XREF to: Stack[0x4] (READ)
// 0041b4e4: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0041b4e8: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 0041b4ec: FLD float ptr [EDX]
// 0041b4ee: FMUL float ptr [ECX]
// 0041b4f0: FSTP float ptr [EAX]
// 0041b4f2: FLD float ptr [EDX + 0x4]
// 0041b4f5: FMUL float ptr [ECX]
// 0041b4f7: FSTP float ptr [EAX + 0x4]
// 0041b4fa: FLD float ptr [EDX + 0x8]
// 0041b4fd: FMUL float ptr [ECX]
// 0041b4ff: FSTP float ptr [EAX + 0x8]
// 0041b502: RET
