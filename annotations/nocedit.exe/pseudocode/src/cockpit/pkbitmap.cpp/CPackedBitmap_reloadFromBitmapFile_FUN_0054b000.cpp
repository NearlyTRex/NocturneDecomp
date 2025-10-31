// Name: cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0054b000
// Address: 0054b000
// Address Range: [[0054b000, 0054b07a]]
// Convention: __cdecl
// Signature: void cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0054b000(CPackedBitmap * this_ptr, char * filename, int width, int height, int transparency_color, int stride, int apply_palette_flag)
// Cross-references:
//   cockpit_pkbitmap.cpp_CPackedBitmap_init_FUN_0054a840 (0054a840) at 0054a878 [UNCONDITIONAL_CALL]
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_0054be70 (0054be70) at 0054bf18 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_cockpit_pkbitmap_cpp_0063ef51
// Function calls:
//   cockpit_ckptutil.c_readBitmapFile_FUN_00431870
//   cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_0054b4a0
//   cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_0054a8e0
//   cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_0054b190
//   cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_0054a990
//   shape_memdbg.cpp_debugFree_FUN_0050f460

#include "nocturne.h"

void __cdecl
cockpit_pkbitmap_cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0054b000
          (CPackedBitmap *this_ptr,char *filename,int width,int height,int transparency_color,
          int stride,int apply_palette_flag)

{
  uchar *bitmap_data;
  int in_stack_00000020;
  int in_stack_0000002c;
  
  cockpit_pkbitmap_cpp_CPackedBitmap_free_FUN_0054a8e0(this_ptr);
  cockpit_pkbitmap_cpp_CPackedBitmap_setFilename_FUN_0054a990(this_ptr,(char *)width);
  bitmap_data = (uchar *)cockpit_ckptutil_c_readBitmapFile_FUN_00431870
                                   (this_ptr->filename,(void *)0x0,stride * width);
  cockpit_pkbitmap_cpp_CPackedBitmap_load_FUN_0054b190
            (this_ptr,bitmap_data,width,apply_palette_flag,in_stack_00000020,(uchar)width);
  shape_memdbg_cpp_debugFree_FUN_0050f460(bitmap_data,"..\\cockpit\\pkbitmap.cpp",0x2fb);
  if (in_stack_0000002c == 0) {
    return;
  }
  cockpit_pkbitmap_cpp_CPackedBitmap_applyPalette_FUN_0054b4a0(this_ptr);
  return;
}


// Assembly code:
// 0054b000: PUSH EBX
//   Label: cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0054b000
// 0054b001: PUSH ESI
// 0054b002: PUSH EDI
// 0054b003: PUSH EBP
// 0054b004: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0054b008: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0054b00c: PUSH EBX
// 0054b00d: CALL cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_0054a8e0
//   XREF to: 0054a8e0 (UNCONDITIONAL_CALL)
// 0054b012: ADD ESP,0x4
// 0054b015: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0054b019: PUSH EDX
// 0054b01a: PUSH EBX
// 0054b01b: CALL cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_0054a990
//   XREF to: 0054a990 (UNCONDITIONAL_CALL)
// 0054b020: ADD ESP,0x8
// 0054b023: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0054b027: IMUL ESI,EDI
// 0054b02a: PUSH ESI
// 0054b02b: PUSH 0x0
// 0054b02d: PUSH EBX
// 0054b02e: CALL cockpit_ckptutil.c_readBitmapFile_FUN_00431870
//   XREF to: 00431870 (UNCONDITIONAL_CALL)
// 0054b033: ADD ESP,0xc
// 0054b036: PUSH EDI
// 0054b037: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x14] (READ)
// 0054b03b: PUSH ECX
// 0054b03c: MOV EBP,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x10] (READ)
// 0054b040: PUSH EBP
// 0054b041: PUSH EDI
// 0054b042: PUSH EAX
// 0054b043: PUSH EBX
// 0054b044: MOV ESI,EAX
// 0054b046: CALL cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_0054b190
//   XREF to: 0054b190 (UNCONDITIONAL_CALL)
// 0054b04b: ADD ESP,0x18
// 0054b04e: PUSH 0x2fb
// 0054b053: PUSH 0x63ef51
//   XREF to: 0063ef51 (DATA)
// 0054b058: PUSH ESI
// 0054b059: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 0054b05e: ADD ESP,0xc
// 0054b061: CMP dword ptr [ESP + 0x28],0x0
//   XREF to: Stack[0x18] (READ)
// 0054b066: JNZ 0x0054b06d
//   XREF to: 0054b06d (CONDITIONAL_JUMP)
// 0054b068: POP EBP
// 0054b069: POP EDI
// 0054b06a: POP ESI
// 0054b06b: POP EBX
// 0054b06c: RET
// 0054b06d: PUSH EBX
//   Label: LAB_0054b06d
// 0054b06e: CALL cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_0054b4a0
//   XREF to: 0054b4a0 (UNCONDITIONAL_CALL)
// 0054b073: ADD ESP,0x4
// 0054b076: POP EBP
// 0054b077: POP EDI
// 0054b078: POP ESI
// 0054b079: POP EBX
// 0054b07a: RET
