// Name: engine_font.cpp_CBitFont_setCharXAdvanceRange_FUN_004d0230
// Address: 004d0230
// Address Range: [[004d0230, 004d0285]]
// Convention: __cdecl
// Signature: void engine_font.cpp_CBitFont_setCharXAdvanceRange_FUN_004d0230(CBitFont * this_ptr, int advance_value, int start_char, int end_char)
// Cross-references:
//   core_dfont.cpp_initFonts_FUN_004709a0 (004709a0) at 00470ba0 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
engine_font_cpp_CBitFont_setCharXAdvanceRange_FUN_004d0230
          (CBitFont *this_ptr,int advance_value,int start_char,int end_char)

{
  int iVar1;
  
  if (end_char == -0x81) {
    end_char = start_char;
  }
  if (start_char < 0) {
    start_char = 0;
  }
  if (0xff < end_char) {
    end_char = 0xff;
  }
  if (start_char <= end_char) {
    iVar1 = (int)(this_ptr->bitmap_files + -1) + 0x4c + start_char * 4;
    do {
      start_char = start_char + 1;
      *(int *)(iVar1 + 0x2d68) = advance_value;
      iVar1 = iVar1 + 4;
    } while (start_char <= end_char);
  }
  return;
}


// Assembly code:
// 004d0230: PUSH EBX
//   Label: engine_font.cpp_CBitFont_setCharXAdvanceRange_FUN_004d0230
// 004d0231: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004d0235: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 004d0239: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 004d023d: CMP ECX,0xffffff7f
// 004d0243: JNZ 0x004d0247
//   XREF to: 004d0247 (CONDITIONAL_JUMP)
// 004d0245: MOV ECX,EAX
// 004d0247: TEST EAX,EAX
//   Label: LAB_004d0247
// 004d0249: JL 0x004d0282
//   XREF to: 004d0282 (CONDITIONAL_JUMP)
// 004d024b: CMP ECX,0x100
//   Label: LAB_004d024b
// 004d0251: JL 0x004d0258
//   XREF to: 004d0258 (CONDITIONAL_JUMP)
// 004d0253: MOV ECX,0xff
// 004d0258: MOV EDX,EAX
//   Label: LAB_004d0258
// 004d025a: CMP EAX,ECX
// 004d025c: JG 0x004d0280
//   XREF to: 004d0280 (CONDITIONAL_JUMP)
// 004d025e: PUSH ESI
// 004d025f: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004d0263: SHL EAX,0x2
// 004d0266: ADD EAX,ESI
// 004d0268: POP ESI
// 004d0269: ADD EAX,0x4
//   Label: LAB_004d0269
// 004d026c: INC EDX
// 004d026d: MOV dword ptr [EAX + 0x2d64],EBX
// 004d0273: CMP EDX,ECX
// 004d0275: JLE 0x004d0269
//   XREF to: 004d0269 (CONDITIONAL_JUMP)
// 004d0277: LEA EAX,[EAX]
// 004d027d: LEA EDX,[EDX]
// 004d0280: POP EBX
//   Label: LAB_004d0280
// 004d0281: RET
// 004d0282: XOR EAX,EAX
//   Label: LAB_004d0282
// 004d0284: JMP 0x004d024b
//   XREF to: 004d024b (UNCONDITIONAL_JUMP)
