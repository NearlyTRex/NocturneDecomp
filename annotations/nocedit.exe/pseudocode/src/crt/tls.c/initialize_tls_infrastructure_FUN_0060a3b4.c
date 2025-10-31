// Name: crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4
// Address: 0060a3b4
// Address Range: [[0060a3b4, 0060a4cb]]
// Convention: __cdecl
// Signature: void crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4(void)
// Cross-references:
//   crt_thread.c_create_thread_with_sync_FUN_0060f960 (0060f960) at 0060f982 [UNCONDITIONAL_CALL]
// Globals:
//   TlsSetValue* PTR_TlsSetValue_00611658 = 0021226c
//   DWORD g_TLSIndex = 0xffffffff
//   GET_TLS_FUNC* PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4 = 0060242c
//   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
//   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
//   REGISTER_HANDLE_FUNC* PTR_crt_sync.c_RegisterHandle_FUN_00602438_00684ef0 = 00602438
//   INVALIDATE_HANDLE_FUNC* PTR_crt_sync.c_InvalidateHandle_FUN_00602448_00684ef4 = 00602448
//   ENTER_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ef8 = 00602434
//   EXIT_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684efc = 00602434
//   void* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f00 = 00602434
//   void* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f04 = 00602434
//   void* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f08 = 00602434
//   void* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f0c = 00602434
//   ENTER_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f10 = 00602434
//   EXIT_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f14 = 00602434
//   ENTER_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f18 = 00602434
//   EXIT_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f1c = 00602434
//   void* PTR_crt_sync.c_CriticalSectionCleanup_FUN_00602434_00684f20 = 00602434
//   void* PTR_crt_sync.c_EnterCriticalSection_FUN_006853e4 = 00609f20
//   void* PTR_crt_sync.c_ExitCriticalSection_FUN_006853e8 = 00609f20
//   void* PTR_crt_sync.c_ResetCriticalSection_FUN_006853ec = 00609f20
//   void* g_CurrentThreadTlsBlock
//   LPCRITICAL_SECTION g_GlobalInitLock
//   undefined4 DAT_03f9bfd4
// Function calls:
//   crt_sync.c_allocate_critical_section_FUN_00609f24
//   crt_tls.c_register_thread_data_FUN_0060cbd0
//   TlsSetValue

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl crt_tls_c_initialize_tls_infrastructure_FUN_0060a3b4(void)

{
  PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8 =
       crt_tls_c_enter_critical_section_by_index_FUN_0060a10c;
  PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec =
       crt_tls_c_leave_critical_section_by_index_FUN_0060a128;
  PTR_crt_sync_c_RegisterHandle_FUN_00602438_00684ef0 =
       crt_io_c_register_handle_wrapper_FUN_0060a144;
  PTR_crt_sync_c_InvalidateHandle_FUN_00602448_00684ef4 =
       crt_io_c_invalidate_handle_wrapper_FUN_0060a154;
  PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ef8 =
       crt_sync_c_enter_global_critical_section_FUN_0060a0ec;
  PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684efc =
       crt_sync_c_leave_global_critical_section_FUN_0060a0fc;
  PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684f10 =
       crt_sync_c_enter_global_io_critical_section_FUN_0060a1bc;
  PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684f14 =
       crt_sync_c_leave_global_io_critical_section_FUN_0060a1cc;
  PTR_crt_sync_c_EnterCriticalSection_FUN_006853e4 =
       crt_sync_c_enter_reentrant_critical_section_FUN_0060a060;
  PTR_crt_sync_c_ExitCriticalSection_FUN_006853e8 =
       crt_sync_c_leave_reentrant_critical_section_FUN_0060a0c4;
  PTR_crt_sync_c_ResetCriticalSection_FUN_006853ec =
       crt_sync_c_reset_reentrant_critical_section_state_FUN_0060a04c;
  PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684f00 =
       crt_sync_c_enter_global_memory_critical_section_FUN_0060a17c;
  PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684f04 =
       crt_sync_c_enter_global_thread_critical_section_FUN_0060a19c;
  PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684f08 =
       crt_sync_c_leave_global_memory_critical_section_FUN_0060a18c;
  PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684f0c =
       crt_sync_c_leave_global_thread_critical_section_FUN_0060a1ac;
  g_GlobalInitLock = crt_sync_c_allocate_critical_section_FUN_00609f24();
  _DAT_03f9bfd4 = 1;
  PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684f1c =
       crt_sync_c_leave_global_runtime_critical_section_FUN_0060a1ec;
  PTR_crt_sync_c_CriticalSectionCleanup_FUN_00602434_00684f20 =
       crt_tls_c_shutdown_tls_infrastructure_FUN_0060a388;
  PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684f18 = crt_unknown_c_FUN_0060a1dc;
  crt_tls_c_register_thread_data_FUN_0060cbd0
            (*(void **)((int)g_CurrentThreadTlsBlock + 0xda),g_CurrentThreadTlsBlock);
  (*PTR_TlsSetValue_00611658)(g_TLSIndex,g_CurrentThreadTlsBlock);
  PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4 = crt_tls_c_get_thread_local_data_FUN_0060a1fc;
  return;
}


