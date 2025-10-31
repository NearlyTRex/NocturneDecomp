// Name: core_menu.cpp_SettingMouseSensitivity_FUN_005107c0
// Address: 005107c0
// Address Range: [[005107c0, 00510a4f]]
// Convention: unknown
// Signature: undefined core_menu.cpp_SettingMouseSensitivity_FUN_005107c0()
// Cross-references:
//   core_menu.cpp_CustomKeySettings_FUN_00511890 (00511890) at 00511da1 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_s_4_2f_00636649
//   double DOUBLE_0063664f = 0.0000152587890625
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   int g_WindowWidth = 0x140
//   CKeys* g_CKeysPtr = 02dcd7d4
//   CBitFont* g_EditorFont
//   CEditorTools g_CEditorToolsPtr
//   int g_MouseX
//   int g_MouseY
//   int g_ClipLeft
//   int g_ClipTop
//   int g_ClipRight
//   int g_ClipBottom
//   void* g_CKeysPtr
// Function calls:
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_fillRectColor_FUN_00403170
//   engine_2d.c_fillRectWithBorder_FUN_00403200
//   engine_font.cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004cdf30
//   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890
//   shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80
//   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_winrun.cpp_setCursorPosition_FUN_005f30d0

#include "nocturne.h"

/* Signature: undefined1 core_menu.cpp_SettingMouseSensitivity(undefined4 param_1, undefined4
   param_2) */

void core_menu_cpp_SettingMouseSensitivity_FUN_005107c0(void)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_ESI;
  int iVar5;
  int *in_stack_00000004;
  char *in_stack_00000008;
  int in_stack_00000020;
  
  iVar3 = g_WindowWidth * 3 >> 0x1f;
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_004a0890
            (g_CEditorToolsPtr,(int)((g_WindowWidth * 3 + iVar3 * -4) - (uint)(iVar3 << 1 < 0)) >> 2
             ,0x2c,in_stack_00000008,0);
  iVar3 = *in_stack_00000004;
  if (iVar3 < 0x4000) {
    *in_stack_00000004 = 0x4000;
    goto LAB_00510823;
  }
  if (iVar3 < 0x40001) {
    if (iVar3 < 0x4000) {
      *in_stack_00000004 = 0x4000;
      goto LAB_00510823;
    }
    if (iVar3 < 0x40001) goto LAB_00510823;
  }
  *in_stack_00000004 = 0x40000;
LAB_00510823:
  iVar3 = *in_stack_00000004;
  engine_2d_c_clearInputAndWait_FUN_00403260();
  wincore_winrun_cpp_setCursorPosition_FUN_005f30d0
            ((int)(((longlong)(g_WindowWidth + -1) * (longlong)(iVar3 + -0x4000)) / 0x3c000),
             g_MouseY);
  do {
    shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80(g_CEditorToolsPtr);
    if (g_MouseX != unaff_ESI) {
      iVar3 = (int)(((longlong)g_MouseX * 0x3c000) / (longlong)(g_WindowWidth + -1)) + 0x4000;
    }
    iVar2 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x4b);
    if (iVar2 != 0) {
      iVar3 = iVar3 + -700;
    }
    unaff_ESI = 0x5108bb;
    iVar2 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x4d);
    if (iVar2 != 0) {
      iVar3 = iVar3 + 700;
    }
    if (iVar3 < 0x4000) {
      iVar3 = 0x4000;
    }
    else if (0x40000 < iVar3) {
      iVar3 = 0x40000;
    }
    iVar2 = g_ClipBottom + -1;
    iVar4 = g_ClipRight + -1;
    iVar5 = g_ClipLeft + 1;
    engine_2d_c_fillRectWithBorder_FUN_00403200(iVar5,g_ClipTop + 1,iVar4,iVar2,0,0xff);
    engine_2d_c_fillRectColor_FUN_00403170
              (iVar5,iVar2,
               (int)(((longlong)(iVar4 - iVar5) * (longlong)(iVar3 + -0x4000)) / 0x3c000) + iVar5,
               in_stack_00000020,4);
    dVar1 = (double)iVar3 * DOUBLE_0063664f;
    iVar5 = g_ClipBottom + g_ClipTop;
    iVar4 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(g_EditorFont,0x41);
    iVar2 = g_ClipLeft;
    engine_font_cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004cdf30
              (g_EditorFont,g_ClipLeft,g_ClipRight,(iVar5 - iVar4) / 2,0,0x636649,SUB84(dVar1,0));
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    in_stack_00000020 = 0x5109b8;
    iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,1);
    if (iVar4 != 0) goto LAB_005109f5;
    iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x1c);
  } while ((iVar4 == 0) &&
          (iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x200), iVar4 == 0));
  *(int *)iVar2 = iVar3;
