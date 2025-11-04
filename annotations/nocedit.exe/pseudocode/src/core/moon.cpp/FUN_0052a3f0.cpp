// Name: core_moon.cpp_FUN_0052a3f0
// Address: 0052a3f0
// Address Range: [[0052a3f0, 0052a409]]
// Convention: unknown
// Signature: undefined core_moon.cpp_FUN_0052a3f0()
// Cross-references:
//   core_menu.cpp_GetGameMainMenuChoice_FUN_00510000 (00510000) at 0051008e [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00639fc9 = 30
//   undefined4 DAT_02f381e4

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_moon.cpp_FUN_0052a3f0() */

undefined4 core_moon_cpp_FUN_0052a3f0(void)

{
  if ((float)DOUBLE_00639fc9 <= _DAT_02f381e4) {
    return 0;
  }
  return 1;
}


// Assembly code:
// 0052a3f0: FLD float ptr [0x02f381e4]
//   Label: core_moon.cpp_FUN_0052a3f0
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
