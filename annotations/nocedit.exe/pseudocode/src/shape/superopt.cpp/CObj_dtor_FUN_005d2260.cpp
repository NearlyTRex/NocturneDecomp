// Name: shape_superopt.cpp_CObj_dtor_FUN_005d2260
// Address: 005d2260
// Address Range: [[005d2260, 005d2278]]
// Convention: __cdecl
// Signature: CObj * shape_superopt.cpp_CObj_dtor_FUN_005d2260(CObj * this_ptr)
// Cross-references:
//   shape_superopt.cpp_COptimize_dtor_FUN_005d6fd0 (005d6fd0) at 005d6fe8 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_TriListSomething_FUN_005d77a0 (005d77a0) at 005d7d48 [UNCONDITIONAL_CALL]
// Globals:
//   CObj_vtable g_CObjVTable
// Function calls:
//   shape_superopt.cpp_CObj_free_FUN_005d2600

#include "nocturne.h"

CObj * __cdecl shape_superopt_cpp_CObj_dtor_FUN_005d2260(CObj *this_ptr)

{
  this_ptr->vtable = &g_CObjVTable;
  shape_superopt_cpp_CObj_free_FUN_005d2600(this_ptr);
  return this_ptr;
}


// Assembly code:
// 005d2260: PUSH EBX
//   Label: shape_superopt.cpp_CObj_dtor_FUN_005d2260
// 005d2261: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005d2265: PUSH EBX
// 005d2266: MOV dword ptr [EBX + 0x18],0x663b64
//   XREF to: 00663b64 (DATA)
// 005d226d: CALL shape_superopt.cpp_CObj_free_FUN_005d2600
//   XREF to: 005d2600 (UNCONDITIONAL_CALL)
// 005d2272: ADD ESP,0x4
// 005d2275: MOV EAX,EBX
// 005d2277: POP EBX
// 005d2278: RET
