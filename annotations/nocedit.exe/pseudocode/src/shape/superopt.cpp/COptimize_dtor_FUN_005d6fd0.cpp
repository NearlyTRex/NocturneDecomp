// Name: shape_superopt.cpp_COptimize_dtor_FUN_005d6fd0
// Address: 005d6fd0
// Address Range: [[005d6fd0, 005d6ff1]]
// Convention: __cdecl
// Signature: COptimize * shape_superopt.cpp_COptimize_dtor_FUN_005d6fd0(COptimize * this_ptr)
// Cross-references:
//   shape_superopt.cpp_TriListSomething_FUN_005d77a0 (005d77a0) at 005d7d36 [UNCONDITIONAL_CALL]
// Globals:
//   void* PTR_shape_superopt.cpp_FUN_005d7000_00663c44 = 005d7000
// Function calls:
//   shape_superopt.cpp_CObj_dtor_FUN_005d2260
//   shape_superopt.cpp_FUN_005d7000

#include "nocturne.h"

COptimize * __cdecl shape_superopt_cpp_COptimize_dtor_FUN_005d6fd0(COptimize *this_ptr)

{
  COptimize *pCVar1;
  
  *(void ***)(this_ptr->field0_0x0 + 0x40) = &PTR_shape_superopt_cpp_FUN_005d7000_00663c44;
  shape_superopt_cpp_FUN_005d7000();
  pCVar1 = (COptimize *)shape_superopt_cpp_CObj_dtor_FUN_005d2260((CObj *)this_ptr);
  return pCVar1;
}


// Assembly code:
// 005d6fd0: PUSH EBX
//   Label: shape_superopt.cpp_COptimize_dtor_FUN_005d6fd0
// 005d6fd1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005d6fd5: PUSH EBX
// 005d6fd6: MOV dword ptr [EBX + 0x40],0x663c44
//   XREF to: 00663c44 (DATA)
// 005d6fdd: CALL shape_superopt.cpp_FUN_005d7000
//   XREF to: 005d7000 (UNCONDITIONAL_CALL)
// 005d6fe2: ADD ESP,0x4
// 005d6fe5: PUSH 0x0
// 005d6fe7: PUSH EBX
// 005d6fe8: CALL shape_superopt.cpp_CObj_dtor_FUN_005d2260
//   XREF to: 005d2260 (UNCONDITIONAL_CALL)
// 005d6fed: ADD ESP,0x8
// 005d6ff0: POP EBX
// 005d6ff1: RET
