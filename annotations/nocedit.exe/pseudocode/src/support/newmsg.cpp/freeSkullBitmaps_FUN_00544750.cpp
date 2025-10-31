// Name: support_newmsg.cpp_freeSkullBitmaps_FUN_00544750
// Address: 00544750
// Address Range: [[00544750, 00544764]]
// Convention: __cdecl
// Signature: void support_newmsg.cpp_freeSkullBitmaps_FUN_00544750(CAlphaBitmap * bitmap)
// Cross-references:
//   support_newmsg.cpp_CMouse_dtor_FUN_005443e0 (005443e0) at 005443ec [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_CAlphaBitmapTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void __cdecl support_newmsg_cpp_freeSkullBitmaps_FUN_00544750(CAlphaBitmap *bitmap)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(&bitmap->ptrRaw,0xf,&g_CAlphaBitmapTypeInfo);
  return;
}


// Assembly code:
// 00544750: PUSH 0x65e9f0
//   Label: support_newmsg.cpp_freeSkullBitmaps_FUN_00544750
//   XREF to: 0065e9f0 (DATA)
// 00544755: PUSH 0xf
// 00544757: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0054475b: PUSH EDX
// 0054475c: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 00544761: ADD ESP,0xc
// 00544764: RET
