// Name: engine_drender.cpp_CDemonRenderer_calculateProjectionFactor_FUN_0048c870
// Address: 0048c870
// Address Range: [[0048c870, 0048c88e]]
// Convention: __cdecl
// Signature: float engine_drender.cpp_CDemonRenderer_calculateProjectionFactor_FUN_0048c870(CDemonRenderer * this_ptr)
// Cross-references:
//   core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0 (005709e0) at 00570a5a [UNCONDITIONAL_CALL]
// Globals:
//   double g_ProjectionDivisor = 18
//   double g_ProjectionMultiplier = 65536
//   int g_ProjectionScale = 0x10000

#include "nocturne.h"

float __cdecl
engine_drender_cpp_CDemonRenderer_calculateProjectionFactor_FUN_0048c870(CDemonRenderer *this_ptr)

{
  return ((float)g_ProjectionDivisor / (float)g_ProjectionScale) * (float)g_ProjectionMultiplier;
}


// Assembly code:
// 0048c870: SUB ESP,0x4
//   Label: engine_drender.cpp_CDemonRenderer_calculateProjectionFactor_FUN_0048c870
// 0048c873: FILD dword ptr [0x006793c0]
//   XREF to: 006793c0 (READ)
// 0048c879: FDIVR double ptr [0x00622075]
//   XREF to: 00622075 (READ)
// 0048c87f: FMUL double ptr [0x0062207d]
//   XREF to: 0062207d (READ)
// 0048c885: FSTP float ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 0048c888: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 0048c88b: ADD ESP,0x4
// 0048c88e: RET
