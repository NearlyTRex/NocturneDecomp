// Name: cockpit_pkbitmap.cpp_CPackedBitmap_loadAndCompressBitmap_FUN_0054b080
// Address: 0054b080
// Address Range: [[0054b080, 0054b0d5]]
// Convention: __cdecl
// Signature: void cockpit_pkbitmap.cpp_CPackedBitmap_loadAndCompressBitmap_FUN_0054b080(CPackedBitmap * this_ptr, int apply_palette_flag)
// Cross-references:
//   cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_0054b4b0 (0054b4b0) at 0054b514 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_cockpit_pkbitmap_cpp_0063ef69
// Function calls:
//   cockpit_ckptutil.c_readBitmapFile_FUN_00431870
//   cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_0054b4a0
//   cockpit_pkbitmap.cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_0054b0e0
//   shape_memdbg.cpp_debugFree_FUN_0050f460

#include "nocturne.h"

void __cdecl
cockpit_pkbitmap_cpp_CPackedBitmap_loadAndCompressBitmap_FUN_0054b080
          (CPackedBitmap *this_ptr,int apply_palette_flag)

{
  uchar *raw_bitmap_data;
  int in_stack_00000014;
  
  raw_bitmap_data =
       (uchar *)cockpit_ckptutil_c_readBitmapFile_FUN_00431870
                          (this_ptr->filename,(void *)0x0,this_ptr->width * this_ptr->height);
  if (raw_bitmap_data != (uchar *)0x0) {
    cockpit_pkbitmap_cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_0054b0e0
              (this_ptr,raw_bitmap_data,this_ptr->width);
    shape_memdbg_cpp_debugFree_FUN_0050f460(raw_bitmap_data,"..\\cockpit\\pkbitmap.cpp",0x314);
    if (in_stack_00000014 != 0) {
      cockpit_pkbitmap_cpp_CPackedBitmap_applyPalette_FUN_0054b4a0(this_ptr);
      return;
    }
  }
  return;
}


// Assembly code:
// 0054b080: PUSH EBX
//   Label: cockpit_pkbitmap.cpp_CPackedBitmap_loadAndCompressBitmap_FUN_0054b080
// 0054b081: PUSH ESI
// 0054b082: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0054b086: MOV ESI,dword ptr [EBX + 0x18]
// 0054b089: IMUL ESI,dword ptr [EBX + 0x1c]
// 0054b08d: PUSH ESI
// 0054b08e: PUSH 0x0
// 0054b090: PUSH EBX
// 0054b091: CALL cockpit_ckptutil.c_readBitmapFile_FUN_00431870
//   XREF to: 00431870 (UNCONDITIONAL_CALL)
// 0054b096: MOV ESI,EAX
// 0054b098: ADD ESP,0xc
// 0054b09b: TEST EAX,EAX
// 0054b09d: JNZ 0x0054b0a2
//   XREF to: 0054b0a2 (CONDITIONAL_JUMP)
// 0054b09f: POP ESI
//   Label: LAB_0054b09f
// 0054b0a0: POP EBX
// 0054b0a1: RET
// 0054b0a2: MOV ECX,dword ptr [EBX + 0x18]
//   Label: LAB_0054b0a2
// 0054b0a5: PUSH ECX
// 0054b0a6: PUSH EAX
// 0054b0a7: PUSH EBX
// 0054b0a8: CALL cockpit_pkbitmap.cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_0054b0e0
//   XREF to: 0054b0e0 (UNCONDITIONAL_CALL)
// 0054b0ad: ADD ESP,0xc
// 0054b0b0: PUSH 0x314
// 0054b0b5: PUSH 0x63ef69
//   XREF to: 0063ef69 (DATA)
// 0054b0ba: PUSH ESI
// 0054b0bb: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 0054b0c0: ADD ESP,0xc
// 0054b0c3: CMP dword ptr [ESP + 0x10],0x0
//   XREF to: Stack[0x8] (READ)
// 0054b0c8: JZ 0x0054b09f
//   XREF to: 0054b09f (CONDITIONAL_JUMP)
// 0054b0ca: PUSH EBX
// 0054b0cb: CALL cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_0054b4a0
//   XREF to: 0054b4a0 (UNCONDITIONAL_CALL)
// 0054b0d0: ADD ESP,0x4
// 0054b0d3: POP ESI
// 0054b0d4: POP EBX
// 0054b0d5: RET
