// Name: crt_sync.c_leave_reentrant_critical_section_FUN_0060a0c4
// Address: 0060a0c4
// Address Range: [[0060a0c4, 0060a0ea]]
// Convention: __cdecl
// Signature: void crt_sync.c_leave_reentrant_critical_section_FUN_0060a0c4(ReentrantCriticalSection * rcs)
// Cross-references:
//   crt_sync.c_enter_reentrant_critical_section_FUN_0060a060 (0060a060) at 0060a0a5 [UNCONDITIONAL_CALL]
//   crt_sync.c_leave_global_critical_section_FUN_0060a0fc (0060a0fc) at 0060a101 [UNCONDITIONAL_CALL]
//   crt_sync.c_leave_global_io_critical_section_FUN_0060a1cc (0060a1cc) at 0060a1d1 [UNCONDITIONAL_CALL]
//   crt_sync.c_leave_global_memory_critical_section_FUN_0060a18c (0060a18c) at 0060a191 [UNCONDITIONAL_CALL]
//   crt_sync.c_leave_global_runtime_critical_section_FUN_0060a1ec (0060a1ec) at 0060a1f1 [UNCONDITIONAL_CALL]
//   crt_sync.c_leave_global_thread_critical_section_FUN_0060a1ac (0060a1ac) at 0060a1b1 [UNCONDITIONAL_CALL]
//   crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4 (0060a3b4) at 0060a40e [PARAM]
//   crt_tls.c_leave_critical_section_by_index_FUN_0060a128 (0060a128) at 0060a138 [UNCONDITIONAL_CALL]
// Globals:
//   LeaveCriticalSection* PTR_LeaveCriticalSection_006115e4 = 00212044
// Function calls:
//   LeaveCriticalSection

#include "nocturne.h"

void __cdecl crt_sync_c_leave_reentrant_critical_section_FUN_0060a0c4(ReentrantCriticalSection *rcs)

{
  int iVar1;
  
  if (rcs->lockCount != 0) {
    iVar1 = rcs->lockCount + -1;
    rcs->lockCount = iVar1;
    if (iVar1 == 0) {
      rcs->ownerThreadId = 0;
      (*PTR_LeaveCriticalSection_006115e4)(rcs->cs);
    }
  }
  return;
}


// Assembly code:
// 0060a0c4: PUSH EBX
//   Label: crt_sync.c_leave_reentrant_critical_section_FUN_0060a0c4
// 0060a0c5: PUSH ESI
// 0060a0c6: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0060a0ca: MOV EDX,dword ptr [EAX + 0xc]
// 0060a0cd: TEST EDX,EDX
// 0060a0cf: JBE 0x0060a0e8
//   XREF to: 0060a0e8 (CONDITIONAL_JUMP)
// 0060a0d1: LEA EBX,[EDX + -0x1]
// 0060a0d4: MOV dword ptr [EAX + 0xc],EBX
// 0060a0d7: TEST EBX,EBX
// 0060a0d9: JNZ 0x0060a0e8
//   XREF to: 0060a0e8 (CONDITIONAL_JUMP)
// 0060a0db: MOV ESI,dword ptr [EAX]
// 0060a0dd: PUSH ESI
// 0060a0de: MOV dword ptr [EAX + 0x8],EBX
// 0060a0e1: CALL dword ptr CS:[0x6115e4]
//   XREF to: EXTERNAL:00000084 (COMPUTED_CALL)
//   XREF to: 006115e4 (READ)
// 0060a0e8: POP ESI
//   Label: LAB_0060a0e8
// 0060a0e9: POP EBX
// 0060a0ea: RET
