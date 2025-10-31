// Name: wincore_winrun.cpp_calibrateCPUSpeed_FUN_005f2b80
// Address: 005f2b80
// Address Range: [[005f2b80, 005f2da8]]
// Convention: __cdecl
// Signature: void wincore_winrun.cpp_calibrateCPUSpeed_FUN_005f2b80(void)
// Cross-references:
//   core_main.c_initializeGameSystems_FUN_00507a60 (00507a60) at 00507bd0 [UNCONDITIONAL_CALL]
// Globals:
//   timeBeginPeriod* timeBeginPeriod = 00211862
//   MessageBoxA* MessageBoxA = 00211b44
//   QueryPerformanceCounter* QueryPerformanceCounter = 002120a8
//   QueryPerformanceFrequency* QueryPerformanceFrequency = 002120c2
//   double g_RelatedToQPC3 = 4294967296
//   TerminatedCString s_Nocturne_Editor_006581b7
//   char* g_ApplicationTimerTitle = 006581b7
//   int g_CalibratedCPUSpeed
//   LARGE_INTEGER g_PerformanceCounter
//   LARGE_INTEGER g_PerformanceFrequency
//   undefined4 g_PerformanceFrequency+4
//   double g_TimerCalibration
//   BOOL g_UseMultimediaTimer
//   HWND g_MainWindowHandle
//   int g_InputDisabled
// Function calls:
//   MessageBoxA
//   QueryPerformanceCounter
//   QueryPerformanceFrequency
//   timeBeginPeriod
//   wincore_winrun.cpp_getTime_FUN_005f2dc0

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_calibrateCPUSpeed_FUN_005f2b80(void)

{
  BOOL BVar1;
  int iVar2;
  MMRESULT MVar3;
  uint uVar4;
  int in_stack_00000008;
  int iVar5;
  int iVar6;
  
  BVar1 = (*QueryPerformanceFrequency)(&g_PerformanceFrequency);
  if (BVar1 == 1) {
    g_TimerCalibration =
         (double)g_PerformanceFrequency._0_4_ +
         (double)g_PerformanceFrequency.s.HighPart * g_RelatedToQPC3;
    (*QueryPerformanceCounter)(&g_PerformanceCounter);
  }
  else {
    g_UseMultimediaTimer = 1;
    MVar3 = (*timeBeginPeriod)(1);
    if (MVar3 != 0) {
      iVar5 = (*MessageBoxA)(g_MainWindowHandle,"Unable to set timer",
                             g_ApplicationTimerTitle,0x31);
      if (iVar5 == 2) {
        g_InputDisabled = 1;
      }
    }
  }
  iVar5 = 0;
  iVar6 = 0;
  do {
    wincore_winrun_cpp_getTime_FUN_005f2dc0();
    uVar4 = 0;
    do {
      uVar4 = uVar4 + 99;
    } while (uVar4 < 100000000);
    iVar2 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
    iVar5 = iVar5 + 0x7080000U / (uint)(iVar2 - in_stack_00000008);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 5);
  g_CalibratedCPUSpeed = iVar5 / 5;
  return;
}


