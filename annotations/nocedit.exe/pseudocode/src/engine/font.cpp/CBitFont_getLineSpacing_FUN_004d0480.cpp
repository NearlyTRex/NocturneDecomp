// Name: engine_font.cpp_CBitFont_getLineSpacing_FUN_004d0480
// Address: 004d0480
// Address Range: [[004d0480, 004d04aa]]
// Convention: __cdecl
// Signature: int engine_font.cpp_CBitFont_getLineSpacing_FUN_004d0480(CBitFont * this_ptr, char character)

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_getLineSpacing_FUN_004d0480(CBitFont *this_ptr,char character)

{
  CWinFont *this_ptr_00;
  int iVar1;
  
  if ((this_ptr->win_font_enabled != 0) &&
     (this_ptr_00 = this_ptr->win_font_helper, this_ptr_00 != (CWinFont *)0x0)) {
    iVar1 = (*((this_ptr_00->base_font).vtable)->getLineSpacing)(&this_ptr_00->base_font);
    return iVar1;
  }
  return 0;
}


// Assembly code:
// 004d0480: MOV EAX,dword ptr [ESP + 0x4]
//   Label: engine_font.cpp_CBitFont_getLineSpacing_FUN_004d0480
//   XREF to: Stack[0x4] (READ)
// 004d0484: CMP dword ptr [EAX + 0x3190],0x0
// 004d048b: JZ 0x004d0497
//   XREF to: 004d0497 (CONDITIONAL_JUMP)
// 004d048d: MOV EAX,dword ptr [EAX + 0x3194]
// 004d0493: TEST EAX,EAX
// 004d0495: JNZ 0x004d049a
//   XREF to: 004d049a (CONDITIONAL_JUMP)
// 004d0497: XOR EAX,EAX
//   Label: LAB_004d0497
// 004d0499: RET
// 004d049a: XOR ECX,ECX
//   Label: LAB_004d049a
// 004d049c: MOV CL,byte ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 004d04a0: PUSH ECX
// 004d04a1: MOV EDX,dword ptr [EAX]
// 004d04a3: PUSH EAX
// 004d04a4: CALL dword ptr [EDX + 0x10]
// 004d04a7: ADD ESP,0x8
// 004d04aa: RET
