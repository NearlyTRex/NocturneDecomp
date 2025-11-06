// Name: engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_0048ce10
// Address: 0048ce10
// Address Range: [[0048ce10, 0048ce1b]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_0048ce10(CDemonRenderer * this_ptr, int enabled)
// Cross-references:
//   core_mimic.cpp_CMimic_FUN_005205f0 (005205f0) at 00520697 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0 (005709e0) at 00570aaa [UNCONDITIONAL_CALL]
//   core_set.cpp_FUN_00570af0 (00570af0) at 00570b39 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_0048ce10
          (CDemonRenderer *this_ptr,int enabled)

{
  this_ptr->advanced_culling_enabled = enabled;
  return;
}


// Assembly code:
// 0048ce10: MOV EDX,dword ptr [ESP + 0x4]
//   Label: engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_0048ce10
//   XREF to: Stack[0x4] (READ)
// 0048ce14: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0048ce18: MOV dword ptr [EDX + 0x18],EAX
// 0048ce1b: RET
