// Name: crt_tls.c_initialize_thread_tls_data_FUN_0060a2d8
// Address: 0060a2d8
// Address Range: [[0060a2d8, 0060a333]]
// Convention: __cdecl
// Signature: BOOL crt_tls.c_initialize_thread_tls_data_FUN_0060a2d8(void * init_param)
// Cross-references:
//   crt_thread.c_threadStartupWrapper_FUN_0060f8c0 (0060f8c0) at 0060f90e [UNCONDITIONAL_CALL]
//   crt_tls.c_create_thread_local_data_FUN_0060cac0 (0060cac0) at 0060cac4 [UNCONDITIONAL_CALL]
// Globals:
//   TlsSetValue* PTR_TlsSetValue_00611658 = 0021226c
//   DWORD g_TLSIndex = 0xffffffff
// Function calls:
//   crt_memory.c_free_FUN_00601cd0
//   crt_startup.cpp_GetOrCreateThreadData_FUN_0060a23c
//   crt_tls.c_register_thread_data_FUN_0060cbd0
//   TlsSetValue

#include "nocturne.h"

BOOL __cdecl crt_tls_c_initialize_thread_tls_data_FUN_0060a2d8(void *init_param)

{
  undefined1 *thread_param;
  BOOL BVar1;
  void *unaff_ESI;
  
  if (g_TLSIndex == 0xffffffff) {
    return 0;
  }
  thread_param = (undefined1 *)crt_startup_cpp_GetOrCreateThreadData_FUN_0060a23c(unaff_ESI);
  if (thread_param != (undefined1 *)0x0) {
    BVar1 = crt_tls_c_register_thread_data_FUN_0060cbd0
                      (*(void **)(thread_param + 0xda),thread_param);
    if (BVar1 == 0) {
      crt_memory_c_free_FUN_00601cd0(thread_param);
      return 0;
    }
    (*PTR_TlsSetValue_00611658)(g_TLSIndex,thread_param);
    thread_param = &DAT_00000001;
  }
  return (BOOL)thread_param;
}


// Assembly code:
// 0060a2d8: PUSH EBX
//   Label: crt_tls.c_initialize_thread_tls_data_FUN_0060a2d8
// 0060a2d9: PUSH ESI
// 0060a2da: CMP dword ptr [0x00684ee0],-0x1
//   XREF to: 00684ee0 (READ)
// 0060a2e1: JNZ 0x0060a2e8
//   XREF to: 0060a2e8 (CONDITIONAL_JUMP)
// 0060a2e3: XOR EAX,EAX
// 0060a2e5: POP ESI
// 0060a2e6: POP EBX
// 0060a2e7: RET
// 0060a2e8: MOV EBX,dword ptr [ESP + 0xc]
//   Label: LAB_0060a2e8
//   XREF to: Stack[0x4] (READ)
// 0060a2ec: PUSH EBX
// 0060a2ed: CALL crt_startup.cpp_GetOrCreateThreadData_FUN_0060a23c
//   XREF to: 0060a23c (UNCONDITIONAL_CALL)
// 0060a2f2: MOV EBX,EAX
// 0060a2f4: ADD ESP,0x4
// 0060a2f7: TEST EAX,EAX
// 0060a2f9: JZ 0x0060a331
//   XREF to: 0060a331 (CONDITIONAL_JUMP)
// 0060a2fb: PUSH EAX
// 0060a2fc: MOV ECX,dword ptr [EAX + 0xda]
// 0060a302: PUSH ECX
// 0060a303: CALL crt_tls.c_register_thread_data_FUN_0060cbd0
//   XREF to: 0060cbd0 (UNCONDITIONAL_CALL)
// 0060a308: ADD ESP,0x8
// 0060a30b: TEST EAX,EAX
// 0060a30d: JNZ 0x0060a31d
//   XREF to: 0060a31d (CONDITIONAL_JUMP)
// 0060a30f: PUSH EBX
// 0060a310: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 0060a315: ADD ESP,0x4
// 0060a318: XOR EAX,EAX
// 0060a31a: POP ESI
// 0060a31b: POP EBX
// 0060a31c: RET
// 0060a31d: PUSH EBX
//   Label: LAB_0060a31d
// 0060a31e: MOV ESI,dword ptr [0x00684ee0]
//   XREF to: 00684ee0 (READ)
// 0060a324: PUSH ESI
// 0060a325: CALL dword ptr CS:[0x611658]
//   XREF to: EXTERNAL:000000a1 (COMPUTED_CALL)
//   XREF to: 00611658 (READ)
// 0060a32c: MOV EAX,0x1
// 0060a331: POP ESI
//   Label: LAB_0060a331
// 0060a332: POP EBX
// 0060a333: RET
