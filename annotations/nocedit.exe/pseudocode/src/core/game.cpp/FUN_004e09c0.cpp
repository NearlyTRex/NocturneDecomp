// Name: core_game.cpp_FUN_004e09c0
// Address: 004e09c0
// Address Range: [[004e09c0, 004e0a95]]
// Convention: unknown
// Signature: undefined core_game.cpp_FUN_004e09c0()
// Cross-references:
//   core_game.cpp_CGame_process_FUN_004e3190 (004e3190) at 004e31cf [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0062c935 = 31457280
//   double DOUBLE_0062c93d = 256
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   undefined4 DAT_02d831ec
//   undefined4 DAT_02d831f0

#include "nocturne.h"

/* Signature: undefined1 core_game.cpp_FUN_004e09c0(undefined4 param_1) */

void core_game_cpp_FUN_004e09c0(void)

{
  int in_stack_00000004;
  
  if (DAT_02d831ec != 0) {
    if (DAT_02d831ec < 4) {
      if ((DAT_02d831ec != 2) ||
         (DAT_02d831f0 = ((float)*(int *)(in_stack_00000004 + 0x260) * (float)DOUBLE_0062c93d) /
                         ((float)DOUBLE_0062c935 / (float)g_WindowHeight) + DAT_02d831f0,
         DAT_02d831f0 <= (float)g_WindowWidth)) {
        if ((DAT_02d831ec == 3) &&
           (DAT_02d831f0 = DAT_02d831f0 -
                           ((float)*(int *)(in_stack_00000004 + 0x260) * (float)DOUBLE_0062c93d) /
                           ((float)DOUBLE_0062c935 / (float)g_WindowHeight), DAT_02d831f0 < 0.0)) {
          DAT_02d831f0 = 0.0;
          DAT_02d831ec = 4;
          return;
        }
        if (DAT_02d831ec == 1) {
          DAT_02d831ec = 2;
        }
      }
      else {
        DAT_02d831ec = 0;
      }
    }
    else {
      DAT_02d831ec = 5;
    }
  }
  return;
}


// Assembly code:
// 004e09c0: PUSH EBP
//   Label: core_game.cpp_FUN_004e09c0
// 004e09c1: MOV EBP,ESP
// 004e09c3: SUB ESP,0xc
// 004e09c6: AND ESP,0xfffffff8
// 004e09c9: MOV EDX,dword ptr [0x02d831ec]
//   XREF to: 02d831ec (READ)
// 004e09cf: MOV ECX,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004e09d2: TEST EDX,EDX
// 004e09d4: JZ 0x004e0a30
//   XREF to: 004e0a30 (CONDITIONAL_JUMP)
// 004e09d6: CMP EDX,0x4
// 004e09d9: JGE 0x004e0a3a
//   XREF to: 004e0a3a (CONDITIONAL_JUMP)
// 004e09db: FILD dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004e09e1: FDIVR double ptr [0x0062c935]
//   XREF to: 0062c935 (READ)
// 004e09e7: FSTP float ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 004e09ea: CMP EDX,0x2
// 004e09ed: JZ 0x004e0a41
//   XREF to: 004e0a41 (CONDITIONAL_JUMP)
// 004e09ef: CMP EDX,0x3
//   Label: LAB_004e09ef
// 004e09f2: JNZ 0x004e0a26
//   XREF to: 004e0a26 (CONDITIONAL_JUMP)
// 004e09f4: FILD dword ptr [ECX + 0x260]
// 004e09fa: FMUL double ptr [0x0062c93d]
//   XREF to: 0062c93d (READ)
// 004e0a00: FDIV float ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 004e0a03: FLD float ptr [0x02d831f0]
//   XREF to: 02d831f0 (READ)
// 004e0a09: FXCH
// 004e0a0b: FSUBR ST0,ST1
// 004e0a0d: FLDZ
// 004e0a0f: FXCH
// 004e0a11: FSTP ST2
// 004e0a13: FXCH
// 004e0a15: FSTP float ptr [0x02d831f0]
//   XREF to: 02d831f0 (WRITE)
// 004e0a1b: FCOMP float ptr [0x02d831f0]
//   XREF to: 02d831f0 (READ)
// 004e0a21: FNSTSW AX
// 004e0a23: SAHF
// 004e0a24: JA 0x004e0a7f
//   XREF to: 004e0a7f (CONDITIONAL_JUMP)
// 004e0a26: CMP EDX,0x1
//   Label: LAB_004e0a26
// 004e0a29: JNZ 0x004e0a30
//   XREF to: 004e0a30 (CONDITIONAL_JUMP)
// 004e0a2b: MOV EDX,0x2
// 004e0a30: MOV dword ptr [0x02d831ec],EDX
//   Label: LAB_004e0a30
//   XREF to: 02d831ec (WRITE)
// 004e0a36: MOV ESP,EBP
// 004e0a38: POP EBP
// 004e0a39: RET
// 004e0a3a: MOV EDX,0x5
//   Label: LAB_004e0a3a
// 004e0a3f: JMP 0x004e0a30
//   XREF to: 004e0a30 (UNCONDITIONAL_JUMP)
// 004e0a41: FILD dword ptr [ECX + 0x260]
//   Label: LAB_004e0a41
// 004e0a47: FMUL double ptr [0x0062c93d]
//   XREF to: 0062c93d (READ)
// 004e0a4d: FDIV float ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 004e0a50: FLD float ptr [0x02d831f0]
//   XREF to: 02d831f0 (READ)
// 004e0a56: FXCH
// 004e0a58: FADD ST0,ST1
// 004e0a5a: FILD dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004e0a60: FXCH
// 004e0a62: FSTP ST2
// 004e0a64: FXCH
// 004e0a66: FSTP float ptr [0x02d831f0]
//   XREF to: 02d831f0 (WRITE)
// 004e0a6c: FCOMP float ptr [0x02d831f0]
//   XREF to: 02d831f0 (READ)
// 004e0a72: FNSTSW AX
// 004e0a74: SAHF
// 004e0a75: JNC 0x004e09ef
//   XREF to: 004e09ef (CONDITIONAL_JUMP)
// 004e0a7b: XOR EDX,EDX
// 004e0a7d: JMP 0x004e0a30
//   XREF to: 004e0a30 (UNCONDITIONAL_JUMP)
// 004e0a7f: XOR EDX,EDX
//   Label: LAB_004e0a7f
// 004e0a81: MOV dword ptr [0x02d831f0],EDX
//   XREF to: 02d831f0 (WRITE)
// 004e0a87: MOV EDX,0x4
// 004e0a8c: MOV dword ptr [0x02d831ec],EDX
//   XREF to: 02d831ec (WRITE)
// 004e0a92: MOV ESP,EBP
// 004e0a94: POP EBP
// 004e0a95: RET
