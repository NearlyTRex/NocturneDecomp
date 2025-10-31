// Name: core_script.cpp_CScript_RelatedToSubtitles_FUN_00559d80
// Address: 00559d80
// Address Range: [[00559d80, 00559f76]]
// Convention: unknown
// Signature: undefined core_script.cpp_CScript_RelatedToSubtitles_FUN_00559d80()
// Cross-references:
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004da9d2 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_d_00641798
//   TerminatedCString s_No_script_loaded_0064179b
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_ctor_FUN_00486ea0
//   cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_00488530
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00489c20
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_004893f0
//   cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00488c70
//   cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010
//   cockpit_drawsurf.cpp_getCurrentFontMaxWidth_FUN_00489ce0
//   cockpit_drawsurf.cpp_setCurrentFont_FUN_004874c0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_CScript_RelatedToSubtitles(CScript* param_1, undefined4
   XMaybe, undefined4 YMaybe, undefined4 nWidthMinusOne, undefined4 nHeightMinusOne) */

void core_script_cpp_CScript_RelatedToSubtitles_FUN_00559d80(void)

{
  int iVar1;
  char *x;
  int index;
  BADSPACEBASE *in_ESP;
  char *text;
  int iVar2;
  CBitFont *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  CStrList *in_stack_00000014;
  char *y;
  char *in_stack_ffffff84;
  undefined1 local_40 [48];
  
  iVar2 = (int)in_stack_00000014 + (1 - in_stack_0000000c);
  cockpit_drawsurf_cpp_CDrawSurface_ctor_FUN_00486ea0
            ((CDrawSurface *)local_40,in_stack_00000008,in_stack_0000000c,
             (in_stack_00000010 - in_stack_00000008) + 1,iVar2,(CDrawSurface *)0x0);
  cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_00487010(0);
  cockpit_drawsurf_cpp_CDrawSurface_fillFullSurface_FUN_00488c70((CDrawSurface *)(local_40 + 8));
  cockpit_drawsurf_cpp_setCurrentFont_FUN_004874c0((CBitFont *)0x0);
  if (*(int *)(in_stack_00000004->bitmap_files[0] + 0x2c) < 1) {
    cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_00487010(0xf9);
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00489c20
              ((CDrawSurface *)(local_40 + 0x14),"(No script loaded.)");
  }
  else {
    iVar1 = cockpit_drawsurf_cpp_getCurrentFontMaxWidth_FUN_00489ce0();
    index = (*(int *)(*(int *)(in_stack_00000004->bitmap_files[0] + 0x30) +
                     *(int *)(in_stack_00000004->bitmap_files[0] + 0x44) * 8) + -1) -
            (iVar2 / iVar1) / 2;
    if (index < 0) {
      index = 0;
    }
    text = &DAT_00000002;
    iVar2 = iVar2 - iVar1;
    if (2 < iVar2) {
      do {
        iVar1 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0(in_stack_00000004);
        if (iVar1 <= index) break;
        if (index == iVar2) {
          iVar1 = *(int *)(in_stack_00000004->bitmap_files[0] + 0x14);
          if (iVar1 == 0) {
            iVar1 = 0xfa;
          }
          else if (iVar1 == 1) {
            iVar1 = 0xfb;
          }
          else {
            iVar1 = 0xf9;
          }
        }
        else {
          iVar1 = 0xff;
        }
        cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_00487010(iVar1);
        crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff7c,"%d",index + 1);
        cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAligned_FUN_004893f0
                  ((CDrawSurface *)(local_40 + 0x24),(int)&stack0xffffff80,2,text);
        y = text;
        x = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(in_stack_00000014,index);
        cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAligned_FUN_004893f0
                  ((CDrawSurface *)(local_40 + 0x2c),(int)x,(int)y,in_stack_ffffff84);
        text = text + iVar2;
        index = index + 1;
      } while ((int)text < (int)(in_stack_00000004->bitmap_files[0] + 0x34));
    }
  }
  cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_00487010(0xff);
  cockpit_drawsurf_cpp_CDrawSurface_drawSurfaceBorder_FUN_00488530
            ((CDrawSurface *)(local_40 + 0x1c));
  return;
}


