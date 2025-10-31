// Name: core_fire.cpp_CToss_dtor_FUN_004c95c0
// Address: 004c95c0
// Address Range: [[004c95c0, 004c95d9]]
// Convention: __cdecl
// Signature: CToss * core_fire.cpp_CToss_dtor_FUN_004c95c0(CToss * this_ptr)
// Function calls:
//   core_box.cpp_CBox_dtor_FUN_0041dd00

#include "nocturne.h"

CToss * __cdecl core_fire_cpp_CToss_dtor_FUN_004c95c0(CToss *this_ptr)

{
  CBox *pCVar1;
  
  pCVar1 = core_box_cpp_CBox_dtor_FUN_0041dd00((CBox *)(this_ptr->field0_0x0 + 0x180));
  return (CToss *)&pCVar1[-1].scrape_points[0].raytrace_intersection;
}


// Assembly code:
// 004c95c0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_fire.cpp_CToss_dtor_FUN_004c95c0
//   XREF to: Stack[0x4] (READ)
// 004c95c4: PUSH 0x0
// 004c95c6: ADD EAX,0x180
// 004c95cb: PUSH EAX
// 004c95cc: CALL core_box.cpp_CBox_dtor_FUN_0041dd00
//   XREF to: 0041dd00 (UNCONDITIONAL_CALL)
// 004c95d1: ADD ESP,0x8
// 004c95d4: SUB EAX,0x180
// 004c95d9: RET
