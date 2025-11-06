// Name: core_bodypart.cpp_createBodyPart_FUN_00418fd0
// Address: 00418fd0
// Address Range: [[00418fd0, 00418ff2]]
// Convention: __cdecl
// Signature: CBodyPart * core_bodypart.cpp_createBodyPart_FUN_00418fd0(void)
// Cross-references:
//   core_bodypart.cpp_staticInit_FUN_00418de0 (00418de0) at 00418dec [DATA]
// Globals:
//   TerminatedCString s_core_bodypart_cpp_00615bc4
// Function calls:
//   core_bodypart.cpp_CBodyPart_ctor_FUN_00419010
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

CBodyPart * __cdecl core_bodypart_cpp_createBodyPart_FUN_00418fd0(void)

{
  CBodyPart *pCVar1;
  
  pCVar1 = (CBodyPart *)
           shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xf30,"..\\core\\bodypart.cpp",0x7c);
  if (pCVar1 == (CBodyPart *)0x0) {
    return (CBodyPart *)0x0;
  }
  pCVar1 = core_bodypart_cpp_CBodyPart_ctor_FUN_00419010(pCVar1);
  return pCVar1;
}


// Assembly code:
// 00418fd0: PUSH 0x7c
//   Label: core_bodypart.cpp_createBodyPart_FUN_00418fd0
// 00418fd2: PUSH 0x615bc4
//   XREF to: 00615bc4 (DATA)
// 00418fd7: PUSH 0xf30
// 00418fdc: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00418fe1: ADD ESP,0xc
// 00418fe4: TEST EAX,EAX
// 00418fe6: JNZ 0x00418fe9
//   XREF to: 00418fe9 (CONDITIONAL_JUMP)
// 00418fe8: RET
// 00418fe9: PUSH EAX
//   Label: LAB_00418fe9
// 00418fea: CALL core_bodypart.cpp_CBodyPart_ctor_FUN_00419010
//   XREF to: 00419010 (UNCONDITIONAL_CALL)
// 00418fef: ADD ESP,0x4
// 00418ff2: RET
