// Name: wincore_winrun.cpp_createThread_FUN_005f4070
// Address: 005f4070
// Address Range: [[005f4070, 005f4090]]
// Convention: __cdecl
// Signature: HANDLE wincore_winrun.cpp_createThread_FUN_005f4070(LPTHREAD_START_ROUTINE thread_func, LPVOID thread_param)
// Cross-references:
//   sound_sndmain.cpp_FUN_005abc00 (005abc00) at 005abc58 [UNCONDITIONAL_CALL]
// Globals:
//   CreateThread* CreateThread = 00211c9a
// Function calls:
//   CreateThread

#include "nocturne.h"

HANDLE __cdecl
wincore_winrun_cpp_createThread_FUN_005f4070(LPTHREAD_START_ROUTINE thread_func,LPVOID thread_param)

{
  HANDLE pvVar1;
  BADSPACEBASE *in_ESP;
  DWORD DStack_4;
  
  pvVar1 = (*CreateThread)((LPSECURITY_ATTRIBUTES)0x0,0,thread_func,thread_param,0,&DStack_4);
  return pvVar1;
}


// Assembly code:
// 005f4070: SUB ESP,0x4
//   Label: wincore_winrun.cpp_createThread_FUN_005f4070
// 005f4073: MOV EAX,ESP
// 005f4075: PUSH EAX
// 005f4076: PUSH 0x0
// 005f4078: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005f407c: PUSH EDX
// 005f407d: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005f4081: PUSH ECX
// 005f4082: PUSH 0x0
// 005f4084: PUSH 0x0
// 005f4086: CALL dword ptr CS:[0x61151c]
//   XREF to: EXTERNAL:00000052 (COMPUTED_CALL)
//   XREF to: 0061151c (READ)
// 005f408d: ADD ESP,0x4
// 005f4090: RET
