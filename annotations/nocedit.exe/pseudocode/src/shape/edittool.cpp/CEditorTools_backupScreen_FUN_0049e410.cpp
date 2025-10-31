// Name: shape_edittool.cpp_CEditorTools_backupScreen_FUN_0049e410
// Address: 0049e410
// Address Range: [[0049e410, 0049e4c0]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEditorTools_backupScreen_FUN_0049e410(CEditorTools * this_ptr)
// Cross-references:
//   shape_edittool.cpp_CEditorTools_createModalWindow_FUN_004a0970 (004a0970) at 004a0b9a [UNCONDITIONAL_CALL]
// Globals:
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   int g_BitsPerPixel = 0x8
//   void*[1024] g_ScreenBufferArray
//   undefined4 g_ScreenBufferArray[1]
//   int g_UseExternalRenderer
// Function calls:
//   wincore_windll.cpp_lockFrame_FUN_005b7210
//   wincore_windll.cpp_unlockFrame_FUN_005b7250

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_backupScreen_FUN_0049e410(CEditorTools *this_ptr)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte bVar7;
  undefined4 auStack_12c4 [1200];
  
  bVar7 = 0;
  if (g_UseExternalRenderer != 0) {
    if (0 < g_WindowHeight) {
      iVar4 = 0;
      do {
        iVar1 = iVar4 + 4;
        *(undefined4 *)((int)auStack_12c4 + iVar4) =
             *(undefined4 *)((int)g_ScreenBufferArray + iVar4);
        iVar4 = iVar1;
      } while (SBORROW4(iVar1,g_WindowHeight * 4) != iVar1 + g_WindowHeight * -4 < 0);
    }
    wincore_windll_cpp_lockFrame_FUN_005b7210();
    iVar4 = g_WindowWidth * g_BitsPerPixel >> 0x1f;
    uVar2 = (int)((g_WindowWidth * g_BitsPerPixel + iVar4 * -8) - (uint)(iVar4 << 2 < 0)) >> 3;
    iVar4 = 0;
    if (0 < g_WindowHeight) {
      iVar1 = 0;
      do {
        puVar5 = *(undefined4 **)((int)g_ScreenBufferArray + iVar1);
        puVar6 = *(undefined4 **)((int)auStack_12c4 + iVar1 + 4);
        for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
          puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
        }
        for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
          puVar5 = (undefined4 *)((int)puVar5 + (uint)bVar7 * -2 + 1);
          puVar6 = (undefined4 *)((int)puVar6 + (uint)bVar7 * -2 + 1);
        }
        iVar4 = iVar4 + 1;
        iVar1 = iVar1 + 4;
      } while (iVar4 < g_WindowHeight);
    }
    wincore_windll_cpp_unlockFrame_FUN_005b7250(1);
  }
  return;
}


// Assembly code:
// 0049e410: PUSH EBP
//   Label: shape_edittool.cpp_CEditorTools_backupScreen_FUN_0049e410
// 0049e411: SUB ESP,0x12c0
// 0049e417: CMP dword ptr [0x02d03e94],0x0
//   XREF to: 02d03e94 (READ)
// 0049e41e: JZ 0x0049e4b9
//   XREF to: 0049e4b9 (CONDITIONAL_JUMP)
// 0049e424: PUSH ESI
// 0049e425: PUSH EBX
// 0049e426: MOV ECX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0049e42c: TEST ECX,ECX
// 0049e42e: JLE 0x0049e450
//   XREF to: 0049e450 (CONDITIONAL_JUMP)
// 0049e430: LEA EBX,[ECX*0x4 + 0x0]
// 0049e437: XOR EAX,EAX
// 0049e439: ADD EAX,0x4
//   Label: LAB_0049e439
// 0049e43c: MOV EDX,dword ptr [EAX + 0x2cf6a98]
//   XREF to: 02cf6a9c (READ)
//   XREF to: 02cf6aa0 (READ)
// 0049e442: MOV dword ptr [ESP + EAX*0x1 + 0x4],EDX
// 0049e446: CMP EAX,EBX
// 0049e448: JL 0x0049e439
//   XREF to: 0049e439 (CONDITIONAL_JUMP)
// 0049e44a: LEA EAX,[EAX]
// 0049e450: CALL wincore_windll.cpp_lockFrame_FUN_005b7210
//   Label: LAB_0049e450
//   XREF to: 005b7210 (UNCONDITIONAL_CALL)
// 0049e455: MOV EDX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 0049e45b: MOV EBX,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 0049e461: IMUL EDX,EBX
// 0049e464: MOV EAX,EDX
// 0049e466: SAR EDX,0x1f
// 0049e469: SHL EDX,0x3
// 0049e46c: SBB EAX,EDX
// 0049e46e: SAR EAX,0x3
// 0049e471: MOV ESI,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0049e477: XOR EBX,EBX
// 0049e479: MOV EBP,EAX
// 0049e47b: TEST ESI,ESI
// 0049e47d: JLE 0x0049e4ad
//   XREF to: 0049e4ad (CONDITIONAL_JUMP)
// 0049e47f: PUSH EDI
// 0049e480: XOR EDX,EDX
// 0049e482: MOV ECX,EBP
//   Label: LAB_0049e482
// 0049e484: MOV ESI,dword ptr [EDX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (READ)
//   XREF to: 02cf6aa0 (READ)
// 0049e48a: MOV EDI,dword ptr [ESP + EDX*0x1 + 0xc]
// 0049e48e: PUSH EDI
// 0049e48f: MOV EAX,ECX
// 0049e491: SHR ECX,0x2
// 0049e494: MOVSD.REP ES:EDI,ESI
// 0049e496: MOV CL,AL
// 0049e498: AND CL,0x3
// 0049e49b: MOVSB.REP ES:EDI,ESI
// 0049e49d: POP EDI
// 0049e49e: INC EBX
// 0049e49f: MOV EDI,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0049e4a5: ADD EDX,0x4
// 0049e4a8: CMP EBX,EDI
// 0049e4aa: JL 0x0049e482
//   XREF to: 0049e482 (CONDITIONAL_JUMP)
// 0049e4ac: POP EDI
// 0049e4ad: PUSH 0x1
//   Label: LAB_0049e4ad
// 0049e4af: CALL wincore_windll.cpp_unlockFrame_FUN_005b7250
//   XREF to: 005b7250 (UNCONDITIONAL_CALL)
// 0049e4b4: ADD ESP,0x4
// 0049e4b7: POP EBX
// 0049e4b8: POP ESI
// 0049e4b9: ADD ESP,0x12c0
//   Label: LAB_0049e4b9
// 0049e4bf: POP EBP
// 0049e4c0: RET
