// Name: core_skeleton.cpp_FUN_005a0c90
// Address: 005a0c90
// Address Range: [[005a0c90, 005a0d02]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_FUN_005a0c90()
// Function calls:
//   core_skeleton.cpp_FUN_005a0d10

#include "nocturne.h"

void core_skeleton_cpp_FUN_005a0c90(void)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int in_stack_00000008;
  float in_stack_00000014;
  
  pfVar3 = (float *)core_skeleton_cpp_FUN_005a0d10();
  fVar1 = pfVar3[1];
  fVar2 = pfVar3[2];
  *(float *)(in_stack_00000008 + 0x2254) =
       *(float *)(in_stack_00000008 + 0x2254) + *pfVar3 * in_stack_00000014;
  *(float *)(in_stack_00000008 + 0x2258) =
       *(float *)(in_stack_00000008 + 0x2258) + fVar1 * in_stack_00000014;
  *(float *)(in_stack_00000008 + 0x225c) =
       *(float *)(in_stack_00000008 + 0x225c) + in_stack_00000014 * fVar2;
  return;
}


// Assembly code:
// 005a0c90: SUB ESP,0x18
//   Label: core_skeleton.cpp_FUN_005a0c90
// 005a0c93: PUSH dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 005a0c97: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0xc] (DATA)
// 005a0c9b: PUSH dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 005a0c9f: PUSH EAX
// 005a0ca0: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 005a0ca4: PUSH EDX
// 005a0ca5: CALL core_skeleton.cpp_FUN_005a0d10
//   XREF to: 005a0d10 (UNCONDITIONAL_CALL)
// 005a0caa: ADD ESP,0x10
// 005a0cad: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[0x10] (READ)
// 005a0cb1: FLD float ptr [EAX]
// 005a0cb3: FMUL ST1
// 005a0cb5: FSTP float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 005a0cb8: FLD float ptr [EAX + 0x4]
// 005a0cbb: FMUL ST1
// 005a0cbd: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (WRITE)
// 005a0cc1: FMUL float ptr [EAX + 0x8]
// 005a0cc4: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 005a0cc8: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x10] (WRITE)
// 005a0ccc: FLD float ptr [EAX + 0x2254]
// 005a0cd2: FADD float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 005a0cd5: FLD float ptr [EAX + 0x2258]
// 005a0cdb: FXCH
// 005a0cdd: FSTP float ptr [EAX + 0x2254]
// 005a0ce3: FADD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 005a0ce7: FLD float ptr [EAX + 0x225c]
// 005a0ced: FXCH
// 005a0cef: FSTP float ptr [EAX + 0x2258]
// 005a0cf5: FADD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x10] (READ)
// 005a0cf9: FSTP float ptr [EAX + 0x225c]
// 005a0cff: ADD ESP,0x18
// 005a0d02: RET
