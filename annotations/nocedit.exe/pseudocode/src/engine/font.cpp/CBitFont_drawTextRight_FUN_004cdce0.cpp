// Name: engine_font.cpp_CBitFont_drawTextRight_FUN_004cdce0
// Address: 004cdce0
// Address Range: [[004cdce0, 004cdd19]]
// Convention: __cdecl
// Signature: int engine_font.cpp_CBitFont_drawTextRight_FUN_004cdce0(CBitFont * this_ptr, int right_edge_x, int y_pos, int color_mode, int color_value, char * text_string)
// Cross-references:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120 (00489120) at 00489239 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_run_FUN_00524420 (00524420) at 005245db [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_005645d0 (005645d0) at 00564768 [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_printfRight_FUN_004cdd70 (004cdd70) at 004cddc2 [UNCONDITIONAL_CALL]
// Function calls:
//   engine_font.cpp_CBitFont_drawTextRight_FUN_004cdbf0
//   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80

#include "nocturne.h"

int __cdecl
engine_font_cpp_CBitFont_drawTextRight_FUN_004cdce0
          (CBitFont *this_ptr,int right_edge_x,int y_pos,int color_mode,int color_value,
          char *text_string)

{
  int iVar1;
  int unaff_ESI;
  
  iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(this_ptr,text_string);
  iVar1 = engine_font_cpp_CBitFont_drawTextRight_FUN_004cdbf0
                    (this_ptr,(char *)((y_pos - iVar1) + 1),color_mode,color_value,(int)text_string,
                     unaff_ESI);
  return iVar1;
}


// Assembly code:
// 004cdce0: PUSH EBX
//   Label: engine_font.cpp_CBitFont_drawTextRight_FUN_004cdce0
// 004cdce1: PUSH ESI
// 004cdce2: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x18] (READ)
// 004cdce6: PUSH EAX
// 004cdce7: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x14] (READ)
// 004cdceb: PUSH EDX
// 004cdcec: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004cdcf0: PUSH ECX
// 004cdcf1: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 004cdcf5: PUSH EBX
// 004cdcf6: PUSH EAX
// 004cdcf7: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 004cdcfb: PUSH ESI
// 004cdcfc: CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   XREF to: 004cfe80 (UNCONDITIONAL_CALL)
// 004cdd01: ADD ESP,0x8
// 004cdd04: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 004cdd08: SUB EDX,EAX
// 004cdd0a: LEA EAX,[EDX + 0x1]
// 004cdd0d: PUSH EAX
// 004cdd0e: PUSH ESI
// 004cdd0f: CALL engine_font.cpp_CBitFont_drawTextRight_FUN_004cdbf0
//   XREF to: 004cdbf0 (UNCONDITIONAL_CALL)
// 004cdd14: ADD ESP,0x18
// 004cdd17: POP ESI
// 004cdd18: POP EBX
// 004cdd19: RET
