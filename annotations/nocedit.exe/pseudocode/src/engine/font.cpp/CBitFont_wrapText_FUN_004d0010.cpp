// Name: engine_font.cpp_CBitFont_wrapText_FUN_004d0010
// Address: 004d0010
// Address Range: [[004d0010, 004d019e]]
// Convention: __cdecl
// Signature: int engine_font.cpp_CBitFont_wrapText_FUN_004d0010(CBitFont * this_ptr, char * source_text, char * dest_buffer, int max_lines, int line_width, int max_pixel_width)
// Cross-references:
//   core_game.cpp_CGame_displayActStats_FUN_004e3800 (004e3800) at 004e3aef [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_finishAct_FUN_004e3b90 (004e3b90) at 004e3f6d [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_renderOverlay_FUN_004d8040 (004d8040) at 004d8495 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_renderAllItems_FUN_00500690 (00500690) at 00500f47 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00559b20 (00559b20) at 00559c80 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_createModalWindow_FUN_004a0970 (004a0970) at 004a0ab5 [UNCONDITIONAL_CALL]
// Globals:
//   char[256] g_CharacterClassificationTable
//   char[256] g_TempTextBuffer
// Function calls:
//   crt_memory.c_memset_FUN_005fde40
//   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80

#include "nocturne.h"

int __cdecl
engine_font_cpp_CBitFont_wrapText_FUN_004d0010
          (CBitFont *this_ptr,char *source_text,char *dest_buffer,int max_lines,int line_width,
          int max_pixel_width)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  byte bVar10;
  int in_stack_0000001c;
  char *local_20;
  int local_1c;
  uint local_10;
  
  bVar10 = 0;
  crt_memory_c_memset_FUN_005fde40(dest_buffer,0,max_lines * line_width);
  if (source_text == (char *)0x0) {
    return 0;
  }
  local_1c = 0;
  if (0 < line_width) {
    local_20 = dest_buffer;
    pcVar7 = source_text;
    do {
      for (; ((g_CharacterClassificationTable[(byte)(*pcVar7 + 1)] & 2U) != 0 && (*pcVar7 != '\n'));
          pcVar7 = pcVar7 + 1) {
      }
      if (*pcVar7 == '\0') {
        return local_1c;
      }
      uVar6 = 0;
      local_10 = 0xffffffff;
      local_1c = local_1c + 1;
      pcVar8 = pcVar7;
      while( true ) {
        cVar1 = *pcVar8;
        if ((cVar1 == '\n') || (cVar1 == '\0')) goto LAB_004d00c8;
        if ((g_CharacterClassificationTable[(byte)(cVar1 + 1)] & 2U) != 0) {
          local_10 = uVar6;
        }
        bVar2 = false;
        if ((int)uVar6 < line_width + -1) {
          g_TempTextBuffer[uVar6] = '\0';
          iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80
                            ((CBitFont *)source_text,g_TempTextBuffer);
          if (iVar3 <= in_stack_0000001c) {
            bVar2 = true;
          }
        }
        g_TempTextBuffer[uVar6] = cVar1;
        if (!bVar2) break;
        uVar6 = uVar6 + 1;
        pcVar8 = pcVar8 + 1;
      }
      if (-1 < (int)local_10) {
        uVar6 = local_10;
      }
LAB_004d00c8:
      uVar5 = uVar6;
      if (0 < (int)uVar6) {
        pcVar8 = pcVar7 + uVar6;
        do {
          if ((g_CharacterClassificationTable[(byte)(pcVar8[-1] + 1)] & 2U) == 0) break;
          uVar5 = uVar5 - 1;
          pcVar8 = pcVar8 + -1;
        } while (0 < (int)uVar5);
      }
      pcVar8 = pcVar7;
      pcVar9 = local_20;
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + (uint)bVar10 * -8 + 4;
        pcVar9 = pcVar9 + (uint)bVar10 * -8 + 4;
      }
      for (uVar4 = uVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + (uint)bVar10 * -2 + 1;
        pcVar9 = pcVar9 + (uint)bVar10 * -2 + 1;
      }
      local_20[uVar5] = '\0';
      if (pcVar7[uVar6] == '\n') {
        uVar6 = uVar6 + 1;
      }
      pcVar7 = pcVar7 + uVar6;
      local_20 = local_20 + line_width;
    } while (local_1c < line_width);
  }
  return local_1c;
}


