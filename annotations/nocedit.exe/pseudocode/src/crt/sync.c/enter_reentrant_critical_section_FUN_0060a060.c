// Name: crt_sync.c_enter_reentrant_critical_section_FUN_0060a060
// Address: 0060a060
// Address Range: [[0060a060, 0060a0c1]]
// Convention: __cdecl
// Signature: void crt_sync.c_enter_reentrant_critical_section_FUN_0060a060(ReentrantCriticalSection * rcs)
// Cross-references:
//   crt_sync.c_enter_global_critical_section_FUN_0060a0ec (0060a0ec) at 0060a0f1 [UNCONDITIONAL_CALL]
//   crt_sync.c_enter_global_io_critical_section_FUN_0060a1bc (0060a1bc) at 0060a1c1 [UNCONDITIONAL_CALL]
//   crt_sync.c_enter_global_memory_critical_section_FUN_0060a17c (0060a17c) at 0060a181 [UNCONDITIONAL_CALL]
//   crt_sync.c_enter_global_thread_critical_section_FUN_0060a19c (0060a19c) at 0060a1a1 [UNCONDITIONAL_CALL]
//   crt_tls.c_enter_critical_section_by_index_FUN_0060a10c (0060a10c) at 0060a11c [UNCONDITIONAL_CALL]
//   crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4 (0060a3b4) at 0060a409 [DATA]
//   crt_unknown.c_FUN_0060a1dc (0060a1dc) at 0060a1e1 [UNCONDITIONAL_CALL]
// Globals:
//   EnterCriticalSection* PTR_EnterCriticalSection_00611530 = 00211cfa
//   GetCurrentThreadId* PTR_GetCurrentThreadId_00611584 = 00211e84
//   LPCRITICAL_SECTION g_GlobalInitLock
// Function calls:
//   crt_sync.c_allocate_critical_section_FUN_00609f24
//   crt_sync.c_leave_reentrant_critical_section_FUN_0060a0c4
//   EnterCriticalSection
//   GetCurrentThreadId

#include "nocturne.h"

void __cdecl crt_sync_c_enter_reentrant_critical_section_FUN_0060a060(ReentrantCriticalSection *rcs)

{
  DWORD DVar1;
  LPCRITICAL_SECTION p_Var2;
  
  DVar1 = (*PTR_GetCurrentThreadId_00611584)();
  if (DVar1 != rcs->ownerThreadId) {
    if (rcs->initialized == 0) {
      crt_sync_c_enter_reentrant_critical_section_FUN_0060a060
                ((ReentrantCriticalSection *)&g_GlobalInitLock);
      if (rcs->initialized == 0) {
        p_Var2 = crt_sync_c_allocate_critical_section_FUN_00609f24();
        rcs->initialized = 1;
        rcs->cs = p_Var2;
      }
      crt_sync_c_leave_reentrant_critical_section_FUN_0060a0c4
                ((ReentrantCriticalSection *)&g_GlobalInitLock);
    }
    (*PTR_EnterCriticalSection_00611530)(rcs->cs);
    rcs->ownerThreadId = DVar1;
  }
  rcs->lockCount = rcs->lockCount + 1;
  return;
}


// Assembly code:
// 0060a060: PUSH EBX
//   Label: crt_sync.c_enter_reentrant_critical_section_FUN_0060a060
// 0060a061: PUSH ESI
// 0060a062: PUSH EDI
// 0060a063: PUSH EBP
// 0060a064: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0060a068: CALL dword ptr CS:[0x611584]
//   XREF to: EXTERNAL:0000006c (COMPUTED_CALL)
//   XREF to: 00611584 (READ)
// 0060a06f: MOV EDX,dword ptr [EBX + 0x8]
// 0060a072: MOV ESI,EAX
// 0060a074: CMP EAX,EDX
// 0060a076: JZ 0x0060a0ba
//   XREF to: 0060a0ba (CONDITIONAL_JUMP)
// 0060a078: CMP dword ptr [EBX + 0x4],0x0
// 0060a07c: JNZ 0x0060a0ad
//   XREF to: 0060a0ad (CONDITIONAL_JUMP)
// 0060a07e: PUSH 0x3f9bfd0
//   XREF to: 03f9bfd0 (DATA)
// 0060a083: CALL crt_sync.c_enter_reentrant_critical_section_FUN_0060a060
//   XREF to: 0060a060 (UNCONDITIONAL_CALL)
// 0060a088: MOV EDI,dword ptr [EBX + 0x4]
// 0060a08b: ADD ESP,0x4
// 0060a08e: TEST EDI,EDI
// 0060a090: JNZ 0x0060a0a0
//   XREF to: 0060a0a0 (CONDITIONAL_JUMP)
// 0060a092: CALL crt_sync.c_allocate_critical_section_FUN_00609f24
//   XREF to: 00609f24 (UNCONDITIONAL_CALL)
// 0060a097: MOV dword ptr [EBX + 0x4],0x1
// 0060a09e: MOV dword ptr [EBX],EAX
// 0060a0a0: PUSH 0x3f9bfd0
//   Label: LAB_0060a0a0
//   XREF to: 03f9bfd0 (DATA)
// 0060a0a5: CALL crt_sync.c_leave_reentrant_critical_section_FUN_0060a0c4
//   XREF to: 0060a0c4 (UNCONDITIONAL_CALL)
// 0060a0aa: ADD ESP,0x4
// 0060a0ad: MOV EBP,dword ptr [EBX]
//   Label: LAB_0060a0ad
// 0060a0af: PUSH EBP
// 0060a0b0: CALL dword ptr CS:[0x611530]
//   XREF to: EXTERNAL:00000057 (COMPUTED_CALL)
//   XREF to: 00611530 (READ)
// 0060a0b7: MOV dword ptr [EBX + 0x8],ESI
// 0060a0ba: INC dword ptr [EBX + 0xc]
//   Label: LAB_0060a0ba
// 0060a0bd: POP EBP
// 0060a0be: POP EDI
// 0060a0bf: POP ESI
// 0060a0c0: POP EBX
// 0060a0c1: RET
