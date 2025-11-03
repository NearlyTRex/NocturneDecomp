// Name: core_minecar.cpp_FUN_00520f20
// Address: 00520f20
// Address Range: [[00520f20, 00520f37]]
// Convention: __cdecl
// Signature: CMineCar * core_minecar.cpp_FUN_00520f20(CMineCar * this_ptr)
// Globals:
//   CDemonActor_vtable PTR_core_minecar.cpp_FUN_006615d4
// Function calls:
//   core_platfrm.cpp_FUN_0054c850

#include "nocturne.h"

CMineCar * __cdecl core_minecar_cpp_FUN_00520f20(CMineCar *this_ptr)

{
  CMineCar *pCVar1;
  
  pCVar1 = (CMineCar *)core_platfrm_cpp_FUN_0054c850(&this_ptr->base_platform);
  (pCVar1->base_platform).base_actor.vtable = &PTR_core_minecar_cpp_FUN_006615d4;
  return pCVar1;
}


// Assembly code:
// 00520f20: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_minecar.cpp_FUN_00520f20
//   XREF to: Stack[0x4] (READ)
// 00520f24: PUSH EDX
// 00520f25: CALL core_platfrm.cpp_FUN_0054c850
//   XREF to: 0054c850 (UNCONDITIONAL_CALL)
// 00520f2a: ADD ESP,0x4
// 00520f2d: MOV dword ptr [EAX + 0x154],0x6615d4
//   XREF to: 006615d4 (DATA)
// 00520f37: RET
