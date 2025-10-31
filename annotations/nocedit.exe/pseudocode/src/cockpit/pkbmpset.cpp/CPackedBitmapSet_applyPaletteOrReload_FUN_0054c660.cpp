// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_applyPaletteOrReload_FUN_0054c660
// Address: 0054c660
// Address Range: [[0054c660, 0054c69e]]
// Convention: __cdecl
// Signature: void cockpit_pkbmpset.cpp_CPackedBitmapSet_applyPaletteOrReload_FUN_0054c660(CPackedBitmapSet * this_ptr)
// Function calls:
//   cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_0054b4a0
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_0054c710

#include "nocturne.h"

void __cdecl
cockpit_pkbmpset_cpp_CPackedBitmapSet_applyPaletteOrReload_FUN_0054c660(CPackedBitmapSet *this_ptr)

{
  int iVar1;
  int iVar2;
  
  if (this_ptr->filename[0] != '\0') {
    cockpit_pkbmpset_cpp_CPackedBitmapSet_loadStoredACTFile_FUN_0054c710(this_ptr);
    return;
  }
  iVar1 = 0;
  if (0 < this_ptr->bitmap_count) {
    iVar2 = 0;
    do {
      iVar1 = iVar1 + 1;
      cockpit_pkbitmap_cpp_CPackedBitmap_applyPalette_FUN_0054b4a0
                ((CPackedBitmap *)(this_ptr->bitmap_array->filename + iVar2));
      iVar2 = iVar2 + 0x24;
    } while (iVar1 < this_ptr->bitmap_count);
  }
  return;
}


// Assembly code:
// 0054c660: PUSH EBX
//   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_applyPaletteOrReload_FUN_0054c660
// 0054c661: PUSH EDI
// 0054c662: MOV EDI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0054c666: CMP byte ptr [EDI + 0x8],0x0
// 0054c66a: JNZ 0x0054c693
//   XREF to: 0054c693 (CONDITIONAL_JUMP)
// 0054c66c: MOV EDX,dword ptr [EDI]
// 0054c66e: XOR EBX,EBX
// 0054c670: TEST EDX,EDX
// 0054c672: JLE 0x0054c690
//   XREF to: 0054c690 (CONDITIONAL_JUMP)
// 0054c674: PUSH ESI
// 0054c675: XOR ESI,ESI
// 0054c677: MOV EAX,dword ptr [EDI + 0x4]
//   Label: LAB_0054c677
// 0054c67a: ADD EAX,ESI
// 0054c67c: PUSH EAX
// 0054c67d: INC EBX
// 0054c67e: CALL cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_0054b4a0
//   XREF to: 0054b4a0 (UNCONDITIONAL_CALL)
// 0054c683: ADD ESI,0x24
// 0054c686: MOV ECX,dword ptr [EDI]
// 0054c688: ADD ESP,0x4
// 0054c68b: CMP EBX,ECX
// 0054c68d: JL 0x0054c677
//   XREF to: 0054c677 (CONDITIONAL_JUMP)
// 0054c68f: POP ESI
// 0054c690: POP EDI
//   Label: LAB_0054c690
// 0054c691: POP EBX
// 0054c692: RET
// 0054c693: PUSH EDI
//   Label: LAB_0054c693
// 0054c694: CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_0054c710
//   XREF to: 0054c710 (UNCONDITIONAL_CALL)
// 0054c699: ADD ESP,0x4
// 0054c69c: POP EDI
// 0054c69d: POP EBX
// 0054c69e: RET
