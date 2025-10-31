// Name: shape_cramtex.cpp_qsortByLargestDimension_FUN_004457f0
// Address: 004457f0
// Address Range: [[004457f0, 0044581d]]
// Convention: __cdecl
// Signature: int shape_cramtex.cpp_qsortByLargestDimension_FUN_004457f0(SCramWorkingEntry * entry_a, SCramWorkingEntry * entry_b)
// Cross-references:
//   shape_cramtex.cpp_generateTextureAtlasLayout_FUN_00444d90 (00444d90) at 00444e64 [DATA]
//   shape_cramtex.cpp_generateTextureAtlas_FUN_00445820 (00445820) at 00445847 [DATA]

#include "nocturne.h"

int __cdecl
shape_cramtex_cpp_qsortByLargestDimension_FUN_004457f0
          (SCramWorkingEntry *entry_a,SCramWorkingEntry *entry_b)

{
  int iVar1;
  
  iVar1 = entry_b->height;
  if (entry_b->height < entry_b->width) {
    iVar1 = entry_b->width;
  }
  if (entry_a->height < entry_a->width) {
    return iVar1 - entry_a->width;
  }
  return iVar1 - entry_a->height;
}


// Assembly code:
// 004457f0: MOV EAX,dword ptr [ESP + 0x8]
//   Label: shape_cramtex.cpp_qsortByLargestDimension_FUN_004457f0
//   XREF to: Stack[0x8] (READ)
// 004457f4: MOV EDX,dword ptr [EAX]
// 004457f6: MOV EAX,dword ptr [EAX + 0x4]
// 004457f9: CMP EDX,EAX
// 004457fb: JLE 0x004457ff
//   XREF to: 004457ff (CONDITIONAL_JUMP)
// 004457fd: MOV EAX,EDX
// 004457ff: MOV EDX,dword ptr [ESP + 0x4]
//   Label: LAB_004457ff
//   XREF to: Stack[0x4] (READ)
// 00445803: MOV ECX,EAX
// 00445805: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 00445809: MOV EDX,dword ptr [EDX + 0x4]
// 0044580c: MOV EAX,dword ptr [EAX]
// 0044580e: CMP EAX,EDX
// 00445810: JLE 0x00445817
//   XREF to: 00445817 (CONDITIONAL_JUMP)
// 00445812: SUB ECX,EAX
// 00445814: MOV EAX,ECX
// 00445816: RET
// 00445817: MOV EAX,EDX
//   Label: LAB_00445817
// 00445819: SUB ECX,EAX
// 0044581b: MOV EAX,ECX
// 0044581d: RET
