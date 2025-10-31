// Name: core_game.cpp_FUN_004e0aa0
// Address: 004e0aa0
// Address Range: [[004e0aa0, 004e0b8f]]
// Convention: unknown
// Signature: undefined core_game.cpp_FUN_004e0aa0()
// Cross-references:
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004da57c [UNCONDITIONAL_CALL]
// Globals:
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   int g_BitsPerPixel = 0x8
//   void*[1024] g_ScreenBufferArray
//   undefined4 g_ScreenBufferArray[1]
//   undefined4 DAT_02d831ec
//   undefined4 DAT_02d831f0
//   undefined4 DAT_02d831f4
//   undefined4 DAT_02d831f8
// Function calls:
//   core_game.cpp_FUN_004e09a0
//   crt_math.c_round_FUN_005fe6b0
//   engine_2d.c_fillRectColor_FUN_00403170

#include "nocturne.h"

/* Signature: undefined1 core_game.cpp_FUN_004e0aa0() */

void core_game_cpp_FUN_004e0aa0(void)

{
  int iVar1;
  undefined4 extraout_EDX;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  double dVar6;
  
  if (DAT_02d831ec != 0) {
    if (((DAT_02d831ec < 4) && (DAT_02d831ec != 1)) && (0x3f7fffff < (int)DAT_02d831f0)) {
      core_game_cpp_FUN_004e09a0();
      if (g_BitsPerPixel == 0x20) {
        fVar5 = (float10)DAT_02d831f0 * (float10)DAT_02d831f0;
        iVar4 = 0;
        dVar6 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,g_WindowHeight));
        if (0 < SUB84(dVar6,0)) {
          iVar3 = 0;
          do {
            puVar2 = *(undefined4 **)((int)g_ScreenBufferArray + iVar3);
            iVar1 = 0;
            if (0 < g_WindowWidth) {
              do {
                if ((int)ROUND(fVar5) <
                    (DAT_02d831f8 - iVar4) * (DAT_02d831f8 - iVar4) +
                    (DAT_02d831f4 - iVar1) * (DAT_02d831f4 - iVar1)) {
                  *puVar2 = 0;
                }
                iVar1 = iVar1 + 1;
                puVar2 = puVar2 + 1;
              } while (iVar1 < g_WindowWidth);
            }
            iVar3 = iVar3 + 4;
            iVar4 = iVar4 + 1;
          } while (iVar4 < g_WindowHeight);
        }
      }
    }
    else {
      engine_2d_c_fillRectColor_FUN_00403170(0,0,g_WindowWidth + -1,g_WindowHeight + -1,0);
    }
  }
  return;
}


