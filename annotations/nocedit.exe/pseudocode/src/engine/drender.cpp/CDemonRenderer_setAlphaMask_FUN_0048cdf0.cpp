// Name: engine_drender.cpp_CDemonRenderer_setAlphaMask_FUN_0048cdf0
// Address: 0048cdf0
// Address Range: [[0048cdf0, 0048cdfe]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_setAlphaMask_FUN_0048cdf0(CDemonRenderer * this_ptr, int alpha_mask)
// Cross-references:
//   core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0 (005709e0) at 00570aca [UNCONDITIONAL_CALL]
//   core_set.cpp_FUN_00570af0 (00570af0) at 00570b4a [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_setAlphaMask_FUN_0048cdf0(CDemonRenderer *this_ptr,int alpha_mask)

{
  this_ptr->alpha_mask = alpha_mask << 0x18;
  return;
}


// Assembly code:
// 0048cdf0: MOV EAX,dword ptr [ESP + 0x8]
//   Label: engine_drender.cpp_CDemonRenderer_setAlphaMask_FUN_0048cdf0
//   XREF to: Stack[0x8] (READ)
// 0048cdf4: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 0048cdf8: SHL EAX,0x18
// 0048cdfb: MOV dword ptr [EDX + 0x14],EAX
// 0048cdfe: RET