// Assembly code:
// 004d0010: PUSH EBX
//   Label: engine_font.cpp_CBitFont_wrapText_FUN_004d0010
// 004d0011: PUSH ESI
// 004d0012: PUSH EBP
// 004d0013: SUB ESP,0x1c
// 004d0016: MOV EBP,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x8] (READ)
// 004d001a: MOV ESI,dword ptr [ESP + 0x34]
//   XREF to: Stack[0xc] (READ)
// 004d001e: MOV EBX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x14] (READ)
// 004d0022: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x10] (READ)
// 004d0026: IMUL EAX,EBX
// 004d0029: PUSH EAX
// 004d002a: PUSH 0x0
// 004d002c: PUSH ESI
// 004d002d: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 004d0032: ADD ESP,0xc
// 004d0035: TEST EBP,EBP
// 004d0037: JZ 0x004d007c
//   XREF to: 004d007c (CONDITIONAL_JUMP)
// 004d0039: PUSH EDI
// 004d003a: XOR EDX,EDX
// 004d003c: MOV ECX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x10] (READ)
// 004d0040: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 004d0044: TEST ECX,ECX
// 004d0046: JLE 0x004d0120
//   XREF to: 004d0120 (CONDITIONAL_JUMP)
// 004d004c: LEA EAX,[EBX + -0x1]
// 004d004f: MOV dword ptr [ESP + 0x10],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 004d0053: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004d0057: IMUL EAX,EBX,0x0
// 004d005a: ADD EAX,ESI
// 004d005c: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 004d0060: MOV AL,byte ptr [EBP]
//   Label: LAB_004d0060
// 004d0063: INC AL
// 004d0065: AND EAX,0xff
// 004d006a: TEST byte ptr [EAX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 004d0071: JZ 0x004d0085
//   XREF to: 004d0085 (CONDITIONAL_JUMP)
// 004d0073: CMP byte ptr [EBP],0xa
// 004d0077: JZ 0x004d0085
//   XREF to: 004d0085 (CONDITIONAL_JUMP)
// 004d0079: INC EBP
// 004d007a: JMP 0x004d0060
//   XREF to: 004d0060 (UNCONDITIONAL_JUMP)
// 004d007c: XOR EAX,EAX
//   Label: LAB_004d007c
// 004d007e: ADD ESP,0x1c
// 004d0081: POP EBP
// 004d0082: POP ESI
// 004d0083: POP EBX
// 004d0084: RET
// 004d0085: CMP byte ptr [EBP],0x0
//   Label: LAB_004d0085
// 004d0089: JZ 0x004d0120
//   XREF to: 004d0120 (CONDITIONAL_JUMP)
// 004d008f: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x24] (READ)
// 004d0093: MOV ESI,0xffffffff
// 004d0098: MOV EDI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x24] (READ)
// 004d009c: XOR EBX,EBX
// 004d009e: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 004d00a2: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x1c] (READ)
// 004d00a6: MOV dword ptr [ESP + 0x18],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 004d00aa: ADD EDI,EAX
// 004d00ac: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x20] (READ)
// 004d00b0: MOV ESI,EBP
// 004d00b2: INC EAX
// 004d00b3: MOV dword ptr [ESP + 0x8],EDI
//   XREF to: Stack[-0x24] (WRITE)
// 004d00b7: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004d00bb: XOR EAX,EAX
//   Label: LAB_004d00bb
// 004d00bd: MOV AL,byte ptr [ESI]
// 004d00bf: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 004d00c3: CMP EAX,0xa
// 004d00c6: JNZ 0x004d012c
//   XREF to: 004d012c (CONDITIONAL_JUMP)
// 004d00c8: MOV EDX,EBX
//   Label: LAB_004d00c8
// 004d00ca: TEST EBX,EBX
// 004d00cc: JLE 0x004d00ea
//   XREF to: 004d00ea (CONDITIONAL_JUMP)
// 004d00ce: LEA ESI,[EBX + EBP*0x1]
// 004d00d1: MOV AL,byte ptr [ESI + -0x1]
//   Label: LAB_004d00d1
// 004d00d4: INC AL
// 004d00d6: AND EAX,0xff
// 004d00db: TEST byte ptr [EAX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 004d00e2: JZ 0x004d00ea
//   XREF to: 004d00ea (CONDITIONAL_JUMP)
// 004d00e4: DEC EDX
// 004d00e5: DEC ESI
// 004d00e6: TEST EDX,EDX
// 004d00e8: JG 0x004d00d1
//   XREF to: 004d00d1 (CONDITIONAL_JUMP)
// 004d00ea: MOV EDI,dword ptr [ESP + 0x4]
//   Label: LAB_004d00ea
//   XREF to: Stack[-0x28] (READ)
// 004d00ee: MOV ECX,EDX
// 004d00f0: MOV ESI,EBP
// 004d00f2: ADD EDX,EDI
// 004d00f4: PUSH EDI
// 004d00f5: MOV EAX,ECX
// 004d00f7: SHR ECX,0x2
// 004d00fa: MOVSD.REP ES:EDI,ESI
// 004d00fc: MOV CL,AL
// 004d00fe: AND CL,0x3
// 004d0101: MOVSB.REP ES:EDI,ESI
// 004d0103: POP EDI
// 004d0104: LEA EAX,[EBX + EBP*0x1]
// 004d0107: MOV byte ptr [EDX],0x0
// 004d010a: CMP byte ptr [EAX],0xa
// 004d010d: JNZ 0x004d0110
//   XREF to: 004d0110 (CONDITIONAL_JUMP)
// 004d010f: INC EBX
// 004d0110: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_004d0110
//   XREF to: Stack[-0x20] (READ)
// 004d0114: ADD EBP,EBX
// 004d0116: CMP EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x10] (READ)
// 004d011a: JL 0x004d0060
//   XREF to: 004d0060 (CONDITIONAL_JUMP)
// 004d0120: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_004d0120
//   XREF to: Stack[-0x20] (READ)
// 004d0124: POP EDI
// 004d0125: ADD ESP,0x1c
// 004d0128: POP EBP
// 004d0129: POP ESI
// 004d012a: POP EBX
// 004d012b: RET
// 004d012c: TEST EAX,EAX
//   Label: LAB_004d012c
// 004d012e: JZ 0x004d00c8
//   XREF to: 004d00c8 (CONDITIONAL_JUMP)
// 004d0130: MOV AL,byte ptr [ESP + 0x1c]
//   XREF to: Stack[-0x10] (READ)
// 004d0134: INC AL
// 004d0136: AND EAX,0xff
// 004d013b: TEST byte ptr [EAX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 004d0142: JZ 0x004d0148
//   XREF to: 004d0148 (CONDITIONAL_JUMP)
// 004d0144: MOV dword ptr [ESP + 0x18],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 004d0148: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_004d0148
//   XREF to: Stack[-0x18] (READ)
// 004d014c: XOR EDI,EDI
// 004d014e: CMP EBX,EAX
// 004d0150: JGE 0x004d0177
//   XREF to: 004d0177 (CONDITIONAL_JUMP)
// 004d0152: PUSH 0x2d7b010
//   XREF to: 02d7b010 (DATA)
// 004d0157: MOV EDX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 004d015b: XOR CH,CH
// 004d015d: PUSH EDX
// 004d015e: MOV byte ptr [EBX + 0x2d7b010],CH
//   XREF to: 02d7b010 (WRITE)
// 004d0164: CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   XREF to: 004cfe80 (UNCONDITIONAL_CALL)
// 004d0169: ADD ESP,0x8
// 004d016c: CMP EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x18] (READ)
// 004d0170: JG 0x004d0177
//   XREF to: 004d0177 (CONDITIONAL_JUMP)
// 004d0172: MOV EDI,0x1
// 004d0177: MOV AL,byte ptr [ESP + 0x1c]
//   Label: LAB_004d0177
//   XREF to: Stack[-0x10] (READ)
// 004d017b: MOV byte ptr [EBX + 0x2d7b010],AL
//   XREF to: 02d7b010 (WRITE)
// 004d0181: TEST EDI,EDI
// 004d0183: JZ 0x004d018c
//   XREF to: 004d018c (CONDITIONAL_JUMP)
// 004d0185: INC EBX
// 004d0186: INC ESI
// 004d0187: JMP 0x004d00bb
//   XREF to: 004d00bb (UNCONDITIONAL_JUMP)
// 004d018c: MOV ESI,dword ptr [ESP + 0x18]
//   Label: LAB_004d018c
//   XREF to: Stack[-0x14] (READ)
// 004d0190: TEST ESI,ESI
// 004d0192: JL 0x004d00c8
//   XREF to: 004d00c8 (CONDITIONAL_JUMP)
// 004d0198: MOV EBX,ESI
// 004d019a: JMP 0x004d00c8
//   XREF to: 004d00c8 (UNCONDITIONAL_JUMP)
