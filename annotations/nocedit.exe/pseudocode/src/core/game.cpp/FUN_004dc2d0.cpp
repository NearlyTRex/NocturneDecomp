// Name: core_game.cpp_FUN_004dc2d0
// Address: 004dc2d0
// Address Range: [[004dc2d0, 004dc364]]
// Convention: unknown
// Signature: undefined core_game.cpp_FUN_004dc2d0()
// Globals:
//   CGame* g_CGamePtr = 02d81a9c
//   char[256] g_KeyboardState
//   undefined4 g_CGameInstance.delta_time_float

#include "nocturne.h"

void core_game_cpp_FUN_004dc2d0(void)

{
  float fVar1;
  float fVar2;
  int in_stack_00000004;
  int in_stack_00000008;
  float *in_stack_0000000c;
  float in_stack_00000010;
  float in_stack_00000014;
  
  if (g_KeyboardState[in_stack_00000004] == '\0') {
    if (((g_KeyboardState[in_stack_00000008] != '\0') && (*in_stack_0000000c < in_stack_00000014))
       && (fVar1 = (g_CGamePtr->delta_time_float * in_stack_00000014) / in_stack_00000010 +
                   *in_stack_0000000c, *in_stack_0000000c = fVar1, in_stack_00000014 < fVar1)) {
      *in_stack_0000000c = in_stack_00000014;
      return;
    }
  }
  else {
    fVar1 = -in_stack_00000014;
    if ((fVar1 < *in_stack_0000000c) &&
       (fVar2 = *in_stack_0000000c -
                (g_CGamePtr->delta_time_float * in_stack_00000014) / in_stack_00000010,
       *in_stack_0000000c = fVar2, fVar2 < fVar1)) {
      *in_stack_0000000c = fVar1;
      return;
    }
  }
  return;
}


// Assembly code:
// 004dc2d0: SUB ESP,0x4
//   Label: core_game.cpp_FUN_004dc2d0
// 004dc2d3: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 004dc2d7: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004dc2db: CMP byte ptr [EAX + 0x2d03e98],0x0
//   XREF to: 02d03e98 (DATA)
// 004dc2e2: JNZ 0x004dc320
//   XREF to: 004dc320 (CONDITIONAL_JUMP)
// 004dc2e4: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004dc2e8: CMP byte ptr [EAX + 0x2d03e98],0x0
//   XREF to: 02d03e98 (DATA)
// 004dc2ef: JZ 0x004dc31c
//   XREF to: 004dc31c (CONDITIONAL_JUMP)
// 004dc2f1: FLD float ptr [EDX]
// 004dc2f3: FCOMP float ptr [ESP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 004dc2f7: FNSTSW AX
// 004dc2f9: SAHF
// 004dc2fa: JNC 0x004dc31c
//   XREF to: 004dc31c (CONDITIONAL_JUMP)
// 004dc2fc: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004dc301: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 004dc305: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004dc30b: FMUL ST1
// 004dc30d: FDIV float ptr [ESP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 004dc311: FADD float ptr [EDX]
// 004dc313: FST float ptr [EDX]
// 004dc315: FCOMPP
// 004dc317: FNSTSW AX
// 004dc319: SAHF
// 004dc31a: JA 0x004dc35b
//   XREF to: 004dc35b (CONDITIONAL_JUMP)
// 004dc31c: ADD ESP,0x4
//   Label: LAB_004dc31c
// 004dc31f: RET
// 004dc320: FLD float ptr [EDX]
//   Label: LAB_004dc320
// 004dc322: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 004dc326: FCHS
// 004dc328: FSTP float ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 004dc32b: FCOMP float ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 004dc32e: FNSTSW AX
// 004dc330: SAHF
// 004dc331: JBE 0x004dc31c
//   XREF to: 004dc31c (CONDITIONAL_JUMP)
// 004dc333: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004dc338: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004dc33e: FMUL float ptr [ESP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 004dc342: FDIV float ptr [ESP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 004dc346: FSUBR float ptr [EDX]
// 004dc348: FST float ptr [EDX]
// 004dc34a: FCOMP float ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 004dc34d: FNSTSW AX
// 004dc34f: SAHF
// 004dc350: JNC 0x004dc31c
//   XREF to: 004dc31c (CONDITIONAL_JUMP)
// 004dc352: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 004dc355: MOV dword ptr [EDX],EAX
// 004dc357: ADD ESP,0x4
// 004dc35a: RET
// 004dc35b: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_004dc35b
//   XREF to: Stack[0x14] (READ)
// 004dc35f: MOV dword ptr [EDX],EAX
// 004dc361: ADD ESP,0x4
// 004dc364: RET
