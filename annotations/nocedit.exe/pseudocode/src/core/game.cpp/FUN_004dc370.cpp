// Name: core_game.cpp_FUN_004dc370
// Address: 004dc370
// Address Range: [[004dc370, 004dc3d3]]
// Convention: unknown
// Signature: undefined core_game.cpp_FUN_004dc370()
// Globals:
//   CGame* g_CGamePtr = 02d81a9c
//   undefined4 g_CGameInstance.delta_time_float

#include "nocturne.h"

void core_game_cpp_FUN_004dc370(void)

{
  float *in_stack_00000004;
  float in_stack_00000008;
  float in_stack_0000000c;
  
  in_stack_00000008 = (g_CGamePtr->delta_time_float * in_stack_0000000c) / in_stack_00000008;
  if (0.0 <= *in_stack_00000004) {
    *in_stack_00000004 = *in_stack_00000004 - in_stack_00000008;
    if (*in_stack_00000004 < 0.0) {
      *in_stack_00000004 = 0.0;
      return;
    }
  }
  else {
    *in_stack_00000004 = *in_stack_00000004 + in_stack_00000008;
    if (0.0 < *in_stack_00000004) {
      *in_stack_00000004 = 0.0;
      return;
    }
  }
  return;
}


// Assembly code:
// 004dc370: SUB ESP,0x4
//   Label: core_game.cpp_FUN_004dc370
// 004dc373: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004dc377: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004dc37c: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004dc382: FMUL float ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 004dc386: FDIV float ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004dc38a: FLDZ
// 004dc38c: FXCH
// 004dc38e: FSTP float ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 004dc391: FCOMP float ptr [EDX]
// 004dc393: FNSTSW AX
// 004dc395: SAHF
// 004dc396: JBE 0x004dc3b8
//   XREF to: 004dc3b8 (CONDITIONAL_JUMP)
// 004dc398: FLD float ptr [EDX]
// 004dc39a: FADD float ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 004dc39d: FLDZ
// 004dc39f: FXCH
// 004dc3a1: FSTP float ptr [EDX]
// 004dc3a3: FCOMP float ptr [EDX]
// 004dc3a5: FNSTSW AX
// 004dc3a7: SAHF
// 004dc3a8: JC 0x004dc3ae
//   XREF to: 004dc3ae (CONDITIONAL_JUMP)
// 004dc3aa: ADD ESP,0x4
//   Label: LAB_004dc3aa
// 004dc3ad: RET
// 004dc3ae: MOV dword ptr [EDX],0x0
//   Label: LAB_004dc3ae
// 004dc3b4: ADD ESP,0x4
// 004dc3b7: RET
// 004dc3b8: FLD float ptr [EDX]
//   Label: LAB_004dc3b8
// 004dc3ba: FSUB float ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 004dc3bd: FLDZ
// 004dc3bf: FXCH
// 004dc3c1: FSTP float ptr [EDX]
// 004dc3c3: FCOMP float ptr [EDX]
// 004dc3c5: FNSTSW AX
// 004dc3c7: SAHF
// 004dc3c8: JBE 0x004dc3aa
//   XREF to: 004dc3aa (CONDITIONAL_JUMP)
// 004dc3ca: MOV dword ptr [EDX],0x0
// 004dc3d0: ADD ESP,0x4
// 004dc3d3: RET