// Assembly code:
// 004e0aa0: PUSH EBX
//   Label: core_game.cpp_FUN_004e0aa0
// 004e0aa1: PUSH ESI
// 004e0aa2: PUSH EDI
// 004e0aa3: PUSH EBP
// 004e0aa4: SUB ESP,0x4
// 004e0aa7: MOV EDI,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004e0aad: MOV EDX,dword ptr [0x02d831ec]
//   XREF to: 02d831ec (READ)
// 004e0ab3: TEST EDX,EDX
// 004e0ab5: JZ 0x004e0b53
//   XREF to: 004e0b53 (CONDITIONAL_JUMP)
// 004e0abb: CMP EDX,0x4
// 004e0abe: JGE 0x004e0b61
//   XREF to: 004e0b61 (CONDITIONAL_JUMP)
// 004e0ac4: CMP EDX,0x1
// 004e0ac7: JZ 0x004e0b61
//   XREF to: 004e0b61 (CONDITIONAL_JUMP)
// 004e0acd: CMP dword ptr [0x02d831f0],0x3f800000
//   XREF to: 02d831f0 (READ)
// 004e0ad7: JL 0x004e0b61
//   XREF to: 004e0b61 (CONDITIONAL_JUMP)
// 004e0add: CALL core_game.cpp_FUN_004e09a0
//   XREF to: 004e09a0 (UNCONDITIONAL_CALL)
// 004e0ae2: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 004e0ae9: JNZ 0x004e0b53
//   XREF to: 004e0b53 (CONDITIONAL_JUMP)
// 004e0aeb: FLD float ptr [0x02d831f0]
//   XREF to: 02d831f0 (READ)
// 004e0af1: FMUL ST0
// 004e0af3: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 004e0af8: XOR ESI,ESI
// 004e0afa: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004e0aff: FISTP dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 004e0b02: TEST EAX,EAX
// 004e0b04: JLE 0x004e0b53
//   XREF to: 004e0b53 (CONDITIONAL_JUMP)
// 004e0b06: XOR EBP,EBP
// 004e0b08: MOV EDI,dword ptr [0x00679394]
//   Label: LAB_004e0b08
//   XREF to: 00679394 (READ)
// 004e0b0e: MOV EDX,dword ptr [EBP + 0x2cf6a9c]
//   XREF to: 02cf6a9c (READ)
//   XREF to: 02cf6aa0 (READ)
// 004e0b14: XOR EAX,EAX
// 004e0b16: TEST EDI,EDI
// 004e0b18: JLE 0x004e0b3f
//   XREF to: 004e0b3f (CONDITIONAL_JUMP)
// 004e0b1a: MOV EBX,dword ptr [0x02d831f4]
//   Label: LAB_004e0b1a
//   XREF to: 02d831f4 (READ)
// 004e0b20: SUB EBX,EAX
// 004e0b22: IMUL EBX,EBX
// 004e0b25: MOV ECX,dword ptr [0x02d831f8]
//   XREF to: 02d831f8 (READ)
// 004e0b2b: SUB ECX,ESI
// 004e0b2d: IMUL ECX,ECX
// 004e0b30: ADD ECX,EBX
// 004e0b32: CMP ECX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 004e0b35: JG 0x004e0b88
//   XREF to: 004e0b88 (CONDITIONAL_JUMP)
// 004e0b37: INC EAX
//   Label: LAB_004e0b37
// 004e0b38: ADD EDX,0x4
// 004e0b3b: CMP EAX,EDI
// 004e0b3d: JL 0x004e0b1a
//   XREF to: 004e0b1a (CONDITIONAL_JUMP)
// 004e0b3f: MOV EDX,dword ptr [0x00679398]
//   Label: LAB_004e0b3f
//   XREF to: 00679398 (READ)
// 004e0b45: ADD EBP,0x4
// 004e0b48: INC ESI
// 004e0b49: MOV dword ptr [0x00679394],EDI
//   XREF to: 00679394 (WRITE)
// 004e0b4f: CMP ESI,EDX
// 004e0b51: JL 0x004e0b08
//   XREF to: 004e0b08 (CONDITIONAL_JUMP)
// 004e0b53: MOV EDI,dword ptr [0x00679394]
//   Label: LAB_004e0b53
//   XREF to: 00679394 (READ)
// 004e0b59: ADD ESP,0x4
// 004e0b5c: POP EBP
// 004e0b5d: POP EDI
// 004e0b5e: POP ESI
// 004e0b5f: POP EBX
// 004e0b60: RET
// 004e0b61: MOV EAX,[0x00679398]
//   Label: LAB_004e0b61
//   XREF to: 00679398 (READ)
// 004e0b66: PUSH 0x0
// 004e0b68: DEC EAX
// 004e0b69: MOV EDI,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004e0b6f: PUSH EAX
// 004e0b70: LEA EAX,[EDI + -0x1]
// 004e0b73: PUSH EAX
// 004e0b74: PUSH 0x0
// 004e0b76: PUSH 0x0
// 004e0b78: CALL engine_2d.c_fillRectColor_FUN_00403170
//   XREF to: 00403170 (UNCONDITIONAL_CALL)
// 004e0b7d: MOV EDI,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004e0b83: ADD ESP,0x14
// 004e0b86: JMP 0x004e0b53
//   XREF to: 004e0b53 (UNCONDITIONAL_JUMP)
// 004e0b88: MOV dword ptr [EDX],0x0
//   Label: LAB_004e0b88
// 004e0b8e: JMP 0x004e0b37
//   XREF to: 004e0b37 (UNCONDITIONAL_JUMP)
