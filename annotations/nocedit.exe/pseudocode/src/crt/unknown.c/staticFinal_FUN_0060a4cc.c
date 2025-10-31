// Name: crt_unknown.c_staticFinal_FUN_0060a4cc
// Address: 0060a4cc
// Address Range: [[0060a4cc, 0060a559]]
// Convention: unknown
// Signature: undefined crt_unknown.c_staticFinal_FUN_0060a4cc()
// Globals:
//   void* PTR_crt_sync.c_ResetCriticalSection_FUN_006853ec = 00609f20
//   ReentrantCriticalSection g_GlobalSystemCriticalSection
//   ReentrantCriticalSection g_GlobalThreadCriticalSection
//   void* g_TlsDataBase
//   undefined4 DAT_03f9b8d0
//   ReentrantCriticalSection g_GlobalMemoryCriticalSection
//   LPCRITICAL_SECTION g_GlobalInitLock
//   ReentrantCriticalSection g_GlobalIoCriticalSection
//   ReentrantCriticalSection g_GlobalRuntimeCriticalSection
// Function calls:
//   crt_heap.c_CompactHeapBlocks_FUN_0060c920
//   crt_sync.c_criticalSectionStub_FUN_00609f20
//   crt_unknown.c_DeleteCritcalSectionsMaybe_FUN_00609ff4
//   crt_unknown.c_FUN_00609fc8
//   crt_unknown.c_FUN_0060a394
//   crt_unknown.c_FUN_0060ccb4

#include "nocturne.h"

void crt_unknown_c_staticFinal_FUN_0060a4cc(void)

{
  void **ppvVar1;
  
  ppvVar1 = &g_TlsDataBase;
  (*(code *)PTR_crt_sync_c_ResetCriticalSection_FUN_006853ec)();
  do {
    (*(code *)PTR_crt_sync_c_ResetCriticalSection_FUN_006853ec)();
    ppvVar1 = (void **)((int)ppvVar1 + 0x10);
  } while ((ReentrantCriticalSection *)ppvVar1 != &g_GlobalMemoryCriticalSection);
  (*(code *)PTR_crt_sync_c_ResetCriticalSection_FUN_006853ec)();
  crt_unknown_c_DeleteCritcalSectionsMaybe_FUN_00609ff4();
  crt_unknown_c_FUN_0060ccb4();
  crt_heap_c_CompactHeapBlocks_FUN_0060c920();
  (*(code *)PTR_crt_sync_c_ResetCriticalSection_FUN_006853ec)();
  (*(code *)PTR_crt_sync_c_ResetCriticalSection_FUN_006853ec)();
  (*(code *)PTR_crt_sync_c_ResetCriticalSection_FUN_006853ec)();
  (*(code *)PTR_crt_sync_c_ResetCriticalSection_FUN_006853ec)();
  crt_unknown_c_FUN_00609fc8();
  crt_unknown_c_FUN_0060a394();
  return;
}


// Assembly code:
// 0060a4cc: PUSH EBX
//   Label: crt_unknown.c_staticFinal_FUN_0060a4cc
// 0060a4cd: PUSH ESI
// 0060a4ce: PUSH 0x3f9b8a0
//   XREF to: 03f9b8a0 (DATA)
// 0060a4d3: MOV EBX,0x3f9b8c0
//   XREF to: 03f9b8c0 (PARAM)
// 0060a4d8: CALL dword ptr [PTR_crt_sync.c_ResetCriticalSection_FUN_006853ec]
//   XREF to: 00609f20 (COMPUTED_CALL)
//   XREF to: 006853ec (READ)
// 0060a4de: ADD ESP,0x4
// 0060a4e1: LEA ESI,[EBX + 0x100]
//   XREF to: 03f9b9c0 (DATA)
// 0060a4e7: PUSH EBX
//   Label: LAB_0060a4e7
//   XREF to: 03f9b8c0 (DATA)
//   XREF to: 03f9b8d0 (DATA)
// 0060a4e8: CALL dword ptr [PTR_crt_sync.c_ResetCriticalSection_FUN_006853ec]
//   XREF to: 00609f20 (COMPUTED_CALL)
//   XREF to: 006853ec (READ)
// 0060a4ee: ADD EBX,0x10
//   XREF to: 03f9b8d0 (PARAM)
// 0060a4f1: ADD ESP,0x4
// 0060a4f4: CMP EBX,ESI
// 0060a4f6: JNZ 0x0060a4e7
//   XREF to: 0060a4e7 (CONDITIONAL_JUMP)
// 0060a4f8: PUSH 0x3f9bff0
//   XREF to: 03f9bff0 (DATA)
// 0060a4fd: CALL dword ptr [PTR_crt_sync.c_ResetCriticalSection_FUN_006853ec]
//   XREF to: 00609f20 (COMPUTED_CALL)
//   XREF to: 006853ec (READ)
// 0060a503: ADD ESP,0x4
// 0060a506: CALL crt_unknown.c_DeleteCritcalSectionsMaybe_FUN_00609ff4
//   XREF to: 00609ff4 (UNCONDITIONAL_CALL)
// 0060a50b: CALL crt_unknown.c_FUN_0060ccb4
//   XREF to: 0060cd20 (UNCONDITIONAL_CALL)
// 0060a510: CALL crt_heap.c_CompactHeapBlocks_FUN_0060c920
//   XREF to: 0060c920 (UNCONDITIONAL_CALL)
// 0060a515: PUSH 0x3f9b9c0
//   XREF to: 03f9b9c0 (DATA)
// 0060a51a: CALL dword ptr [PTR_crt_sync.c_ResetCriticalSection_FUN_006853ec]
//   XREF to: 00609f20 (COMPUTED_CALL)
//   XREF to: 006853ec (READ)
// 0060a520: ADD ESP,0x4
// 0060a523: PUSH 0x3f9b8b0
//   XREF to: 03f9b8b0 (DATA)
// 0060a528: CALL dword ptr [PTR_crt_sync.c_ResetCriticalSection_FUN_006853ec]
//   XREF to: 00609f20 (COMPUTED_CALL)
//   XREF to: 006853ec (READ)
// 0060a52e: ADD ESP,0x4
// 0060a531: PUSH 0x3f9bfe0
//   XREF to: 03f9bfe0 (DATA)
// 0060a536: CALL dword ptr [PTR_crt_sync.c_ResetCriticalSection_FUN_006853ec]
//   XREF to: 00609f20 (COMPUTED_CALL)
//   XREF to: 006853ec (READ)
// 0060a53c: ADD ESP,0x4
// 0060a53f: PUSH 0x3f9bfd0
//   XREF to: 03f9bfd0 (DATA)
// 0060a544: CALL dword ptr [PTR_crt_sync.c_ResetCriticalSection_FUN_006853ec]
//   XREF to: 00609f20 (COMPUTED_CALL)
//   XREF to: 006853ec (READ)
// 0060a54a: ADD ESP,0x4
// 0060a54d: CALL crt_unknown.c_FUN_00609fc8
//   XREF to: 00609fc8 (UNCONDITIONAL_CALL)
// 0060a552: CALL crt_unknown.c_FUN_0060a394
//   XREF to: 0060a394 (UNCONDITIONAL_CALL)
// 0060a557: POP ESI
// 0060a558: POP EBX
// 0060a559: RET
