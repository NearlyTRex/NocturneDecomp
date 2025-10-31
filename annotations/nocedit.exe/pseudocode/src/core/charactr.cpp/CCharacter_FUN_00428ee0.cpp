// Name: core_charactr.cpp_CCharacter_FUN_00428ee0
// Address: 00428ee0
// Address Range: [[00428ee0, 00428f33]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_00428ee0(CCharacter * this_ptr)
// Function calls:
//   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_00428ee0(CCharacter *this_ptr)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  SCollisionInfo *in_stack_ffffffc0;
  float in_stack_ffffffd8;
  
  iVar1 = (*(this_ptr->base_actor).metadata.vtable[1].hasCollision)
                    (&this_ptr->base_actor,in_stack_ffffffc0);
  if (0 < iVar1) {
    return;
  }
  core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xffffffd4);
  (*(this_ptr->base_actor).metadata.vtable[1].playAmbientSoundWithVolume)
            (&this_ptr->base_actor,&stack0xffffffd8,in_stack_ffffffd8);
  return;
}


// Assembly code:
// 00428ee0: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_00428ee0
// 00428ee1: SUB ESP,0x3c
// 00428ee4: MOV EBX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 00428ee8: PUSH EBX
// 00428ee9: MOV EAX,dword ptr [EBX + 0x154]
// 00428eef: CALL dword ptr [EAX + 0x120]
// 00428ef5: ADD ESP,0x4
// 00428ef8: TEST EAX,EAX
// 00428efa: JLE 0x00428f01
//   XREF to: 00428f01 (CONDITIONAL_JUMP)
// 00428efc: ADD ESP,0x3c
// 00428eff: POP EBX
// 00428f00: RET
// 00428f01: MOV EAX,ESP
//   Label: LAB_00428f01
// 00428f03: PUSH EAX
// 00428f04: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 00428f09: ADD ESP,0x4
// 00428f0c: MOV EAX,dword ptr [ESP + 0x48]
// 00428f10: MOV dword ptr [ESP + 0x30],EAX
// 00428f14: MOV EAX,dword ptr [ESP + 0x4c]
// 00428f18: MOV dword ptr [ESP + 0x4],EAX
// 00428f1c: MOV EAX,ESP
// 00428f1e: PUSH EAX
// 00428f1f: MOV EDX,dword ptr [EBX + 0x154]
// 00428f25: PUSH EBX
// 00428f26: CALL dword ptr [EDX + 0x11c]
// 00428f2c: ADD ESP,0x8
// 00428f2f: ADD ESP,0x3c
// 00428f32: POP EBX
// 00428f33: RET
