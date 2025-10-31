// Name: shape_cramtex.cpp_setupTextureForPlacement_FUN_004483e0
// Address: 004483e0
// Address Range: [[004483e0, 00448434]]
// Convention: __cdecl
// Signature: void shape_cramtex.cpp_setupTextureForPlacement_FUN_004483e0(SCramWorkingEntry * destination, SCramWorkingEntry * source)

#include "nocturne.h"

void __cdecl
shape_cramtex_cpp_setupTextureForPlacement_FUN_004483e0
          (SCramWorkingEntry *destination,SCramWorkingEntry *source)

{
  int iVar1;
  
  destination->assigned_map_number = source->width;
  destination->placement_flags = source->effective_width;
  destination->placement_bottom = source->height;
  destination->working_right = source->padded_width;
  if (destination->placement_flags == 0) {
    destination->effective_width = destination->padded_width;
    iVar1 = destination->padded_height;
  }
  else {
    destination->effective_width = destination->padded_height;
    iVar1 = destination->padded_width;
  }
  destination->effective_height = iVar1;
  destination->working_top = destination->placement_bottom + destination->effective_width;
  destination->working_width = destination->working_right + destination->effective_height;
  return;
}


// Assembly code:
// 004483e0: PUSH EBX
//   Label: shape_cramtex.cpp_setupTextureForPlacement_FUN_004483e0
// 004483e1: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004483e5: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004483e9: MOV ECX,dword ptr [EDX]
// 004483eb: MOV dword ptr [EAX + 0x10],ECX
// 004483ee: MOV ECX,dword ptr [EDX + 0x14]
// 004483f1: MOV dword ptr [EAX + 0x40],ECX
// 004483f4: MOV ECX,dword ptr [EDX + 0x4]
// 004483f7: MOV dword ptr [EAX + 0x1c],ECX
// 004483fa: MOV EDX,dword ptr [EDX + 0x8]
// 004483fd: MOV dword ptr [EAX + 0x20],EDX
// 00448400: CMP dword ptr [EAX + 0x40],0x0
// 00448404: JZ 0x0044842a
//   XREF to: 0044842a (CONDITIONAL_JUMP)
// 00448406: MOV EDX,dword ptr [EAX + 0xc]
// 00448409: MOV dword ptr [EAX + 0x14],EDX
// 0044840c: MOV EDX,dword ptr [EAX + 0x8]
// 0044840f: MOV dword ptr [EAX + 0x18],EDX
//   Label: LAB_0044840f
// 00448412: MOV ECX,dword ptr [EAX + 0x14]
// 00448415: MOV EDX,dword ptr [EAX + 0x1c]
// 00448418: ADD EDX,ECX
// 0044841a: MOV dword ptr [EAX + 0x24],EDX
// 0044841d: MOV EBX,dword ptr [EAX + 0x18]
// 00448420: MOV EDX,dword ptr [EAX + 0x20]
// 00448423: ADD EDX,EBX
// 00448425: MOV dword ptr [EAX + 0x28],EDX
// 00448428: POP EBX
// 00448429: RET
// 0044842a: MOV EDX,dword ptr [EAX + 0x8]
//   Label: LAB_0044842a
// 0044842d: MOV dword ptr [EAX + 0x14],EDX
// 00448430: MOV EDX,dword ptr [EAX + 0xc]
// 00448433: JMP 0x0044840f
//   XREF to: 0044840f (UNCONDITIONAL_JUMP)
