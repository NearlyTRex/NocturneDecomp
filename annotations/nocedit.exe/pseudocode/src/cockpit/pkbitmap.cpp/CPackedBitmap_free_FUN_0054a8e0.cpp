// Name: cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_0054a8e0
// Address: 0054a8e0
// Address Range: [[0054a8e0, 0054a933]]
// Convention: __cdecl
// Signature: void cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_0054a8e0(CPackedBitmap * this_ptr)
// Cross-references:
//   cockpit_pkbitmap.cpp_CPackedBitmap_dtor_FUN_0054a890 (0054a890) at 0054a896 [UNCONDITIONAL_CALL]
//   cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_0054b190 (0054b190) at 0054b1a2 [UNCONDITIONAL_CALL]
//   cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_0054b860 (0054b860) at 0054b86a [UNCONDITIONAL_CALL]
//   cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_0054b690 (0054b690) at 0054b6a0 [UNCONDITIONAL_CALL]
//   cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0054b000 (0054b000) at 0054b00d [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_cockpit_pkbitmap_cpp_0063eeb8
//   TerminatedCString s_cockpit_pkbitmap_cpp_0063eed0
//   char* g_CurrentDebugFilename = 0067d200
//   int g_CurrentDebugLine
// Function calls:
//   cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_0054a8b0
//   crt_memory.c_free_FUN_005fe659
//   shape_memdbg.cpp_debugFree_FUN_0050f460

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_free_FUN_0054a8e0(CPackedBitmap *this_ptr)

{
  if (this_ptr->packed_data != (char *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (this_ptr->packed_data,"..\\cockpit\\pkbitmap.cpp",0x98);
  }
  g_CurrentDebugFilename = "..\\cockpit\\pkbitmap.cpp";
  g_CurrentDebugLine = 0x99;
  crt_memory_c_free_FUN_005fe659(this_ptr->row_pointers);
  cockpit_pkbitmap_cpp_CPackedBitmap_reset_FUN_0054a8b0(this_ptr);
  return;
}


// Assembly code:
// 0054a8e0: PUSH EBX
//   Label: cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_0054a8e0
// 0054a8e1: PUSH ESI
// 0054a8e2: PUSH EDI
// 0054a8e3: PUSH EBP
// 0054a8e4: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0054a8e8: MOV EDX,dword ptr [EBX + 0x14]
// 0054a8eb: TEST EDX,EDX
// 0054a8ed: JNZ 0x0054a91f
//   XREF to: 0054a91f (CONDITIONAL_JUMP)
// 0054a8ef: MOV ESI,0x63eed0
//   Label: LAB_0054a8ef
//   XREF to: 0063eed0 (DATA)
// 0054a8f4: MOV EBP,dword ptr [EBX + 0x20]
// 0054a8f7: MOV EDI,0x99
// 0054a8fc: PUSH EBP
// 0054a8fd: MOV dword ptr [0x0067d20c],ESI
//   XREF to: 0067d20c (WRITE)
// 0054a903: MOV dword ptr [0x02f0d944],EDI
//   XREF to: 02f0d944 (WRITE)
// 0054a909: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0054a90e: ADD ESP,0x4
// 0054a911: PUSH EBX
// 0054a912: CALL cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_0054a8b0
//   XREF to: 0054a8b0 (UNCONDITIONAL_CALL)
// 0054a917: ADD ESP,0x4
// 0054a91a: POP EBP
// 0054a91b: POP EDI
// 0054a91c: POP ESI
// 0054a91d: POP EBX
// 0054a91e: RET
// 0054a91f: PUSH 0x98
//   Label: LAB_0054a91f
// 0054a924: PUSH 0x63eeb8
//   XREF to: 0063eeb8 (DATA)
// 0054a929: PUSH EDX
// 0054a92a: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 0054a92f: ADD ESP,0xc
// 0054a932: JMP 0x0054a8ef
//   XREF to: 0054a8ef (UNCONDITIONAL_JUMP)
