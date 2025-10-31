// Name: wincore_windll.cpp_clearScreen_FUN_005b3f37
// Address: 005b3f37
// Address Range: [[005b3f37, 005b3fc1]]
// Convention: __cdecl
// Signature: void wincore_windll.cpp_clearScreen_FUN_005b3f37(int color)
// Globals:
//   int g_BitsPerPixel = 0x8
//   void*[1024] g_ScreenBufferArray
//   int g_ClipLeft
//   int g_ClipTop
//   int g_ClipRight
//   int g_ClipBottom
//   int g_UseExternalRenderer
// Function calls:
//   wincore_windll.cpp_drawFullScreenQuad_FUN_005b7a50

#include "nocturne.h"

void __cdecl wincore_windll_cpp_clearScreen_FUN_005b3f37(int color)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined2 *puVar6;
  
  if (g_UseExternalRenderer == 0) {
    iVar1 = (g_ClipRight - g_ClipLeft) + 1;
    uVar3 = g_ClipTop;
    do {
      puVar4 = (undefined1 *)((int)g_ScreenBufferArray[uVar3] + g_ClipLeft);
      iVar2 = iVar1;
      if (g_BitsPerPixel == 8) {
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
      }
      else if (g_BitsPerPixel == 0x10) {
        puVar6 = (undefined2 *)(puVar4 + g_ClipLeft);
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
      }
      else {
        puVar5 = (undefined4 *)(puVar4 + g_ClipLeft * 3);
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 <= (uint)g_ClipBottom);
    return;
  }
  wincore_windll_cpp_drawFullScreenQuad_FUN_005b7a50(color);
  return;
}


// Assembly code:
// 005b3f37: PUSH EBP
//   Label: wincore_windll.cpp_clearScreen_FUN_005b3f37
// 005b3f38: MOV EBP,ESP
// 005b3f3a: PUSH ESI
// 005b3f3b: PUSH EDI
// 005b3f3c: CMP dword ptr [0x02d03e94],0x0
//   XREF to: 02d03e94 (READ)
// 005b3f43: JZ 0x005b3f52
//   XREF to: 005b3f52 (CONDITIONAL_JUMP)
// 005b3f45: PUSH dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005b3f48: CALL wincore_windll.cpp_drawFullScreenQuad_FUN_005b7a50
//   XREF to: 005b7a50 (UNCONDITIONAL_CALL)
// 005b3f4d: POP EAX
// 005b3f4e: POP EDI
// 005b3f4f: POP ESI
// 005b3f50: LEAVE
// 005b3f51: RET
// 005b3f52: PUSHAD
//   Label: LAB_005b3f52
// 005b3f53: CLD
// 005b3f54: PUSH DS
// 005b3f55: POP ES
// 005b3f56: MOV ECX,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 005b3f5c: MOV EAX,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005b3f5f: SUB ECX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 005b3f65: MOV EBX,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 005b3f6b: INC ECX
// 005b3f6c: XOR EAX,EAX
// 005b3f6e: PUSH EBX
//   Label: LAB_005b3f6e
// 005b3f6f: PUSH ECX
// 005b3f70: MOV EDI,dword ptr [EBX*0x4 + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 005b3f77: ADD EDI,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 005b3f7d: CMP dword ptr [0x0067939c],0x8
//   XREF to: 0067939c (READ)
// 005b3f84: JZ 0x005b3fb0
//   XREF to: 005b3fb0 (CONDITIONAL_JUMP)
// 005b3f86: CMP dword ptr [0x0067939c],0x10
//   XREF to: 0067939c (READ)
// 005b3f8d: JZ 0x005b3fa5
//   XREF to: 005b3fa5 (CONDITIONAL_JUMP)
// 005b3f8f: ADD EDI,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 005b3f95: ADD EDI,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 005b3f9b: ADD EDI,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 005b3fa1: STOSD.REP ES:EDI
// 005b3fa3: JMP 0x005b3fb2
//   XREF to: 005b3fb2 (UNCONDITIONAL_JUMP)
// 005b3fa5: ADD EDI,dword ptr [0x02d02558]
//   Label: LAB_005b3fa5
//   XREF to: 02d02558 (READ)
// 005b3fab: STOSW.REP ES:EDI
// 005b3fae: JMP 0x005b3fb2
//   XREF to: 005b3fb2 (UNCONDITIONAL_JUMP)
// 005b3fb0: STOSB.REP ES:EDI
//   Label: LAB_005b3fb0
// 005b3fb2: POP ECX
//   Label: LAB_005b3fb2
// 005b3fb3: POP EBX
// 005b3fb4: INC EBX
// 005b3fb5: CMP EBX,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 005b3fbb: JBE 0x005b3f6e
//   XREF to: 005b3f6e (CONDITIONAL_JUMP)
// 005b3fbd: POPAD
// 005b3fbe: POP EDI
// 005b3fbf: POP ESI
// 005b3fc0: LEAVE
// 005b3fc1: RET
