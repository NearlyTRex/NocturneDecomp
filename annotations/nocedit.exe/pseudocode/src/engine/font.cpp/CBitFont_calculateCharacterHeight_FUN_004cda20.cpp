// Name: engine_font.cpp_CBitFont_calculateCharacterHeight_FUN_004cda20
// Address: 004cda20
// Address Range: [[004cda20, 004cda7d]]
// Convention: __cdecl
// Signature: int engine_font.cpp_CBitFont_calculateCharacterHeight_FUN_004cda20(CBitFont * this_ptr, uchar * char_bitmap, int char_width, int char_height, int bitmap_stride)
// Cross-references:
//   engine_font.cpp_CBitFont_parseCharacterMetrics_FUN_004cd550 (004cd550) at 004cd968 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl
engine_font_cpp_CBitFont_calculateCharacterHeight_FUN_004cda20
          (CBitFont *this_ptr,uchar *char_bitmap,int char_width,int char_height,int bitmap_stride)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int local_14;
  
  iVar3 = 0;
  local_14 = 0;
  if (0 < char_height) {
    do {
      iVar1 = 0;
      pbVar2 = char_bitmap;
      if (0 < char_width) {
        do {
          if ((uint)*pbVar2 != this_ptr->load_flags) {
            local_14 = iVar3 + 1;
            break;
          }
          iVar1 = iVar1 + 1;
          pbVar2 = pbVar2 + 1;
        } while (iVar1 < char_width);
      }
      iVar3 = iVar3 + 1;
      char_bitmap = char_bitmap + bitmap_stride;
    } while (iVar3 < char_height);
  }
  return local_14;
}


// Assembly code:
// 004cda20: PUSH EBX
//   Label: engine_font.cpp_CBitFont_calculateCharacterHeight_FUN_004cda20
// 004cda21: PUSH ESI
// 004cda22: PUSH EDI
// 004cda23: PUSH EBP
// 004cda24: SUB ESP,0x4
// 004cda27: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 004cda2b: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 004cda2f: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 004cda33: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 004cda37: XOR EDX,EDX
// 004cda39: XOR EDI,EDI
// 004cda3b: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x14] (DATA)
// 004cda3e: TEST ECX,ECX
// 004cda40: JLE 0x004cda6b
//   XREF to: 004cda6b (CONDITIONAL_JUMP)
// 004cda42: MOV EDX,EBP
//   Label: LAB_004cda42
// 004cda44: XOR EAX,EAX
// 004cda46: TEST EBX,EBX
// 004cda48: JLE 0x004cda5c
//   XREF to: 004cda5c (CONDITIONAL_JUMP)
// 004cda4a: XOR ECX,ECX
//   Label: LAB_004cda4a
// 004cda4c: MOV CL,byte ptr [EDX]
// 004cda4e: CMP ECX,dword ptr [ESI + 0x3188]
// 004cda54: JNZ 0x004cda76
//   XREF to: 004cda76 (CONDITIONAL_JUMP)
// 004cda56: INC EAX
// 004cda57: INC EDX
// 004cda58: CMP EAX,EBX
// 004cda5a: JL 0x004cda4a
//   XREF to: 004cda4a (CONDITIONAL_JUMP)
// 004cda5c: MOV EAX,dword ptr [ESP + 0x28]
//   Label: LAB_004cda5c
//   XREF to: Stack[0x14] (READ)
// 004cda60: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 004cda64: INC EDI
// 004cda65: ADD EBP,EAX
// 004cda67: CMP EDI,EDX
// 004cda69: JL 0x004cda42
//   XREF to: 004cda42 (CONDITIONAL_JUMP)
// 004cda6b: MOV EAX,dword ptr [ESP]
//   Label: LAB_004cda6b
//   XREF to: Stack[-0x14] (DATA)
// 004cda6e: ADD ESP,0x4
// 004cda71: POP EBP
// 004cda72: POP EDI
// 004cda73: POP ESI
// 004cda74: POP EBX
// 004cda75: RET
// 004cda76: LEA EAX,[EDI + 0x1]
//   Label: LAB_004cda76
// 004cda79: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 004cda7c: JMP 0x004cda5c
//   XREF to: 004cda5c (UNCONDITIONAL_JUMP)
