// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_0054c480
// Address: 0054c480
// Address Range: [[0054c480, 0054c4cf]]
// Convention: __cdecl
// Signature: void cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_0054c480(CPackedBitmapSet * this_ptr, char * pbg_filename, char * palette_filename, int param3, int param4, int additional_param)
// Cross-references:
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_reloadStoredPBGFile_FUN_0054c4d0 (0054c4d0) at 0054c4ee [UNCONDITIONAL_CALL]
// Function calls:
//   cockpit_pkbitmap.cpp_loadPBGFile_FUN_0054bb40
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_init_FUN_0054bd00
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_0054bd60
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_0054c6f0

#include "nocturne.h"

void __cdecl
cockpit_pkbmpset_cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_0054c480
          (CPackedBitmapSet *this_ptr,char *pbg_filename,char *palette_filename,int param3,
          int param4,int additional_param)

{
  CPackedBitmap *pCVar1;
  int in_stack_00000020;
  
  cockpit_pkbmpset_cpp_CPackedBitmapSet_reset_FUN_0054bd60(this_ptr);
  pCVar1 = (CPackedBitmap *)
           cockpit_pkbitmap_cpp_loadPBGFile_FUN_0054bb40
                     (this_ptr,palette_filename,(char *)param3,param4,additional_param,-1);
  this_ptr->bitmap_array = pCVar1;
  cockpit_pkbmpset_cpp_CPackedBitmapSet_setFilename_FUN_0054c6f0(this_ptr,palette_filename);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_init_FUN_0054bd00(this_ptr);
  this_ptr->config_param = in_stack_00000020;
  return;
}


// Assembly code:
// 0054c480: PUSH EBX
//   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_0054c480
// 0054c481: PUSH ESI
// 0054c482: PUSH EDI
// 0054c483: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0054c487: PUSH EBX
// 0054c488: CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_0054bd60
//   XREF to: 0054bd60 (UNCONDITIONAL_CALL)
// 0054c48d: ADD ESP,0x4
// 0054c490: PUSH -0x1
// 0054c492: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 0054c496: PUSH EDX
// 0054c497: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 0054c49b: PUSH ECX
// 0054c49c: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 0054c4a0: PUSH ESI
// 0054c4a1: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 0054c4a5: PUSH EDI
// 0054c4a6: PUSH EBX
// 0054c4a7: CALL cockpit_pkbitmap.cpp_loadPBGFile_FUN_0054bb40
//   XREF to: 0054bb40 (UNCONDITIONAL_CALL)
// 0054c4ac: ADD ESP,0x18
// 0054c4af: PUSH EDI
// 0054c4b0: PUSH EBX
// 0054c4b1: MOV dword ptr [EBX + 0x4],EAX
// 0054c4b4: CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_0054c6f0
//   XREF to: 0054c6f0 (UNCONDITIONAL_CALL)
// 0054c4b9: ADD ESP,0x8
// 0054c4bc: PUSH EBX
// 0054c4bd: CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_init_FUN_0054bd00
//   XREF to: 0054bd00 (UNCONDITIONAL_CALL)
// 0054c4c2: ADD ESP,0x4
// 0054c4c5: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x10] (READ)
// 0054c4c9: MOV dword ptr [EBX + 0x24],EAX
// 0054c4cc: POP EDI
// 0054c4cd: POP ESI
// 0054c4ce: POP EBX
// 0054c4cf: RET
