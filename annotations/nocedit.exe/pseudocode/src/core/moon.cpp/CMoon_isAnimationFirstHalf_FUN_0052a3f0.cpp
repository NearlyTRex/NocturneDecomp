// Name: core_moon.cpp_CMoon_isAnimationFirstHalf_FUN_0052a3f0
// Address: 0052a3f0
// Address Range: [[0052a3f0, 0052a409]]
// Convention: __cdecl
// Signature: int core_moon.cpp_CMoon_isAnimationFirstHalf_FUN_0052a3f0(CMoon * this_ptr)
// Cross-references:
//   core_menu.cpp_renderMenuAndGetChoice_FUN_00510000 (00510000) at 0051008e [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00639fc9 = 30
//   float g_MoonAnimationTimer

#include "nocturne.h"

int __cdecl core_moon_cpp_CMoon_isAnimationFirstHalf_FUN_0052a3f0(CMoon *this_ptr)

{
  if ((float)DOUBLE_00639fc9 <= g_MoonAnimationTimer) {
    return 0;
  }
  return 1;
}


// Assembly code:
// 0052a3f0: FLD float ptr [0x02f381e4]
//   Label: core_moon.cpp_CMoon_isAnimationFirstHalf_FUN_0052a3f0
//   XREF to: 02f381e4 (READ)
// 0052a3f6: FCOMP double ptr [0x00639fc9]
//   XREF to: 00639fc9 (READ)
// 0052a3fc: FNSTSW AX
// 0052a3fe: SAHF
// 0052a3ff: JC 0x0052a404
//   XREF to: 0052a404 (CONDITIONAL_JUMP)
// 0052a401: XOR EAX,EAX
// 0052a403: RET
// 0052a404: MOV EAX,0x1
//   Label: LAB_0052a404
// 0052a409: RET
