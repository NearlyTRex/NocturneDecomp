// Name: core_ammo.cpp_CAmmo_factoryFunc_FUN_00410d80
// Address: 00410d80
// Address Range: [[00410d80, 00410da2]]
// Convention: __cdecl
// Signature: CAmmo * core_ammo.cpp_CAmmo_factoryFunc_FUN_00410d80(void)
// Cross-references:
//   core_ammo.cpp_staticInit_FUN_00410d50 (00410d50) at 00410d5c [DATA]
// Globals:
//   TerminatedCString s_core_ammo_cpp_00614923
// Function calls:
//   core_ammo.cpp_CAmmo_ctor_FUN_00410dc0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

CAmmo * __cdecl core_ammo_cpp_CAmmo_factoryFunc_FUN_00410d80(void)

{
  CAmmo *pCVar1;
  
  pCVar1 = (CAmmo *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x31c,"..\\core\\ammo.cpp",0x1e);
  if (pCVar1 == (CAmmo *)0x0) {
    return (CAmmo *)0x0;
  }
  pCVar1 = core_ammo_cpp_CAmmo_ctor_FUN_00410dc0(pCVar1);
  return pCVar1;
}


// Assembly code:
// 00410d80: PUSH 0x1e
//   Label: core_ammo.cpp_CAmmo_factoryFunc_FUN_00410d80
// 00410d82: PUSH 0x614923
//   XREF to: 00614923 (DATA)
// 00410d87: PUSH 0x31c
// 00410d8c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00410d91: ADD ESP,0xc
// 00410d94: TEST EAX,EAX
// 00410d96: JNZ 0x00410d99
//   XREF to: 00410d99 (CONDITIONAL_JUMP)
// 00410d98: RET
// 00410d99: PUSH EAX
//   Label: LAB_00410d99
// 00410d9a: CALL core_ammo.cpp_CAmmo_ctor_FUN_00410dc0
//   XREF to: 00410dc0 (UNCONDITIONAL_CALL)
// 00410d9f: ADD ESP,0x4
// 00410da2: RET
