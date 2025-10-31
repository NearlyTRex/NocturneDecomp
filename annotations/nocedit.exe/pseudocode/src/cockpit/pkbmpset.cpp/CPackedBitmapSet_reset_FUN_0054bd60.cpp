// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_0054bd60
// Address: 0054bd60
// Address Range: [[0054bd60, 0054bda5]]
// Convention: __cdecl
// Signature: void cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_0054bd60(CPackedBitmapSet * this_ptr)
// Cross-references:
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_0054bdb0 (0054bdb0) at 0054bdc7 [UNCONDITIONAL_CALL]
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_0054be70 (0054be70) at 0054be8a [UNCONDITIONAL_CALL]
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadJoinedRAW_FUN_0054bf40 (0054bf40) at 0054bf59 [UNCONDITIONAL_CALL]
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_0054c480 (0054c480) at 0054c488 [UNCONDITIONAL_CALL]
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBMFileRange_FUN_0054c3d0 (0054c3d0) at 0054c3ea [UNCONDITIONAL_CALL]
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_reloadStoredPBGFile_FUN_0054c4d0 (0054c4d0) at 0054c4d6 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_cockpit_pkbmpset_cpp_0063f39e
//   WatcomTypeInfo g_CPackedBitmapTypeInfo
//   char* g_CurrentDebugFilename = 0067d200
//   int g_CurrentDebugLine
// Function calls:
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632

#include "nocturne.h"

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_reset_FUN_0054bd60(CPackedBitmapSet *this_ptr)

{
  void *ptr;
  
  g_CurrentDebugFilename = "..\\cockpit\\pkbmpset.cpp";
  g_CurrentDebugLine = 0x4d;
  ptr = crt_memory_c_freeSingleInstance_FUN_005fe632
                  (this_ptr->bitmap_array,&g_CPackedBitmapTypeInfo);
  crt_memory_c_free_FUN_005fe659(ptr);
  this_ptr->bitmap_count = 0;
  this_ptr->bitmap_array = (CPackedBitmap *)0x0;
  return;
}


// Assembly code:
// 0054bd60: PUSH EBX
//   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_0054bd60
// 0054bd61: PUSH ESI
// 0054bd62: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0054bd66: MOV EDX,0x63f39e
//   XREF to: 0063f39e (DATA)
// 0054bd6b: PUSH 0x662260
//   XREF to: 00662260 (DATA)
// 0054bd70: MOV ESI,dword ptr [EBX + 0x4]
// 0054bd73: MOV ECX,0x4d
// 0054bd78: PUSH ESI
// 0054bd79: MOV dword ptr [0x0067d20c],EDX
//   XREF to: 0067d20c (WRITE)
// 0054bd7f: MOV dword ptr [0x02f0d944],ECX
//   XREF to: 02f0d944 (WRITE)
// 0054bd85: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 0054bd8a: ADD ESP,0x8
// 0054bd8d: PUSH EAX
// 0054bd8e: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0054bd93: MOV dword ptr [EBX],0x0
// 0054bd99: ADD ESP,0x4
// 0054bd9c: MOV dword ptr [EBX + 0x4],0x0
// 0054bda3: POP ESI
// 0054bda4: POP EBX
// 0054bda5: RET
