// Name: core_bodypart.cpp_FUN_0041b540
// Address: 0041b540
// Address Range: [[0041b540, 0041b564]]
// Convention: unknown
// Signature: undefined core_bodypart.cpp_FUN_0041b540()
// Cross-references:
//   core_boneguy.cpp_FUN_0041cc40 (0041cc40) at 0041ce45 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00526d90 (00526d90) at 00526fc6 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_PickupSomethingPossibly_FUN_005fb530 (005fb530) at 005fb79f [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 actors_other_bodypart.cpp_FUN_0041b540(undefined4 param_1, undefined4
   param_2, undefined4 param_3) */

void core_bodypart_cpp_FUN_0041b540(void)

{
  float *in_stack_00000004;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  
  *in_stack_00000008 = *in_stack_00000004 + *in_stack_0000000c;
  in_stack_00000008[1] = in_stack_00000004[1] + in_stack_0000000c[1];
  in_stack_00000008[2] = in_stack_00000004[2] + in_stack_0000000c[2];
  return;
}


// Assembly code:
// 0041b540: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_bodypart.cpp_FUN_0041b540
//   XREF to: Stack[0x4] (READ)
// 0041b544: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0041b548: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 0041b54c: FLD float ptr [EDX]
// 0041b54e: FADD float ptr [ECX]
// 0041b550: FSTP float ptr [EAX]
// 0041b552: FLD float ptr [EDX + 0x4]
// 0041b555: FADD float ptr [ECX + 0x4]
// 0041b558: FSTP float ptr [EAX + 0x4]
// 0041b55b: FLD float ptr [EDX + 0x8]
// 0041b55e: FADD float ptr [ECX + 0x8]
// 0041b561: FSTP float ptr [EAX + 0x8]
// 0041b564: RET
