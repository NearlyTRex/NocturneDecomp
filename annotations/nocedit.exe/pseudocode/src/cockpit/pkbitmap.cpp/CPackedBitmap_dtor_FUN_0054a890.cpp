// Name: cockpit_pkbitmap.cpp_CPackedBitmap_dtor_FUN_0054a890
// Address: 0054a890
// Address Range: [[0054a890, 0054a8a1]]
// Convention: __cdecl
// Signature: CPackedBitmap * cockpit_pkbitmap.cpp_CPackedBitmap_dtor_FUN_0054a890(CPackedBitmap * this_ptr)
// Cross-references:
//   cockpit_pkbitmap.cpp_parsePBGFile_FUN_0054b9b0 (0054b9b0) at 0054bb06 [UNCONDITIONAL_CALL]
// Function calls:
//   cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_0054a8e0

#include "nocturne.h"

CPackedBitmap * __cdecl
cockpit_pkbitmap_cpp_CPackedBitmap_dtor_FUN_0054a890(CPackedBitmap *this_ptr)

{
  cockpit_pkbitmap_cpp_CPackedBitmap_free_FUN_0054a8e0(this_ptr);
  return this_ptr;
}


// Assembly code:
// 0054a890: PUSH EBX
//   Label: cockpit_pkbitmap.cpp_CPackedBitmap_dtor_FUN_0054a890
// 0054a891: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0054a895: PUSH EBX
// 0054a896: CALL cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_0054a8e0
//   XREF to: 0054a8e0 (UNCONDITIONAL_CALL)
// 0054a89b: ADD ESP,0x4
// 0054a89e: MOV EAX,EBX
// 0054a8a0: POP EBX
// 0054a8a1: RET
