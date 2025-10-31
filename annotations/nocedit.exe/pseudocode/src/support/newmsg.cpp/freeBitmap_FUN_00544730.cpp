// Name: support_newmsg.cpp_freeBitmap_FUN_00544730
// Address: 00544730
// Address Range: [[00544730, 00544744]]
// Convention: __cdecl
// Signature: void support_newmsg.cpp_freeBitmap_FUN_00544730(CAlphaBitmap * * objs)
// Cross-references:
//   support_newmsg.cpp_CMouse_dtor_FUN_005443e0 (005443e0) at 005443fc [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_CAlphaBitmapTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void __cdecl support_newmsg_cpp_freeBitmap_FUN_00544730(CAlphaBitmap **objs)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(objs,7,&g_CAlphaBitmapTypeInfo);
  return;
}


// Assembly code:
// 00544730: PUSH 0x65e9f0
//   Label: support_newmsg.cpp_freeBitmap_FUN_00544730
//   XREF to: 0065e9f0 (DATA)
// 00544735: PUSH 0x7
// 00544737: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0054473b: PUSH EDX
// 0054473c: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 00544741: ADD ESP,0xc
// 00544744: RET
