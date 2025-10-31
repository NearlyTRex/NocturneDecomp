// Name: core_script.cpp_FUN_005664d0
// Address: 005664d0
// Address Range: [[005664d0, 00566650]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_005664d0()
// Cross-references:
//   core_script.cpp_FUN_005645d0 (005645d0) at 005647ab [UNCONDITIONAL_CALL]
// Globals:
//   char[256] g_CharacterClassificationTable
//   undefined4 DAT_0310fcd8
//   undefined4 DAT_0310fd0c
//   undefined4 DAT_031141e0
//   undefined4 DAT_031141e4
//   undefined4 DAT_031141e8
//   undefined4 DAT_031141ec
//   undefined4 DAT_03114200
//   undefined4 DAT_03114204
//   undefined4 DAT_03114208
// Function calls:
//   core_script.cpp_FUN_00564560
//   engine_2d.c_fillRectColor_FUN_00403170
//   engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_FUN_005664d0(undefined4 param_1, undefined4 param_2) */

void core_script_cpp_FUN_005664d0
               (undefined4 param_1,undefined4 param_2,int unaff_EBX,undefined4 param_4,int param_5,
               int param_6)

{
  bool bVar1;
  int iVar2;
  byte *pbVar3;
  int color_mode;
  uint character_code;
  uint uVar4;
  int unaff_ESI;
  int unaff_EDI;
  
  if (-1 < param_6) {
    iVar2 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0((CBitFont *)(param_5 + 0x38));
    if (((param_6 < iVar2) &&
        (iVar2 = DAT_031141e4 + (param_6 - DAT_0310fcd8) * DAT_03114208, DAT_031141e4 <= iVar2)) &&
       (iVar2 < DAT_031141ec)) {
      pbVar3 = (byte *)shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                                 ((CStrList *)(param_5 + 0x38),param_6);
      core_script_cpp_FUN_00564560();
      if (iVar2 < unaff_EDI) {
        engine_2d_c_fillRectColor_FUN_00403170
                  ((iVar2 - DAT_0310fd0c) * DAT_03114204 + DAT_031141e0,unaff_ESI,
                   (unaff_EDI - DAT_0310fd0c) * DAT_03114204 + DAT_031141e0 + -1,
                   unaff_ESI + DAT_03114208 + -1,4);
      }
      bVar1 = false;
      iVar2 = DAT_031141e0 + -DAT_0310fd0c * DAT_03114204;
      uVar4 = 0;
      if (iVar2 < DAT_031141e8) {
        while( true ) {
          character_code = (uint)*pbVar3;
          if (character_code == 0) break;
          if ((character_code == 0x2f) && (pbVar3[1] == 0x2f)) {
            bVar1 = true;
          }
          color_mode = 0xff;
          if ((g_CharacterClassificationTable[(byte)(*pbVar3 + 1)] & 0xe0U) == 0) {
            color_mode = 0xfb;
          }
          if (bVar1) {
            color_mode = 2;
          }
          engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0
                    (DAT_03114200,character_code,iVar2,unaff_EBX,color_mode,-1);
          if ((character_code != 9) || ((uVar4 & 7) == 7)) {
            pbVar3 = pbVar3 + 1;
          }
          iVar2 = iVar2 + DAT_03114204;
          uVar4 = uVar4 + 1;
          if (DAT_031141e8 <= iVar2) {
            return;
          }
        }
      }
    }
  }
  return;
}


