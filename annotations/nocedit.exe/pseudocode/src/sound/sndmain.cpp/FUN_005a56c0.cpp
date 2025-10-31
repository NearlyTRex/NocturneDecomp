// Name: sound_sndmain.cpp_FUN_005a56c0
// Address: 005a56c0
// Address Range: [[005a56c0, 005a5723]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005a56c0()
// Globals:
//   undefined4 DAT_0064fadf

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float sound_sndmain_cpp_FUN_005a56c0(void)

{
  float in_stack_00000004;
  float in_stack_00000008;
  float in_stack_0000000c;
  float in_stack_00000010;
  
  if (in_stack_00000004 < in_stack_0000000c) {
    in_stack_00000004 = in_stack_0000000c;
  }
  if (in_stack_00000010 < in_stack_00000004) {
    in_stack_00000004 = in_stack_00000010;
  }
  if (in_stack_00000004 <= in_stack_00000008 * (float)_DAT_0064fadf) {
    return 20.0;
  }
  return in_stack_00000008 / in_stack_00000004;
}


// Assembly code:
// 005a56c0: SUB ESP,0x4
//   Label: sound_sndmain.cpp_FUN_005a56c0
// 005a56c3: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005a56c7: FCOMP float ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 005a56cb: FNSTSW AX
// 005a56cd: SAHF
// 005a56ce: JC 0x005a5708
//   XREF to: 005a5708 (CONDITIONAL_JUMP)
// 005a56d0: FLD float ptr [ESP + 0x8]
//   Label: LAB_005a56d0
//   XREF to: Stack[0x4] (READ)
// 005a56d4: FCOMP float ptr [ESP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 005a56d8: FNSTSW AX
// 005a56da: SAHF
// 005a56db: JBE 0x005a56e5
//   XREF to: 005a56e5 (CONDITIONAL_JUMP)
// 005a56dd: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 005a56e1: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[0x4] (WRITE)
// 005a56e5: FLD float ptr [ESP + 0xc]
//   Label: LAB_005a56e5
//   XREF to: Stack[0x8] (READ)
// 005a56e9: FMUL double ptr [0x0064fadf]
//   XREF to: 0064fadf (READ)
// 005a56ef: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005a56f3: FCOMPP
// 005a56f5: FNSTSW AX
// 005a56f7: SAHF
// 005a56f8: JA 0x005a5712
//   XREF to: 005a5712 (CONDITIONAL_JUMP)
// 005a56fa: MOV dword ptr [ESP],0x41a00000
//   XREF to: Stack[-0x4] (DATA)
// 005a5701: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 005a5704: ADD ESP,0x4
// 005a5707: RET
// 005a5708: MOV EAX,dword ptr [ESP + 0x10]
//   Label: LAB_005a5708
//   XREF to: Stack[0xc] (READ)
// 005a570c: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[0x4] (WRITE)
// 005a5710: JMP 0x005a56d0
//   XREF to: 005a56d0 (UNCONDITIONAL_JUMP)
// 005a5712: FLD float ptr [ESP + 0xc]
//   Label: LAB_005a5712
//   XREF to: Stack[0x8] (READ)
// 005a5716: FDIV float ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005a571a: FSTP float ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 005a571d: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 005a5720: ADD ESP,0x4
// 005a5723: RET
