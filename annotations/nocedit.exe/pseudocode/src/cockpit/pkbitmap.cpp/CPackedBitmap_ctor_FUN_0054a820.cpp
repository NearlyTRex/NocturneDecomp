// Name: cockpit_pkbitmap.cpp_CPackedBitmap_ctor_FUN_0054a820
// Address: 0054a820
// Address Range: [[0054a820, 0054a83e]]
// Convention: __cdecl
// Signature: CPackedBitmap * cockpit_pkbitmap.cpp_CPackedBitmap_ctor_FUN_0054a820(CPackedBitmap * this_ptr)
// Cross-references:
//   cockpit_pkbitmap.cpp_parsePBGFile_FUN_0054b9b0 (0054b9b0) at 0054bae7 [UNCONDITIONAL_CALL]
// Function calls:
//   cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_0054a8b0
//   crt_memory.c_memset_FUN_005fde40

#include "nocturne.h"

CPackedBitmap * __cdecl
cockpit_pkbitmap_cpp_CPackedBitmap_ctor_FUN_0054a820(CPackedBitmap *this_ptr)

{
  cockpit_pkbitmap_cpp_CPackedBitmap_reset_FUN_0054a8b0(this_ptr);
  crt_memory_c_memset_FUN_005fde40(this_ptr,0,0x14);
  return this_ptr;
}


// Assembly code:
// 0054a820: PUSH EBX
//   Label: cockpit_pkbitmap.cpp_CPackedBitmap_ctor_FUN_0054a820
// 0054a821: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0054a825: PUSH EBX
// 0054a826: CALL cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_0054a8b0
//   XREF to: 0054a8b0 (UNCONDITIONAL_CALL)
// 0054a82b: ADD ESP,0x4
// 0054a82e: PUSH 0x14
// 0054a830: PUSH 0x0
// 0054a832: PUSH EBX
// 0054a833: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0054a838: ADD ESP,0xc
// 0054a83b: MOV EAX,EBX
// 0054a83d: POP EBX
// 0054a83e: RET
