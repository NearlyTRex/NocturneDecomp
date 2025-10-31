// Name: crt_stdlib.c_srand_FUN_005feb80
// Address: 005feb80
// Address Range: [[005feb80, 005feb8f]]
// Convention: __watcallStack
// Signature: void crt_stdlib.c_srand_FUN_005feb80(uint seed)
// Cross-references:
//   core_netgame.cpp_FUN_00541390 (00541390) at 0054198b [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_generateTextureAtlasLayout_FUN_00444d90 (00444d90) at 004453c4 [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_generateTextureAtlas_FUN_00445820 (00445820) at 0044583f [UNCONDITIONAL_CALL]
//   wincore_winrun.cpp_winMain_FUN_005f3680 (005f3680) at 005f36fe [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdlib.c_GetRandomSeedPointer_FUN_005feb50

#include "nocturne.h"

void __watcallStack crt_stdlib_c_srand_FUN_005feb80(uint seed)

{
  uint *puVar1;
  uint in_stack_00000008;
  
  puVar1 = crt_stdlib_c_GetRandomSeedPointer_FUN_005feb50();
  if (puVar1 != (uint *)0x0) {
    *puVar1 = in_stack_00000008;
  }
  return;
}


// Assembly code:
// 005feb80: CALL crt_stdlib.c_GetRandomSeedPointer_FUN_005feb50
//   Label: crt_stdlib.c_srand_FUN_005feb80
//   XREF to: 005feb50 (UNCONDITIONAL_CALL)
// 005feb85: TEST EAX,EAX
// 005feb87: JZ 0x005feb8f
//   XREF to: 005feb8f (CONDITIONAL_JUMP)
// 005feb89: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 005feb8d: MOV dword ptr [EAX],EDX
// 005feb8f: RET
//   Label: LAB_005feb8f
