// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_init_FUN_0054bd00
// Address: 0054bd00
// Address Range: [[0054bd00, 0054bd5c]]
// Convention: __cdecl
// Signature: void cockpit_pkbmpset.cpp_CPackedBitmapSet_init_FUN_0054bd00(CPackedBitmapSet * this_ptr)
// Cross-references:
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_0054c480 (0054c480) at 0054c4bd [UNCONDITIONAL_CALL]
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBMFileRange_FUN_0054c3d0 (0054c3d0) at 0054c461 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_init_FUN_0054bd00(CPackedBitmapSet *this_ptr)

{
  int iVar1;
  int iVar2;
  
  this_ptr->extension = this_ptr->bitmap_array->width;
  this_ptr->base_path = this_ptr->bitmap_array->height;
  iVar1 = 1;
  if (1 < this_ptr->bitmap_count) {
    iVar2 = 0x24;
    do {
      if (this_ptr->extension != *(int *)(this_ptr->bitmap_array->filename + iVar2 + 0x18)) {
        this_ptr->extension = 0;
      }
      if (this_ptr->base_path != *(int *)(this_ptr->bitmap_array->filename + iVar2 + 0x1c)) {
        this_ptr->base_path = 0;
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x24;
    } while (iVar1 < this_ptr->bitmap_count);
  }
  return;
}


// Assembly code:
// 0054bd00: PUSH EBX
//   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_init_FUN_0054bd00
// 0054bd01: PUSH ESI
// 0054bd02: PUSH EDI
// 0054bd03: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0054bd07: MOV EDX,dword ptr [EAX + 0x4]
// 0054bd0a: MOV EDX,dword ptr [EDX + 0x18]
// 0054bd0d: MOV dword ptr [EAX + 0x1c],EDX
// 0054bd10: MOV EDX,dword ptr [EAX + 0x4]
// 0054bd13: MOV EDX,dword ptr [EDX + 0x1c]
// 0054bd16: MOV dword ptr [EAX + 0x20],EDX
// 0054bd19: MOV ECX,0x1
// 0054bd1e: CMP ECX,dword ptr [EAX]
// 0054bd20: JGE 0x0054bd50
//   XREF to: 0054bd50 (CONDITIONAL_JUMP)
// 0054bd22: MOV EDX,0x24
// 0054bd27: MOV EBX,dword ptr [EAX + 0x4]
//   Label: LAB_0054bd27
// 0054bd2a: MOV ESI,dword ptr [EAX + 0x1c]
// 0054bd2d: CMP ESI,dword ptr [EDX + EBX*0x1 + 0x18]
// 0054bd31: JNZ 0x0054bd54
//   XREF to: 0054bd54 (CONDITIONAL_JUMP)
// 0054bd33: MOV EBX,dword ptr [EAX + 0x4]
//   Label: LAB_0054bd33
// 0054bd36: MOV EDI,dword ptr [EAX + 0x20]
// 0054bd39: CMP EDI,dword ptr [EDX + EBX*0x1 + 0x1c]
// 0054bd3d: JZ 0x0054bd46
//   XREF to: 0054bd46 (CONDITIONAL_JUMP)
// 0054bd3f: MOV dword ptr [EAX + 0x20],0x0
// 0054bd46: INC ECX
//   Label: LAB_0054bd46
// 0054bd47: MOV EBX,dword ptr [EAX]
// 0054bd49: ADD EDX,0x24
// 0054bd4c: CMP ECX,EBX
// 0054bd4e: JL 0x0054bd27
//   XREF to: 0054bd27 (CONDITIONAL_JUMP)
// 0054bd50: POP EDI
//   Label: LAB_0054bd50
// 0054bd51: POP ESI
// 0054bd52: POP EBX
// 0054bd53: RET
// 0054bd54: MOV dword ptr [EAX + 0x1c],0x0
//   Label: LAB_0054bd54
// 0054bd5b: JMP 0x0054bd33
//   XREF to: 0054bd33 (UNCONDITIONAL_JUMP)
