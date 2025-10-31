// Name: core_bodypart.cpp_SBodyPartFire_ctor_FUN_0041b620
// Address: 0041b620
// Address Range: [[0041b620, 0041b633]]
// Convention: __cdecl
// Signature: SBodyPartFire * core_bodypart.cpp_SBodyPartFire_ctor_FUN_0041b620(SBodyPartFire * this_ptr)
// Function calls:
//   core_flame.cpp_CFlame_ctor_FUN_004c9aa0

#include "nocturne.h"

SBodyPartFire * __cdecl core_bodypart_cpp_SBodyPartFire_ctor_FUN_0041b620(SBodyPartFire *this_ptr)

{
  CFlame *pCVar1;
  
  pCVar1 = core_flame_cpp_CFlame_ctor_FUN_004c9aa0((CFlame *)(this_ptr->field0_0x0 + 0xc));
  return (SBodyPartFire *)(pCVar1[-1].field12_0x290 + 8);
}


// Assembly code:
// 0041b620: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_bodypart.cpp_SBodyPartFire_ctor_FUN_0041b620
//   XREF to: Stack[0x4] (READ)
// 0041b624: ADD EAX,0xc
// 0041b627: PUSH EAX
// 0041b628: CALL core_flame.cpp_CFlame_ctor_FUN_004c9aa0
//   XREF to: 004c9aa0 (UNCONDITIONAL_CALL)
// 0041b62d: ADD ESP,0x4
// 0041b630: SUB EAX,0xc
// 0041b633: RET
