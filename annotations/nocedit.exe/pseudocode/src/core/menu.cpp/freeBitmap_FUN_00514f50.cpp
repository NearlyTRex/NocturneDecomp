// Name: core_menu.cpp_freeBitmap_FUN_00514f50
// Address: 00514f50
// Address Range: [[00514f50, 00514f64]]
// Convention: __cdecl
// Signature: void core_menu.cpp_freeBitmap_FUN_00514f50(CAlphaBitmap * * objs)
// Cross-references:
//   support_newmsg.cpp_CMouse_dtor_FUN_005443e0 (005443e0) at 0054440c [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_CAlphaBitmapTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void __cdecl core_menu_cpp_freeBitmap_FUN_00514f50(CAlphaBitmap **objs)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(objs,8,&g_CAlphaBitmapTypeInfo);
  return;
}


// Assembly code:
// 00514f50: PUSH 0x65e9f0
//   Label: core_menu.cpp_freeBitmap_FUN_00514f50
//   XREF to: 0065e9f0 (DATA)
// 00514f55: PUSH 0x8
// 00514f57: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00514f5b: PUSH EDX
// 00514f5c: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 00514f61: ADD ESP,0xc
// 00514f64: RET
