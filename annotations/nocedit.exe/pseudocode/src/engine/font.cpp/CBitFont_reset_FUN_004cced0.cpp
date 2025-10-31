// Name: engine_font.cpp_CBitFont_reset_FUN_004cced0
// Address: 004cced0
// Address Range: [[004cced0, 004ccfb6]]
// Convention: __cdecl
// Signature: void engine_font.cpp_CBitFont_reset_FUN_004cced0(CBitFont * this_ptr)
// Cross-references:
//   engine_font.cpp_CBitFont_ctor_FUN_004cce90 (004cce90) at 004cce96 [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_free_FUN_004cd4e0 (004cd4e0) at 004cd524 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl engine_font_cpp_CBitFont_reset_FUN_004cced0(CBitFont *this_ptr)

{
  char (*pacVar1) [80];
  CBitFont *pCVar2;
  CBitFont *pCVar3;
  
  this_ptr->bitmap_count = 0;
  pCVar2 = this_ptr;
  pCVar3 = this_ptr;
  do {
    pacVar1 = pCVar2->bitmap_files;
    pCVar3->bitmap_files[0][0] = '\0';
    pCVar2->bitmap_data[0] = (void *)0x0;
    pCVar3 = (CBitFont *)(pCVar3->bitmap_files[0] + 0x4c);
    pCVar2->bitmap_widths[0] = 0;
    pCVar2 = (CBitFont *)pacVar1;
  } while (pacVar1 != (char (*) [80])(this_ptr->bitmap_files[0] + 0xc));
  pCVar2 = this_ptr;
  do {
    pacVar1 = pCVar2->bitmap_files;
    pCVar2->char_bitmap_index[0] = 0;
    pCVar2->char_widths[0] = 0;
    pCVar2->char_heights[0] = 0;
    pCVar2->char_x_advance[0] = 0;
    pCVar2->char_positions[0] = 0;
    pCVar2 = (CBitFont *)pacVar1;
  } while (pacVar1 != (char (*) [80])(this_ptr->palette_data + 0x29c));
  this_ptr->max_char_width = 0;
  this_ptr->current_max_width = 0;
  this_ptr->char_spacing = 1;
  this_ptr->line_spacing = 2;
  this_ptr->char_widths[0x20] = 8;
  this_ptr->font_type = 2;
  this_ptr->font_enabled = 1;
  this_ptr->rendering_ready = 0;
  this_ptr->is_initialized = 0;
  this_ptr->field21_0x318c = 0;
  this_ptr->win_font_enabled = 0;
  this_ptr->win_font_helper = (CWinFont *)0x0;
  this_ptr->max_char_height = 0;
  return;
}


// Assembly code:
// 004cced0: PUSH ESI
//   Label: engine_font.cpp_CBitFont_reset_FUN_004cced0
// 004cced1: MOV ESI,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004cced5: MOV EAX,ESI
// 004cced7: MOV EDX,ESI
// 004cced9: MOV dword ptr [ESI],0x0
// 004ccedf: LEA ECX,[ESI + 0x10]
// 004ccee2: ADD EAX,0x4
//   Label: LAB_004ccee2
// 004ccee5: MOV byte ptr [EDX + 0x4],0x0
// 004ccee9: MOV dword ptr [EAX + 0x140],0x0
// 004ccef3: ADD EDX,0x50
// 004ccef6: MOV dword ptr [EAX + 0x150],0x0
// 004ccf00: CMP EAX,ECX
// 004ccf02: JNZ 0x004ccee2
//   XREF to: 004ccee2 (CONDITIONAL_JUMP)
// 004ccf04: MOV EAX,ESI
// 004ccf06: LEA EDX,[ESI + 0x400]
// 004ccf0c: XOR ECX,ECX
// 004ccf0e: ADD EAX,0x4
//   Label: LAB_004ccf0e
// 004ccf11: MOV dword ptr [EAX + 0x2164],ECX
// 004ccf17: MOV dword ptr [EAX + 0x2564],ECX
// 004ccf1d: MOV dword ptr [EAX + 0x2964],ECX
// 004ccf23: MOV dword ptr [EAX + 0x2d64],ECX
// 004ccf29: MOV dword ptr [EAX + 0x1d64],ECX
// 004ccf2f: CMP EAX,EDX
// 004ccf31: JNZ 0x004ccf0e
//   XREF to: 004ccf0e (CONDITIONAL_JUMP)
// 004ccf33: MOV dword ptr [ESI + 0x316c],0x0
// 004ccf3d: MOV dword ptr [ESI + 0x3170],0x0
// 004ccf47: MOV dword ptr [ESI + 0x3174],0x1
// 004ccf51: MOV dword ptr [ESI + 0x3178],0x2
// 004ccf5b: MOV dword ptr [ESI + 0x25e8],0x8
// 004ccf65: MOV dword ptr [ESI + 0x317c],0x2
// 004ccf6f: MOV dword ptr [ESI + 0x3180],0x1
// 004ccf79: MOV dword ptr [ESI + 0x3184],0x0
// 004ccf83: MOV dword ptr [ESI + 0x1d64],0x0
// 004ccf8d: MOV dword ptr [ESI + 0x318c],0x0
// 004ccf97: MOV dword ptr [ESI + 0x3190],0x0
// 004ccfa1: MOV dword ptr [ESI + 0x3194],0x0
// 004ccfab: MOV dword ptr [ESI + 0x3168],0x0
// 004ccfb5: POP ESI
// 004ccfb6: RET
