// Name: cockpit_pkbitmap.cpp_CPackedBitmap_loadStoredPBMFile_FUN_0054b910
// Address: 0054b910
// Address Range: [[0054b910, 0054b923]]
// Convention: __cdecl
// Signature: void cockpit_pkbitmap.cpp_CPackedBitmap_loadStoredPBMFile_FUN_0054b910(CPackedBitmap * this_ptr, int post_load_processing)
// Cross-references:
//   cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_0054b4b0 (0054b4b0) at 0054b503 [UNCONDITIONAL_CALL]
// Function calls:
//   cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_0054b860

#include "nocturne.h"

void __cdecl
cockpit_pkbitmap_cpp_CPackedBitmap_loadStoredPBMFile_FUN_0054b910
          (CPackedBitmap *this_ptr,int post_load_processing)

{
  cockpit_pkbitmap_cpp_CPackedBitmap_openPBMFile_FUN_0054b860
            (this_ptr,this_ptr->filename,post_load_processing);
  return;
}


// Assembly code:
// 0054b910: MOV EAX,dword ptr [ESP + 0x4]
//   Label: cockpit_pkbitmap.cpp_CPackedBitmap_loadStoredPBMFile_FUN_0054b910
//   XREF to: Stack[0x4] (READ)
// 0054b914: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0054b918: PUSH EDX
// 0054b919: PUSH EAX
// 0054b91a: PUSH EAX
// 0054b91b: CALL cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_0054b860
//   XREF to: 0054b860 (UNCONDITIONAL_CALL)
// 0054b920: ADD ESP,0xc
// 0054b923: RET
