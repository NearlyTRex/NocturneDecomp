// Name: engine_palette.cpp_CFont_drawText_FUN_00544ed0
// Address: 00544ed0
// Address Range: [[00544ed0, 00544efe]]
// Convention: __cdecl
// Signature: void engine_palette.cpp_CFont_drawText_FUN_00544ed0(CFont * this_ptr, int param1, int param2, int param3, int param4, int param5)
// Cross-references:
//   engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 (004cda80) at 004cdaf6 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
engine_palette_cpp_CFont_drawText_FUN_00544ed0
          (CFont *this_ptr,int param1,int param2,int param3,int param4,int param5)

{
  (*this_ptr->vtable->drawText)(this_ptr,param1,param2,(char *)param3,param4,param5);
  return;
}


// Assembly code:
// 00544ed0: PUSH EBX
//   Label: engine_palette.cpp_CFont_drawText_FUN_00544ed0
// 00544ed1: PUSH ESI
// 00544ed2: PUSH EDI
// 00544ed3: PUSH EBP
// 00544ed4: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00544ed8: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 00544edc: PUSH ECX
// 00544edd: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x14] (READ)
// 00544ee1: PUSH EBX
// 00544ee2: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x10] (READ)
// 00544ee6: PUSH ESI
// 00544ee7: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 00544eeb: PUSH EDI
// 00544eec: MOV EBP,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 00544ef0: PUSH EBP
// 00544ef1: MOV EAX,dword ptr [EDX]
// 00544ef3: PUSH EDX
// 00544ef4: CALL dword ptr [EAX + 0x4]
// 00544ef7: ADD ESP,0x18
// 00544efa: POP EBP
// 00544efb: POP EDI
// 00544efc: POP ESI
// 00544efd: POP EBX
// 00544efe: RET
