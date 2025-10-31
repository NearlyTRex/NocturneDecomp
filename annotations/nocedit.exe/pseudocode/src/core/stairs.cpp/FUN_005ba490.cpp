// Name: core_stairs.cpp_FUN_005ba490
// Address: 005ba490
// Address Range: [[005ba490, 005ba4e3]]
// Convention: unknown
// Signature: undefined core_stairs.cpp_FUN_005ba490()
// Globals:
//   undefined4 DAT_00653062

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_other_stairs.cpp_FUN_005ba490(undefined4 param_1, undefined4
   param_2) */

void core_stairs_cpp_FUN_005ba490(void)

{
  float fVar1;
  float fVar2;
  int in_stack_00000004;
  float *in_stack_00000008;
  
  fVar2 = (float)_DAT_00653062;
  *in_stack_00000008 = -*(float *)(in_stack_00000004 + 0x160) * fVar2;
  fVar1 = *(float *)(in_stack_00000004 + 0x160);
  in_stack_00000008[1] = 0.0;
  in_stack_00000008[2] = 0.0;
  in_stack_00000008[3] = fVar1 * fVar2;
  in_stack_00000008[4] =
       (float)*(int *)(in_stack_00000004 + 0x16c) * *(float *)(in_stack_00000004 + 0x158);
  in_stack_00000008[5] =
       (float)*(int *)(in_stack_00000004 + 0x16c) * *(float *)(in_stack_00000004 + 0x15c);
  return;
}


// Assembly code:
// 005ba490: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_stairs.cpp_FUN_005ba490
//   XREF to: Stack[0x4] (READ)
// 005ba494: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005ba498: FLD float ptr [EDX + 0x160]
// 005ba49e: FCHS
// 005ba4a0: FLD double ptr [0x00653062]
//   XREF to: 00653062 (READ)
// 005ba4a6: FXCH
// 005ba4a8: FMUL ST1
// 005ba4aa: FSTP float ptr [EAX]
// 005ba4ac: FLD float ptr [EDX + 0x160]
// 005ba4b2: MOV dword ptr [EAX + 0x4],0x0
// 005ba4b9: FMULP
// 005ba4bb: MOV dword ptr [EAX + 0x8],0x0
// 005ba4c2: FSTP float ptr [EAX + 0xc]
// 005ba4c5: FILD dword ptr [EDX + 0x16c]
// 005ba4cb: FMUL float ptr [EDX + 0x158]
// 005ba4d1: FSTP float ptr [EAX + 0x10]
// 005ba4d4: FILD dword ptr [EDX + 0x16c]
// 005ba4da: FMUL float ptr [EDX + 0x15c]
// 005ba4e0: FSTP float ptr [EAX + 0x14]
// 005ba4e3: RET
