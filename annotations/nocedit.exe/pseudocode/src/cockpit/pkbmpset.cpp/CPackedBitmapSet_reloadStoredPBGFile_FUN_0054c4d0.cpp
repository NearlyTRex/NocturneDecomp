// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_reloadStoredPBGFile_FUN_0054c4d0
// Address: 0054c4d0
// Address Range: [[0054c4d0, 0054c4f7]]
// Convention: __cdecl
// Signature: void cockpit_pkbmpset.cpp_CPackedBitmapSet_reloadStoredPBGFile_FUN_0054c4d0(CPackedBitmapSet * this_ptr, char * pbg_filename)
// Cross-references:
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadByFilenameAndIndex_FUN_0054c500 (0054c500) at 0054c5ad [UNCONDITIONAL_CALL]
// Function calls:
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_0054c480
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_0054bd60

#include "nocturne.h"

void __cdecl
cockpit_pkbmpset_cpp_CPackedBitmapSet_reloadStoredPBGFile_FUN_0054c4d0
          (CPackedBitmapSet *this_ptr,char *pbg_filename)

{
  int unaff_retaddr;
  char *in_stack_0000000c;
  
  cockpit_pkbmpset_cpp_CPackedBitmapSet_reset_FUN_0054bd60(this_ptr);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_0054c480
            (this_ptr,this_ptr->filename,in_stack_0000000c,this_ptr->config_param,0,unaff_retaddr);
  return;
}


// Assembly code:
// 0054c4d0: PUSH EBX
//   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_reloadStoredPBGFile_FUN_0054c4d0
// 0054c4d1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0054c4d5: PUSH EBX
// 0054c4d6: CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_0054bd60
//   XREF to: 0054bd60 (UNCONDITIONAL_CALL)
// 0054c4db: ADD ESP,0x4
// 0054c4de: PUSH 0x0
// 0054c4e0: MOV EDX,dword ptr [EBX + 0x24]
// 0054c4e3: PUSH EDX
// 0054c4e4: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0054c4e8: PUSH ECX
// 0054c4e9: LEA EAX,[EBX + 0x8]
// 0054c4ec: PUSH EAX
// 0054c4ed: PUSH EBX
// 0054c4ee: CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_0054c480
//   XREF to: 0054c480 (UNCONDITIONAL_CALL)
// 0054c4f3: ADD ESP,0x14
// 0054c4f6: POP EBX
// 0054c4f7: RET
