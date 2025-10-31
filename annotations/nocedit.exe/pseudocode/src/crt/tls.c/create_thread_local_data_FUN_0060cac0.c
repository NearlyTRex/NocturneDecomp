// Name: crt_tls.c_create_thread_local_data_FUN_0060cac0
// Address: 0060cac0
// Address Range: [[0060cac0, 0060caf6]]
// Convention: __watcallRegister
// Signature: LPVOID crt_tls.c_create_thread_local_data_FUN_0060cac0(void)
// Cross-references:
//   crt_tls.c_get_thread_local_data_FUN_0060a1fc (0060a1fc) at 0060a21b [UNCONDITIONAL_CALL]
// Globals:
//   TlsGetValue* PTR_TlsGetValue_00611654 = 0021225e
//   TerminatedCString s_Thread_has_no_thread_spe_00659620
//   DWORD g_TLSIndex = 0xffffffff
// Function calls:
//   crt_startup.c_HandleRuntimeError_FUN_00606660
//   crt_tls.c_initialize_thread_tls_data_FUN_0060a2d8
//   TlsGetValue

#include "nocturne.h"

LPVOID crt_tls_c_create_thread_local_data_FUN_0060cac0(void)

{
  BOOL BVar1;
  LPVOID pvVar2;
  
  pvVar2 = (LPVOID)0x0;
  BVar1 = crt_tls_c_initialize_thread_tls_data_FUN_0060a2d8((void *)0x0);
  if (BVar1 != 0) {
    pvVar2 = (*PTR_TlsGetValue_00611654)(g_TLSIndex);
  }
  if (pvVar2 == (LPVOID)0x0) {
    crt_startup_c_HandleRuntimeError_FUN_00606660("Thread has no thread-specific data\r\n",1);
  }
  return pvVar2;
}


// Assembly code:
// 0060cac0: PUSH EBX
//   Label: crt_tls.c_create_thread_local_data_FUN_0060cac0
// 0060cac1: XOR EBX,EBX
// 0060cac3: PUSH EBX
// 0060cac4: CALL crt_tls.c_initialize_thread_tls_data_FUN_0060a2d8
//   XREF to: 0060a2d8 (UNCONDITIONAL_CALL)
// 0060cac9: ADD ESP,0x4
// 0060cacc: TEST EAX,EAX
// 0060cace: JZ 0x0060cae0
//   XREF to: 0060cae0 (CONDITIONAL_JUMP)
// 0060cad0: MOV EDX,dword ptr [0x00684ee0]
//   XREF to: 00684ee0 (READ)
// 0060cad6: PUSH EDX
// 0060cad7: CALL dword ptr CS:[0x611654]
//   XREF to: EXTERNAL:000000a0 (COMPUTED_CALL)
//   XREF to: 00611654 (READ)
// 0060cade: MOV EBX,EAX
// 0060cae0: TEST EBX,EBX
//   Label: LAB_0060cae0
// 0060cae2: JNZ 0x0060caf3
//   XREF to: 0060caf3 (CONDITIONAL_JUMP)
// 0060cae4: PUSH 0x1
// 0060cae6: PUSH 0x659620
//   XREF to: 00659620 (DATA)
// 0060caeb: CALL crt_startup.c_HandleRuntimeError_FUN_00606660
//   XREF to: 00606660 (UNCONDITIONAL_CALL)
// 0060caf0: ADD ESP,0x8
// 0060caf3: MOV EAX,EBX
//   Label: LAB_0060caf3
// 0060caf5: POP EBX
// 0060caf6: RET
