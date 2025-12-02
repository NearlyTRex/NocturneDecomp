// Name: shape_superopt.cpp_CObj_free_FUN_005d2600
// Address: 005d2600
// Address Range: [[005d2600, 005d2642]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CObj_free_FUN_005d2600(CObj * this_ptr)
// Cross-references:
//   shape_superopt.cpp_CObj_dtor_FUN_005d2260 (005d2260) at 005d226d [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_COptimize_FUN_005d7000 (005d7000) at 005d7009 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_TriListSomething_FUN_005d77a0 (005d77a0) at 005d7d24 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_memory.c_free_FUN_00601cd0

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CObj_free_FUN_005d2600(CObj *this_ptr)

{
  if (this_ptr->vertex_data != (CVert *)0x0) {
    crt_memory_c_free_FUN_00601cd0(this_ptr->vertex_data);
  }
  this_ptr->vertex_data = (CVert *)0x0;
  if (this_ptr->poly_array == (CPoly *)0x0) {
    this_ptr->poly_array = (CPoly *)0x0;
    return;
  }
  crt_memory_c_free_FUN_00601cd0(this_ptr->poly_array);
  this_ptr->poly_array = (CPoly *)0x0;
  return;
}


// Assembly code:
// 005d2600: PUSH EBX
//   Label: shape_superopt.cpp_CObj_free_FUN_005d2600
// 005d2601: PUSH ESI
// 005d2602: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005d2606: MOV EDX,dword ptr [EBX + 0x4]
// 005d2609: TEST EDX,EDX
// 005d260b: JNZ 0x005d2625
//   XREF to: 005d2625 (CONDITIONAL_JUMP)
// 005d260d: MOV ESI,dword ptr [EBX + 0xc]
//   Label: LAB_005d260d
// 005d2610: MOV dword ptr [EBX + 0x4],0x0
// 005d2617: TEST ESI,ESI
// 005d2619: JNZ 0x005d2630
//   XREF to: 005d2630 (CONDITIONAL_JUMP)
// 005d261b: MOV dword ptr [EBX + 0xc],0x0
// 005d2622: POP ESI
// 005d2623: POP EBX
// 005d2624: RET
// 005d2625: PUSH EDX
//   Label: LAB_005d2625
// 005d2626: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 005d262b: ADD ESP,0x4
// 005d262e: JMP 0x005d260d
//   XREF to: 005d260d (UNCONDITIONAL_JUMP)
// 005d2630: PUSH ESI
//   Label: LAB_005d2630
// 005d2631: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 005d2636: ADD ESP,0x4
// 005d2639: MOV dword ptr [EBX + 0xc],0x0
// 005d2640: POP ESI
// 005d2641: POP EBX
// 005d2642: RET
