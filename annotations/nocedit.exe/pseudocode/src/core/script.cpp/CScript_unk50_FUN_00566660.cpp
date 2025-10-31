// Name: core_script.cpp_CScript_unk50_FUN_00566660
// Address: 00566660
// Address Range: [[00566660, 005667f9]]
// Convention: unknown
// Signature: undefined core_script.cpp_CScript_unk50_FUN_00566660()
// Cross-references:
//   core_msnedit.cpp_FUN_005374b0 (005374b0) at 005374d8 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053aa0a [UNCONDITIONAL_CALL]
// Globals:
//   CBitFont* g_ConsoleFont
//   undefined4 DAT_0310fcd8
//   undefined4 DAT_0310fcdc
//   undefined4 DAT_0310fce0
//   undefined4 DAT_0310fd0c
//   undefined4 DAT_0310fd10
//   undefined4 DAT_0310fd14
//   undefined4 DAT_031141d0
//   undefined4 DAT_031141d4
//   undefined4 DAT_031141d8
//   undefined4 DAT_031141dc
//   undefined4 DAT_031141e0
//   undefined4 DAT_031141e4
//   undefined4 DAT_031141e8
//   undefined4 DAT_031141ec
//   undefined4 DAT_031141f0
//   undefined4 DAT_031141f4
//   undefined4 DAT_031141f8
//   undefined4 DAT_031141fc
//   undefined4 DAT_03114200
//   undefined4 DAT_03114204
//   undefined4 DAT_03114208
// Function calls:
//   core_script.cpp_FUN_005644e0
//   core_script.cpp_FUN_00566800
//   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01a0
//   shape_edittool.cpp_calculateGridHeight_FUN_004a64b0
//   shape_edittool.cpp_calculateGridWidth_FUN_004a6490
//   shape_edittool.cpp_CEdScrollBar_setPosition_FUN_004a5b60
//   shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   shape_edittool.cpp_getFontCharSpacing_FUN_004a6f00
//   shape_edittool.cpp_getFontMaxCharWidth_FUN_004a6ef0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_script.cpp_CScript_unk50(CScript* param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4, undefined4 param_5) */

void core_script_cpp_CScript_unk50_FUN_00566660(void)

{
  int iVar1;
  int iVar2;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  
  DAT_03114200 = g_ConsoleFont;
  iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01a0(g_ConsoleFont,0x4d);
  iVar2 = shape_edittool_cpp_getFontCharSpacing_FUN_004a6f00(DAT_03114200);
  DAT_03114204 = iVar1 + iVar2;
  DAT_03114208 = shape_edittool_cpp_getFontMaxCharWidth_FUN_004a6ef0(DAT_03114200);
  DAT_031141d4 = in_stack_00000018;
  DAT_031141d8 = in_stack_0000001c + 1;
  DAT_031141dc = in_stack_00000020 + 1;
  DAT_031141d0 = in_stack_00000008;
  DAT_031141f4 = DAT_031141dc - DAT_03114208;
  DAT_031141f0 = in_stack_00000008;
  DAT_031141f8 = DAT_031141d8;
  _DAT_031141fc = DAT_031141dc;
  iVar1 = shape_edittool_cpp_calculateGridHeight_FUN_004a64b0();
  iVar2 = shape_edittool_cpp_calculateGridWidth_FUN_004a6490();
  DAT_031141e0 = DAT_031141d0;
  DAT_031141e4 = DAT_031141d4 + 1;
  DAT_031141e8 = DAT_031141d8 - iVar2;
  DAT_031141ec = DAT_031141f4 - iVar1;
  shape_edittool_cpp_CEdScrollBar_setPosition_FUN_004a5b60
            ((CEdScrollBar *)&DAT_0310fd0c,DAT_031141d0,DAT_031141ec,DAT_031141e8,DAT_031141f4);
  shape_edittool_cpp_CEdScrollBar_setPosition_FUN_004a5b60
            ((CEdScrollBar *)&DAT_0310fcd8,DAT_031141e8,DAT_031141e4,DAT_031141d8,DAT_031141ec);
  DAT_0310fce0 = (DAT_031141ec - DAT_031141e4) / DAT_03114208;
  DAT_0310fd14 = (DAT_031141e8 - DAT_031141e0) / DAT_03114204;
  iVar1 = 0;
  DAT_0310fd10 = 0;
  DAT_0310fcdc = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0
                           ((CBitFont *)(in_stack_00000004 + 0x38));
  while( true ) {
    iVar2 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0
                      ((CBitFont *)(in_stack_00000004 + 0x38));
    if (iVar2 <= iVar1) break;
    core_script_cpp_FUN_00566800();
    iVar1 = iVar1 + 1;
  }
  core_script_cpp_FUN_005644e0();
  return;
}


