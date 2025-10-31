// Name: crt_tls.c_cleanup_thread_tls_data_FUN_0060a334
// Address: 0060a334
// Address Range: [[0060a334, 0060a387]]
// Convention: __cdecl
// Signature: void crt_tls.c_cleanup_thread_tls_data_FUN_0060a334(int shutdownMode)
// Cross-references:
//   crt_thread.c_exit_thread_FUN_0060fa58 (0060fa58) at 0060fa6e [UNCONDITIONAL_CALL]
//   crt_tls.c_shutdown_tls_infrastructure_FUN_0060a388 (0060a388) at 0060a38a [UNCONDITIONAL_CALL]
// Globals:
//   CloseHandle* CloseHandle = 00211c38
//   TlsGetValue* PTR_TlsGetValue_00611654 = 0021225e
//   TlsSetValue* PTR_TlsSetValue_00611658 = 0021226c
//   DWORD g_TLSIndex = 0xffffffff
// Function calls:
//   CloseHandle
//   crt_tls.c_unregister_thread_data_FUN_0060cc3c
//   TlsGetValue
//   TlsSetValue

#include "nocturne.h"

void __cdecl crt_tls_c_cleanup_thread_tls_data_FUN_0060a334(int shutdownMode)

{
  HANDLE hObject;
  LPVOID pvVar1;
  undefined4 uStack00000008;
  int in_stack_0000001c;
  
  if (g_TLSIndex != 0xffffffff) {
    pvVar1 = (*PTR_TlsGetValue_00611654)(g_TLSIndex);
    if (pvVar1 != (LPVOID)0x0) {
      hObject = *(HANDLE *)((int)pvVar1 + 0xde);
      crt_tls_c_unregister_thread_data_FUN_0060cc3c(*(void **)((int)pvVar1 + 0xda));
      (*PTR_TlsSetValue_00611658)(g_TLSIndex,(LPVOID)0x0);
      if ((hObject != (HANDLE)0x0) && (in_stack_0000001c != 0)) {
        uStack00000008 = 0x60a385;
        (*CloseHandle)(hObject);
      }
    }
  }
  return;
}


// Assembly code:
// 0060a334: PUSH EBX
//   Label: crt_tls.c_cleanup_thread_tls_data_FUN_0060a334
// 0060a335: PUSH ESI
// 0060a336: MOV EDX,dword ptr [0x00684ee0]
//   XREF to: 00684ee0 (READ)
// 0060a33c: CMP EDX,-0x1
// 0060a33f: JZ 0x0060a385
//   XREF to: 0060a385 (CONDITIONAL_JUMP)
// 0060a341: PUSH EDX
// 0060a342: CALL dword ptr CS:[0x611654]
//   XREF to: EXTERNAL:000000a0 (COMPUTED_CALL)
//   XREF to: 00611654 (READ)
// 0060a349: TEST EAX,EAX
// 0060a34b: JZ 0x0060a385
//   XREF to: 0060a385 (CONDITIONAL_JUMP)
// 0060a34d: MOV ECX,dword ptr [EAX + 0xda]
// 0060a353: PUSH ECX
// 0060a354: MOV EBX,dword ptr [EAX + 0xde]
// 0060a35a: CALL crt_tls.c_unregister_thread_data_FUN_0060cc3c
//   XREF to: 0060cc3c (UNCONDITIONAL_CALL)
// 0060a35f: ADD ESP,0x4
// 0060a362: PUSH 0x0
// 0060a364: MOV ESI,dword ptr [0x00684ee0]
//   XREF to: 00684ee0 (READ)
// 0060a36a: PUSH ESI
// 0060a36b: CALL dword ptr CS:[0x611658]
//   XREF to: EXTERNAL:000000a1 (COMPUTED_CALL)
//   XREF to: 00611658 (READ)
// 0060a372: TEST EBX,EBX
// 0060a374: JZ 0x0060a385
//   XREF to: 0060a385 (CONDITIONAL_JUMP)
// 0060a376: CMP dword ptr [ESP + 0xc],0x0
// 0060a37b: JZ 0x0060a385
//   XREF to: 0060a385 (CONDITIONAL_JUMP)
// 0060a37d: PUSH EBX
// 0060a37e: CALL dword ptr CS:[0x611504]
//   XREF to: EXTERNAL:0000004c (COMPUTED_CALL)
//   XREF to: 00611504 (READ)
// 0060a385: POP ESI
//   Label: LAB_0060a385
// 0060a386: POP EBX
// 0060a387: RET
