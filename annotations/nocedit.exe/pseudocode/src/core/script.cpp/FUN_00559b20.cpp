// Name: core_script.cpp_FUN_00559b20
// Address: 00559b20
// Address Range: [[00559b20, 00559d70]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00559b20()
// Cross-references:
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004da55e [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_00641794 = 0.3500000
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   CGame* g_CGamePtr = 02d81a9c
//   CBitFont* g_MediumFont
//   CBitFont* g_TinyFont
//   CBitFont* g_SmallEditorFont
//   CBitFont* g_MicroFont
//   int g_ClipTop
//   CGame g_CGameInstance
//   undefined4 DAT_02d81aac
//   undefined4 DAT_02d81cc4
//   int g_MessageCount
//   undefined4 DAT_031061e0
//   undefined4 DAT_031061e8
//   undefined4 DAT_031065e8
//   undefined4 DAT_0310f4a0
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042f9e0
//   core_script.cpp_FUN_00559ac0
//   engine_2d.c_fillRectColor_FUN_00403170
//   engine_3d.c_setRenderAlpha_FUN_00406d80
//   engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   engine_font.cpp_CBitFont_wrapText_FUN_004d0010

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_script.cpp_FUN_00559b20(undefined4 param_1) */

void core_script_cpp_FUN_00559b20(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *text;
  CBitFont *this_ptr;
  int unaff_ESI;
  int unaff_EDI;
  int in_stack_00000004;
  int local_1c;
  int local_18;
  
  if (g_CGamePtr->letterbox_mode == 0) {
    fVar1 = (float)core_charactr_cpp_CCharacter_FUN_0042f9e0((CCharacter *)g_CGamePtr);
    _DAT_0310f4a0 = _DAT_0310f4a0 - fVar1 / FLOAT_00641794;
  }
  else {
    DAT_031061e0 = g_CGamePtr->letterbox_mode;
    fVar1 = (float)core_charactr_cpp_CCharacter_FUN_0042f9e0((CCharacter *)g_CGamePtr);
    _DAT_0310f4a0 = fVar1 / FLOAT_00641794 + _DAT_0310f4a0;
  }
  iVar6 = g_WindowHeight;
  if (_DAT_0310f4a0 < 0.0) {
    _DAT_0310f4a0 = 0.0;
  }
  if (1.0 < _DAT_0310f4a0) {
    _DAT_0310f4a0 = 1.0;
  }
  iVar2 = core_script_cpp_FUN_00559ac0();
  if (0 < iVar2) {
    if (DAT_031061e0 != 2) {
      engine_2d_c_fillRectColor_FUN_00403170(0,0,local_1c + -1,iVar2 + -1,0);
    }
    engine_2d_c_fillRectColor_FUN_00403170(local_1c,iVar6 - iVar2,local_18 + -1,iVar6 + -1,0);
  }
  iVar2 = g_ClipTop;
  if ((*(char *)(in_stack_00000004 + 0x54) != '\0') && (g_CGamePtr->subtitle_mode != 0)) {
    this_ptr = g_MediumFont;
    if (g_WindowHeight < 0x1e0) {
      this_ptr = g_TinyFont;
    }
    if ((g_WindowHeight < 0x180) && (this_ptr = g_MicroFont, g_MessageCount != 0)) {
      this_ptr = g_SmallEditorFont;
    }
    iVar3 = (g_WindowWidth * 9) / 10;
    iVar4 = engine_font_cpp_CBitFont_wrapText_FUN_004d0010
                      (this_ptr,(char *)(in_stack_00000004 + 0x54),&DAT_031061e8,10,0x400,iVar3);
    iVar5 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0x58);
    iVar3 = ((iVar3 + iVar6) - iVar5 * iVar4) / 2;
    iVar6 = iVar6 - iVar5 * iVar4;
    if (iVar6 < iVar3) {
      iVar3 = iVar6;
    }
    engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
    iVar6 = 0;
    if (0 < unaff_ESI) {
      text = &DAT_031061e8;
      do {
        iVar4 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(this_ptr,text);
        iVar6 = iVar6 + 1;
        engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                  (this_ptr,text,(unaff_EDI - iVar4) / 2,iVar3,0xf8,0);
        text = text + 0x400;
        iVar3 = iVar3 + unaff_EDI;
      } while (iVar6 < unaff_ESI);
    }
  }
  g_ClipTop = iVar2;
  return;
}


