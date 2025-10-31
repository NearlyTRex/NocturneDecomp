// Name: engine_winfont.cpp_CWinFont_reset_FUN_005f2a30
// Address: 005f2a30
// Address Range: [[005f2a30, 005f2a90]]
// Convention: __cdecl
// Signature: void engine_winfont.cpp_CWinFont_reset_FUN_005f2a30(CWinFont * this_ptr)
// Cross-references:
//   engine_winfont.cpp_CWinFont_createTextBackground_FUN_005f2860 (005f2860) at 005f28d8 [UNCONDITIONAL_CALL]
//   engine_winfont.cpp_CWinFont_dtor_FUN_005f2390 (005f2390) at 005f23a3 [UNCONDITIONAL_CALL]
// Globals:
//   DeleteDC* DeleteDC = 00211784
//   SelectObject* SelectObject = 002117d6
// Function calls:
//   DeleteDC
//   SelectObject

#include "nocturne.h"

void __cdecl engine_winfont_cpp_CWinFont_reset_FUN_005f2a30(CWinFont *this_ptr)

{
  if (this_ptr->deviceContextHandle != (HDC)0x0) {
    (*SelectObject)(this_ptr->deviceContextHandle,this_ptr->objectHandle);
    this_ptr->objectHandle = (HGDIOBJ)0x0;
    (*DeleteDC)(this_ptr->deviceContextHandle);
    this_ptr->deviceContextHandle = (HDC)0x0;
    this_ptr->dibHandle = (HBITMAP)0x0;
    this_ptr->ppvBits = (void **)0x0;
  }
  this_ptr->bpp = 0;
  this_ptr->top = this_ptr->bpp;
  this_ptr->right = this_ptr->bpp;
  return;
}


// Assembly code:
// 005f2a30: PUSH EBX
//   Label: engine_winfont.cpp_CWinFont_reset_FUN_005f2a30
// 005f2a31: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005f2a35: MOV EDX,dword ptr [EBX + 0x4]
// 005f2a38: TEST EDX,EDX
// 005f2a3a: JNZ 0x005f2a5a
//   XREF to: 005f2a5a (CONDITIONAL_JUMP)
// 005f2a3c: MOV dword ptr [EBX + 0x128],0x0
//   Label: LAB_005f2a3c
// 005f2a46: MOV EAX,dword ptr [EBX + 0x128]
// 005f2a4c: MOV dword ptr [EBX + 0x124],EAX
// 005f2a52: MOV dword ptr [EBX + 0x120],EAX
// 005f2a58: POP EBX
// 005f2a59: RET
// 005f2a5a: PUSH EDI
//   Label: LAB_005f2a5a
// 005f2a5b: MOV ECX,dword ptr [EBX + 0x10]
// 005f2a5e: PUSH ECX
// 005f2a5f: PUSH EDX
// 005f2a60: CALL dword ptr CS:[0x6113ec]
//   XREF to: EXTERNAL:0000000a (COMPUTED_CALL)
//   XREF to: 006113ec (READ)
// 005f2a67: MOV EDI,dword ptr [EBX + 0x4]
// 005f2a6a: PUSH EDI
// 005f2a6b: MOV dword ptr [EBX + 0x10],0x0
// 005f2a72: CALL dword ptr CS:[0x6113d8]
//   XREF to: EXTERNAL:00000005 (COMPUTED_CALL)
//   XREF to: 006113d8 (READ)
// 005f2a79: MOV dword ptr [EBX + 0x4],0x0
// 005f2a80: MOV dword ptr [EBX + 0x8],0x0
// 005f2a87: MOV dword ptr [EBX + 0x14],0x0
// 005f2a8e: POP EDI
// 005f2a8f: JMP 0x005f2a3c
//   XREF to: 005f2a3c (UNCONDITIONAL_JUMP)
