// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_ensureBitmapLoaded_FUN_0054c72e
// Address: 0054c72e
// Address Range: [[0054c72e, 0054c794]]
// Convention: __cdecl
// Signature: void cockpit_pkbmpset.cpp_CPackedBitmapSet_ensureBitmapLoaded_FUN_0054c72e(CPackedBitmapSet * this_ptr, int bitmap_index, char * filename)
// Function calls:
//   cockpit_pkbitmap.cpp_CPackedBitmap_freePackedData_FUN_0054a940
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadByFilenameAndIndex_FUN_0054c500

#include "nocturne.h"

void __cdecl
cockpit_pkbmpset_cpp_CPackedBitmapSet_ensureBitmapLoaded_FUN_0054c72e
          (CPackedBitmapSet *this_ptr,int bitmap_index,char *filename)

{
  int iVar1;
  int iVar2;
  
  if (this_ptr->bitmap_array[bitmap_index].packed_data == (char *)0x0) {
    iVar2 = 0;
    if (0 < this_ptr->bitmap_count) {
      iVar1 = 0;
      do {
        iVar2 = iVar2 + 1;
        cockpit_pkbitmap_cpp_CPackedBitmap_freePackedData_FUN_0054a940
                  ((CPackedBitmap *)(this_ptr->bitmap_array->filename + iVar1));
        iVar1 = iVar1 + 0x24;
      } while (iVar2 < this_ptr->bitmap_count);
    }
    cockpit_pkbmpset_cpp_CPackedBitmapSet_loadByFilenameAndIndex_FUN_0054c500
              (this_ptr,&DAT_00000001,bitmap_index);
  }
  return;
}


// Assembly code:
// 0054c72e: MOV EAX,EAX
//   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_ensureBitmapLoaded_FUN_0054c72e
// 0054c730: PUSH EBX
// 0054c731: PUSH EDI
// 0054c732: PUSH EBP
// 0054c733: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0054c737: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0054c73b: LEA EAX,[EBX*0x8 + 0x0]
// 0054c742: ADD EAX,EBX
// 0054c744: MOV EBX,dword ptr [EDI + 0x4]
// 0054c747: CMP dword ptr [EBX + EAX*0x4 + 0x14],0x0
// 0054c74c: JNZ 0x0054c791
//   XREF to: 0054c791 (CONDITIONAL_JUMP)
// 0054c74e: PUSH ESI
// 0054c74f: MOV ECX,dword ptr [EDI]
// 0054c751: XOR ESI,ESI
// 0054c753: TEST ECX,ECX
// 0054c755: JLE 0x0054c780
//   XREF to: 0054c780 (CONDITIONAL_JUMP)
// 0054c757: XOR EBX,EBX
// 0054c759: MOV EAX,dword ptr [EDI + 0x4]
//   Label: LAB_0054c759
// 0054c75c: ADD EAX,EBX
// 0054c75e: PUSH EAX
// 0054c75f: INC ESI
// 0054c760: CALL cockpit_pkbitmap.cpp_CPackedBitmap_freePackedData_FUN_0054a940
//   XREF to: 0054a940 (UNCONDITIONAL_CALL)
// 0054c765: ADD EBX,0x24
// 0054c768: MOV EBP,dword ptr [EDI]
// 0054c76a: ADD ESP,0x4
// 0054c76d: CMP ESI,EBP
// 0054c76f: JL 0x0054c759
//   XREF to: 0054c759 (CONDITIONAL_JUMP)
// 0054c771: LEA EAX,[EAX]
// 0054c777: LEA EDX,[EDX]
// 0054c77d: LEA EAX,[EAX]
// 0054c780: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_0054c780
//   XREF to: Stack[0x8] (READ)
// 0054c784: PUSH EAX
// 0054c785: PUSH 0x1
// 0054c787: PUSH EDI
// 0054c788: CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_loadByFilenameAndIndex_FUN_0054c500
//   XREF to: 0054c500 (UNCONDITIONAL_CALL)
// 0054c78d: ADD ESP,0xc
// 0054c790: POP ESI
// 0054c791: POP EBP
//   Label: LAB_0054c791
// 0054c792: POP EDI
// 0054c793: POP EBX
// 0054c794: RET
