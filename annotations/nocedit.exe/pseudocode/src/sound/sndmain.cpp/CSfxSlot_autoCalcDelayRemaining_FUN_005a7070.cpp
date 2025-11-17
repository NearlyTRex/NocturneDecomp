// Name: sound_sndmain.cpp_CSfxSlot_autoCalcDelayRemaining_FUN_005a7070
// Address: 005a7070
// Address Range: [[005a7070, 005a70fd]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_CSfxSlot_autoCalcDelayRemaining_FUN_005a7070(CSfxSlot * this_ptr)
// Cross-references:
//   sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100 (005a7100) at 005a741d [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_sndmain_cpp_006501e7
//   TerminatedCString s_SfxSlot_autoCalcDelayRem_006501fc
//   double DOUBLE_00663140 = 1116.40000000000
//   double DOUBLE_00681b30 = 1
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CVector3d g_Cached3DListenerPos
//   undefined4 g_Cached3DListenerPos.y
//   undefined4 g_Cached3DListenerPos.z
//   int g_SoundLockCount
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSlot_autoCalcDelayRemaining_FUN_005a7070(CSfxSlot *this_ptr)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x942;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSlot::autoCalcDelayRemaining - must be locked!");
  }
  if (((this_ptr->options).flags & 1) != 0) {
    *(undefined4 *)&(this_ptr->options).delay_remaining = 0;
    *(undefined4 *)((int)&(this_ptr->options).delay_remaining + 4) = 0;
    return;
  }
  dVar1 = (this_ptr->options).position.x - g_Cached3DListenerPos.x;
  dVar3 = (this_ptr->options).position.y - g_Cached3DListenerPos.y;
  dVar2 = (this_ptr->options).position.z - g_Cached3DListenerPos.z;
  (this_ptr->options).delay_remaining =
       (SQRT(dVar2 * dVar2 + dVar3 * dVar3 + dVar1 * dVar1) * DOUBLE_00681b30) / DOUBLE_00663140;
  return;
}


// Assembly code:
// 005a7070: PUSH EBX
//   Label: sound_sndmain.cpp_CSfxSlot_autoCalcDelayRemaining_FUN_005a7070
// 005a7071: SUB ESP,0x18
// 005a7074: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 005a7078: CMP dword ptr [0x03f6940c],0x0
//   XREF to: 03f6940c (READ)
// 005a707f: JLE 0x005a709a
//   XREF to: 005a709a (CONDITIONAL_JUMP)
// 005a7081: TEST byte ptr [EBX + 0x5c],0x1
//   Label: LAB_005a7081
// 005a7085: JZ 0x005a70c1
//   XREF to: 005a70c1 (CONDITIONAL_JUMP)
// 005a7087: MOV dword ptr [EBX + 0x4c],0x0
// 005a708e: MOV dword ptr [EBX + 0x50],0x0
// 005a7095: ADD ESP,0x18
// 005a7098: POP EBX
// 005a7099: RET
// 005a709a: PUSH ESI
//   Label: LAB_005a709a
// 005a709b: MOV ECX,0x6501e7
//   XREF to: 006501e7 (PARAM)
// 005a70a0: MOV ESI,0x942
// 005a70a5: PUSH 0x6501fc
//   XREF to: 006501fc (DATA)
// 005a70aa: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005a70b0: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 005a70b6: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a70bb: ADD ESP,0x4
// 005a70be: POP ESI
// 005a70bf: JMP 0x005a7081
//   XREF to: 005a7081 (UNCONDITIONAL_JUMP)
// 005a70c1: FLD double ptr [EBX + 0x4]
//   Label: LAB_005a70c1
// 005a70c4: FSUB double ptr [0x03f68830]
//   XREF to: 03f68830 (READ)
// 005a70ca: FMUL ST0
// 005a70cc: FLD double ptr [EBX + 0xc]
// 005a70cf: FSUB double ptr [0x03f68838]
//   XREF to: 03f68838 (READ)
// 005a70d5: FMUL ST0
// 005a70d7: FLD double ptr [EBX + 0x14]
// 005a70da: FXCH
// 005a70dc: FADDP ST2,ST0
// 005a70de: FSUB double ptr [0x03f68840]
//   XREF to: 03f68840 (READ)
// 005a70e4: FMUL ST0
// 005a70e6: FADDP
// 005a70e8: FSQRT
// 005a70ea: FMUL double ptr [0x00681b30]
//   XREF to: 00681b30 (READ)
// 005a70f0: FDIV double ptr [0x00663140]
//   XREF to: 00663140 (READ)
// 005a70f6: FSTP double ptr [EBX + 0x4c]
// 005a70f9: ADD ESP,0x18
// 005a70fc: POP EBX
// 005a70fd: RET
