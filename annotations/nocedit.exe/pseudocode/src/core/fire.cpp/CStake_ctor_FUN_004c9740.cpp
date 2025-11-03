// Name: core_fire.cpp_CStake_ctor_FUN_004c9740
// Address: 004c9740
// Address Range: [[004c9740, 004c9753]]
// Convention: __cdecl
// Signature: CStake * core_fire.cpp_CStake_ctor_FUN_004c9740(CStake * this_ptr)
// Function calls:
//   core_box.cpp_CBox_ctor_FUN_0041dc50

#include "nocturne.h"

CStake * __cdecl core_fire_cpp_CStake_ctor_FUN_004c9740(CStake *this_ptr)

{
  CBox *pCVar1;
  
  pCVar1 = core_box_cpp_CBox_ctor_FUN_0041dc50(&this_ptr->box);
  return (CStake *)&pCVar1[-1].is_valid;
}


// Assembly code:
// 004c9740: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_fire.cpp_CStake_ctor_FUN_004c9740
//   XREF to: Stack[0x4] (READ)
// 004c9744: ADD EAX,0x4
// 004c9747: PUSH EAX
// 004c9748: CALL core_box.cpp_CBox_ctor_FUN_0041dc50
//   XREF to: 0041dc50 (UNCONDITIONAL_CALL)
// 004c974d: ADD ESP,0x4
// 004c9750: SUB EAX,0x4
// 004c9753: RET
