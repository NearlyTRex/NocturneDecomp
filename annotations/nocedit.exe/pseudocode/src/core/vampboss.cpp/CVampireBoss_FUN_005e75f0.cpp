// Name: core_vampboss.cpp_CVampireBoss_FUN_005e75f0
// Address: 005e75f0
// Address Range: [[005e75f0, 005e764b]]
// Convention: __cdecl
// Signature: int core_vampboss.cpp_CVampireBoss_FUN_005e75f0(CVampireBoss * this_ptr)
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042bc20

#include "nocturne.h"

int __cdecl core_vampboss_cpp_CVampireBoss_FUN_005e75f0(CVampireBoss *this_ptr)

{
  int iVar1;
  SCollisionInfo *unaff_ESI;
  int *in_stack_00000008;
  
  if (*in_stack_00000008 != 2) {
    iVar1 = (*(this_ptr->base_enemy).base_character.base_actor.vtable[1].hasCollision)
                      ((CDemonActor *)this_ptr,unaff_ESI);
    if (iVar1 < 2) {
      if (((*in_stack_00000008 == 1) || (*in_stack_00000008 == 3)) && (this_ptr->form == 2)) {
        in_stack_00000008[8] = (int)(this_ptr->field1_0xbeb4 + 8);
        return 1;
      }
      iVar1 = core_charactr_cpp_CCharacter_FUN_0042bc20((CCharacter *)this_ptr);
      return iVar1;
    }
  }
  return 0;
}


// Assembly code:
// 005e75f0: PUSH EBX
//   Label: core_vampboss.cpp_CVampireBoss_FUN_005e75f0
// 005e75f1: PUSH ESI
// 005e75f2: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005e75f6: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005e75fa: CMP dword ptr [EBX],0x2
// 005e75fd: JNZ 0x005e7604
//   XREF to: 005e7604 (CONDITIONAL_JUMP)
// 005e75ff: XOR EAX,EAX
//   Label: LAB_005e75ff
// 005e7601: POP ESI
// 005e7602: POP EBX
// 005e7603: RET
// 005e7604: PUSH ESI
//   Label: LAB_005e7604
// 005e7605: MOV EAX,dword ptr [ESI + 0x154]
// 005e760b: CALL dword ptr [EAX + 0x120]
// 005e7611: ADD ESP,0x4
// 005e7614: CMP EAX,0x1
// 005e7617: JG 0x005e75ff
//   XREF to: 005e75ff (CONDITIONAL_JUMP)
// 005e7619: MOV ECX,dword ptr [EBX]
// 005e761b: CMP ECX,0x1
// 005e761e: JNZ 0x005e763a
//   XREF to: 005e763a (CONDITIONAL_JUMP)
// 005e7620: CMP dword ptr [ESI + 0xcdcc0],0x2
//   Label: LAB_005e7620
// 005e7627: JNZ 0x005e763f
//   XREF to: 005e763f (CONDITIONAL_JUMP)
// 005e7629: ADD ESI,0xbebc
// 005e762f: MOV EAX,0x1
// 005e7634: MOV dword ptr [EBX + 0x20],ESI
// 005e7637: POP ESI
// 005e7638: POP EBX
// 005e7639: RET
// 005e763a: CMP ECX,0x3
//   Label: LAB_005e763a
// 005e763d: JZ 0x005e7620
//   XREF to: 005e7620 (CONDITIONAL_JUMP)
// 005e763f: PUSH EBX
//   Label: LAB_005e763f
// 005e7640: PUSH ESI
// 005e7641: CALL core_charactr.cpp_CCharacter_FUN_0042bc20
//   XREF to: 0042bc20 (UNCONDITIONAL_CALL)
// 005e7646: ADD ESP,0x8
// 005e7649: POP ESI
// 005e764a: POP EBX
// 005e764b: RET
