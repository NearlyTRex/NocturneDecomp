// Name: shape_edittool.cpp_CEditorTools_restoreScreen_FUN_0049e4d0
// Address: 0049e4d0
// Address Range: [[0049e4d0, 0049e580]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEditorTools_restoreScreen_FUN_0049e4d0(CEditorTools * this_ptr)
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

void __cdecl shape_edittool_cpp_CEditorTools_restoreScreen_FUN_0049e4d0(CEditorTools *this_ptr)

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
        puVar5 = *(undefined4 **)((int)auStack_12c4 + iVar1 + 4);
        puVar6 = *(undefined4 **)((int)g_ScreenBufferArray + iVar1);
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
// 0049e4d0: PUSH EBP
//   Label: shape_edittool.cpp_CEditorTools_restoreScreen_FUN_0049e4d0
// 0049e4d1: SUB ESP,0x12c0
// 0049e4d7: CMP dword ptr [0x02d03e94],0x0
//   XREF to: 02d03e94 (READ)
// 0049e4de: JZ 0x0049e579
//   XREF to: 0049e579 (CONDITIONAL_JUMP)
// 0049e4e4: PUSH ESI
// 0049e4e5: PUSH EBX
// 0049e4e6: MOV ECX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0049e4ec: TEST ECX,ECX
// 0049e4ee: JLE 0x0049e510
//   XREF to: 0049e510 (CONDITIONAL_JUMP)
// 0049e4f0: LEA EBX,[ECX*0x4 + 0x0]
// 0049e4f7: XOR EAX,EAX
// 0049e4f9: ADD EAX,0x4
//   Label: LAB_0049e4f9
// 0049e4fc: MOV EDX,dword ptr [EAX + 0x2cf6a98]
//   XREF to: 02cf6a9c (READ)
//   XREF to: 02cf6aa0 (READ)
// 0049e502: MOV dword ptr [ESP + EAX*0x1 + 0x4],EDX
// 0049e506: CMP EAX,EBX
// 0049e508: JL 0x0049e4f9
//   XREF to: 0049e4f9 (CONDITIONAL_JUMP)
// 0049e50a: LEA EAX,[EAX]
// 0049e510: CALL wincore_windll.cpp_lockFrame_FUN_005b7210
//   Label: LAB_0049e510
//   XREF to: 005b7210 (UNCONDITIONAL_CALL)
// 0049e515: MOV EDX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 0049e51b: MOV EBX,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 0049e521: IMUL EDX,EBX
// 0049e524: MOV EAX,EDX
// 0049e526: SAR EDX,0x1f
// 0049e529: SHL EDX,0x3
// 0049e52c: SBB EAX,EDX
// 0049e52e: SAR EAX,0x3
// 0049e531: MOV ESI,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0049e537: XOR EBX,EBX
// 0049e539: MOV EBP,EAX
// 0049e53b: TEST ESI,ESI
// 0049e53d: JLE 0x0049e56d
//   XREF to: 0049e56d (CONDITIONAL_JUMP)
// 0049e53f: PUSH EDI
// 0049e540: XOR EDX,EDX
// 0049e542: MOV ECX,EBP
//   Label: LAB_0049e542
// 0049e544: MOV ESI,dword ptr [ESP + EDX*0x1 + 0xc]
// 0049e548: MOV EDI,dword ptr [EDX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (READ)
//   XREF to: 02cf6aa0 (READ)
// 0049e54e: PUSH EDI
// 0049e54f: MOV EAX,ECX
// 0049e551: SHR ECX,0x2
// 0049e554: MOVSD.REP ES:EDI,ESI
// 0049e556: MOV CL,AL
// 0049e558: AND CL,0x3
// 0049e55b: MOVSB.REP ES:EDI,ESI
// 0049e55d: POP EDI
// 0049e55e: INC EBX
// 0049e55f: MOV EDI,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0049e565: ADD EDX,0x4
// 0049e568: CMP EBX,EDI
// 0049e56a: JL 0x0049e542
//   XREF to: 0049e542 (CONDITIONAL_JUMP)
// 0049e56c: POP EDI
// 0049e56d: PUSH 0x1
//   Label: LAB_0049e56d
// 0049e56f: CALL wincore_windll.cpp_unlockFrame_FUN_005b7250
//   XREF to: 005b7250 (UNCONDITIONAL_CALL)
// 0049e574: ADD ESP,0x4
// 0049e577: POP EBX
// 0049e578: POP ESI
// 0049e579: ADD ESP,0x12c0
//   Label: LAB_0049e579
// 0049e57f: POP EBP
// 0049e580: RET
