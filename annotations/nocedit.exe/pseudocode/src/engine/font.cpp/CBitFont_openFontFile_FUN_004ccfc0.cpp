// Name: engine_font.cpp_CBitFont_openFontFile_FUN_004ccfc0
// Address: 004ccfc0
// Address Range: [[004ccfc0, 004ccfee]]
// Convention: __cdecl
// Signature: void engine_font.cpp_CBitFont_openFontFile_FUN_004ccfc0(CBitFont * this_ptr, char * filename, int width, int height, int load_flags)
// Cross-references:
//   core_dfont.cpp_initFonts_FUN_004709a0 (004709a0) at 00470cc1 [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_loadFromFile_FUN_004cd2c0 (004cd2c0) at 004cd4c8 [UNCONDITIONAL_CALL]
// Function calls:
//   engine_font.cpp_CBitFont_loadNewBitmap_FUN_004cd280

#include "nocturne.h"

void __cdecl
engine_font_cpp_CBitFont_openFontFile_FUN_004ccfc0
          (CBitFont *this_ptr,char *filename,int width,int height,int load_flags)

{
  int unaff_EDI;
  
  engine_font_cpp_CBitFont_loadNewBitmap_FUN_004cd280
            (this_ptr,filename,width,height,0x21,0xff,load_flags,unaff_EDI);
  return;
}


// Assembly code:
// 004ccfc0: PUSH EBX
//   Label: engine_font.cpp_CBitFont_openFontFile_FUN_004ccfc0
// 004ccfc1: PUSH ESI
// 004ccfc2: PUSH EDI
// 004ccfc3: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x14] (READ)
// 004ccfc7: PUSH EDX
// 004ccfc8: PUSH 0xff
// 004ccfcd: PUSH 0x21
// 004ccfcf: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x10] (READ)
// 004ccfd3: PUSH ECX
// 004ccfd4: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 004ccfd8: PUSH EBX
// 004ccfd9: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 004ccfdd: PUSH ESI
// 004ccfde: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 004ccfe2: PUSH EDI
// 004ccfe3: CALL engine_font.cpp_CBitFont_loadNewBitmap_FUN_004cd280
//   XREF to: 004cd280 (UNCONDITIONAL_CALL)
// 004ccfe8: ADD ESP,0x1c
// 004ccfeb: POP EDI
// 004ccfec: POP ESI
// 004ccfed: POP EBX
// 004ccfee: RET
