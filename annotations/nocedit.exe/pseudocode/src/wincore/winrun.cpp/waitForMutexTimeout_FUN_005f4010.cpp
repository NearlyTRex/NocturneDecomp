// Name: wincore_winrun.cpp_waitForMutexTimeout_FUN_005f4010
// Address: 005f4010
// Address Range: [[005f4010, 005f404c]]
// Convention: __cdecl
// Signature: int wincore_winrun.cpp_waitForMutexTimeout_FUN_005f4010(HANDLE mutex_handle, double timeout_seconds)
// Cross-references:
//   sound_sndmain.cpp_DoSomethingRoundWait_OnSoundMutex_FUN_005abe20 (005abe20) at 005abe43 [UNCONDITIONAL_CALL]
// Globals:
//   WaitForSingleObject* WaitForSingleObject = 002122c4
//   double g_SecondsToMillisecondsMultiplier = 1000
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   WaitForSingleObject

#include "nocturne.h"

int __cdecl
wincore_winrun_cpp_waitForMutexTimeout_FUN_005f4010(HANDLE mutex_handle,double timeout_seconds)

{
  undefined4 in_EAX;
  DWORD DVar1;
  float10 fVar2;
  double dVar3;
  undefined4 uStack_4;
  
  if (mutex_handle == (HANDLE)0x0) {
    return 0;
  }
  fVar2 = (float10)timeout_seconds * (float10)g_SecondsToMillisecondsMultiplier;
  dVar3 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(mutex_handle,in_EAX));
  uStack_4 = (DWORD)(longlong)ROUND(fVar2);
  DVar1 = (*WaitForSingleObject)((HANDLE)((ulonglong)dVar3 >> 0x20),uStack_4);
  return (uint)(DVar1 == 0);
}


// Assembly code:
// 005f4010: SUB ESP,0x8
//   Label: wincore_winrun.cpp_waitForMutexTimeout_FUN_005f4010
// 005f4013: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005f4017: TEST EDX,EDX
// 005f4019: JNZ 0x005f4021
//   XREF to: 005f4021 (CONDITIONAL_JUMP)
// 005f401b: XOR EAX,EAX
// 005f401d: ADD ESP,0x8
// 005f4020: RET
// 005f4021: FLD double ptr [ESP + 0x10]
//   Label: LAB_005f4021
//   XREF to: Stack[0x8] (READ)
// 005f4025: FMUL double ptr [0x0065817c]
//   XREF to: 0065817c (READ)
// 005f402b: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005f4030: FISTP qword ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 005f4033: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 005f4036: PUSH EAX
// 005f4037: PUSH EDX
// 005f4038: CALL dword ptr CS:[0x61166c]
//   XREF to: EXTERNAL:000000a6 (COMPUTED_CALL)
//   XREF to: 0061166c (READ)
// 005f403f: TEST EAX,EAX
// 005f4041: SETZ AL
// 005f4044: AND EAX,0xff
// 005f4049: ADD ESP,0x8
// 005f404c: RET
