// Name: shape_cramtex.cpp_checkTextureCollision_FUN_00448390
// Address: 00448390
// Address Range: [[00448390, 004483d3]]
// Convention: __cdecl
// Signature: int shape_cramtex.cpp_checkTextureCollision_FUN_00448390(SCramWorkingEntry * placed_texture, SCramWorkingEntry * test_texture)

#include "nocturne.h"

int __cdecl
shape_cramtex_cpp_checkTextureCollision_FUN_00448390
          (SCramWorkingEntry *placed_texture,SCramWorkingEntry *test_texture)

{
  if ((((test_texture->width == placed_texture->assigned_map_number) &&
       (placed_texture->placement_bottom < test_texture->padded_height)) &&
      (placed_texture->working_right < test_texture->assigned_map_number)) &&
     ((test_texture->height < placed_texture->working_top &&
      (test_texture->padded_width < placed_texture->working_width)))) {
    return 1;
  }
  return 0;
}


// Assembly code:
// 00448390: PUSH EBX
//   Label: shape_cramtex.cpp_checkTextureCollision_FUN_00448390
// 00448391: PUSH ESI
// 00448392: PUSH EDI
// 00448393: PUSH EBP
// 00448394: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00448398: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0044839c: MOV EBX,dword ptr [EAX]
// 0044839e: CMP EBX,dword ptr [EDX + 0x10]
// 004483a1: JNZ 0x004483cd
//   XREF to: 004483cd (CONDITIONAL_JUMP)
// 004483a3: MOV ESI,dword ptr [EAX + 0xc]
// 004483a6: CMP ESI,dword ptr [EDX + 0x1c]
// 004483a9: JLE 0x004483cd
//   XREF to: 004483cd (CONDITIONAL_JUMP)
// 004483ab: MOV EDI,dword ptr [EAX + 0x10]
// 004483ae: CMP EDI,dword ptr [EDX + 0x20]
// 004483b1: JLE 0x004483cd
//   XREF to: 004483cd (CONDITIONAL_JUMP)
// 004483b3: MOV EBP,dword ptr [EAX + 0x4]
// 004483b6: CMP EBP,dword ptr [EDX + 0x24]
// 004483b9: JGE 0x004483cd
//   XREF to: 004483cd (CONDITIONAL_JUMP)
// 004483bb: MOV ECX,dword ptr [EAX + 0x8]
// 004483be: CMP ECX,dword ptr [EDX + 0x28]
// 004483c1: JGE 0x004483cd
//   XREF to: 004483cd (CONDITIONAL_JUMP)
// 004483c3: MOV EAX,0x1
// 004483c8: POP EBP
// 004483c9: POP EDI
// 004483ca: POP ESI
// 004483cb: POP EBX
// 004483cc: RET
// 004483cd: XOR EAX,EAX
//   Label: LAB_004483cd
// 004483cf: POP EBP
// 004483d0: POP EDI
// 004483d1: POP ESI
// 004483d2: POP EBX
// 004483d3: RET
