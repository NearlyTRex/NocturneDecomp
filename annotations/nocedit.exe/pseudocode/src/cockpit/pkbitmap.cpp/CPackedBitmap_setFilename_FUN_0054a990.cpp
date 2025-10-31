// Name: cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_0054a990
// Address: 0054a990
// Address Range: [[0054a990, 0054a9ac]]
// Convention: __cdecl
// Signature: void cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_0054a990(CPackedBitmap * this_ptr, char * filename)
// Cross-references:
//   cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_0054b860 (0054b860) at 0054b878 [UNCONDITIONAL_CALL]
//   cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0054b000 (0054b000) at 0054b01b [UNCONDITIONAL_CALL]
//   cockpit_pkbitmap.cpp_loadPBGFile_FUN_0054bb40 (0054bb40) at 0054bbc5 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_string.c_strncpy_FUN_00600f40

#include "nocturne.h"

void __cdecl
cockpit_pkbitmap_cpp_CPackedBitmap_setFilename_FUN_0054a990(CPackedBitmap *this_ptr,char *filename)

{
  crt_string_c_strncpy_FUN_00600f40(this_ptr->filename,filename,0x13);
  filename[0x13] = '\0';
  return;
}


// Assembly code:
// 0054a990: PUSH 0x13
//   Label: cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_0054a990
// 0054a992: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0054a996: PUSH EDX
// 0054a997: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0054a99b: PUSH ECX
// 0054a99c: CALL crt_string.c_strncpy_FUN_00600f40
//   XREF to: 00600f40 (UNCONDITIONAL_CALL)
// 0054a9a1: ADD ESP,0xc
// 0054a9a4: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 0054a9a8: MOV byte ptr [EAX + 0x13],0x0
// 0054a9ac: RET
