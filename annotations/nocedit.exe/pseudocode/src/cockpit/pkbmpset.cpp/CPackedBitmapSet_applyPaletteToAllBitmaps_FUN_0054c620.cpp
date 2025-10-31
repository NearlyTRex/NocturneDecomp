// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_applyPaletteToAllBitmaps_FUN_0054c620
// Address: 0054c620
// Address Range: [[0054c620, 0054c653]]
// Convention: __cdecl
// Signature: void cockpit_pkbmpset.cpp_CPackedBitmapSet_applyPaletteToAllBitmaps_FUN_0054c620(CPackedBitmapSet * this_ptr, char * palette_data)
// Cross-references:
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_0054c5d0 (0054c5d0) at 0054c5f4 [UNCONDITIONAL_CALL]
// Function calls:
//   cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_0054b440

#include "nocturne.h"

void __cdecl
cockpit_pkbmpset_cpp_CPackedBitmapSet_applyPaletteToAllBitmaps_FUN_0054c620
          (CPackedBitmapSet *this_ptr,char *palette_data)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (0 < this_ptr->bitmap_count) {
    iVar2 = 0;
    do {
      iVar1 = iVar1 + 1;
      cockpit_pkbitmap_cpp_CPackedBitmap_applyPaletteToPackedData_FUN_0054b440
                ((CPackedBitmap *)(this_ptr->bitmap_array->filename + iVar2),(uchar *)palette_data);
      iVar2 = iVar2 + 0x24;
    } while (iVar1 < this_ptr->bitmap_count);
  }
  return;
}


// Assembly code:
// 0054c620: PUSH EBX
//   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_applyPaletteToAllBitmaps_FUN_0054c620
// 0054c621: PUSH EDI
// 0054c622: PUSH EBP
// 0054c623: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0054c627: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0054c62b: MOV EDX,dword ptr [EDI]
// 0054c62d: XOR EBX,EBX
// 0054c62f: TEST EDX,EDX
// 0054c631: JLE 0x0054c650
//   XREF to: 0054c650 (CONDITIONAL_JUMP)
// 0054c633: PUSH ESI
// 0054c634: XOR ESI,ESI
// 0054c636: MOV EAX,dword ptr [EDI + 0x4]
//   Label: LAB_0054c636
// 0054c639: PUSH EBP
// 0054c63a: ADD EAX,ESI
// 0054c63c: PUSH EAX
// 0054c63d: INC EBX
// 0054c63e: CALL cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_0054b440
//   XREF to: 0054b440 (UNCONDITIONAL_CALL)
// 0054c643: ADD ESI,0x24
// 0054c646: MOV ECX,dword ptr [EDI]
// 0054c648: ADD ESP,0x8
// 0054c64b: CMP EBX,ECX
// 0054c64d: JL 0x0054c636
//   XREF to: 0054c636 (CONDITIONAL_JUMP)
// 0054c64f: POP ESI
// 0054c650: POP EBP
//   Label: LAB_0054c650
// 0054c651: POP EDI
// 0054c652: POP EBX
// 0054c653: RET
