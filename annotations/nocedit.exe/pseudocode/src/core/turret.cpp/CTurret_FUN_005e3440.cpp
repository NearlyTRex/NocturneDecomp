// Name: core_turret.cpp_CTurret_FUN_005e3440
// Address: 005e3440
// Address Range: [[005e3440, 005e34a8]]
// Convention: __cdecl
// Signature: void core_turret.cpp_CTurret_FUN_005e3440(CTurret * this_ptr)
// Globals:
//   undefined4 DAT_00664b6c
//   undefined4 DAT_00664b70
// Function calls:
//   core_actor.cpp_CDemonActor_getInteractionInfo_FUN_0040a030

#include "nocturne.h"

void __cdecl core_turret_cpp_CTurret_FUN_005e3440(CTurret *this_ptr)

{
  float fVar1;
  int iVar2;
  float fVar3;
  SInteractionInfo *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030
            ((CDemonActor *)this_ptr,in_stack_00000008);
  if (this_ptr->can_manual_aim == 0) {
    return;
  }
  in_stack_00000008->can_interact = 1;
  iVar2 = *(int *)this_ptr->field12_0x85c;
  in_stack_00000008->yaw_min = 6.2831855;
  in_stack_00000008->yaw_max = -6.2831855;
  in_stack_00000008->reference_data = iVar2;
  fVar3 = DAT_00664b6c;
  in_stack_00000008->pitch_min = DAT_00664b70 - (this_ptr->base_weapon).base_actor.orient.pitch;
  fVar1 = (this_ptr->base_weapon).base_actor.orient.pitch;
  in_stack_00000008->distance_min = -4.0;
  in_stack_00000008->pitch_max = fVar3 - fVar1;
  in_stack_00000008->distance_max = 0.0;
  return;
}


// Assembly code:
// 005e3440: PUSH EBX
//   Label: core_turret.cpp_CTurret_FUN_005e3440
// 005e3441: PUSH ESI
// 005e3442: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005e3446: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005e344a: PUSH EBX
// 005e344b: PUSH ESI
// 005e344c: CALL core_actor.cpp_CDemonActor_getInteractionInfo_FUN_0040a030
//   XREF to: 0040a030 (UNCONDITIONAL_CALL)
// 005e3451: MOV EDX,dword ptr [ESI + 0x858]
// 005e3457: ADD ESP,0x8
// 005e345a: TEST EDX,EDX
// 005e345c: JNZ 0x005e3461
//   XREF to: 005e3461 (CONDITIONAL_JUMP)
// 005e345e: POP ESI
// 005e345f: POP EBX
// 005e3460: RET
// 005e3461: MOV dword ptr [EBX],0x1
//   Label: LAB_005e3461
// 005e3467: MOV EAX,dword ptr [ESI + 0x85c]
// 005e346d: MOV dword ptr [EBX + 0x10],0x40c90fdb
// 005e3474: MOV dword ptr [EBX + 0x14],0xc0c90fdb
// 005e347b: MOV dword ptr [EBX + 0x4],EAX
// 005e347e: FLD float ptr [0x00664b70]
//   XREF to: 00664b70 (READ)
// 005e3484: FSUB float ptr [ESI + 0x30]
// 005e3487: FLD float ptr [0x00664b6c]
//   XREF to: 00664b6c (READ)
// 005e348d: FXCH
// 005e348f: FSTP float ptr [EBX + 0x18]
// 005e3492: FSUB float ptr [ESI + 0x30]
// 005e3495: MOV dword ptr [EBX + 0x8],0xc0800000
// 005e349c: FSTP float ptr [EBX + 0x1c]
// 005e349f: MOV dword ptr [EBX + 0xc],0x0
// 005e34a6: POP ESI
// 005e34a7: POP EBX
// 005e34a8: RET
