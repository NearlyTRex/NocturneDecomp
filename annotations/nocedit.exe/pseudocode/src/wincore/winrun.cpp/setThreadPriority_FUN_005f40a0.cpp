// Name: wincore_winrun.cpp_setThreadPriority_FUN_005f40a0
// Address: 005f40a0
// Address Range: [[005f40a0, 005f40dc]]
// Convention: __cdecl
// Signature: void wincore_winrun.cpp_setThreadPriority_FUN_005f40a0(HANDLE hThread, int priority_level)
// Cross-references:
//   sound_sndmain.cpp_startSoundThread_FUN_005abc00 (005abc00) at 005abc6c [UNCONDITIONAL_CALL]
// Globals:
//   SetThreadPriority* SetThreadPriority = 002121f6
// Function calls:
//   SetThreadPriority

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_setThreadPriority_FUN_005f40a0(HANDLE hThread,int priority_level)

{
  int nPriority;
  
  if ((uint)priority_level < 2) {
    if (priority_level == 0) {
      nPriority = -1;
    }
    else {
      nPriority = 0;
    }
  }
  else if ((uint)priority_level < 3) {
    nPriority = 1;
  }
  else if (priority_level == 3) {
    nPriority = 2;
  }
  else {
    nPriority = 0;
  }
  (*SetThreadPriority)(hThread,nPriority);
  return;
}


// Assembly code:
// 005f40a0: MOV EAX,dword ptr [ESP + 0x8]
//   Label: wincore_winrun.cpp_setThreadPriority_FUN_005f40a0
//   XREF to: Stack[0x8] (READ)
// 005f40a4: CMP EAX,0x2
// 005f40a7: JNC 0x005f40d2
//   XREF to: 005f40d2 (CONDITIONAL_JUMP)
// 005f40a9: TEST EAX,EAX
// 005f40ab: JNZ 0x005f40c0
//   XREF to: 005f40c0 (CONDITIONAL_JUMP)
// 005f40ad: MOV EAX,0xffffffff
// 005f40b2: PUSH EAX
//   Label: LAB_005f40b2
// 005f40b3: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005f40b7: PUSH EDX
// 005f40b8: CALL dword ptr CS:[0x61163c]
//   XREF to: EXTERNAL:0000009a (COMPUTED_CALL)
//   XREF to: 0061163c (READ)
// 005f40bf: RET
// 005f40c0: XOR EAX,EAX
//   Label: LAB_005f40c0
// 005f40c2: JMP 0x005f40b2
//   XREF to: 005f40b2 (UNCONDITIONAL_JUMP)
// 005f40c4: MOV EAX,0x1
//   Label: LAB_005f40c4
// 005f40c9: JMP 0x005f40b2
//   XREF to: 005f40b2 (UNCONDITIONAL_JUMP)
// 005f40cb: MOV EAX,0x2
//   Label: LAB_005f40cb
// 005f40d0: JMP 0x005f40b2
//   XREF to: 005f40b2 (UNCONDITIONAL_JUMP)
// 005f40d2: JBE 0x005f40c4
//   Label: LAB_005f40d2
//   XREF to: 005f40c4 (CONDITIONAL_JUMP)
// 005f40d4: CMP EAX,0x3
// 005f40d7: JZ 0x005f40cb
//   XREF to: 005f40cb (CONDITIONAL_JUMP)
// 005f40d9: XOR EAX,EAX
// 005f40db: JMP 0x005f40b2
//   XREF to: 005f40b2 (UNCONDITIONAL_JUMP)