// Assembly code:
// 00559b20: PUSH EBX
//   Label: core_script.cpp_FUN_00559b20
// 00559b21: PUSH ESI
// 00559b22: PUSH EDI
// 00559b23: PUSH EBP
// 00559b24: SUB ESP,0x20
// 00559b27: MOV EDI,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 00559b2b: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 00559b30: MOV EDX,dword ptr [EAX + 0x228]
//   XREF to: 02d81cc4 (READ)
// 00559b36: TEST EDX,EDX
// 00559b38: JNZ 0x00559d41
//   XREF to: 00559d41 (CONDITIONAL_JUMP)
// 00559b3e: PUSH EAX
//   XREF to: 02d81a9c (DATA)
// 00559b3f: CALL core_charactr.cpp_CCharacter_FUN_0042f9e0
//   XREF to: 0042f9e0 (UNCONDITIONAL_CALL)
// 00559b44: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00559b48: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x14] (READ)
// 00559b4c: FDIV float ptr [0x00641794]
//   XREF to: 00641794 (READ)
// 00559b52: FSUBR float ptr [0x0310f4a0]
//   XREF to: 0310f4a0 (READ)
// 00559b58: ADD ESP,0x4
//   Label: LAB_00559b58
// 00559b5b: FSTP float ptr [0x0310f4a0]
//   XREF to: 0310f4a0 (WRITE)
// 00559b61: FLD float ptr [0x0310f4a0]
//   XREF to: 0310f4a0 (READ)
// 00559b67: FLDZ
// 00559b69: FCOMPP
// 00559b6b: FNSTSW AX
// 00559b6d: SAHF
// 00559b6e: JBE 0x00559b78
//   XREF to: 00559b78 (CONDITIONAL_JUMP)
// 00559b70: XOR ECX,ECX
// 00559b72: MOV dword ptr [0x0310f4a0],ECX
//   XREF to: 0310f4a0 (WRITE)
// 00559b78: FLD float ptr [0x0310f4a0]
//   Label: LAB_00559b78
//   XREF to: 0310f4a0 (READ)
// 00559b7e: FLD1
// 00559b80: FCOMPP
// 00559b82: FNSTSW AX
// 00559b84: SAHF
// 00559b85: JNC 0x00559b91
//   XREF to: 00559b91 (CONDITIONAL_JUMP)
// 00559b87: MOV dword ptr [0x0310f4a0],0x3f800000
//   XREF to: 0310f4a0 (WRITE)
// 00559b91: MOV EAX,[0x00679394]
//   Label: LAB_00559b91
//   XREF to: 00679394 (READ)
// 00559b96: MOV EBX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 00559b9c: PUSH EDI
// 00559b9d: XOR ESI,ESI
// 00559b9f: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00559ba3: CALL core_script.cpp_FUN_00559ac0
//   XREF to: 00559ac0 (UNCONDITIONAL_CALL)
// 00559ba8: MOV dword ptr [ESP + 0xc],ESI
//   XREF to: Stack[-0x28] (WRITE)
// 00559bac: ADD ESP,0x4
// 00559baf: MOV ESI,EAX
// 00559bb1: TEST EAX,EAX
// 00559bb3: JLE 0x00559bf2
//   XREF to: 00559bf2 (CONDITIONAL_JUMP)
// 00559bb5: CMP dword ptr [0x031061e0],0x2
//   XREF to: 031061e0 (READ)
// 00559bbc: JZ 0x00559bd4
//   XREF to: 00559bd4 (CONDITIONAL_JUMP)
// 00559bbe: PUSH 0x0
// 00559bc0: DEC EAX
// 00559bc1: PUSH EAX
// 00559bc2: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x24] (READ)
// 00559bc6: DEC EAX
// 00559bc7: PUSH EAX
// 00559bc8: PUSH 0x0
// 00559bca: PUSH 0x0
// 00559bcc: CALL engine_2d.c_fillRectColor_FUN_00403170
//   XREF to: 00403170 (UNCONDITIONAL_CALL)
// 00559bd1: ADD ESP,0x14
// 00559bd4: PUSH 0x0
//   Label: LAB_00559bd4
// 00559bd6: LEA EAX,[EBX + -0x1]
// 00559bd9: PUSH EAX
// 00559bda: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x24] (READ)
// 00559bde: DEC EAX
// 00559bdf: PUSH EAX
// 00559be0: MOV EAX,EBX
// 00559be2: SUB EAX,ESI
// 00559be4: PUSH EAX
// 00559be5: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x28] (READ)
// 00559be9: PUSH EAX
// 00559bea: CALL engine_2d.c_fillRectColor_FUN_00403170
//   XREF to: 00403170 (UNCONDITIONAL_CALL)
// 00559bef: ADD ESP,0x14
// 00559bf2: MOV EAX,[0x02d0255c]
//   Label: LAB_00559bf2
//   XREF to: 02d0255c (READ)
// 00559bf7: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00559bfb: MOV EAX,EBX
// 00559bfd: SUB EAX,ESI
// 00559bff: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x30] (DATA)
// 00559c02: CMP byte ptr [EDI + 0x54],0x0
// 00559c06: JZ 0x00559d30
//   XREF to: 00559d30 (CONDITIONAL_JUMP)
// 00559c0c: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00559c11: CMP dword ptr [EAX + 0x10],0x0
//   XREF to: 02d81aac (READ)
// 00559c15: JZ 0x00559d30
//   XREF to: 00559d30 (CONDITIONAL_JUMP)
// 00559c1b: MOV ECX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 00559c21: MOV EBP,dword ptr [0x020a5718]
//   XREF to: 020a5718 (READ)
// 00559c27: CMP ECX,0x1e0
// 00559c2d: JGE 0x00559c35
//   XREF to: 00559c35 (CONDITIONAL_JUMP)
// 00559c2f: MOV EBP,dword ptr [0x020a571c]
//   XREF to: 020a571c (READ)
// 00559c35: CMP dword ptr [0x00679398],0x180
//   Label: LAB_00559c35
//   XREF to: 00679398 (READ)
// 00559c3f: JGE 0x00559c54
//   XREF to: 00559c54 (CONDITIONAL_JUMP)
// 00559c41: CMP dword ptr [0x02fa8cd0],0x0
//   XREF to: 02fa8cd0 (READ)
// 00559c48: JZ 0x00559d66
//   XREF to: 00559d66 (CONDITIONAL_JUMP)
// 00559c4e: MOV EBP,dword ptr [0x020a5724]
//   XREF to: 020a5724 (READ)
// 00559c54: MOV EDX,dword ptr [0x00679394]
//   Label: LAB_00559c54
//   XREF to: 00679394 (READ)
// 00559c5a: LEA EAX,[EDX*0x8 + 0x0]
// 00559c61: ADD EDX,EAX
// 00559c63: MOV ESI,0xa
// 00559c68: MOV EAX,EDX
// 00559c6a: SAR EDX,0x1f
// 00559c6d: IDIV ESI
// 00559c6f: PUSH EAX
// 00559c70: PUSH 0x400
// 00559c75: PUSH ESI
// 00559c76: PUSH 0x31061e8
//   XREF to: 031061e8 (DATA)
// 00559c7b: LEA EAX,[EDI + 0x54]
// 00559c7e: PUSH EAX
// 00559c7f: PUSH EBP
// 00559c80: CALL engine_font.cpp_CBitFont_wrapText_FUN_004d0010
//   XREF to: 004d0010 (UNCONDITIONAL_CALL)
// 00559c85: ADD ESP,0x18
// 00559c88: PUSH 0x58
// 00559c8a: PUSH EBP
// 00559c8b: MOV ESI,EAX
// 00559c8d: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00559c91: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 00559c96: MOV EDI,EAX
// 00559c98: IMUL EDI,ESI
// 00559c9b: ADD ESP,0x8
// 00559c9e: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 00559ca1: ADD EDX,EBX
// 00559ca3: SUB EDX,EDI
// 00559ca5: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00559ca9: MOV EAX,EDX
// 00559cab: SAR EDX,0x1f
// 00559cae: SUB EAX,EDX
// 00559cb0: SAR EAX,0x1
// 00559cb2: SUB EBX,EDI
// 00559cb4: MOV ESI,EAX
// 00559cb6: CMP EAX,EBX
// 00559cb8: JLE 0x00559cbc
//   XREF to: 00559cbc (CONDITIONAL_JUMP)
// 00559cba: MOV ESI,EBX
// 00559cbc: PUSH 0xffff
//   Label: LAB_00559cbc
// 00559cc1: CALL engine_3d.c_setRenderAlpha_FUN_00406d80
//   XREF to: 00406d80 (UNCONDITIONAL_CALL)
// 00559cc6: ADD ESP,0x4
// 00559cc9: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 00559ccd: XOR EDI,EDI
// 00559ccf: TEST EAX,EAX
// 00559cd1: JLE 0x00559d30
//   XREF to: 00559d30 (CONDITIONAL_JUMP)
// 00559cd3: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 00559cd7: ADD EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (READ)
// 00559cdb: MOV EBX,0x31061e8
//   XREF to: 031061e8 (PARAM)
// 00559ce0: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00559ce4: PUSH EBX
//   Label: LAB_00559ce4
//   XREF to: 031061e8 (DATA)
//   XREF to: 031065e8 (DATA)
// 00559ce5: PUSH EBP
// 00559ce6: CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   XREF to: 004cfe80 (UNCONDITIONAL_CALL)
// 00559ceb: ADD ESP,0x8
// 00559cee: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (READ)
// 00559cf2: SUB EDX,EAX
// 00559cf4: MOV EAX,EDX
// 00559cf6: SAR EDX,0x1f
// 00559cf9: SUB EAX,EDX
// 00559cfb: SAR EAX,0x1
// 00559cfd: PUSH 0x0
// 00559cff: PUSH 0xf8
// 00559d04: PUSH ESI
// 00559d05: PUSH EAX
// 00559d06: PUSH EBX
//   XREF to: 031061e8 (DATA)
// 00559d07: PUSH EBP
// 00559d08: INC EDI
// 00559d09: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 00559d0e: ADD ESP,0x18
// 00559d11: ADD EBX,0x400
// 00559d17: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (READ)
// 00559d1b: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 00559d1f: ADD ESI,EDX
// 00559d21: CMP EDI,ECX
// 00559d23: JL 0x00559ce4
//   XREF to: 00559ce4 (CONDITIONAL_JUMP)
// 00559d25: LEA EAX,[EAX]
// 00559d2b: LEA EDX,[EDX]
// 00559d2e: MOV EBX,EBX
// 00559d30: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_00559d30
//   XREF to: Stack[-0x2c] (READ)
// 00559d34: MOV [0x02d0255c],EAX
//   XREF to: 02d0255c (WRITE)
// 00559d39: ADD ESP,0x20
// 00559d3c: POP EBP
// 00559d3d: POP EDI
// 00559d3e: POP ESI
// 00559d3f: POP EBX
// 00559d40: RET
// 00559d41: PUSH EAX
//   Label: LAB_00559d41
//   XREF to: 02d81a9c (DATA)
// 00559d42: MOV dword ptr [0x031061e0],EDX
//   XREF to: 031061e0 (WRITE)
// 00559d48: CALL core_charactr.cpp_CCharacter_FUN_0042f9e0
//   XREF to: 0042f9e0 (UNCONDITIONAL_CALL)
// 00559d4d: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00559d51: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x14] (READ)
// 00559d55: FDIV float ptr [0x00641794]
//   XREF to: 00641794 (READ)
// 00559d5b: FADD float ptr [0x0310f4a0]
//   XREF to: 0310f4a0 (READ)
// 00559d61: JMP 0x00559b58
//   XREF to: 00559b58 (UNCONDITIONAL_JUMP)
// 00559d66: MOV EBP,dword ptr [0x020a572c]
//   Label: LAB_00559d66
//   XREF to: 020a572c (READ)
// 00559d6c: JMP 0x00559c54
//   XREF to: 00559c54 (UNCONDITIONAL_JUMP)
