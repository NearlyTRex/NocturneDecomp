// Name: crt_sync.c_allocate_critical_section_FUN_00609f24
// Address: 00609f24
// Address Range: [[00609f24, 00609fc6]]
// Convention: __cdecl
// Signature: LPCRITICAL_SECTION crt_sync.c_allocate_critical_section_FUN_00609f24(void)
// Cross-references:
//   crt_sync.c_enter_reentrant_critical_section_FUN_0060a060 (0060a060) at 0060a092 [UNCONDITIONAL_CALL]
//   crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4 (0060a3b4) at 0060a46a [UNCONDITIONAL_CALL]
// Globals:
//   InitializeCriticalSection* PTR_InitializeCriticalSection_006115e0 = 00212028
//   TerminatedCString s_Unable_to_allocate_semap_006590c8
//   TerminatedCString s_Unable_to_allocate_semap_006590ec
//   CRITICAL_SECTION[64] g_StaticCriticalSectionArray
//   DWORD g_StaticCriticalSectionCounter
//   DWORD g_DynamicCriticalSectionCounter
//   LPCRITICAL_SECTION* g_DynamicCriticalSectionArray
// Function calls:
//   crt_memory.c_calloc_FUN_0060ca90
//   crt_memory.c_realloc_FUN_00601df0
//   crt_startup.c_HandleRuntimeError_FUN_00606660
//   InitializeCriticalSection

#include "nocturne.h"

LPCRITICAL_SECTION __cdecl crt_sync_c_allocate_critical_section_FUN_00609f24(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if ((int)g_StaticCriticalSectionCounter < SYSTEM_MAX_STATIC_CRITICAL_SECTIONS) {
    lpCriticalSection = g_StaticCriticalSectionArray + g_StaticCriticalSectionCounter;
    g_StaticCriticalSectionCounter = g_StaticCriticalSectionCounter + 1;
  }
  else {
    lpCriticalSection =
         (LPCRITICAL_SECTION)crt_memory_c_calloc_FUN_0060ca90(1,SYSTEM_CRITICAL_SECTION_SIZE);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      crt_startup_c_HandleRuntimeError_FUN_00606660("Unable to allocate semaphore data\r\n",1);
    }
    g_DynamicCriticalSectionArray =
         (LPCRITICAL_SECTION *)
         crt_memory_c_realloc_FUN_00601df0
                   (g_DynamicCriticalSectionArray,(g_DynamicCriticalSectionCounter + 1) * 4);
    if (g_DynamicCriticalSectionArray == (LPCRITICAL_SECTION *)0x0) {
      crt_startup_c_HandleRuntimeError_FUN_00606660("Unable to allocate semaphore data\r\n",1);
    }
    g_DynamicCriticalSectionArray[g_DynamicCriticalSectionCounter] = lpCriticalSection;
    g_DynamicCriticalSectionCounter = g_DynamicCriticalSectionCounter + 1;
  }
  (*PTR_InitializeCriticalSection_006115e0)(lpCriticalSection);
  return lpCriticalSection;
}


// Assembly code:
// 00609f24: PUSH EBX
//   Label: crt_sync.c_allocate_critical_section_FUN_00609f24
// 00609f25: PUSH ESI
// 00609f26: PUSH EDI
// 00609f27: MOV EDX,dword ptr [0x03f9c000]
//   XREF to: 03f9c000 (READ)
// 00609f2d: CMP EDX,0x40
// 00609f30: JGE 0x00609f50
//   XREF to: 00609f50 (CONDITIONAL_JUMP)
// 00609f32: LEA EAX,[EDX*0x4 + 0x0]
// 00609f39: MOV EBX,0x3f9b9d0
//   XREF to: 03f9b9d0 (DATA)
// 00609f3e: SUB EAX,EDX
// 00609f40: LEA EDI,[EDX + 0x1]
// 00609f43: SHL EAX,0x3
// 00609f46: MOV dword ptr [0x03f9c000],EDI
//   XREF to: 03f9c000 (WRITE)
// 00609f4c: ADD EBX,EAX
// 00609f4e: JMP 0x00609fb9
//   XREF to: 00609fb9 (UNCONDITIONAL_JUMP)
// 00609f50: PUSH 0x18
//   Label: LAB_00609f50
// 00609f52: PUSH 0x1
// 00609f54: CALL crt_memory.c_calloc_FUN_0060ca90
//   XREF to: 0060ca90 (UNCONDITIONAL_CALL)
// 00609f59: ADD ESP,0x8
// 00609f5c: MOV EBX,EAX
// 00609f5e: TEST EAX,EAX
// 00609f60: JNZ 0x00609f71
//   XREF to: 00609f71 (CONDITIONAL_JUMP)
// 00609f62: PUSH 0x1
// 00609f64: PUSH 0x6590c8
//   XREF to: 006590c8 (DATA)
// 00609f69: CALL crt_startup.c_HandleRuntimeError_FUN_00606660
//   XREF to: 00606660 (UNCONDITIONAL_CALL)
// 00609f6e: ADD ESP,0x8
// 00609f71: MOV EAX,[0x03f9c004]
//   Label: LAB_00609f71
//   XREF to: 03f9c004 (READ)
// 00609f76: INC EAX
// 00609f77: SHL EAX,0x2
// 00609f7a: PUSH EAX
// 00609f7b: MOV ECX,dword ptr [0x03f9c008]
//   XREF to: 03f9c008 (READ)
// 00609f81: PUSH ECX
// 00609f82: CALL crt_memory.c_realloc_FUN_00601df0
//   XREF to: 00601df0 (UNCONDITIONAL_CALL)
// 00609f87: ADD ESP,0x8
// 00609f8a: MOV [0x03f9c008],EAX
//   XREF to: 03f9c008 (WRITE)
// 00609f8f: TEST EAX,EAX
// 00609f91: JNZ 0x00609fa2
//   XREF to: 00609fa2 (CONDITIONAL_JUMP)
// 00609f93: PUSH 0x1
// 00609f95: PUSH 0x6590ec
//   XREF to: 006590ec (DATA)
// 00609f9a: CALL crt_startup.c_HandleRuntimeError_FUN_00606660
//   XREF to: 00606660 (UNCONDITIONAL_CALL)
// 00609f9f: ADD ESP,0x8
// 00609fa2: MOV EAX,[0x03f9c004]
//   Label: LAB_00609fa2
//   XREF to: 03f9c004 (READ)
// 00609fa7: MOV EDX,dword ptr [0x03f9c008]
//   XREF to: 03f9c008 (READ)
// 00609fad: LEA ESI,[EAX + 0x1]
// 00609fb0: MOV dword ptr [EDX + EAX*0x4],EBX
// 00609fb3: MOV dword ptr [0x03f9c004],ESI
//   XREF to: 03f9c004 (WRITE)
// 00609fb9: PUSH EBX
//   Label: LAB_00609fb9
// 00609fba: CALL dword ptr CS:[0x6115e0]
//   XREF to: EXTERNAL:00000083 (COMPUTED_CALL)
//   XREF to: 006115e0 (READ)
// 00609fc1: MOV EAX,EBX
// 00609fc3: POP EDI
// 00609fc4: POP ESI
// 00609fc5: POP EBX
// 00609fc6: RET