// Assembly code:
// 00559d80: PUSH EBX
//   Label: core_script.cpp_CScript_RelatedToSubtitles_FUN_00559d80
// 00559d81: PUSH ESI
// 00559d82: PUSH EDI
// 00559d83: PUSH EBP
// 00559d84: SUB ESP,0x94
// 00559d8a: MOV EBP,dword ptr [ESP + 0xa8]
//   XREF to: Stack[0x4] (READ)
// 00559d91: MOV EDX,dword ptr [ESP + 0xac]
//   XREF to: Stack[0x8] (READ)
// 00559d98: MOV EBX,dword ptr [ESP + 0xb0]
//   XREF to: Stack[0xc] (READ)
// 00559d9f: MOV EDI,dword ptr [ESP + 0xb8]
//   XREF to: Stack[0x14] (READ)
// 00559da6: PUSH 0x0
// 00559da8: SUB EDI,EBX
// 00559daa: MOV EAX,dword ptr [ESP + 0xb8]
//   XREF to: Stack[0x10] (READ)
// 00559db1: INC EDI
// 00559db2: SUB EAX,EDX
// 00559db4: PUSH EDI
// 00559db5: INC EAX
// 00559db6: PUSH EAX
// 00559db7: PUSH EBX
// 00559db8: PUSH EDX
// 00559db9: LEA EAX,[ESP + 0x78]
//   XREF to: Stack[-0x40] (DATA)
// 00559dbd: PUSH EAX
// 00559dbe: CALL cockpit_drawsurf.cpp_CDrawSurface_ctor_FUN_00486ea0
//   XREF to: 00486ea0 (UNCONDITIONAL_CALL)
// 00559dc3: ADD ESP,0x18
// 00559dc6: PUSH 0x0
// 00559dc8: CALL cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010
//   XREF to: 00487010 (UNCONDITIONAL_CALL)
// 00559dcd: ADD ESP,0x4
// 00559dd0: LEA EAX,[ESP + 0x64]
//   XREF to: Stack[-0x40] (DATA)
// 00559dd4: PUSH EAX
// 00559dd5: CALL cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00488c70
//   XREF to: 00488c70 (UNCONDITIONAL_CALL)
// 00559dda: ADD ESP,0x4
// 00559ddd: PUSH 0x0
// 00559ddf: CALL cockpit_drawsurf.cpp_setCurrentFont_FUN_004874c0
//   XREF to: 004874c0 (UNCONDITIONAL_CALL)
// 00559de4: MOV EDX,dword ptr [EBP + 0x30]
// 00559de7: ADD ESP,0x4
// 00559dea: TEST EDX,EDX
// 00559dec: JLE 0x00559f56
//   XREF to: 00559f56 (CONDITIONAL_JUMP)
// 00559df2: LEA EAX,[ESP + 0x64]
//   XREF to: Stack[-0x40] (DATA)
// 00559df6: PUSH EAX
// 00559df7: CALL cockpit_drawsurf.cpp_getCurrentFontMaxWidth_FUN_00489ce0
//   XREF to: 00489ce0 (UNCONDITIONAL_CALL)
// 00559dfc: MOV EBX,EAX
// 00559dfe: ADD ESP,0x4
// 00559e01: MOV EDX,dword ptr [EBP + 0x48]
// 00559e04: MOV dword ptr [ESP + 0x88],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00559e0b: MOV EAX,dword ptr [EBP + 0x34]
// 00559e0e: MOV EAX,dword ptr [EAX + EDX*0x8]
// 00559e11: DEC EAX
// 00559e12: MOV EDX,EDI
// 00559e14: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00559e1b: SAR EDX,0x1f
// 00559e1e: MOV EAX,EDI
// 00559e20: IDIV EBX
// 00559e22: MOV EDX,EAX
// 00559e24: SAR EDX,0x1f
// 00559e27: SUB EAX,EDX
// 00559e29: SAR EAX,0x1
// 00559e2b: MOV EBX,dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x20] (READ)
// 00559e32: SUB EBX,EAX
// 00559e34: TEST EBX,EBX
// 00559e36: JL 0x00559f2c
//   XREF to: 00559f2c (CONDITIONAL_JUMP)
// 00559e3c: MOV ECX,dword ptr [ESP + 0x88]
//   Label: LAB_00559e3c
//   XREF to: Stack[-0x1c] (READ)
// 00559e43: MOV ESI,0x2
// 00559e48: LEA EAX,[EBP + 0x38]
// 00559e4b: SUB EDI,ECX
// 00559e4d: MOV dword ptr [ESP + 0x90],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00559e54: MOV dword ptr [ESP + 0x8c],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 00559e5b: CMP EDI,ESI
// 00559e5d: JLE 0x00559f07
//   XREF to: 00559f07 (CONDITIONAL_JUMP)
// 00559e63: MOV EDI,dword ptr [ESP + 0x90]
//   Label: LAB_00559e63
//   XREF to: Stack[-0x14] (READ)
// 00559e6a: PUSH EDI
// 00559e6b: CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
// 00559e70: ADD ESP,0x4
// 00559e73: CMP EBX,EAX
// 00559e75: JGE 0x00559f07
//   XREF to: 00559f07 (CONDITIONAL_JUMP)
// 00559e7b: CMP EBX,dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x20] (READ)
// 00559e82: JNZ 0x00559f4c
//   XREF to: 00559f4c (CONDITIONAL_JUMP)
// 00559e88: MOV EDX,dword ptr [EBP + 0x18]
// 00559e8b: TEST EDX,EDX
// 00559e8d: JNZ 0x00559f33
//   XREF to: 00559f33 (CONDITIONAL_JUMP)
// 00559e93: PUSH 0xfa
// 00559e98: CALL cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010
//   Label: LAB_00559e98
//   XREF to: 00487010 (UNCONDITIONAL_CALL)
// 00559e9d: ADD ESP,0x4
// 00559ea0: LEA EDI,[EBX + 0x1]
// 00559ea3: PUSH EDI
// 00559ea4: PUSH 0x641798
//   XREF to: 00641798 (DATA)
// 00559ea9: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0xa4] (DATA)
// 00559ead: PUSH EAX
// 00559eae: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00559eb3: ADD ESP,0xc
// 00559eb6: PUSH ESI
// 00559eb7: PUSH 0x2
// 00559eb9: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0xa4] (DATA)
// 00559ebd: PUSH EAX
// 00559ebe: LEA EAX,[ESP + 0x70]
//   XREF to: Stack[-0x40] (DATA)
// 00559ec2: PUSH EAX
// 00559ec3: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_004893f0
//   XREF to: 004893f0 (UNCONDITIONAL_CALL)
// 00559ec8: ADD ESP,0x10
// 00559ecb: PUSH ESI
// 00559ecc: PUSH 0x1e
// 00559ece: PUSH EBX
// 00559ecf: MOV EAX,dword ptr [ESP + 0x9c]
//   XREF to: Stack[-0x14] (READ)
// 00559ed6: PUSH EAX
// 00559ed7: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 00559edc: ADD ESP,0x8
// 00559edf: PUSH EAX
// 00559ee0: LEA EAX,[ESP + 0x70]
//   XREF to: Stack[-0x40] (DATA)
// 00559ee4: PUSH EAX
// 00559ee5: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_004893f0
//   XREF to: 004893f0 (UNCONDITIONAL_CALL)
// 00559eea: ADD ESP,0x10
// 00559eed: MOV EDX,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x1c] (READ)
// 00559ef4: MOV ECX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x18] (READ)
// 00559efb: ADD ESI,EDX
// 00559efd: MOV EBX,EDI
// 00559eff: CMP ESI,ECX
// 00559f01: JL 0x00559e63
//   XREF to: 00559e63 (CONDITIONAL_JUMP)
// 00559f07: PUSH 0xff
//   Label: LAB_00559f07
// 00559f0c: CALL cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010
//   XREF to: 00487010 (UNCONDITIONAL_CALL)
// 00559f11: ADD ESP,0x4
// 00559f14: LEA EAX,[ESP + 0x64]
//   XREF to: Stack[-0x40] (DATA)
// 00559f18: PUSH EAX
// 00559f19: CALL cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_00488530
//   XREF to: 00488530 (UNCONDITIONAL_CALL)
// 00559f1e: ADD ESP,0x4
// 00559f21: ADD ESP,0x94
// 00559f27: POP EBP
// 00559f28: POP EDI
// 00559f29: POP ESI
// 00559f2a: POP EBX
// 00559f2b: RET
// 00559f2c: XOR EBX,EBX
//   Label: LAB_00559f2c
// 00559f2e: JMP 0x00559e3c
//   XREF to: 00559e3c (UNCONDITIONAL_JUMP)
// 00559f33: CMP EDX,0x1
//   Label: LAB_00559f33
// 00559f36: JNZ 0x00559f42
//   XREF to: 00559f42 (CONDITIONAL_JUMP)
// 00559f38: PUSH 0xfb
// 00559f3d: JMP 0x00559e98
//   XREF to: 00559e98 (UNCONDITIONAL_JUMP)
// 00559f42: PUSH 0xf9
//   Label: LAB_00559f42
// 00559f47: JMP 0x00559e98
//   XREF to: 00559e98 (UNCONDITIONAL_JUMP)
// 00559f4c: PUSH 0xff
//   Label: LAB_00559f4c
// 00559f51: JMP 0x00559e98
//   XREF to: 00559e98 (UNCONDITIONAL_JUMP)
// 00559f56: PUSH 0xf9
//   Label: LAB_00559f56
// 00559f5b: CALL cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010
//   XREF to: 00487010 (UNCONDITIONAL_CALL)
// 00559f60: ADD ESP,0x4
// 00559f63: PUSH 0x64179b
//   XREF to: 0064179b (DATA)
// 00559f68: LEA EAX,[ESP + 0x68]
//   XREF to: Stack[-0x40] (DATA)
// 00559f6c: PUSH EAX
// 00559f6d: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00489c20
//   XREF to: 00489c20 (UNCONDITIONAL_CALL)
// 00559f72: ADD ESP,0x8
// 00559f75: JMP 0x00559f07
//   XREF to: 00559f07 (UNCONDITIONAL_JUMP)
