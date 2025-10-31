// Name: cockpit_pkbitmap.cpp_CPackedBitmap_freePackedData_FUN_0054a940
// Address: 0054a940
// Address Range: [[0054a940, 0054a969]]
// Convention: __cdecl
// Signature: void cockpit_pkbitmap.cpp_CPackedBitmap_freePackedData_FUN_0054a940(CPackedBitmap * this_ptr)
// Cross-references:
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_ensureBitmapLoaded_FUN_0054c72e (0054c72e) at 0054c760 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_cockpit_pkbitmap_cpp_0063eee8
// Function calls:
//   shape_memdbg.cpp_debugFree_FUN_0050f460

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_freePackedData_FUN_0054a940(CPackedBitmap *this_ptr)

{
  if (this_ptr->packed_data == (char *)0x0) {
    return;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460
            (this_ptr->packed_data,"..\\cockpit\\pkbitmap.cpp",0xa4);
  this_ptr->packed_data = (char *)0x0;
  return;
}


// Assembly code:
// 0054a940: PUSH EBX
//   Label: cockpit_pkbitmap.cpp_CPackedBitmap_freePackedData_FUN_0054a940
// 0054a941: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0054a945: MOV EDX,dword ptr [EBX + 0x14]
// 0054a948: TEST EDX,EDX
// 0054a94a: JNZ 0x0054a94e
//   XREF to: 0054a94e (CONDITIONAL_JUMP)
// 0054a94c: POP EBX
// 0054a94d: RET
// 0054a94e: PUSH 0xa4
//   Label: LAB_0054a94e
// 0054a953: PUSH 0x63eee8
//   XREF to: 0063eee8 (DATA)
// 0054a958: PUSH EDX
// 0054a959: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 0054a95e: ADD ESP,0xc
// 0054a961: MOV dword ptr [EBX + 0x14],0x0
// 0054a968: POP EBX
// 0054a969: RET