// Assembly code:
// 005f2b80: PUSH EBX
//   Label: wincore_winrun.cpp_calibrateCPUSpeed_FUN_005f2b80
// 005f2b81: PUSH ESI
// 005f2b82: PUSH EDI
// 005f2b83: PUSH EBP
// 005f2b84: MOV EBP,ESP
// 005f2b86: SUB ESP,0x10
// 005f2b89: PUSH 0x3f96bb0
//   XREF to: 03f96bb0 (DATA)
// 005f2b8e: CALL dword ptr CS:[0x6115fc]
//   XREF to: EXTERNAL:0000008a (COMPUTED_CALL)
//   XREF to: 006115fc (READ)
// 005f2b95: CMP EAX,0x1
// 005f2b98: JNZ 0x005f2d5a
//   XREF to: 005f2d5a (CONDITIONAL_JUMP)
// 005f2b9e: FILD dword ptr [0x03f96bb4]
//   XREF to: 03f96bb4 (READ)
// 005f2ba4: FMUL double ptr [0x00657f2c]
//   XREF to: 00657f2c (READ)
// 005f2baa: XOR EDX,EDX
// 005f2bac: MOV EAX,[0x03f96bb0]
//   XREF to: 03f96bb0 (READ)
// 005f2bb1: MOV dword ptr [EBP + -0xc],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 005f2bb4: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005f2bb7: FILD qword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 005f2bba: FADDP
// 005f2bbc: PUSH 0x3f96ba8
//   XREF to: 03f96ba8 (DATA)
// 005f2bc1: FSTP double ptr [0x03f96bb8]
//   XREF to: 03f96bb8 (WRITE)
// 005f2bc7: CALL dword ptr CS:[0x6115f8]
//   XREF to: EXTERNAL:00000089 (COMPUTED_CALL)
//   XREF to: 006115f8 (READ)
// 005f2bce: XOR EAX,EAX
//   Label: LAB_005f2bce
// 005f2bd0: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005f2bd3: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005f2bd6: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   Label: LAB_005f2bd6
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 005f2bdb: PUSH EAX
// 005f2bdc: MOV EBX,0x0
// 005f2be1: ADD EBX,0x1
//   Label: LAB_005f2be1
// 005f2be4: ADD EBX,0x1
// 005f2be7: ADD EBX,0x1
// 005f2bea: ADD EBX,0x1
// 005f2bed: ADD EBX,0x1
// 005f2bf0: ADD EBX,0x1
// 005f2bf3: ADD EBX,0x1
// 005f2bf6: ADD EBX,0x1
// 005f2bf9: ADD EBX,0x1
// 005f2bfc: ADD EBX,0x1
// 005f2bff: ADD EBX,0x1
// 005f2c02: ADD EBX,0x1
// 005f2c05: ADD EBX,0x1
// 005f2c08: ADD EBX,0x1
// 005f2c0b: ADD EBX,0x1
// 005f2c0e: ADD EBX,0x1
// 005f2c11: ADD EBX,0x1
// 005f2c14: ADD EBX,0x1
// 005f2c17: ADD EBX,0x1
// 005f2c1a: ADD EBX,0x1
// 005f2c1d: ADD EBX,0x1
// 005f2c20: ADD EBX,0x1
// 005f2c23: ADD EBX,0x1
// 005f2c26: ADD EBX,0x1
// 005f2c29: ADD EBX,0x1
// 005f2c2c: ADD EBX,0x1
// 005f2c2f: ADD EBX,0x1
// 005f2c32: ADD EBX,0x1
// 005f2c35: ADD EBX,0x1
// 005f2c38: ADD EBX,0x1
// 005f2c3b: ADD EBX,0x1
// 005f2c3e: ADD EBX,0x1
// 005f2c41: ADD EBX,0x1
// 005f2c44: ADD EBX,0x1
// 005f2c47: ADD EBX,0x1
// 005f2c4a: ADD EBX,0x1
// 005f2c4d: ADD EBX,0x1
// 005f2c50: ADD EBX,0x1
// 005f2c53: ADD EBX,0x1
// 005f2c56: ADD EBX,0x1
// 005f2c59: ADD EBX,0x1
// 005f2c5c: ADD EBX,0x1
// 005f2c5f: ADD EBX,0x1
// 005f2c62: ADD EBX,0x1
// 005f2c65: ADD EBX,0x1
// 005f2c68: ADD EBX,0x1
// 005f2c6b: ADD EBX,0x1
// 005f2c6e: ADD EBX,0x1
// 005f2c71: ADD EBX,0x1
// 005f2c74: ADD EBX,0x1
// 005f2c77: ADD EBX,0x1
// 005f2c7a: ADD EBX,0x1
// 005f2c7d: ADD EBX,0x1
// 005f2c80: ADD EBX,0x1
// 005f2c83: ADD EBX,0x1
// 005f2c86: ADD EBX,0x1
// 005f2c89: ADD EBX,0x1
// 005f2c8c: ADD EBX,0x1
// 005f2c8f: ADD EBX,0x1
// 005f2c92: ADD EBX,0x1
// 005f2c95: ADD EBX,0x1
// 005f2c98: ADD EBX,0x1
// 005f2c9b: ADD EBX,0x1
// 005f2c9e: ADD EBX,0x1
// 005f2ca1: ADD EBX,0x1
// 005f2ca4: ADD EBX,0x1
// 005f2ca7: ADD EBX,0x1
// 005f2caa: ADD EBX,0x1
// 005f2cad: ADD EBX,0x1
// 005f2cb0: ADD EBX,0x1
// 005f2cb3: ADD EBX,0x1
// 005f2cb6: ADD EBX,0x1
// 005f2cb9: ADD EBX,0x1
// 005f2cbc: ADD EBX,0x1
// 005f2cbf: ADD EBX,0x1
// 005f2cc2: ADD EBX,0x1
// 005f2cc5: ADD EBX,0x1
// 005f2cc8: ADD EBX,0x1
// 005f2ccb: ADD EBX,0x1
// 005f2cce: ADD EBX,0x1
// 005f2cd1: ADD EBX,0x1
// 005f2cd4: ADD EBX,0x1
// 005f2cd7: ADD EBX,0x1
// 005f2cda: ADD EBX,0x1
// 005f2cdd: ADD EBX,0x1
// 005f2ce0: ADD EBX,0x1
// 005f2ce3: ADD EBX,0x1
// 005f2ce6: ADD EBX,0x1
// 005f2ce9: ADD EBX,0x1
// 005f2cec: ADD EBX,0x1
// 005f2cef: ADD EBX,0x1
// 005f2cf2: ADD EBX,0x1
// 005f2cf5: ADD EBX,0x1
// 005f2cf8: ADD EBX,0x1
// 005f2cfb: ADD EBX,0x1
// 005f2cfe: ADD EBX,0x1
// 005f2d01: ADD EBX,0x1
// 005f2d04: ADD EBX,0x1
// 005f2d07: ADD EBX,0x1
// 005f2d0a: CMP EBX,0x5f5e100
// 005f2d10: JC 0x005f2be1
//   XREF to: 005f2be1 (CONDITIONAL_JUMP)
// 005f2d16: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 005f2d1b: POP EBX
// 005f2d1c: SUB EAX,EBX
// 005f2d1e: MOV EBX,EAX
// 005f2d20: MOV EAX,0x7080000
// 005f2d25: CDQ
// 005f2d26: DIV EBX
// 005f2d28: ADD dword ptr [EBP + 0xfffffff8],EAX
//   XREF to: Stack[-0x18] (READ_WRITE)
// 005f2d2e: MOV ECX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 005f2d31: INC ECX
// 005f2d32: MOV dword ptr [EBP + -0x4],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 005f2d35: CMP ECX,0x5
// 005f2d38: JL 0x005f2bd6
//   XREF to: 005f2bd6 (CONDITIONAL_JUMP)
// 005f2d3e: MOV ECX,0x5
// 005f2d43: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 005f2d46: MOV EDX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 005f2d49: SAR EDX,0x1f
// 005f2d4c: IDIV ECX
// 005f2d4e: MOV [0x02d05250],EAX
//   XREF to: 02d05250 (WRITE)
// 005f2d53: MOV ESP,EBP
// 005f2d55: POP EBP
// 005f2d56: POP EDI
// 005f2d57: POP ESI
// 005f2d58: POP EBX
// 005f2d59: RET
// 005f2d5a: MOV ECX,0x1
//   Label: LAB_005f2d5a
// 005f2d5f: PUSH ECX
// 005f2d60: MOV dword ptr [0x03f96bc4],ECX
//   XREF to: 03f96bc4 (WRITE)
// 005f2d66: CALL dword ptr CS:[0x611414]
//   XREF to: EXTERNAL:00000013 (COMPUTED_CALL)
//   XREF to: 00611414 (READ)
// 005f2d6d: TEST EAX,EAX
// 005f2d6f: JZ 0x005f2bce
//   XREF to: 005f2bce (CONDITIONAL_JUMP)
// 005f2d75: PUSH 0x31
// 005f2d77: MOV EBX,dword ptr [0x006849a0]
//   XREF to: 006581b7 (PARAM)
//   XREF to: 006849a0 (READ)
// 005f2d7d: PUSH EBX
//   XREF to: 006581b7 (DATA)
// 005f2d7e: PUSH 0x657f14
//   XREF to: 00657f14 (DATA)
// 005f2d83: MOV ESI,dword ptr [0x03f98468]
//   XREF to: 03f98468 (READ)
// 005f2d89: PUSH ESI
// 005f2d8a: CALL dword ptr CS:[0x6114c4]
//   XREF to: EXTERNAL:0000003d (COMPUTED_CALL)
//   XREF to: 006114c4 (READ)
// 005f2d91: CMP EAX,0x2
// 005f2d94: JNZ 0x005f2bce
//   XREF to: 005f2bce (CONDITIONAL_JUMP)
// 005f2d9a: MOV dword ptr [0x03f9846c],0x1
//   XREF to: 03f9846c (WRITE)
// 005f2da4: JMP 0x005f2bce
//   XREF to: 005f2bce (UNCONDITIONAL_JUMP)
