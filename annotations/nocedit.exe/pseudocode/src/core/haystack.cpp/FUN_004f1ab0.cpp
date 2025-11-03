// Name: core_haystack.cpp_FUN_004f1ab0
// Address: 004f1ab0
// Address Range: [[004f1ab0, 004f1b48]]
// Convention: unknown
// Signature: undefined core_haystack.cpp_FUN_004f1ab0()
// Cross-references:
//   core_haystack.cpp_FUN_004f1970 (004f1970) at 004f19e5 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 g_CDemonSetInstance.damage_listener_count
//   undefined4 g_CDemonSetInstance.damage_listeners
//   undefined4 DAT_03263318
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00

#include "nocturne.h"

/* Signature: undefined1 actors_hero_haystack.cpp_FUN_004f1ab0(undefined4 param_1, undefined4
   param_2) */

void core_haystack_cpp_FUN_004f1ab0(void)

{
  CDemonActor *this_ptr;
  CVector3f *input_local_point;
  BADSPACEBASE *in_ESP;
  int iVar1;
  int iVar2;
  CDemonActor *in_stack_00000004;
  SDamageInfo SStack_5c;
  CDemonActor *pCStack_20;
  
  input_local_point = (CVector3f *)core_skeleton_cpp_CDeformableModelInstance_FUN_0059fb00();
  iVar2 = 0;
  iVar1 = 0;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000004,(CVector3f *)&stack0xffffffe8,input_local_point);
  while( true ) {
    if (g_CDemonSetPtr->damage_listener_count <= iVar2) break;
    this_ptr = *(CDemonActor **)(g_CDemonSetPtr->field19_0x14f0a0 + iVar1 + -4);
    if (this_ptr != in_stack_00000004) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_5c);
      SStack_5c.field0_0x0 = (int)&SStack_5c.damage_amount;
      SStack_5c.damage_flags = 0x41200000;
      SStack_5c.wielder = in_stack_00000004;
      pCStack_20 = in_stack_00000004;
      (*this_ptr->vtable[1].playAmbientSound)(this_ptr,&stack0xfffffff0);
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  }
  return;
}


// Assembly code:
// 004f1ab0: PUSH EBX
//   Label: core_haystack.cpp_FUN_004f1ab0
// 004f1ab1: PUSH ESI
// 004f1ab2: PUSH EDI
// 004f1ab3: PUSH EBP
// 004f1ab4: SUB ESP,0x54
// 004f1ab7: MOV EBP,dword ptr [ESP + 0x68]
//   XREF to: Stack[0x4] (READ)
// 004f1abb: MOV EDX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x8] (READ)
// 004f1abf: PUSH EDX
// 004f1ac0: LEA EAX,[ESP + 0x40]
//   XREF to: Stack[-0x28] (DATA)
// 004f1ac4: PUSH EAX
// 004f1ac5: LEA EAX,[EBP + 0x158]
// 004f1acb: PUSH EAX
// 004f1acc: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 004f1ad1: ADD ESP,0xc
// 004f1ad4: PUSH EAX
// 004f1ad5: LEA EAX,[ESP + 0x4c]
//   XREF to: Stack[-0x1c] (DATA)
// 004f1ad9: PUSH EAX
// 004f1ada: PUSH EBP
// 004f1adb: XOR EDI,EDI
// 004f1add: XOR ESI,ESI
// 004f1adf: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004f1ae4: ADD ESP,0xc
// 004f1ae7: MOV EBX,dword ptr [0x006810c8]
//   Label: LAB_004f1ae7
//   XREF to: 006810c8 (READ)
// 004f1aed: CMP EDI,dword ptr [EBX + 0x14f098]
//   XREF to: 03263310 (READ)
// 004f1af3: JGE 0x004f1b41
//   XREF to: 004f1b41 (CONDITIONAL_JUMP)
// 004f1af5: MOV EBX,dword ptr [ESI + EBX*0x1 + 0x14f09c]
//   XREF to: 03263314 (READ)
//   XREF to: 03263318 (READ)
// 004f1afc: CMP EBX,EBP
// 004f1afe: JNZ 0x004f1b06
//   XREF to: 004f1b06 (CONDITIONAL_JUMP)
// 004f1b00: INC EDI
//   Label: LAB_004f1b00
// 004f1b01: ADD ESI,0x4
// 004f1b04: JMP 0x004f1ae7
//   XREF to: 004f1ae7 (UNCONDITIONAL_JUMP)
// 004f1b06: MOV EAX,ESP
//   Label: LAB_004f1b06
// 004f1b08: PUSH EAX
// 004f1b09: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 004f1b0e: MOV EAX,0x41200000
// 004f1b13: ADD ESP,0x4
// 004f1b16: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 004f1b1a: MOV EAX,ESP
// 004f1b1c: PUSH EAX
// 004f1b1d: MOV dword ptr [ESP + 0x38],EBP
//   XREF to: Stack[-0x30] (WRITE)
// 004f1b21: PUSH 0x3f000000
// 004f1b26: LEA EAX,[ESP + 0x50]
//   XREF to: Stack[-0x1c] (DATA)
// 004f1b2a: MOV dword ptr [ESP + 0x40],EBP
//   XREF to: Stack[-0x2c] (WRITE)
// 004f1b2e: PUSH EAX
// 004f1b2f: MOV EDX,dword ptr [EBX + 0x154]
// 004f1b35: PUSH EBX
// 004f1b36: CALL dword ptr [EDX + 0x114]
// 004f1b3c: ADD ESP,0x10
// 004f1b3f: JMP 0x004f1b00
//   XREF to: 004f1b00 (UNCONDITIONAL_JUMP)
// 004f1b41: ADD ESP,0x54
//   Label: LAB_004f1b41
// 004f1b44: POP EBP
// 004f1b45: POP EDI
// 004f1b46: POP ESI
// 004f1b47: POP EBX
// 004f1b48: RET
