// Name: cockpit_pkbitmap.cpp_applyACTPaletteToBitmap_FUN_0054b3f0
// Address: 0054b3f0
// Address Range: [[0054b3f0, 0054b430]]
// Convention: __cdecl
// Signature: void cockpit_pkbitmap.cpp_applyACTPaletteToBitmap_FUN_0054b3f0(char * act_filename, CPackedBitmap * bitmap_ptr)
// Cross-references:
//   cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_0054b4a0 (0054b4a0) at 0054b4a6 [UNCONDITIONAL_CALL]
// Function calls:
//   cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00431a30
//   cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_0054b440

#include "nocturne.h"

void __cdecl
cockpit_pkbitmap_cpp_applyACTPaletteToBitmap_FUN_0054b3f0
          (char *act_filename,CPackedBitmap *bitmap_ptr)

{
  BADSPACEBASE *in_ESP;
  uchar auStack_fc [252];
  
  cockpit_ckptutil_c_loadACTToIndexedPalette_FUN_00431a30(bitmap_ptr->filename,&stack0xffffff00);
  cockpit_pkbitmap_cpp_CPackedBitmap_applyPaletteToPackedData_FUN_0054b440(bitmap_ptr,auStack_fc);
  return;
}


// Assembly code:
// 0054b3f0: SUB ESP,0x100
//   Label: cockpit_pkbitmap.cpp_applyACTPaletteToBitmap_FUN_0054b3f0
// 0054b3f6: MOV EAX,ESP
// 0054b3f8: PUSH EAX
// 0054b3f9: MOV EDX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[0x8] (READ)
// 0054b400: PUSH EDX
// 0054b401: CALL cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00431a30
//   XREF to: 00431a30 (UNCONDITIONAL_CALL)
// 0054b406: ADD ESP,0x8
// 0054b409: MOV EAX,ESP
// 0054b40b: PUSH EAX
// 0054b40c: MOV ECX,dword ptr [ESP + 0x108]
//   XREF to: Stack[0x4] (READ)
// 0054b413: PUSH ECX
// 0054b414: CALL cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_0054b440
//   XREF to: 0054b440 (UNCONDITIONAL_CALL)
// 0054b419: ADD ESP,0x8
// 0054b41c: ADD ESP,0x100
// 0054b422: LEA EAX,[EAX]
// 0054b428: LEA EDX,[EDX]
// 0054b42e: MOV EAX,EAX
// 0054b430: RET
