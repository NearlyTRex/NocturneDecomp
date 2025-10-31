// Name: core_dog.cpp_factoryFunc_FUN_0047f010
// Address: 0047f010
// Address Range: [[0047f010, 0047f032]]
// Convention: __cdecl
// Signature: CZombieDog * core_dog.cpp_factoryFunc_FUN_0047f010(void)
// Cross-references:
//   core_dog.cpp_staticInit_FUN_0047efe0 (0047efe0) at 0047efec [DATA]
// Globals:
//   TerminatedCString s_core_dog_cpp_00620f8c
// Function calls:
//   core_dog.cpp_CZombieDog_ctor_FUN_0047f050
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

CZombieDog * __cdecl core_dog_cpp_factoryFunc_FUN_0047f010(void)

{
  CZombieDog *pCVar1;
  
  pCVar1 = (CZombieDog *)
           shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xbec8,"..\\core\\dog.cpp",0x37);
  if (pCVar1 == (CZombieDog *)0x0) {
    return (CZombieDog *)0x0;
  }
  pCVar1 = core_dog_cpp_CZombieDog_ctor_FUN_0047f050(pCVar1);
  return pCVar1;
}


// Assembly code:
// 0047f010: PUSH 0x37
//   Label: core_dog.cpp_factoryFunc_FUN_0047f010
// 0047f012: PUSH 0x620f8c
//   XREF to: 00620f8c (DATA)
// 0047f017: PUSH 0xbec8
// 0047f01c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 0047f021: ADD ESP,0xc
// 0047f024: TEST EAX,EAX
// 0047f026: JNZ 0x0047f029
//   XREF to: 0047f029 (CONDITIONAL_JUMP)
// 0047f028: RET
// 0047f029: PUSH EAX
//   Label: LAB_0047f029
// 0047f02a: CALL core_dog.cpp_CZombieDog_ctor_FUN_0047f050
//   XREF to: 0047f050 (UNCONDITIONAL_CALL)
// 0047f02f: ADD ESP,0x4
// 0047f032: RET
