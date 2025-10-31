// Name: core_charactr.cpp_CCharacter_FUN_004285d0
// Address: 004285d0
// Address Range: [[004285d0, 0042861d]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_004285d0(CCharacter * this_ptr)
// Cross-references:
//   core_stranger.cpp_CStranger_FUN_005bfb10 (005bfb10) at 005bfb47 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0065b834
// Function calls:
//   core_actor.cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_FUN_004285d0(CCharacter *this_ptr)

{
  undefined4 uVar1;
  CVector3f *unaff_EBX;
  int unaff_retaddr;
  undefined4 uStack00000010;
  CVector3f *in_stack_0000002c;
  CVector3f *in_stack_00000030;
  
  (*(this_ptr->base_actor).metadata.vtable[1].handleFootstep)
            (&this_ptr->base_actor,unaff_EBX,unaff_retaddr,(float)this_ptr);
  uStack00000010 = 0x4285f5;
  core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0
            (&this_ptr->base_actor,in_stack_0000002c,in_stack_00000030);
  uVar1 = _DAT_0065b834;
  this_ptr->field2_0x240c[0x24] = '\0';
  this_ptr->field2_0x240c[0x25] = '\0';
  this_ptr->field2_0x240c[0x26] = '\0';
  this_ptr->field2_0x240c[0x27] = '\0';
  *(undefined4 *)(this_ptr->field2_0x240c + 0x20) = *(undefined4 *)(this_ptr->field2_0x240c + 0x24);
  *(undefined4 *)(this_ptr->field2_0x240c + 0x1c) = *(undefined4 *)(this_ptr->field2_0x240c + 0x20);
  *(undefined4 *)(this_ptr->field2_0x240c + 8) = uVar1;
  return;
}


// Assembly code:
// 004285d0: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_004285d0
// 004285d1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004285d5: PUSH EBX
// 004285d6: MOV EAX,dword ptr [EBX + 0x154]
// 004285dc: CALL dword ptr [EAX + 0x10c]
// 004285e2: ADD ESP,0x4
// 004285e5: MOV EDX,dword ptr [ESP + 0x10]
// 004285e9: PUSH EDX
// 004285ea: MOV ECX,dword ptr [ESP + 0x10]
// 004285ee: PUSH ECX
// 004285ef: PUSH EBX
// 004285f0: CALL core_actor.cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0
//   XREF to: 00409fb0 (UNCONDITIONAL_CALL)
// 004285f5: LEA EAX,[EBX + 0x2428]
// 004285fb: FLD float ptr [0x0065b834]
//   XREF to: 0065b834 (READ)
// 00428601: MOV dword ptr [EAX + 0x8],0x0
// 00428608: ADD ESP,0xc
// 0042860b: MOV EDX,dword ptr [EAX + 0x8]
// 0042860e: MOV dword ptr [EAX + 0x4],EDX
// 00428611: MOV EDX,dword ptr [EAX + 0x4]
// 00428614: MOV dword ptr [EAX],EDX
// 00428616: FSTP float ptr [EBX + 0x2414]
// 0042861c: POP EBX
// 0042861d: RET
