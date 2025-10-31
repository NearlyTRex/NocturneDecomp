// Name: cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_0054b4a0
// Address: 0054b4a0
// Address Range: [[0054b4a0, 0054b4ae]]
// Convention: __cdecl
// Signature: void cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_0054b4a0(CPackedBitmap * this_ptr)
// Cross-references:
//   cockpit_pkbitmap.cpp_CPackedBitmap_loadAndCompressBitmap_FUN_0054b080 (0054b080) at 0054b0cb [UNCONDITIONAL_CALL]
//   cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_0054b860 (0054b860) at 0054b8fe [UNCONDITIONAL_CALL]
//   cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0054b000 (0054b000) at 0054b06e [UNCONDITIONAL_CALL]
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_applyPaletteOrReload_FUN_0054c660 (0054c660) at 0054c67e [UNCONDITIONAL_CALL]
// Function calls:
//   cockpit_pkbitmap.cpp_applyACTPaletteToBitmap_FUN_0054b3f0

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_applyPalette_FUN_0054b4a0(CPackedBitmap *this_ptr)

{
  cockpit_pkbitmap_cpp_applyACTPaletteToBitmap_FUN_0054b3f0(this_ptr->filename,this_ptr);
  return;
}


// Assembly code:
// 0054b4a0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_0054b4a0
//   XREF to: Stack[0x4] (READ)
// 0054b4a4: PUSH EAX
// 0054b4a5: PUSH EAX
// 0054b4a6: CALL cockpit_pkbitmap.cpp_applyACTPaletteToBitmap_FUN_0054b3f0
//   XREF to: 0054b3f0 (UNCONDITIONAL_CALL)
// 0054b4ab: ADD ESP,0x8
// 0054b4ae: RET