LAB_005109f5:
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
  return;
}


// Assembly code:
// 005107c0: PUSH EBX
//   Label: core_menu.cpp_SettingMouseSensitivity_FUN_005107c0
// 005107c1: PUSH ESI
// 005107c2: PUSH EDI
// 005107c3: PUSH EBP
// 005107c4: MOV EBP,ESP
// 005107c6: SUB ESP,0x10
// 005107c9: AND ESP,0xfffffff8
// 005107cc: PUSH 0x0
// 005107ce: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005107d1: PUSH EDX
// 005107d2: MOV EDX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 005107d8: LEA EAX,[EDX*0x4 + 0x0]
// 005107df: SUB EAX,EDX
// 005107e1: MOV EDX,EAX
// 005107e3: SAR EDX,0x1f
// 005107e6: SHL EDX,0x2
// 005107e9: SBB EAX,EDX
// 005107eb: SAR EAX,0x2
// 005107ee: PUSH 0x2c
// 005107f0: PUSH EAX
// 005107f1: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 005107f7: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 005107f8: CALL shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890
//   XREF to: 004a0890 (UNCONDITIONAL_CALL)
// 005107fd: ADD ESP,0x14
// 00510800: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00510803: MOV EBX,dword ptr [EAX]
// 00510805: CMP EBX,0x4000
// 0051080b: JL 0x00510a0b
//   XREF to: 00510a0b (CONDITIONAL_JUMP)
// 00510811: CMP EBX,0x40000
// 00510817: JLE 0x00510a16
//   XREF to: 00510a16 (CONDITIONAL_JUMP)
// 0051081d: MOV dword ptr [EAX],0x40000
//   Label: LAB_0051081d
// 00510823: MOV ESI,dword ptr [EBP + 0x14]
//   Label: LAB_00510823
//   XREF to: Stack[0x4] (READ)
// 00510826: MOV EBX,0x3c000
// 0051082b: MOV ESI,dword ptr [ESI]
// 0051082d: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00510832: MOV ECX,dword ptr [0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 00510838: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0051083d: PUSH ECX
// 0051083e: LEA EDX,[ESI + 0xffffc000]
// 00510844: DEC EAX
// 00510845: IMUL EDX
// 00510847: IDIV EBX
// 00510849: PUSH EAX
// 0051084a: CALL wincore_winrun.cpp_setCursorPosition_FUN_005f30d0
//   XREF to: 005f30d0 (UNCONDITIONAL_CALL)
// 0051084f: XOR EBX,EBX
// 00510851: ADD ESP,0x8
// 00510854: MOV dword ptr [ESP + 0x8],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 00510858: MOV EDI,dword ptr [0x00678a60]
//   Label: LAB_00510858
//   XREF to: 00678a60 (READ)
// 0051085e: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 0051085f: CALL shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80
//   XREF to: 004a0f80 (UNCONDITIONAL_CALL)
// 00510864: ADD ESP,0x4
// 00510867: MOV EDX,dword ptr [0x02cf6a8c]
//   XREF to: 02cf6a8c (READ)
// 0051086d: CMP EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 00510871: JZ 0x00510894
//   XREF to: 00510894 (CONDITIONAL_JUMP)
// 00510873: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00510879: MOV EAX,EDX
// 0051087b: MOV EDX,0x3c000
// 00510880: DEC EBX
// 00510881: IMUL EDX
// 00510883: IDIV EBX
// 00510885: LEA ESI,[EAX + 0x4000]
// 0051088b: MOV EAX,[0x02cf6a8c]
//   XREF to: 02cf6a8c (READ)
// 00510890: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00510894: PUSH 0x4b
//   Label: LAB_00510894
// 00510896: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0051089b: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0051089c: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0051089e: CALL dword ptr [EDX + 0x4]
// 005108a1: ADD ESP,0x8
// 005108a4: TEST EAX,EAX
// 005108a6: JZ 0x005108ae
//   XREF to: 005108ae (CONDITIONAL_JUMP)
// 005108a8: SUB ESI,0x2bc
// 005108ae: PUSH 0x4d
//   Label: LAB_005108ae
// 005108b0: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005108b5: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005108b6: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005108b8: CALL dword ptr [EDX + 0x4]
// 005108bb: ADD ESP,0x8
// 005108be: TEST EAX,EAX
// 005108c0: JZ 0x005108c8
//   XREF to: 005108c8 (CONDITIONAL_JUMP)
// 005108c2: ADD ESI,0x2bc
// 005108c8: CMP ESI,0x4000
//   Label: LAB_005108c8
// 005108ce: JGE 0x00510a3a
//   XREF to: 00510a3a (CONDITIONAL_JUMP)
// 005108d4: MOV ESI,0x4000
// 005108d9: MOV EAX,[0x02d0255c]
//   Label: LAB_005108d9
//   XREF to: 02d0255c (READ)
// 005108de: INC EAX
// 005108df: PUSH 0xff
// 005108e4: MOV dword ptr [ESP + 0x4],EAX
// 005108e8: MOV EAX,[0x02d02564]
//   XREF to: 02d02564 (READ)
// 005108ed: PUSH 0x0
// 005108ef: DEC EAX
// 005108f0: MOV EBX,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 005108f6: PUSH EAX
// 005108f7: DEC EBX
// 005108f8: MOV dword ptr [ESP + 0x10],EAX
// 005108fc: PUSH EBX
// 005108fd: MOV EAX,dword ptr [ESP + 0x10]
// 00510901: MOV EDI,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 00510907: PUSH EAX
// 00510908: INC EDI
// 00510909: PUSH EDI
// 0051090a: CALL engine_2d.c_fillRectWithBorder_FUN_00403200
//   XREF to: 00403200 (UNCONDITIONAL_CALL)
// 0051090f: ADD ESP,0x18
// 00510912: LEA EDX,[ESI + 0xffffc000]
// 00510918: MOV EAX,EBX
// 0051091a: MOV EBX,0x3c000
// 0051091f: SUB EAX,EDI
// 00510921: IMUL EDX
// 00510923: IDIV EBX
// 00510925: PUSH 0x4
// 00510927: MOV EDX,dword ptr [ESP + 0x8]
// 0051092b: PUSH EDX
// 0051092c: ADD EAX,EDI
// 0051092e: PUSH EAX
// 0051092f: MOV ECX,dword ptr [ESP + 0xc]
// 00510933: PUSH ECX
// 00510934: PUSH EDI
// 00510935: CALL engine_2d.c_fillRectColor_FUN_00403170
//   XREF to: 00403170 (UNCONDITIONAL_CALL)
// 0051093a: ADD ESP,0x14
// 0051093d: MOV dword ptr [ESP + 0xc],ESI
// 00510941: FILD dword ptr [ESP + 0xc]
// 00510945: FMUL double ptr [0x0063664f]
//   XREF to: 0063664f (READ)
// 0051094b: SUB ESP,0x8
// 0051094e: FSTP double ptr [ESP]
// 00510951: PUSH 0x636649
//   XREF to: 00636649 (DATA)
// 00510956: PUSH 0x0
// 00510958: PUSH 0xff
// 0051095d: MOV EDX,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 00510963: PUSH 0x41
// 00510965: MOV EDI,dword ptr [0x02cf1cd0]
//   XREF to: 02cf1cd0 (READ)
// 0051096b: MOV EBX,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 00510971: PUSH EDI
// 00510972: ADD EBX,EDX
// 00510974: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 00510979: MOV EDX,EBX
// 0051097b: SUB EDX,EAX
// 0051097d: MOV EAX,EDX
// 0051097f: SAR EDX,0x1f
// 00510982: SUB EAX,EDX
// 00510984: SAR EAX,0x1
// 00510986: ADD ESP,0x8
// 00510989: PUSH EAX
// 0051098a: MOV EAX,[0x02d02560]
//   XREF to: 02d02560 (READ)
// 0051098f: PUSH EAX
// 00510990: MOV EDX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 00510996: PUSH EDX
// 00510997: MOV ECX,dword ptr [0x02cf1cd0]
//   XREF to: 02cf1cd0 (READ)
// 0051099d: PUSH ECX
// 0051099e: CALL engine_font.cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004cdf30
//   XREF to: 004cdf30 (UNCONDITIONAL_CALL)
// 005109a3: ADD ESP,0x24
// 005109a6: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 005109ab: PUSH 0x1
// 005109ad: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005109b2: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005109b3: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005109b5: CALL dword ptr [EDX + 0x4]
// 005109b8: ADD ESP,0x8
// 005109bb: TEST EAX,EAX
// 005109bd: JNZ 0x005109f5
//   XREF to: 005109f5 (CONDITIONAL_JUMP)
// 005109bf: PUSH 0x1c
// 005109c1: MOV EDX,dword ptr [0x0067cf44]
//   XREF to: 02dcd7d4 (PARAM)
//   XREF to: 0067cf44 (READ)
// 005109c7: PUSH EDX
//   XREF to: 02dcd7d4 (DATA)
// 005109c8: MOV EAX,dword ptr [EDX]
//   XREF to: 02dcd7d4 (READ)
// 005109ca: CALL dword ptr [EAX + 0x4]
// 005109cd: ADD ESP,0x8
// 005109d0: TEST EAX,EAX
// 005109d2: JNZ 0x005109f0
//   XREF to: 005109f0 (CONDITIONAL_JUMP)
// 005109d4: PUSH 0x200
// 005109d9: MOV EDX,dword ptr [0x0067cf44]
//   XREF to: 02dcd7d4 (PARAM)
//   XREF to: 0067cf44 (READ)
// 005109df: PUSH EDX
//   XREF to: 02dcd7d4 (DATA)
// 005109e0: MOV EAX,dword ptr [EDX]
//   XREF to: 02dcd7d4 (READ)
// 005109e2: CALL dword ptr [EAX + 0x4]
// 005109e5: ADD ESP,0x8
// 005109e8: TEST EAX,EAX
// 005109ea: JZ 0x00510858
//   XREF to: 00510858 (CONDITIONAL_JUMP)
// 005109f0: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_005109f0
//   XREF to: Stack[0x4] (READ)
// 005109f3: MOV dword ptr [EAX],ESI
// 005109f5: MOV EBX,dword ptr [0x00678a60]
//   Label: LAB_005109f5
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 005109fb: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 005109fc: CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
// 00510a01: ADD ESP,0x4
// 00510a04: MOV ESP,EBP
// 00510a06: POP EBP
// 00510a07: POP EDI
// 00510a08: POP ESI
// 00510a09: POP EBX
// 00510a0a: RET
// 00510a0b: MOV dword ptr [EAX],0x4000
//   Label: LAB_00510a0b
// 00510a11: JMP 0x00510823
//   XREF to: 00510823 (UNCONDITIONAL_JUMP)
// 00510a16: CMP EBX,0x4000
//   Label: LAB_00510a16
// 00510a1c: JGE 0x00510a29
//   XREF to: 00510a29 (CONDITIONAL_JUMP)
// 00510a1e: MOV dword ptr [EAX],0x4000
// 00510a24: JMP 0x00510823
//   XREF to: 00510823 (UNCONDITIONAL_JUMP)
// 00510a29: CMP EBX,0x40000
//   Label: LAB_00510a29
// 00510a2f: JLE 0x00510823
//   XREF to: 00510823 (CONDITIONAL_JUMP)
// 00510a35: JMP 0x0051081d
//   XREF to: 0051081d (UNCONDITIONAL_JUMP)
// 00510a3a: CMP ESI,0x40000
//   Label: LAB_00510a3a
// 00510a40: JLE 0x005108d9
//   XREF to: 005108d9 (CONDITIONAL_JUMP)
// 00510a46: MOV ESI,0x40000
// 00510a4b: JMP 0x005108d9
//   XREF to: 005108d9 (UNCONDITIONAL_JUMP)
