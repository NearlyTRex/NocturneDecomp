// Name: core_fire.cpp_CStake_dtor_FUN_004c9760
// Address: 004c9760
// Address Range: [[004c9760, 004c9775]]
// Convention: __cdecl
// Signature: CStake * core_fire.cpp_CStake_dtor_FUN_004c9760(CStake * this_ptr)
// Function calls:
//   core_box.cpp_CBox_dtor_FUN_0041dd00

#include "nocturne.h"

CStake * __cdecl core_fire_cpp_CStake_dtor_FUN_004c9760(CStake *this_ptr)

{
  CBox *pCVar1;
  
  pCVar1 = core_box_cpp_CBox_dtor_FUN_0041dd00(&this_ptr->box);
  return (CStake *)&pCVar1[-1].is_valid;
}


// Assembly code:
// 004c9760: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_fire.cpp_CStake_dtor_FUN_004c9760
//   XREF to: Stack[0x4] (READ)
// 004c9764: PUSH 0x0
// 004c9766: ADD EAX,0x4
// 004c9769: PUSH EAX
// 004c976a: CALL core_box.cpp_CBox_dtor_FUN_0041dd00
//   XREF to: 0041dd00 (UNCONDITIONAL_CALL)
// 004c976f: ADD ESP,0x8
// 004c9772: SUB EAX,0x4
// 004c9775: RET
