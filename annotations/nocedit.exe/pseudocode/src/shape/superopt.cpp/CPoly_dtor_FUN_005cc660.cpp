// Name: shape_superopt.cpp_CPoly_dtor_FUN_005cc660
// Address: 005cc660
// Address Range: [[005cc660, 005cc66b]]
// Convention: __cdecl
// Signature: CPoly * shape_superopt.cpp_CPoly_dtor_FUN_005cc660(CPoly * this_ptr)
// Cross-references:
//   shape_superopt.cpp_CObj_FUN_005d2320 (005d2320) at 005d23fc [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_CObj_FUN_005d2410 (005d2410) at 005d24ed [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_CObj_FUN_005d47b0 (005d47b0) at 005d54c0 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_TriListSomething_FUN_005d77a0 (005d77a0) at 005d7bc5 [UNCONDITIONAL_CALL]
// Globals:
//   void* g_CPolyVTable = 005cc670

#include "nocturne.h"

CPoly * __cdecl shape_superopt_cpp_CPoly_dtor_FUN_005cc660(CPoly *this_ptr)

{
  this_ptr->vtable = &g_CPolyVTable;
  return this_ptr;
}


// Assembly code:
// 005cc660: MOV EAX,dword ptr [ESP + 0x4]
//   Label: shape_superopt.cpp_CPoly_dtor_FUN_005cc660
//   XREF to: Stack[0x4] (READ)
// 005cc664: MOV dword ptr [EAX + 0x64],0x663ad4
//   XREF to: 00663ad4 (DATA)
// 005cc66b: RET
