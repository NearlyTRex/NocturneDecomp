// Name: crt_io.c_CreateFallbackHandle_FUN_00608b88
// Address: 00608b88
// Address Range: [[00608b88, 00608bac]]
// Convention: __cdecl
// Signature: HANDLE crt_io.c_CreateFallbackHandle_FUN_00608b88(void)
// Cross-references:
//   crt_io.c_InitializeStandardHandles_FUN_00608b20 (00608b20) at 00608b34 [UNCONDITIONAL_CALL]
//   crt_stdio.c_CreateFileImpl_FUN_006090a0 (006090a0) at 0060913b [UNCONDITIONAL_CALL]
// Globals:
//   CreateEventA* PTR_CreateEventA_0061150c = 00211c5a
//   undefined4 g_FakeHandleCounter
// Function calls:
//   CreateEventA

#include "nocturne.h"

HANDLE __cdecl crt_io_c_CreateFallbackHandle_FUN_00608b88(void)

{
  HANDLE pvVar1;
  
  pvVar1 = (*PTR_CreateEventA_0061150c)((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  if (pvVar1 == (HANDLE)0x0) {
    pvVar1 = (HANDLE)((int)g_FakeHandleCounter + 1);
    g_FakeHandleCounter = pvVar1;
  }
  return pvVar1;
}


// Assembly code:
// 00608b88: PUSH 0x0
//   Label: crt_io.c_CreateFallbackHandle_FUN_00608b88
// 00608b8a: PUSH 0x0
// 00608b8c: PUSH 0x0
// 00608b8e: PUSH 0x0
// 00608b90: CALL dword ptr CS:[0x61150c]
//   XREF to: EXTERNAL:0000004e (COMPUTED_CALL)
//   XREF to: 0061150c (READ)
// 00608b97: MOV EDX,EAX
// 00608b99: TEST EAX,EAX
// 00608b9b: JNZ 0x00608baa
//   XREF to: 00608baa (CONDITIONAL_JUMP)
// 00608b9d: MOV EDX,dword ptr [0x00685274]
//   XREF to: 00685274 (READ)
// 00608ba3: INC EDX
// 00608ba4: MOV dword ptr [0x00685274],EDX
//   XREF to: 00685274 (WRITE)
// 00608baa: MOV EAX,EDX
//   Label: LAB_00608baa
// 00608bac: RET
