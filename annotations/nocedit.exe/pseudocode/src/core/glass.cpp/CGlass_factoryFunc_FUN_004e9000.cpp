// Name: core_glass.cpp_CGlass_factoryFunc_FUN_004e9000
// Address: 004e9000
// Address Range: [[004e9000, 004e9022]]
// Convention: __cdecl
// Signature: CGlass * core_glass.cpp_CGlass_factoryFunc_FUN_004e9000(void)
// Cross-references:
//   core_glass.cpp_staticInit_FUN_004e8fd0 (004e8fd0) at 004e8fdc [DATA]
// Globals:
//   TerminatedCString s_core_glass_cpp_0062df50
// Function calls:
//   core_glass.cpp_CGlass_ctor_FUN_004e9040
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

CGlass * __cdecl core_glass_cpp_CGlass_factoryFunc_FUN_004e9000(void)

{
  CGlass *pCVar1;
  
  pCVar1 = (CGlass *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xb40,"..\\core\\glass.cpp",0x2c);
  if (pCVar1 == (CGlass *)0x0) {
    return (CGlass *)0x0;
  }
  pCVar1 = core_glass_cpp_CGlass_ctor_FUN_004e9040(pCVar1);
  return pCVar1;
}


// Assembly code:
// 004e9000: PUSH 0x2c
//   Label: core_glass.cpp_CGlass_factoryFunc_FUN_004e9000
// 004e9002: PUSH 0x62df50
//   XREF to: 0062df50 (DATA)
// 004e9007: PUSH 0xb40
// 004e900c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 004e9011: ADD ESP,0xc
// 004e9014: TEST EAX,EAX
// 004e9016: JNZ 0x004e9019
//   XREF to: 004e9019 (CONDITIONAL_JUMP)
// 004e9018: RET
// 004e9019: PUSH EAX
//   Label: LAB_004e9019
// 004e901a: CALL core_glass.cpp_CGlass_ctor_FUN_004e9040
//   XREF to: 004e9040 (UNCONDITIONAL_CALL)
// 004e901f: ADD ESP,0x4
// 004e9022: RET