// Assembly code:
// 005664d0: PUSH EBX
//   Label: core_script.cpp_FUN_005664d0
// 005664d1: PUSH ESI
// 005664d2: PUSH EDI
// 005664d3: PUSH EBP
// 005664d4: SUB ESP,0x10
// 005664d7: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 005664db: TEST EBX,EBX
// 005664dd: JGE 0x005664e7
//   XREF to: 005664e7 (CONDITIONAL_JUMP)
// 005664df: ADD ESP,0x10
//   Label: LAB_005664df
// 005664e2: POP EBP
// 005664e3: POP EDI
// 005664e4: POP ESI
// 005664e5: POP EBX
// 005664e6: RET
// 005664e7: MOV ESI,dword ptr [ESP + 0x24]
//   Label: LAB_005664e7
//   XREF to: Stack[0x4] (READ)
// 005664eb: ADD ESI,0x38
// 005664ee: PUSH ESI
// 005664ef: CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
// 005664f4: ADD ESP,0x4
// 005664f7: CMP EBX,EAX
// 005664f9: JGE 0x005664df
//   XREF to: 005664df (CONDITIONAL_JUMP)
// 005664fb: MOV EDX,dword ptr [0x0310fcd8]
//   XREF to: 0310fcd8 (READ)
// 00566501: MOV EAX,EBX
// 00566503: MOV ECX,dword ptr [0x03114208]
//   XREF to: 03114208 (READ)
// 00566509: SUB EAX,EDX
// 0056650b: IMUL EAX,ECX
// 0056650e: MOV EDX,dword ptr [0x031141e4]
//   XREF to: 031141e4 (READ)
// 00566514: ADD EDX,EAX
// 00566516: MOV EDI,dword ptr [0x031141e4]
//   XREF to: 031141e4 (READ)
// 0056651c: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00566520: CMP EDX,EDI
// 00566522: JL 0x005664df
//   XREF to: 005664df (CONDITIONAL_JUMP)
// 00566524: CMP EDX,dword ptr [0x031141ec]
//   XREF to: 031141ec (READ)
// 0056652a: JGE 0x005664df
//   XREF to: 005664df (CONDITIONAL_JUMP)
// 0056652c: PUSH EBX
// 0056652d: PUSH ESI
// 0056652e: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 00566533: ADD ESP,0x8
// 00566536: MOV EDI,EAX
// 00566538: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x18] (DATA)
// 0056653c: PUSH EAX
// 0056653d: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1c] (DATA)
// 00566541: PUSH EAX
// 00566542: PUSH EBX
// 00566543: CALL core_script.cpp_FUN_00564560
//   XREF to: 00564560 (UNCONDITIONAL_CALL)
// 00566548: ADD ESP,0xc
// 0056654b: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 0056654f: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x1c] (READ)
// 00566553: CMP EAX,EDX
// 00566555: JLE 0x0056659b
//   XREF to: 0056659b (CONDITIONAL_JUMP)
// 00566557: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 0056655b: ADD EAX,dword ptr [0x03114208]
//   XREF to: 03114208 (READ)
// 00566561: PUSH 0x4
// 00566563: DEC EAX
// 00566564: MOV EBX,dword ptr [0x0310fd0c]
//   XREF to: 0310fd0c (READ)
// 0056656a: PUSH EAX
// 0056656b: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 0056656f: MOV ESI,dword ptr [0x03114204]
//   XREF to: 03114204 (READ)
// 00566575: SUB EAX,EBX
// 00566577: IMUL EAX,ESI
// 0056657a: MOV EBP,dword ptr [0x031141e0]
//   XREF to: 031141e0 (READ)
// 00566580: ADD EAX,EBP
// 00566582: DEC EAX
// 00566583: PUSH EAX
// 00566584: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x14] (READ)
// 00566588: PUSH EAX
// 00566589: MOV EAX,EDX
// 0056658b: SUB EAX,EBX
// 0056658d: IMUL EAX,ESI
// 00566590: ADD EAX,EBP
// 00566592: PUSH EAX
// 00566593: CALL engine_2d.c_fillRectColor_FUN_00403170
//   XREF to: 00403170 (UNCONDITIONAL_CALL)
// 00566598: ADD ESP,0x14
// 0056659b: MOV EAX,[0x0310fd0c]
//   Label: LAB_0056659b
//   XREF to: 0310fd0c (READ)
// 005665a0: MOV EDX,dword ptr [0x03114204]
//   XREF to: 03114204 (READ)
// 005665a6: NEG EAX
// 005665a8: IMUL EAX,EDX
// 005665ab: XOR ESI,ESI
// 005665ad: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x20] (DATA)
// 005665b0: MOV ESI,dword ptr [0x031141e0]
//   XREF to: 031141e0 (READ)
// 005665b6: MOV ECX,dword ptr [0x031141e8]
//   XREF to: 031141e8 (READ)
// 005665bc: ADD ESI,EAX
// 005665be: XOR EBP,EBP
// 005665c0: CMP ESI,ECX
// 005665c2: JGE 0x005664df
//   XREF to: 005664df (CONDITIONAL_JUMP)
// 005665c8: XOR EBX,EBX
//   Label: LAB_005665c8
// 005665ca: MOV BL,byte ptr [EDI]
// 005665cc: TEST EBX,EBX
// 005665ce: JZ 0x005664df
//   XREF to: 005664df (CONDITIONAL_JUMP)
// 005665d4: CMP EBX,0x2f
// 005665d7: JNZ 0x005665e6
//   XREF to: 005665e6 (CONDITIONAL_JUMP)
// 005665d9: CMP byte ptr [EDI + 0x1],0x2f
// 005665dd: JNZ 0x005665e6
//   XREF to: 005665e6 (CONDITIONAL_JUMP)
// 005665df: MOV dword ptr [ESP],0x1
//   XREF to: Stack[-0x20] (DATA)
// 005665e6: MOV DL,BL
//   Label: LAB_005665e6
// 005665e8: MOV EAX,0xff
// 005665ed: INC DL
// 005665ef: AND EDX,EAX
// 005665f1: TEST byte ptr [EDX + 0x6849c4],0xe0
//   XREF to: 006849c4 (DATA)
// 005665f8: JZ 0x0056663e
//   XREF to: 0056663e (CONDITIONAL_JUMP)
// 005665fa: CMP dword ptr [ESP],0x0
//   Label: LAB_005665fa
//   XREF to: Stack[-0x20] (DATA)
// 005665fe: JZ 0x00566605
//   XREF to: 00566605 (CONDITIONAL_JUMP)
// 00566600: MOV EAX,0x2
// 00566605: PUSH -0x1
//   Label: LAB_00566605
// 00566607: PUSH EAX
// 00566608: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 0056660c: PUSH EAX
// 0056660d: PUSH ESI
// 0056660e: PUSH EBX
// 0056660f: MOV EDX,dword ptr [0x03114200]
//   XREF to: 03114200 (READ)
// 00566615: PUSH EDX
// 00566616: CALL engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0
//   XREF to: 004ce7a0 (UNCONDITIONAL_CALL)
// 0056661b: ADD ESP,0x18
// 0056661e: CMP EBX,0x9
// 00566621: JZ 0x00566645
//   XREF to: 00566645 (CONDITIONAL_JUMP)
// 00566623: INC EDI
//   Label: LAB_00566623
// 00566624: MOV EBX,dword ptr [0x03114204]
//   Label: LAB_00566624
//   XREF to: 03114204 (READ)
// 0056662a: MOV EAX,[0x031141e8]
//   XREF to: 031141e8 (READ)
// 0056662f: ADD ESI,EBX
// 00566631: INC EBP
// 00566632: CMP ESI,EAX
// 00566634: JL 0x005665c8
//   XREF to: 005665c8 (CONDITIONAL_JUMP)
// 00566636: ADD ESP,0x10
// 00566639: POP EBP
// 0056663a: POP EDI
// 0056663b: POP ESI
// 0056663c: POP EBX
// 0056663d: RET
// 0056663e: MOV EAX,0xfb
//   Label: LAB_0056663e
// 00566643: JMP 0x005665fa
//   XREF to: 005665fa (UNCONDITIONAL_JUMP)
// 00566645: MOV EAX,EBP
//   Label: LAB_00566645
// 00566647: AND EAX,0x7
// 0056664a: CMP EAX,0x7
// 0056664d: JZ 0x00566623
//   XREF to: 00566623 (CONDITIONAL_JUMP)
// 0056664f: JMP 0x00566624
//   XREF to: 00566624 (UNCONDITIONAL_JUMP)
