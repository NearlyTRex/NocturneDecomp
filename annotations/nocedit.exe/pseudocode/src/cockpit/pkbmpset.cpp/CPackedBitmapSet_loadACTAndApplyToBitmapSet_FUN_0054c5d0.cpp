// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_0054c5d0
// Address: 0054c5d0
// Address Range: [[0054c5d0, 0054c610]]
// Convention: __cdecl
// Signature: void cockpit_pkbmpset.cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_0054c5d0(CPackedBitmapSet * this_ptr, char * act_filename)
// Cross-references:
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_0054c710 (0054c710) at 0054c719 [UNCONDITIONAL_CALL]
// Function calls:
//   cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00431a30
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_applyPaletteToAllBitmaps_FUN_0054c620

#include "nocturne.h"

void __cdecl
cockpit_pkbmpset_cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_0054c5d0
          (CPackedBitmapSet *this_ptr,char *act_filename)

{
  BADSPACEBASE *in_ESP;
  char acStack_fc [252];
  
  cockpit_ckptutil_c_loadACTToIndexedPalette_FUN_00431a30(act_filename,&stack0xffffff00);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_applyPaletteToAllBitmaps_FUN_0054c620
            ((CPackedBitmapSet *)act_filename,acStack_fc);
  return;
}


// Assembly code:
// 0054c5d0: SUB ESP,0x100
//   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_0054c5d0
// 0054c5d6: MOV EAX,ESP
// 0054c5d8: PUSH EAX
// 0054c5d9: MOV EDX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[0x8] (READ)
// 0054c5e0: PUSH EDX
// 0054c5e1: CALL cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00431a30
//   XREF to: 00431a30 (UNCONDITIONAL_CALL)
// 0054c5e6: ADD ESP,0x8
// 0054c5e9: MOV EAX,ESP
// 0054c5eb: PUSH EAX
// 0054c5ec: MOV ECX,dword ptr [ESP + 0x108]
//   XREF to: Stack[0x4] (READ)
// 0054c5f3: PUSH ECX
// 0054c5f4: CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_applyPaletteToAllBitmaps_FUN_0054c620
//   XREF to: 0054c620 (UNCONDITIONAL_CALL)
// 0054c5f9: ADD ESP,0x8
// 0054c5fc: ADD ESP,0x100
// 0054c602: LEA EAX,[EAX]
// 0054c608: LEA EDX,[EDX]
// 0054c60e: MOV EAX,EAX
// 0054c610: RET
