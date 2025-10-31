// Name: cockpit_pkbitmap.cpp_CPackedBitmap_init_FUN_0054a840
// Address: 0054a840
// Address Range: [[0054a840, 0054a886]]
// Convention: __cdecl
// Signature: CPackedBitmap * cockpit_pkbitmap.cpp_CPackedBitmap_init_FUN_0054a840(CPackedBitmap * this_ptr, char * filename, int width, int height, int transparency_color, int stride, int apply_palette_flag)
// Function calls:
//   cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0054b000
//   cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_0054a8b0
//   crt_memory.c_memset_FUN_005fde40

#include "nocturne.h"

CPackedBitmap * __cdecl
cockpit_pkbitmap_cpp_CPackedBitmap_init_FUN_0054a840
          (CPackedBitmap *this_ptr,char *filename,int width,int height,int transparency_color,
          int stride,int apply_palette_flag)

{
  int unaff_ESI;
  int in_stack_00000020;
  
  cockpit_pkbitmap_cpp_CPackedBitmap_reset_FUN_0054a8b0(this_ptr);
  crt_memory_c_memset_FUN_005fde40(this_ptr,0,0x14);
  cockpit_pkbitmap_cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0054b000
            (this_ptr,(char *)height,transparency_color,stride,apply_palette_flag,in_stack_00000020,
             unaff_ESI);
  return this_ptr;
}


// Assembly code:
// 0054a840: PUSH EBX
//   Label: cockpit_pkbitmap.cpp_CPackedBitmap_init_FUN_0054a840
// 0054a841: PUSH ESI
// 0054a842: PUSH EDI
// 0054a843: PUSH EBP
// 0054a844: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0054a848: PUSH EBX
// 0054a849: CALL cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_0054a8b0
//   XREF to: 0054a8b0 (UNCONDITIONAL_CALL)
// 0054a84e: ADD ESP,0x4
// 0054a851: PUSH 0x14
// 0054a853: PUSH 0x0
// 0054a855: PUSH EBX
// 0054a856: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0054a85b: ADD ESP,0xc
// 0054a85e: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 0054a862: PUSH EDX
// 0054a863: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x14] (READ)
// 0054a867: PUSH ECX
// 0054a868: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x10] (READ)
// 0054a86c: PUSH ESI
// 0054a86d: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 0054a871: PUSH EDI
// 0054a872: MOV EBP,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 0054a876: PUSH EBP
// 0054a877: PUSH EBX
// 0054a878: CALL cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0054b000
//   XREF to: 0054b000 (UNCONDITIONAL_CALL)
// 0054a87d: ADD ESP,0x18
// 0054a880: MOV EAX,EBX
// 0054a882: POP EBP
// 0054a883: POP EDI
// 0054a884: POP ESI
// 0054a885: POP EBX
// 0054a886: RET
