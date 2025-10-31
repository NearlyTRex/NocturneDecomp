// Name: shape_superopt.cpp_COptimize_ctor_FUN_005d6f90
// Address: 005d6f90
// Address Range: [[005d6f90, 005d6fc5]]
// Convention: __cdecl
// Signature: COptimize * shape_superopt.cpp_COptimize_ctor_FUN_005d6f90(COptimize * this_ptr)
// Cross-references:
//   shape_superopt.cpp_TriListSomething_FUN_005d77a0 (005d77a0) at 005d7c38 [UNCONDITIONAL_CALL]
// Globals:
//   void* PTR_shape_superopt.cpp_FUN_005d7000_00663c44 = 005d7000
// Function calls:
//   shape_superopt.cpp_FUN_005d2230
//   shape_superopt.cpp_FUN_005d7000

#include "nocturne.h"

COptimize * __cdecl shape_superopt_cpp_COptimize_ctor_FUN_005d6f90(COptimize *this_ptr)

{
  COptimize *pCVar1;
  
  pCVar1 = (COptimize *)shape_superopt_cpp_FUN_005d2230();
  *(void ***)(pCVar1->field0_0x0 + 0x40) = &PTR_shape_superopt_cpp_FUN_005d7000_00663c44;
  pCVar1->field0_0x0[0x3c] = '\0';
  pCVar1->field0_0x0[0x3d] = '\0';
  pCVar1->field0_0x0[0x3e] = '\0';
  pCVar1->field0_0x0[0x3f] = '\0';
  pCVar1->field0_0x0[0x38] = '\0';
  pCVar1->field0_0x0[0x39] = '\0';
  pCVar1->field0_0x0[0x3a] = '\0';
  pCVar1->field0_0x0[0x3b] = '\0';
  shape_superopt_cpp_FUN_005d7000();
  return pCVar1;
}


// Assembly code:
// 005d6f90: PUSH EBX
//   Label: shape_superopt.cpp_COptimize_ctor_FUN_005d6f90
// 005d6f91: PUSH 0x0
// 005d6f93: PUSH 0x0
// 005d6f95: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005d6f99: PUSH EDX
// 005d6f9a: CALL shape_superopt.cpp_FUN_005d2230
//   XREF to: 005d2230 (UNCONDITIONAL_CALL)
// 005d6f9f: MOV dword ptr [EAX + 0x40],0x663c44
//   XREF to: 00663c44 (DATA)
// 005d6fa6: ADD ESP,0xc
// 005d6fa9: MOV dword ptr [EAX + 0x3c],0x0
// 005d6fb0: PUSH EAX
// 005d6fb1: MOV EBX,EAX
// 005d6fb3: MOV dword ptr [EAX + 0x38],0x0
// 005d6fba: CALL shape_superopt.cpp_FUN_005d7000
//   XREF to: 005d7000 (UNCONDITIONAL_CALL)
// 005d6fbf: ADD ESP,0x4
// 005d6fc2: MOV EAX,EBX
// 005d6fc4: POP EBX
// 005d6fc5: RET
