// Name: engine_font.cpp_CBitFont_loadNewBitmap_FUN_004cd280
// Address: 004cd280
// Address Range: [[004cd280, 004cd2ba]]
// Convention: __cdecl
// Signature: void engine_font.cpp_CBitFont_loadNewBitmap_FUN_004cd280(CBitFont * this_ptr, char * filename, int width, int height, int first_char, int last_char, int load_flags, int other)
// Cross-references:
//   engine_font.cpp_CBitFont_loadFromFile_FUN_004cd2c0 (004cd2c0) at 004cd463 [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_openFontFile_FUN_004ccfc0 (004ccfc0) at 004ccfe3 [UNCONDITIONAL_CALL]
// Function calls:
//   engine_font.cpp_CBitFont_free_FUN_004cd4e0
//   engine_font.cpp_CBitFont_loadBitmap_FUN_004ccff0

#include "nocturne.h"

void __cdecl
engine_font_cpp_CBitFont_loadNewBitmap_FUN_004cd280
          (CBitFont *this_ptr,char *filename,int width,int height,int first_char,int last_char,
          int load_flags,int other)

{
  engine_font_cpp_CBitFont_free_FUN_004cd4e0(this_ptr);
  this_ptr->load_flags = other;
  engine_font_cpp_CBitFont_loadBitmap_FUN_004ccff0
            (this_ptr,(char *)width,height,first_char,last_char);
  return;
}


// Assembly code:
// 004cd280: PUSH EBX
//   Label: engine_font.cpp_CBitFont_loadNewBitmap_FUN_004cd280
// 004cd281: PUSH ESI
// 004cd282: PUSH EDI
// 004cd283: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004cd287: PUSH EBX
// 004cd288: CALL engine_font.cpp_CBitFont_free_FUN_004cd4e0
//   XREF to: 004cd4e0 (UNCONDITIONAL_CALL)
// 004cd28d: ADD ESP,0x4
// 004cd290: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x14] (READ)
// 004cd294: PUSH EDX
// 004cd295: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004cd299: PUSH ECX
// 004cd29a: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 004cd29e: PUSH ESI
// 004cd29f: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 004cd2a3: PUSH EDI
// 004cd2a4: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x1c] (READ)
// 004cd2a8: PUSH EBX
// 004cd2a9: MOV dword ptr [EBX + 0x3188],EAX
// 004cd2af: CALL engine_font.cpp_CBitFont_loadBitmap_FUN_004ccff0
//   XREF to: 004ccff0 (UNCONDITIONAL_CALL)
// 004cd2b4: ADD ESP,0x14
// 004cd2b7: POP EDI
// 004cd2b8: POP ESI
// 004cd2b9: POP EBX
// 004cd2ba: RET
