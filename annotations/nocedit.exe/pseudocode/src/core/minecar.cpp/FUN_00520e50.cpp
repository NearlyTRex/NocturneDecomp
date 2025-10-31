// Name: core_minecar.cpp_FUN_00520e50
// Address: 00520e50
// Address Range: [[00520e50, 00520e7c]]
// Convention: unknown
// Signature: undefined core_minecar.cpp_FUN_00520e50()
// Cross-references:
//   core_minecar.cpp_staticInit_FUN_00520e20 (00520e20) at 00520e2c [DATA]
// Globals:
//   TerminatedCString s_core_minecar_cpp_00638961
//   CDemonActor_vtable PTR_core_minecar.cpp_FUN_006615d4
// Function calls:
//   core_platfrm.cpp_FUN_0054c850
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_minecar_cpp_FUN_00520e50(void)

{
  CPlatform *pCVar1;
  
  pCVar1 = (CPlatform *)
           shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x730,"..\\core\\minecar.cpp",0x39);
  if (pCVar1 == (CPlatform *)0x0) {
    return;
  }
  pCVar1 = core_platfrm_cpp_FUN_0054c850(pCVar1);
  (pCVar1->base_actor).metadata.vtable = &PTR_core_minecar_cpp_FUN_006615d4;
  return;
}


// Assembly code:
// 00520e50: PUSH 0x39
//   Label: core_minecar.cpp_FUN_00520e50
// 00520e52: PUSH 0x638961
//   XREF to: 00638961 (DATA)
// 00520e57: PUSH 0x730
// 00520e5c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00520e61: ADD ESP,0xc
// 00520e64: TEST EAX,EAX
// 00520e66: JNZ 0x00520e69
//   XREF to: 00520e69 (CONDITIONAL_JUMP)
// 00520e68: RET
// 00520e69: PUSH EAX
//   Label: LAB_00520e69
// 00520e6a: CALL core_platfrm.cpp_FUN_0054c850
//   XREF to: 0054c850 (UNCONDITIONAL_CALL)
// 00520e6f: ADD ESP,0x4
// 00520e72: MOV dword ptr [EAX + 0x154],0x6615d4
//   XREF to: 006615d4 (DATA)
// 00520e7c: RET
