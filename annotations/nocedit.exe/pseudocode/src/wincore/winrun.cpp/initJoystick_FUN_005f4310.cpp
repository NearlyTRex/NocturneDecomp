// Name: wincore_winrun.cpp_initJoystick_FUN_005f4310
// Address: 005f4310
// Address Range: [[005f4310, 005f437f] [005f4381, 005f439d]]
// Convention: __cdecl
// Signature: void wincore_winrun.cpp_initJoystick_FUN_005f4310(void)
// Cross-references:
//   core_main.c_initializeGameSystems_FUN_00507a60 (00507a60) at 00507bd5 [UNCONDITIONAL_CALL]
// Globals:
//   joyGetDevCapsA* joyGetDevCapsA = 0021181c
//   GetModuleHandleA* GetModuleHandleA = 00211f6e
//   GetProcAddress* GetProcAddress = 00211f8e
//   TerminatedCString s_winmm_dll_006581c7
//   TerminatedCString s_joyGetPosEx_006581d1
//   int g_JoystickNumButtons = 0x4
//   int g_JoystickPresent
//   int g_JoystickHasPOV
//   FARPROC g_joyGetPosEx
//   HMODULE g_WinmmDll

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_initJoystick_FUN_005f4310(void)

{
  MMRESULT MVar1;
  BADSPACEBASE *in_ESP;
  byte bStack_110;
  int iStack_104;
  
  g_WinmmDll = (*GetModuleHandleA)("winmm.dll");
  if (g_WinmmDll != (HMODULE)0x0) {
    g_joyGetPosEx = (*GetProcAddress)(g_WinmmDll,"joyGetPosEx");
  }
  MVar1 = (*joyGetDevCapsA)(0,(LPJOYCAPSA)&stack0xfffffe80,0x194);
  if (MVar1 == 0) {
    g_JoystickHasPOV = (int)((bStack_110 & 0x10) != 0);
    g_JoystickNumButtons = iStack_104;
    if (8 < iStack_104) {
      g_JoystickNumButtons = 8;
      return;
    }
  }
  else {
    g_JoystickPresent = 0;
  }
  return;
}


// Assembly code:
// 005f4310: SUB ESP,0x194
//   Label: wincore_winrun.cpp_initJoystick_FUN_005f4310
// 005f4316: PUSH 0x6581c7
//   XREF to: 006581c7 (DATA)
// 005f431b: CALL dword ptr CS:[0x6115b4]
//   XREF to: 006115b4 (READ)
// 005f4322: MOV [0x03f994f8],EAX
//   XREF to: 03f994f8 (WRITE)
// 005f4327: TEST EAX,EAX
// 005f4329: JZ 0x005f433d
//   XREF to: 005f433d (CONDITIONAL_JUMP)
// 005f432b: PUSH 0x6581d1
//   XREF to: 006581d1 (DATA)
// 005f4330: PUSH EAX
// 005f4331: CALL dword ptr CS:[0x6115bc]
//   XREF to: 006115bc (READ)
// 005f4338: MOV [0x03f994f4],EAX
//   XREF to: 03f994f4 (WRITE)
// 005f433d: PUSH 0x194
//   Label: LAB_005f433d
// 005f4342: LEA EAX,[ESP + 0x4]
// 005f4346: PUSH EAX
// 005f4347: PUSH 0x0
// 005f4349: CALL dword ptr CS:[0x611404]
//   XREF to: 00611404 (READ)
// 005f4350: TEST EAX,EAX
// 005f4352: JNZ 0x005f4381
//   XREF to: 005f4381 (CONDITIONAL_JUMP)
// 005f4354: TEST byte ptr [ESP + 0x60],0x10
// 005f4359: SETNZ AL
// 005f435c: AND EAX,0xff
// 005f4361: MOV [0x02d0521c],EAX
//   XREF to: 02d0521c (WRITE)
// 005f4366: MOV EAX,dword ptr [ESP + 0x6c]
// 005f436a: MOV [0x006793ac],EAX
//   XREF to: 006793ac (WRITE)
// 005f436f: CMP EAX,0x8
// 005f4372: JG 0x005f438d
//   XREF to: 005f438d (CONDITIONAL_JUMP)
// 005f4374: ADD ESP,0x194
//   Label: LAB_005f4374
// 005f437a: LEA EAX,[EAX]
// 005f4381: PUSH EBX
//   Label: LAB_005f4381
// 005f4382: XOR EBX,EBX
// 005f4384: MOV dword ptr [0x02d0520c],EBX
//   XREF to: 02d0520c (WRITE)
// 005f438a: POP EBX
// 005f438b: JMP 0x005f4374
//   XREF to: 005f4374 (UNCONDITIONAL_JUMP)
// 005f438d: MOV dword ptr [0x006793ac],0x8
//   Label: LAB_005f438d
//   XREF to: 006793ac (WRITE)
// 005f4397: ADD ESP,0x194
// 005f439d: RET
