// Name: sound_sndmain.cpp_FUN_005aa3c0
// Address: 005aa3c0
// Address Range: [[005aa3c0, 005aa3e6]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_FUN_005aa3c0(void)
// Function calls:
//   sound_sndmain.cpp_getSfxSample_FUN_005a4c80
//   sound_sndmain.cpp_lockSound_FUN_005abd30
//   sound_sndmain.cpp_unlockSound_FUN_005abdc0

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_FUN_005aa3c0(void)

{
  CSfxSample *pCVar1;
  char *in_stack_00000008;
  
  sound_sndmain_cpp_lockSound_FUN_005abd30();
  pCVar1 = sound_sndmain_cpp_getSfxSample_FUN_005a4c80(in_stack_00000008);
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return (uint)(pCVar1 != (CSfxSample *)0x0);
}


// Assembly code:
// 005aa3c0: PUSH EBX
//   Label: sound_sndmain.cpp_FUN_005aa3c0
// 005aa3c1: CALL sound_sndmain.cpp_lockSound_FUN_005abd30
//   XREF to: 005abd30 (UNCONDITIONAL_CALL)
// 005aa3c6: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005aa3ca: PUSH EDX
// 005aa3cb: XOR EBX,EBX
// 005aa3cd: CALL sound_sndmain.cpp_getSfxSample_FUN_005a4c80
//   XREF to: 005a4c80 (UNCONDITIONAL_CALL)
// 005aa3d2: ADD ESP,0x4
// 005aa3d5: TEST EAX,EAX
// 005aa3d7: JZ 0x005aa3de
//   XREF to: 005aa3de (CONDITIONAL_JUMP)
// 005aa3d9: MOV EBX,0x1
// 005aa3de: CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0
//   Label: LAB_005aa3de
//   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
// 005aa3e3: MOV EAX,EBX
// 005aa3e5: POP EBX
// 005aa3e6: RET
