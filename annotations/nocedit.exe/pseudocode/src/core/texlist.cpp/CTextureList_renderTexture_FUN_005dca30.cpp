// Name: core_texlist.cpp_CTextureList_renderTexture_FUN_005dca30
// Address: 005dca30
// Address Range: [[005dca30, 005dcaab]]
// Convention: __cdecl
// Signature: void core_texlist.cpp_CTextureList_renderTexture_FUN_005dca30(CTextureList * this_ptr)
// Globals:
//   TerminatedCString s_s_d_00655134
//   TerminatedCString s_s_d_0065513b
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   int g_TexturePreviewEnabled = 0x1
//   int g_TexturePreviewFullscreen
//   int g_TexturePreviewY
// Function calls:
//   engine_2d.c_drawTextRightAlignedColorFormatted_FUN_00402580

#include "nocturne.h"

void __cdecl core_texlist_cpp_CTextureList_renderTexture_FUN_005dca30(CTextureList *this_ptr)

{
  if (g_TexturePreviewEnabled != 0) {
    if (g_TexturePreviewFullscreen != 0) {
      engine_2d_c_drawTextRightAlignedColorFormatted_FUN_00402580
                ((char *)(g_WindowWidth + -7),g_WindowHeight + -0xb,0x65513b,
                 this_ptr->master_texture_names + this_ptr->current_master_selection,
                 this_ptr->current_master_selection);
      return;
    }
    engine_2d_c_drawTextRightAlignedColorFormatted_FUN_00402580
              ((char *)(g_WindowWidth + -7),g_TexturePreviewY + -0xb,0x655134,
               this_ptr->master_texture_names + this_ptr->current_master_selection,
               this_ptr->current_master_selection);
  }
  return;
}


// Assembly code:
// 005dca30: PUSH EBX
//   Label: core_texlist.cpp_CTextureList_renderTexture_FUN_005dca30
// 005dca31: PUSH EDI
// 005dca32: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005dca36: CMP dword ptr [0x006842f4],0x0
//   XREF to: 006842f4 (READ)
// 005dca3d: JZ 0x005dca7e
//   XREF to: 005dca7e (CONDITIONAL_JUMP)
// 005dca3f: MOV ECX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 005dca45: MOV EBX,dword ptr [0x03f87340]
//   XREF to: 03f87340 (READ)
// 005dca4b: LEA EDX,[EAX + 0x6d68]
// 005dca51: SUB ECX,0x7
// 005dca54: TEST EBX,EBX
// 005dca56: JNZ 0x005dca81
//   XREF to: 005dca81 (CONDITIONAL_JUMP)
// 005dca58: MOV EDI,dword ptr [EAX + 0x1a5e8]
// 005dca5e: MOV EAX,EDI
// 005dca60: SHL EAX,0x4
// 005dca63: PUSH EDI
// 005dca64: ADD EAX,EDX
// 005dca66: PUSH EAX
// 005dca67: MOV EAX,[0x03f87348]
//   XREF to: 03f87348 (READ)
// 005dca6c: PUSH 0x655134
//   XREF to: 00655134 (DATA)
// 005dca71: SUB EAX,0xb
// 005dca74: PUSH EAX
// 005dca75: PUSH ECX
// 005dca76: CALL engine_2d.c_drawTextRightAlignedColorFormatted_FUN_00402580
//   XREF to: 00402580 (UNCONDITIONAL_CALL)
// 005dca7b: ADD ESP,0x14
// 005dca7e: POP EDI
//   Label: LAB_005dca7e
// 005dca7f: POP EBX
// 005dca80: RET
// 005dca81: PUSH ESI
//   Label: LAB_005dca81
// 005dca82: MOV ESI,dword ptr [EAX + 0x1a5e8]
// 005dca88: MOV EAX,ESI
// 005dca8a: SHL EAX,0x4
// 005dca8d: PUSH ESI
// 005dca8e: ADD EAX,EDX
// 005dca90: PUSH EAX
// 005dca91: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 005dca96: PUSH 0x65513b
//   XREF to: 0065513b (DATA)
// 005dca9b: SUB EAX,0xb
// 005dca9e: PUSH EAX
// 005dca9f: PUSH ECX
// 005dcaa0: CALL engine_2d.c_drawTextRightAlignedColorFormatted_FUN_00402580
//   XREF to: 00402580 (UNCONDITIONAL_CALL)
// 005dcaa5: ADD ESP,0x14
// 005dcaa8: POP ESI
// 005dcaa9: POP EDI
// 005dcaaa: POP EBX
// 005dcaab: RET
