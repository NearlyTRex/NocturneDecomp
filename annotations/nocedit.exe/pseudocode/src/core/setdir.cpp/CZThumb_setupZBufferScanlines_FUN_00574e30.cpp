// Name: core_setdir.cpp_CZThumb_setupZBufferScanlines_FUN_00574e30
// Address: 00574e30
// Address Range: [[00574e30, 00574e61]]
// Convention: __cdecl
// Signature: void core_setdir.cpp_CZThumb_setupZBufferScanlines_FUN_00574e30(CZThumb * this_ptr)
// Cross-references:
//   core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_00574ba0 (00574ba0) at 00574d3c [UNCONDITIONAL_CALL]
//   core_setdir.cpp_CZThumb_saveZBufferTable_FUN_00574910 (00574910) at 00574a31 [UNCONDITIONAL_CALL]
// Globals:
//   uint*[1024] g_ZBufferScanlineArray
//   undefined4 g_ZBufferScanlineArray[1]

#include "nocturne.h"

void __cdecl core_setdir_cpp_CZThumb_setupZBufferScanlines_FUN_00574e30(CZThumb *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (0 < this_ptr->height) {
    iVar2 = 0;
    do {
      *(void **)((int)g_ZBufferScanlineArray + iVar2) =
           (void *)(this_ptr->width * iVar1 * 4 + (int)this_ptr->zbuffer_data);
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar1 < this_ptr->height);
  }
  return;
}


// Assembly code:
// 00574e30: MOV ECX,dword ptr [ESP + 0x4]
//   Label: core_setdir.cpp_CZThumb_setupZBufferScanlines_FUN_00574e30
//   XREF to: Stack[0x4] (READ)
// 00574e34: MOV EDX,dword ptr [ECX + 0x4]
// 00574e37: XOR EAX,EAX
// 00574e39: TEST EDX,EDX
// 00574e3b: JLE 0x00574e61
//   XREF to: 00574e61 (CONDITIONAL_JUMP)
// 00574e3d: PUSH ESI
// 00574e3e: PUSH EBX
// 00574e3f: XOR EDX,EDX
// 00574e41: MOV EBX,dword ptr [ECX]
//   Label: LAB_00574e41
// 00574e43: IMUL EBX,EAX
// 00574e46: MOV ESI,dword ptr [ECX + 0x24]
// 00574e49: SHL EBX,0x2
// 00574e4c: ADD EBX,ESI
// 00574e4e: MOV dword ptr [EDX + 0x2cf7d5c],EBX
//   XREF to: 02cf7d5c (WRITE)
//   XREF to: 02cf7d60 (WRITE)
// 00574e54: INC EAX
// 00574e55: MOV EBX,dword ptr [ECX + 0x4]
// 00574e58: ADD EDX,0x4
// 00574e5b: CMP EAX,EBX
// 00574e5d: JL 0x00574e41
//   XREF to: 00574e41 (CONDITIONAL_JUMP)
// 00574e5f: POP EBX
// 00574e60: POP ESI
// 00574e61: RET
//   Label: LAB_00574e61
