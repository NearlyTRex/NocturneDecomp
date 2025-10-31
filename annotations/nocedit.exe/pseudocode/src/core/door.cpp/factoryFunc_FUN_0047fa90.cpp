// Name: core_door.cpp_factoryFunc_FUN_0047fa90
// Address: 0047fa90
// Address Range: [[0047fa90, 0047fab2]]
// Convention: __cdecl
// Signature: CDoor * core_door.cpp_factoryFunc_FUN_0047fa90(void)
// Cross-references:
//   core_door.cpp_staticInit_FUN_0047fa60 (0047fa60) at 0047fa6c [DATA]
// Globals:
//   TerminatedCString s_core_door_cpp_00621085
// Function calls:
//   core_door.cpp_CDoor_ctor_FUN_0047fad0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

CDoor * __cdecl core_door_cpp_factoryFunc_FUN_0047fa90(void)

{
  CDoor *pCVar1;
  
  pCVar1 = (CDoor *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x9e0,"..\\core\\door.cpp",0x33);
  if (pCVar1 == (CDoor *)0x0) {
    return (CDoor *)0x0;
  }
  pCVar1 = core_door_cpp_CDoor_ctor_FUN_0047fad0(pCVar1);
  return pCVar1;
}


// Assembly code:
// 0047fa90: PUSH 0x33
//   Label: core_door.cpp_factoryFunc_FUN_0047fa90
// 0047fa92: PUSH 0x621085
//   XREF to: 00621085 (DATA)
// 0047fa97: PUSH 0x9e0
// 0047fa9c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 0047faa1: ADD ESP,0xc
// 0047faa4: TEST EAX,EAX
// 0047faa6: JNZ 0x0047faa9
//   XREF to: 0047faa9 (CONDITIONAL_JUMP)
// 0047faa8: RET
// 0047faa9: PUSH EAX
//   Label: LAB_0047faa9
// 0047faaa: CALL core_door.cpp_CDoor_ctor_FUN_0047fad0
//   XREF to: 0047fad0 (UNCONDITIONAL_CALL)
// 0047faaf: ADD ESP,0x4
// 0047fab2: RET
