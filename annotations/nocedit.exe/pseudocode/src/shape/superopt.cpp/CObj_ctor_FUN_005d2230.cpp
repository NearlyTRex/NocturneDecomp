// Name: shape_superopt.cpp_CObj_ctor_FUN_005d2230
// Address: 005d2230
// Address Range: [[005d2230, 005d225b]]
// Convention: __cdecl
// Signature: CObj * shape_superopt.cpp_CObj_ctor_FUN_005d2230(CObj * this_ptr)
// Cross-references:
//   shape_superopt.cpp_COptimize_ctor_FUN_005d6f90 (005d6f90) at 005d6f9a [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_TriListSomething_FUN_005d77a0 (005d77a0) at 005d7882 [UNCONDITIONAL_CALL]
// Globals:
//   CObj_vtable g_CObjVTable
// Function calls:
//   shape_superopt.cpp_CObj_init_FUN_005d22d0
//   shape_superopt.cpp_CObj_reset_FUN_005d2280

#include "nocturne.h"

CObj * __cdecl shape_superopt_cpp_CObj_ctor_FUN_005d2230(CObj *this_ptr)

{
  int in_stack_0000000c;
  int in_stack_00000010;
  
  this_ptr->vtable = &g_CObjVTable;
  shape_superopt_cpp_CObj_reset_FUN_005d2280(this_ptr);
  shape_superopt_cpp_CObj_init_FUN_005d22d0(this_ptr,in_stack_0000000c,in_stack_00000010);
  return this_ptr;
}


// Assembly code:
// 005d2230: PUSH EBX
//   Label: shape_superopt.cpp_CObj_ctor_FUN_005d2230
// 005d2231: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005d2235: PUSH EBX
// 005d2236: MOV dword ptr [EBX + 0x18],0x663b64
//   XREF to: 00663b64 (DATA)
// 005d223d: CALL shape_superopt.cpp_CObj_reset_FUN_005d2280
//   XREF to: 005d2280 (UNCONDITIONAL_CALL)
// 005d2242: ADD ESP,0x4
// 005d2245: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 005d2249: PUSH EDX
// 005d224a: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005d224e: PUSH ECX
// 005d224f: PUSH EBX
// 005d2250: CALL shape_superopt.cpp_CObj_init_FUN_005d22d0
//   XREF to: 005d22d0 (UNCONDITIONAL_CALL)
// 005d2255: ADD ESP,0xc
// 005d2258: MOV EAX,EBX
// 005d225a: POP EBX
// 005d225b: RET
