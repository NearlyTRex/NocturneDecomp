// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_0054c710
// Address: 0054c710
// Address Range: [[0054c710, 0054c721]]
// Convention: __cdecl
// Signature: void cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_0054c710(CPackedBitmapSet * this_ptr)
// Cross-references:
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_applyPaletteOrReload_FUN_0054c660 (0054c660) at 0054c694 [UNCONDITIONAL_CALL]
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadJoinedRAW_FUN_0054bf40 (0054bf40) at 0054c1bf [UNCONDITIONAL_CALL]
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_0054c1e0 (0054c1e0) at 0054c3bd [UNCONDITIONAL_CALL]
// Function calls:
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_0054c5d0

#include "nocturne.h"

void __cdecl
cockpit_pkbmpset_cpp_CPackedBitmapSet_loadStoredACTFile_FUN_0054c710(CPackedBitmapSet *this_ptr)

{
  cockpit_pkbmpset_cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_0054c5d0
            (this_ptr,this_ptr->filename);
  return;
}


// Assembly code:
// 0054c710: MOV EDX,dword ptr [ESP + 0x4]
//   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_0054c710
//   XREF to: Stack[0x4] (READ)
// 0054c714: LEA EAX,[EDX + 0x8]
// 0054c717: PUSH EAX
// 0054c718: PUSH EDX
// 0054c719: CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_0054c5d0
//   XREF to: 0054c5d0 (UNCONDITIONAL_CALL)
// 0054c71e: ADD ESP,0x8
// 0054c721: RET
