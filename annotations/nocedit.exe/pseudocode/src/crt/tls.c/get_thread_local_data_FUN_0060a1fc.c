// Name: crt_tls.c_get_thread_local_data_FUN_0060a1fc
// Address: 0060a1fc
// Address Range: [[0060a1fc, 0060a23b]]
// Convention: __cdecl
// Signature: LPVOID crt_tls.c_get_thread_local_data_FUN_0060a1fc(void)
// Cross-references:
//   crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4 (0060a3b4) at 0060a4b5 [DATA]
// Globals:
//   GetLastError* GetLastError = 00211f22
//   SetLastError* PTR_SetLastError_00611634 = 002121d6
//   TlsGetValue* PTR_TlsGetValue_00611654 = 0021225e
//   DWORD g_TLSIndex = 0xffffffff
// Function calls:
//   crt_tls.c_create_thread_local_data_FUN_0060cac0
//   crt_tls.c_getThreadLocalData_FUN_0060caf8
//   GetLastError
//   SetLastError
//   TlsGetValue

#include "nocturne.h"

LPVOID __cdecl crt_tls_c_get_thread_local_data_FUN_0060a1fc(void)

{
  DWORD dwErrCode;
  LPVOID pvVar1;
  
  dwErrCode = (*GetLastError)();
  pvVar1 = (*PTR_TlsGetValue_00611654)(g_TLSIndex);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = crt_tls_c_create_thread_local_data_FUN_0060cac0();
  }
  else if (*(char *)((int)pvVar1 + 0x53) != '\0') {
    pvVar1 = crt_tls_c_getThreadLocalData_FUN_0060caf8();
  }
  (*PTR_SetLastError_00611634)(dwErrCode);
  return pvVar1;
}


// Assembly code:
// 0060a1fc: PUSH EBX
//   Label: crt_tls.c_get_thread_local_data_FUN_0060a1fc
// 0060a1fd: PUSH ESI
// 0060a1fe: CALL dword ptr CS:[0x6115a4]
//   XREF to: EXTERNAL:00000074 (COMPUTED_CALL)
//   XREF to: 006115a4 (READ)
// 0060a205: MOV EDX,dword ptr [0x00684ee0]
//   XREF to: 00684ee0 (READ)
// 0060a20b: PUSH EDX
// 0060a20c: MOV ESI,EAX
// 0060a20e: CALL dword ptr CS:[0x611654]
//   XREF to: EXTERNAL:000000a0 (COMPUTED_CALL)
//   XREF to: 00611654 (READ)
// 0060a215: MOV EBX,EAX
// 0060a217: TEST EAX,EAX
// 0060a219: JNZ 0x0060a222
//   XREF to: 0060a222 (CONDITIONAL_JUMP)
// 0060a21b: CALL crt_tls.c_create_thread_local_data_FUN_0060cac0
//   XREF to: 0060cac0 (UNCONDITIONAL_CALL)
// 0060a220: JMP 0x0060a22d
//   XREF to: 0060a22d (UNCONDITIONAL_JUMP)
// 0060a222: CMP byte ptr [EAX + 0x53],0x0
//   Label: LAB_0060a222
// 0060a226: JZ 0x0060a22f
//   XREF to: 0060a22f (CONDITIONAL_JUMP)
// 0060a228: CALL crt_tls.c_getThreadLocalData_FUN_0060caf8
//   XREF to: 0060caf8 (UNCONDITIONAL_CALL)
// 0060a22d: MOV EBX,EAX
//   Label: LAB_0060a22d
// 0060a22f: PUSH ESI
//   Label: LAB_0060a22f
// 0060a230: CALL dword ptr CS:[0x611634]
//   XREF to: EXTERNAL:00000098 (COMPUTED_CALL)
//   XREF to: 00611634 (READ)
// 0060a237: MOV EAX,EBX
// 0060a239: POP ESI
// 0060a23a: POP EBX
// 0060a23b: RET
