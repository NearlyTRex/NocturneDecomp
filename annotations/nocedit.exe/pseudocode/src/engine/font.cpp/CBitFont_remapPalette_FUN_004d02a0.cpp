// Name: engine_font.cpp_CBitFont_remapPalette_FUN_004d02a0
// Address: 004d02a0
// Address Range: [[004d02a0, 004d0471]]
// Convention: __cdecl
// Signature: void engine_font.cpp_CBitFont_remapPalette_FUN_004d02a0(CBitFont * this_ptr)
// Cross-references:
//   core_dfont.cpp_remapFonts_FUN_00471300 (00471300) at 00471307 [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_loadBitmap_FUN_004ccff0 (004ccff0) at 004cd243 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_font_cpp_0062a721
//   TerminatedCString s_CBitFont_remapPalette_In_0062a734
//   int g_BitsPerPixel = 0x8
//   int g_RedBitPosition
//   int g_RedScaleFactor
//   int g_GreenBitPosition
//   int g_GreenScaleFactor
//   int g_BlueBitPosition
//   int g_BlueScaleFactor
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004d0425) */

void __cdecl engine_font_cpp_CBitFont_remapPalette_FUN_004d02a0(CBitFont *this_ptr)

{
  char *pcVar1;
  CBitFont *pCVar2;
  CBitFont *local_2c;
  char *local_24;
  CBitFont *local_20;
  int local_1c;
  CBitFont *local_18;
  CBitFont *local_14;
  
  local_1c = 0;
  if (0 < this_ptr->bitmap_count) {
    pcVar1 = this_ptr->palette_data;
    local_20 = this_ptr;
    local_2c = this_ptr;
    do {
      local_24 = pcVar1 + 0x29c;
      local_18 = local_2c;
      local_14 = local_2c;
      pCVar2 = local_20;
      do {
        if ((uint)g_BitsPerPixel < 0x10) {
          if (g_BitsPerPixel != 8) {
LAB_004d044b:
            g_CurrentFilename = "..\\engine\\font.cpp";
            g_CurrentLineNumber = 0x686;
            core_main_c_displayErrorAndQuit_FUN_00506f10("CBitFont::remapPalette - Invalid bitsPerPixel");
          }
        }
        else if ((uint)g_BitsPerPixel < 0x11) {
          local_14->palettes_display[0][0] =
               ((uint)(byte)pCVar2->palette_data[2] / (uint)g_BlueScaleFactor <<
                ((byte)g_BlueBitPosition & 0x1f) |
               (uint)(byte)pCVar2->palette_data[1] / (uint)g_GreenScaleFactor <<
               ((byte)g_GreenBitPosition & 0x1f) |
               (uint)(byte)pCVar2->palette_data[0] / (uint)g_RedScaleFactor <<
               ((byte)g_RedBitPosition & 0x1f)) & 0xffff;
        }
        else {
          if (g_BitsPerPixel != 0x20) goto LAB_004d044b;
          local_18->palettes_display[0][0] =
               (uint)(byte)pCVar2->palette_data[2] << ((byte)g_BlueBitPosition & 0x1f) |
               (uint)(byte)pCVar2->palette_data[0] << ((byte)g_RedBitPosition & 0x1f) |
               (uint)(byte)pCVar2->palette_data[1] << ((byte)g_GreenBitPosition & 0x1f);
        }
        pCVar2 = (CBitFont *)((int)&pCVar2->bitmap_count + 3);
        local_18 = (CBitFont *)local_18->bitmap_files;
        local_14 = (CBitFont *)local_14->bitmap_files;
      } while (local_14 != (CBitFont *)local_24);
      pcVar1 = pcVar1 + 0x400;
      local_20 = (CBitFont *)(local_20->palette_data + 0x19c);
      local_2c = (CBitFont *)(local_2c->palette_data + 0x29c);
      local_1c = local_1c + 1;
    } while (local_1c < this_ptr->bitmap_count);
  }
  return;
}


