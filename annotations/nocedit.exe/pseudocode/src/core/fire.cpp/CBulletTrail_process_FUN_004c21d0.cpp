// Name: core_fire.cpp_CBulletTrail_process_FUN_004c21d0
// Address: 004c21d0
// Address Range: [[004c21d0, 004c21e7]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CBulletTrail_process_FUN_004c21d0(CBulletTrail * this_ptr)
// Cross-references:
//   core_fire.cpp_CFireEffect_process_FUN_004c6ec0 (004c6ec0) at 004c6fae [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl core_fire_cpp_CBulletTrail_process_FUN_004c21d0(CBulletTrail *this_ptr)

{
  int iVar1;
  
  iVar1 = *(int *)(this_ptr->field0_0x0 + 0x20) + -1;
  *(int *)(this_ptr->field0_0x0 + 0x20) = iVar1;
  if (-1 < iVar1) {
    return;
  }
  this_ptr->field0_0x0[0x20] = '\0';
  this_ptr->field0_0x0[0x21] = '\0';
  this_ptr->field0_0x0[0x22] = '\0';
  this_ptr->field0_0x0[0x23] = '\0';
  return;
}


// Assembly code:
// 004c21d0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_fire.cpp_CBulletTrail_process_FUN_004c21d0
//   XREF to: Stack[0x4] (READ)
// 004c21d4: MOV EDX,dword ptr [EAX + 0x20]
// 004c21d7: DEC EDX
// 004c21d8: MOV dword ptr [EAX + 0x20],EDX
// 004c21db: TEST EDX,EDX
// 004c21dd: JL 0x004c21e0
//   XREF to: 004c21e0 (CONDITIONAL_JUMP)
// 004c21df: RET
// 004c21e0: MOV dword ptr [EAX + 0x20],0x0
//   Label: LAB_004c21e0
// 004c21e7: RET