// Assembly code:
// 0060a3b4: PUSH EBX
//   Label: crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4
// 0060a3b5: PUSH ESI
// 0060a3b6: PUSH EDI
// 0060a3b7: PUSH EBP
// 0060a3b8: MOV EDX,0x60a10c
//   XREF to: 0060a10c (DATA)
// 0060a3bd: MOV EBX,0x60a128
//   XREF to: 0060a128 (DATA)
// 0060a3c2: MOV ECX,0x60a144
//   XREF to: 0060a144 (DATA)
// 0060a3c7: MOV ESI,0x60a154
//   XREF to: 0060a154 (DATA)
// 0060a3cc: MOV EDI,0x60a0ec
//   XREF to: 0060a0ec (DATA)
// 0060a3d1: MOV EBP,0x60a0fc
//   XREF to: 0060a0fc (DATA)
// 0060a3d6: MOV EAX,0x60a1bc
//   XREF to: 0060a1bc (DATA)
// 0060a3db: MOV dword ptr [0x00684ee8],EDX
//   XREF to: 00684ee8 (WRITE)
// 0060a3e1: MOV dword ptr [0x00684eec],EBX
//   XREF to: 00684eec (WRITE)
// 0060a3e7: MOV dword ptr [0x00684ef0],ECX
//   XREF to: 00684ef0 (WRITE)
// 0060a3ed: MOV dword ptr [0x00684ef4],ESI
//   XREF to: 00684ef4 (WRITE)
// 0060a3f3: MOV dword ptr [0x00684ef8],EDI
//   XREF to: 00684ef8 (WRITE)
// 0060a3f9: MOV dword ptr [0x00684efc],EBP
//   XREF to: 00684efc (WRITE)
// 0060a3ff: MOV [0x00684f10],EAX
//   XREF to: 00684f10 (WRITE)
// 0060a404: MOV EDX,0x60a1cc
//   XREF to: 0060a1cc (DATA)
// 0060a409: MOV EBX,0x60a060
//   XREF to: 0060a060 (DATA)
// 0060a40e: MOV ECX,0x60a0c4
//   XREF to: 0060a0c4 (PARAM)
// 0060a413: MOV ESI,0x60a04c
//   XREF to: 0060a04c (DATA)
// 0060a418: MOV EDI,0x60a17c
//   XREF to: 0060a17c (DATA)
// 0060a41d: MOV EBP,0x60a19c
//   XREF to: 0060a19c (DATA)
// 0060a422: MOV EAX,0x60a18c
//   XREF to: 0060a18c (PARAM)
// 0060a427: MOV dword ptr [0x00684f14],EDX
//   XREF to: 00684f14 (WRITE)
// 0060a42d: MOV dword ptr [0x006853e4],EBX
//   XREF to: 006853e4 (WRITE)
// 0060a433: MOV dword ptr [0x006853e8],ECX
//   XREF to: 006853e8 (WRITE)
// 0060a439: MOV dword ptr [0x006853ec],ESI
//   XREF to: 006853ec (WRITE)
// 0060a43f: MOV dword ptr [0x00684f00],EDI
//   XREF to: 00684f00 (WRITE)
// 0060a445: MOV dword ptr [0x00684f04],EBP
//   XREF to: 00684f04 (WRITE)
// 0060a44b: MOV [0x00684f08],EAX
//   XREF to: 00684f08 (WRITE)
// 0060a450: MOV EDX,0x60a1ac
//   XREF to: 0060a1ac (PARAM)
// 0060a455: MOV EBX,0x1
// 0060a45a: MOV ESI,0x60a1ec
//   XREF to: 0060a1ec (DATA)
// 0060a45f: MOV EDI,0x60a388
//   XREF to: 0060a388 (DATA)
// 0060a464: MOV dword ptr [0x00684f0c],EDX
//   XREF to: 00684f0c (WRITE)
// 0060a46a: CALL crt_sync.c_allocate_critical_section_FUN_00609f24
//   XREF to: 00609f24 (UNCONDITIONAL_CALL)
// 0060a46f: MOV ECX,0x60a1dc
//   XREF to: 0060a1dc (PARAM)
// 0060a474: MOV EBP,dword ptr [0x03f9b22c]
//   XREF to: 03f9b22c (READ)
// 0060a47a: MOV [0x03f9bfd0],EAX
//   XREF to: 03f9bfd0 (WRITE)
// 0060a47f: MOV dword ptr [0x03f9bfd4],EBX
//   XREF to: 03f9bfd4 (WRITE)
// 0060a485: PUSH EBP
// 0060a486: MOV EDX,dword ptr [EBP + 0xda]
// 0060a48c: MOV dword ptr [0x00684f1c],ESI
//   XREF to: 00684f1c (WRITE)
// 0060a492: PUSH EDX
// 0060a493: MOV dword ptr [0x00684f20],EDI
//   XREF to: 00684f20 (WRITE)
// 0060a499: MOV dword ptr [0x00684f18],ECX
//   XREF to: 00684f18 (WRITE)
// 0060a49f: CALL crt_tls.c_register_thread_data_FUN_0060cbd0
//   XREF to: 0060cbd0 (UNCONDITIONAL_CALL)
// 0060a4a4: ADD ESP,0x8
// 0060a4a7: MOV EBX,dword ptr [0x03f9b22c]
//   XREF to: 03f9b22c (READ)
// 0060a4ad: PUSH EBX
// 0060a4ae: MOV ECX,dword ptr [0x00684ee0]
//   XREF to: 00684ee0 (READ)
// 0060a4b4: PUSH ECX
// 0060a4b5: MOV ESI,0x60a1fc
//   XREF to: 0060a1fc (DATA)
// 0060a4ba: CALL dword ptr CS:[0x611658]
//   XREF to: EXTERNAL:000000a1 (COMPUTED_CALL)
//   XREF to: 00611658 (READ)
// 0060a4c1: MOV dword ptr [0x00684ee4],ESI
//   XREF to: 00684ee4 (WRITE)
// 0060a4c7: POP EBP
// 0060a4c8: POP EDI
// 0060a4c9: POP ESI
// 0060a4ca: POP EBX
// 0060a4cb: RET