// Assembly code:
// 004d02a0: PUSH EBX
//   Label: engine_font.cpp_CBitFont_remapPalette_FUN_004d02a0
// 004d02a1: PUSH ESI
// 004d02a2: PUSH EDI
// 004d02a3: PUSH EBP
// 004d02a4: SUB ESP,0x28
// 004d02a7: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x4] (READ)
// 004d02ab: XOR EDX,EDX
// 004d02ad: MOV ECX,dword ptr [EAX]
// 004d02af: MOV dword ptr [ESP + 0x1c],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 004d02b3: TEST ECX,ECX
// 004d02b5: JLE 0x004d0377
//   XREF to: 004d0377 (CONDITIONAL_JUMP)
// 004d02bb: ADD EAX,0x400
// 004d02c0: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 004d02c4: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x4] (READ)
// 004d02c8: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004d02cc: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 004d02d0: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_004d02d0
//   XREF to: Stack[-0x2c] (READ)
// 004d02d4: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004d02d8: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004d02dc: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x24] (READ)
// 004d02e0: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x20] (READ)
// 004d02e4: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 004d02e8: MOV EAX,[0x0067939c]
//   Label: LAB_004d02e8
//   XREF to: 0067939c (READ)
// 004d02ed: MOVZX EDI,byte ptr [EBP + 0x165]
// 004d02f4: XOR EBX,EBX
// 004d02f6: MOVZX ESI,byte ptr [EBP + 0x164]
// 004d02fd: MOV BL,byte ptr [EBP + 0x166]
// 004d0303: CMP EAX,0x10
// 004d0306: JNC 0x004d0440
//   XREF to: 004d0440 (CONDITIONAL_JUMP)
// 004d030c: CMP EAX,0x8
// 004d030f: JNZ 0x004d044b
//   XREF to: 004d044b (CONDITIONAL_JUMP)
// 004d0315: MOV ECX,dword ptr [ESP + 0x20]
//   Label: LAB_004d0315
//   XREF to: Stack[-0x18] (READ)
// 004d0319: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x14] (READ)
// 004d031d: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x28] (READ)
// 004d0321: ADD EBP,0x3
// 004d0324: ADD ECX,0x4
// 004d0327: ADD EBX,0x4
// 004d032a: MOV dword ptr [ESP + 0x20],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 004d032e: MOV dword ptr [ESP + 0x24],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 004d0332: CMP EBX,ESI
// 004d0334: JNZ 0x004d02e8
//   XREF to: 004d02e8 (CONDITIONAL_JUMP)
// 004d0336: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x24] (READ)
// 004d033a: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x20] (READ)
// 004d033e: MOV EDI,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x2c] (READ)
// 004d0342: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c] (READ)
// 004d0346: MOV ECX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x4] (READ)
// 004d034a: ADD EBX,0x400
// 004d0350: ADD ESI,0x300
// 004d0356: ADD EDI,0x400
// 004d035c: INC EBP
// 004d035d: MOV EDX,dword ptr [ECX]
// 004d035f: MOV dword ptr [ESP + 0x14],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 004d0363: MOV dword ptr [ESP + 0x18],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 004d0367: MOV dword ptr [ESP + 0xc],EDI
//   XREF to: Stack[-0x2c] (WRITE)
// 004d036b: MOV dword ptr [ESP + 0x1c],EBP
//   XREF to: Stack[-0x1c] (WRITE)
// 004d036f: CMP EBP,EDX
// 004d0371: JL 0x004d02d0
//   XREF to: 004d02d0 (CONDITIONAL_JUMP)
// 004d0377: ADD ESP,0x28
//   Label: LAB_004d0377
// 004d037a: POP EBP
// 004d037b: POP EDI
// 004d037c: POP ESI
// 004d037d: POP EBX
// 004d037e: RET
// 004d037f: MOV ECX,dword ptr [0x02d01f28]
//   Label: LAB_004d037f
//   XREF to: 02d01f28 (READ)
// 004d0385: MOV EAX,ESI
// 004d0387: XOR EDX,EDX
// 004d0389: DIV ECX
// 004d038b: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x38] (DATA)
// 004d038e: MOV ESI,dword ptr [0x02d01f34]
//   XREF to: 02d01f34 (READ)
// 004d0394: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x38] (DATA)
// 004d0397: XOR EDX,EDX
// 004d0399: MOV EAX,EDI
// 004d039b: DIV ESI
// 004d039d: MOV dword ptr [ESP + 0x4],EDI
//   XREF to: Stack[-0x34] (WRITE)
// 004d03a1: MOV EDI,dword ptr [0x02d01f40]
//   XREF to: 02d01f40 (READ)
// 004d03a7: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 004d03ab: XOR EDX,EDX
// 004d03ad: MOV EAX,EBX
// 004d03af: DIV EDI
// 004d03b1: MOV dword ptr [ESP + 0x8],EBX
//   XREF to: Stack[-0x30] (WRITE)
// 004d03b5: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 004d03bb: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 004d03bf: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 004d03c2: MOV EBX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x34] (READ)
// 004d03c6: SHL EAX,CL
// 004d03c8: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 004d03ce: SHL EBX,CL
// 004d03d0: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 004d03d6: OR EBX,EAX
// 004d03d8: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x30] (READ)
// 004d03dc: SHL EAX,CL
// 004d03de: OR EAX,EBX
// 004d03e0: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x14] (READ)
// 004d03e4: AND EAX,0xffff
// 004d03e9: MOV dword ptr [ECX + 0xd64],EAX
// 004d03ef: JMP 0x004d0315
//   XREF to: 004d0315 (UNCONDITIONAL_JUMP)
// 004d03f4: CMP EAX,EAX
//   Label: LAB_004d03f4
// 004d03f6: JNZ 0x004d0425
//   XREF to: 004d0425 (CONDITIONAL_JUMP)
// 004d03f8: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 004d03fe: SHL ESI,CL
// 004d0400: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 004d0406: SHL EDI,CL
// 004d0408: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 004d040e: SHL EBX,CL
// 004d0410: OR ESI,EDI
// 004d0412: MOV ECX,EBX
// 004d0414: OR ECX,ESI
// 004d0416: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x18] (READ)
// 004d041a: MOV dword ptr [EAX + 0xd64],ECX
// 004d0420: JMP 0x004d0315
//   XREF to: 004d0315 (UNCONDITIONAL_JUMP)
// 004d0425: MOV ECX,EDI
//   Label: LAB_004d0425
// 004d0427: SHL ESI,0x10
// 004d042a: SHL ECX,0x8
// 004d042d: OR ECX,ESI
// 004d042f: OR ECX,EBX
// 004d0431: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x18] (READ)
// 004d0435: MOV dword ptr [EAX + 0xd64],ECX
// 004d043b: JMP 0x004d0315
//   XREF to: 004d0315 (UNCONDITIONAL_JUMP)
// 004d0440: JBE 0x004d037f
//   Label: LAB_004d0440
//   XREF to: 004d037f (CONDITIONAL_JUMP)
// 004d0446: CMP EAX,0x20
// 004d0449: JZ 0x004d03f4
//   XREF to: 004d03f4 (CONDITIONAL_JUMP)
// 004d044b: MOV EAX,0x62a721
//   Label: LAB_004d044b
//   XREF to: 0062a721 (PARAM)
// 004d0450: MOV EDX,0x686
// 004d0455: PUSH 0x62a734
//   XREF to: 0062a734 (DATA)
// 004d045a: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 004d045f: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 004d0465: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004d046a: ADD ESP,0x4
// 004d046d: JMP 0x004d0315
//   XREF to: 004d0315 (UNCONDITIONAL_JUMP)
