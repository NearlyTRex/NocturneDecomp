// Name: shape_superopt.cpp_FUN_005d2230
// Address: 005d2230
// Address Range: [[005d2230, 005d225b]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d2230()
// Cross-references:
//   shape_superopt.cpp_COptimize_ctor_FUN_005d6f90 (005d6f90) at 005d6f9a [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_TriListSomething_FUN_005d77a0 (005d77a0) at 005d7882 [UNCONDITIONAL_CALL]
// Globals:
//   void* PTR_shape_superopt.cpp_FUN_005d2280_00663b64 = 005d2280
// Function calls:
//   shape_superopt.cpp_FUN_005d2280
//   shape_superopt.cpp_FUN_005d22d0

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_FUN_005d2230(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

int shape_superopt_cpp_FUN_005d2230(void)

{
  int in_stack_00000004;
  
  *(void ***)(in_stack_00000004 + 0x18) = &PTR_shape_superopt_cpp_FUN_005d2280_00663b64;
  shape_superopt_cpp_FUN_005d2280();
  shape_superopt_cpp_FUN_005d22d0();
  return in_stack_00000004;
}


// Assembly code:
// 005d2230: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005d2230
// 005d2231: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005d2235: PUSH EBX
// 005d2236: MOV dword ptr [EBX + 0x18],0x663b64
//   XREF to: 00663b64 (DATA)
// 005d223d: CALL shape_superopt.cpp_FUN_005d2280
//   XREF to: 005d2280 (UNCONDITIONAL_CALL)
// 005d2242: ADD ESP,0x4
// 005d2245: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 005d2249: PUSH EDX
// 005d224a: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005d224e: PUSH ECX
// 005d224f: PUSH EBX
// 005d2250: CALL shape_superopt.cpp_FUN_005d22d0
//   XREF to: 005d22d0 (UNCONDITIONAL_CALL)
// 005d2255: ADD ESP,0xc
// 005d2258: MOV EAX,EBX
// 005d225a: POP EBX
// 005d225b: RET