// Assembly code:
// 00566660: PUSH EBX
//   Label: core_script.cpp_CScript_unk50_FUN_00566660
// 00566661: PUSH ESI
// 00566662: PUSH EDI
// 00566663: PUSH EBP
// 00566664: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00566668: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0056666c: PUSH 0x4d
// 0056666e: MOV EAX,[0x020a5728]
//   XREF to: 020a5728 (READ)
// 00566673: PUSH EAX
// 00566674: MOV [0x03114200],EAX
//   XREF to: 03114200 (WRITE)
// 00566679: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01a0
//   XREF to: 004d01a0 (UNCONDITIONAL_CALL)
// 0056667e: ADD ESP,0x8
// 00566681: MOV ECX,dword ptr [0x03114200]
//   XREF to: 03114200 (READ)
// 00566687: PUSH ECX
// 00566688: MOV EBX,EAX
// 0056668a: CALL shape_edittool.cpp_getFontCharSpacing_FUN_004a6f00
//   XREF to: 004a6f00 (UNCONDITIONAL_CALL)
// 0056668f: ADD EBX,EAX
// 00566691: ADD ESP,0x4
// 00566694: MOV dword ptr [0x03114204],EBX
//   XREF to: 03114204 (WRITE)
// 0056669a: MOV EBX,dword ptr [0x03114200]
//   XREF to: 03114200 (READ)
// 005666a0: PUSH EBX
// 005666a1: CALL shape_edittool.cpp_getFontMaxCharWidth_FUN_004a6ef0
//   XREF to: 004a6ef0 (UNCONDITIONAL_CALL)
// 005666a6: ADD ESP,0x4
// 005666a9: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005666ad: MOV dword ptr [0x031141d4],EDX
//   XREF to: 031141d4 (WRITE)
// 005666b3: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005666b7: INC EDX
// 005666b8: MOV dword ptr [0x031141d8],EDX
//   XREF to: 031141d8 (WRITE)
// 005666be: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 005666c2: INC EDX
// 005666c3: MOV dword ptr [0x031141dc],EDX
//   XREF to: 031141dc (WRITE)
// 005666c9: MOV EDX,dword ptr [0x031141d8]
//   XREF to: 031141d8 (READ)
// 005666cf: MOV [0x03114208],EAX
//   XREF to: 03114208 (WRITE)
// 005666d4: MOV dword ptr [0x031141f8],EDX
//   XREF to: 031141f8 (WRITE)
// 005666da: MOV EDX,dword ptr [0x031141dc]
//   XREF to: 031141dc (READ)
// 005666e0: MOV dword ptr [0x031141d0],ESI
//   XREF to: 031141d0 (WRITE)
// 005666e6: MOV dword ptr [0x031141fc],EDX
//   XREF to: 031141fc (WRITE)
// 005666ec: SUB EDX,EAX
// 005666ee: MOV dword ptr [0x031141f0],ESI
//   XREF to: 031141f0 (WRITE)
// 005666f4: MOV dword ptr [0x031141f4],EDX
//   XREF to: 031141f4 (WRITE)
// 005666fa: CALL shape_edittool.cpp_calculateGridHeight_FUN_004a64b0
//   XREF to: 004a64b0 (UNCONDITIONAL_CALL)
// 005666ff: MOV EBX,EAX
// 00566701: CALL shape_edittool.cpp_calculateGridWidth_FUN_004a6490
//   XREF to: 004a6490 (UNCONDITIONAL_CALL)
// 00566706: MOV EDX,dword ptr [0x031141d0]
//   XREF to: 031141d0 (READ)
// 0056670c: MOV dword ptr [0x031141e0],EDX
//   XREF to: 031141e0 (WRITE)
// 00566712: MOV EDX,dword ptr [0x031141d4]
//   XREF to: 031141d4 (READ)
// 00566718: INC EDX
// 00566719: MOV ESI,dword ptr [0x031141f4]
//   XREF to: 031141f4 (READ)
// 0056671f: MOV dword ptr [0x031141e4],EDX
//   XREF to: 031141e4 (WRITE)
// 00566725: MOV EDX,dword ptr [0x031141d8]
//   XREF to: 031141d8 (READ)
// 0056672b: PUSH ESI
// 0056672c: SUB EDX,EAX
// 0056672e: MOV EAX,[0x031141f4]
//   XREF to: 031141f4 (READ)
// 00566733: PUSH EDX
// 00566734: SUB EAX,EBX
// 00566736: PUSH EAX
// 00566737: MOV dword ptr [0x031141e8],EDX
//   XREF to: 031141e8 (WRITE)
// 0056673d: MOV EDX,dword ptr [0x031141e0]
//   XREF to: 031141e0 (READ)
// 00566743: PUSH EDX
// 00566744: PUSH 0x310fd0c
//   XREF to: 0310fd0c (DATA)
// 00566749: MOV [0x031141ec],EAX
//   XREF to: 031141ec (WRITE)
// 0056674e: CALL shape_edittool.cpp_CEdScrollBar_setPosition_FUN_004a5b60
//   XREF to: 004a5b60 (UNCONDITIONAL_CALL)
// 00566753: ADD ESP,0x14
// 00566756: MOV ECX,dword ptr [0x031141ec]
//   XREF to: 031141ec (READ)
// 0056675c: PUSH ECX
// 0056675d: MOV EBX,dword ptr [0x031141d8]
//   XREF to: 031141d8 (READ)
// 00566763: PUSH EBX
// 00566764: MOV ESI,dword ptr [0x031141e4]
//   XREF to: 031141e4 (READ)
// 0056676a: PUSH ESI
// 0056676b: MOV EBP,dword ptr [0x031141e8]
//   XREF to: 031141e8 (READ)
// 00566771: PUSH EBP
// 00566772: PUSH 0x310fcd8
//   XREF to: 0310fcd8 (DATA)
// 00566777: CALL shape_edittool.cpp_CEdScrollBar_setPosition_FUN_004a5b60
//   XREF to: 004a5b60 (UNCONDITIONAL_CALL)
// 0056677c: MOV EDX,dword ptr [0x031141ec]
//   XREF to: 031141ec (READ)
// 00566782: SUB EDX,dword ptr [0x031141e4]
//   XREF to: 031141e4 (READ)
// 00566788: MOV EBX,dword ptr [0x03114208]
//   XREF to: 03114208 (READ)
// 0056678e: MOV EAX,EDX
// 00566790: SAR EDX,0x1f
// 00566793: IDIV EBX
// 00566795: MOV ECX,dword ptr [0x031141e0]
//   XREF to: 031141e0 (READ)
// 0056679b: MOV EDX,dword ptr [0x031141e8]
//   XREF to: 031141e8 (READ)
// 005667a1: MOV EBX,dword ptr [0x03114204]
//   XREF to: 03114204 (READ)
// 005667a7: SUB EDX,ECX
// 005667a9: MOV [0x0310fce0],EAX
//   XREF to: 0310fce0 (WRITE)
// 005667ae: MOV EAX,EDX
// 005667b0: SAR EDX,0x1f
// 005667b3: IDIV EBX
// 005667b5: ADD ESP,0x14
// 005667b8: LEA ESI,[EDI + 0x38]
// 005667bb: PUSH ESI
// 005667bc: XOR EBX,EBX
// 005667be: MOV [0x0310fd14],EAX
//   XREF to: 0310fd14 (WRITE)
// 005667c3: MOV dword ptr [0x0310fd10],EBX
//   XREF to: 0310fd10 (WRITE)
// 005667c9: CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
// 005667ce: ADD ESP,0x4
// 005667d1: MOV [0x0310fcdc],EAX
//   XREF to: 0310fcdc (WRITE)
// 005667d6: PUSH ESI
//   Label: LAB_005667d6
// 005667d7: CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
// 005667dc: ADD ESP,0x4
// 005667df: CMP EBX,EAX
// 005667e1: JL 0x005667ed
//   XREF to: 005667ed (CONDITIONAL_JUMP)
// 005667e3: CALL core_script.cpp_FUN_005644e0
//   XREF to: 005644e0 (UNCONDITIONAL_CALL)
// 005667e8: POP EBP
// 005667e9: POP EDI
// 005667ea: POP ESI
// 005667eb: POP EBX
// 005667ec: RET
// 005667ed: PUSH EBX
//   Label: LAB_005667ed
// 005667ee: PUSH EDI
// 005667ef: CALL core_script.cpp_FUN_00566800
//   XREF to: 00566800 (UNCONDITIONAL_CALL)
// 005667f4: INC EBX
// 005667f5: ADD ESP,0x8
// 005667f8: JMP 0x005667d6
//   XREF to: 005667d6 (UNCONDITIONAL_JUMP)
