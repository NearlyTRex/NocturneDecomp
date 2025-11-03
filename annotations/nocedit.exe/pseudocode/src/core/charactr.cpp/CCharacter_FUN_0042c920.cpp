// Name: core_charactr.cpp_CCharacter_FUN_0042c920
// Address: 0042c920
// Address Range: [[0042c920, 0042c9ce]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042c920(CCharacter * this_ptr)
// Cross-references:
//   core_werewolf.cpp_FUN_005f11a0 (005f11a0) at 005f11cd [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_STAND_00617252
//   TerminatedCString s_STAND_00617258
// Function calls:
//   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0
//   core_motion.cpp_FUN_0052db90

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042c920(CCharacter *this_ptr)

{
  CMotionList *this_ptr_00;
  int iVar1;
  CVector3f *in_stack_00000008;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  if (in_stack_00000008 == (CVector3f *)0x0) {
    if (((*(int *)(this_ptr->field11_0x25a0 + 0x10) != 0) && (*(int *)this_ptr->field11_0x25a0 != 0)
        ) && ((this_ptr->model).field11_0x2260[0] != '\0')) {
      this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                              (&(this_ptr->model).motion_controller);
      iVar1 = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0(this_ptr_00);
      if (-1 < iVar1) {
        core_motion_cpp_FUN_0052db90();
      }
    }
    this_ptr->field11_0x25a0[0x10] = '\0';
    this_ptr->field11_0x25a0[0x11] = '\0';
    this_ptr->field11_0x25a0[0x12] = '\0';
    this_ptr->field11_0x25a0[0x13] = '\0';
  }
  else {
    this_ptr->field11_0x25a0[0x10] = '\x01';
    this_ptr->field11_0x25a0[0x11] = '\0';
    this_ptr->field11_0x25a0[0x12] = '\0';
    this_ptr->field11_0x25a0[0x13] = '\0';
  }
  *(undefined4 *)this_ptr->field11_0x25a0 = in_stack_00000014;
  *(undefined4 *)(this_ptr->field11_0x25a0 + 4) = in_stack_00000018;
  *(undefined4 *)(this_ptr->field11_0x25a0 + 8) = in_stack_0000001c;
  (*(this_ptr->base_actor).vtable[1].setPositionAndOrientation)
            (&this_ptr->base_actor,(CVector3f *)0xbf800000,in_stack_00000008);
  return;
}


// Assembly code:
// 0042c920: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042c920
// 0042c921: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0042c925: CMP dword ptr [ESP + 0xc],0x0
//   XREF to: Stack[0x8] (READ)
// 0042c92a: JNZ 0x0042c9c3
//   XREF to: 0042c9c3 (CONDITIONAL_JUMP)
// 0042c930: PUSH ESI
// 0042c931: CMP dword ptr [EBX + 0x25b0],0x0
// 0042c938: JZ 0x0042c954
//   XREF to: 0042c954 (CONDITIONAL_JUMP)
// 0042c93a: CMP dword ptr [EBX + 0x25a0],0x0
// 0042c941: JZ 0x0042c954
//   XREF to: 0042c954 (CONDITIONAL_JUMP)
// 0042c943: LEA ESI,[EBX + 0x158]
// 0042c949: LEA EAX,[EBX + 0x23b8]
// 0042c94f: CMP byte ptr [EAX],0x0
// 0042c952: JNZ 0x0042c994
//   XREF to: 0042c994 (CONDITIONAL_JUMP)
// 0042c954: MOV dword ptr [EBX + 0x25b0],0x0
//   Label: LAB_0042c954
// 0042c95e: POP ESI
// 0042c95f: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_0042c95f
//   XREF to: Stack[0x8] (READ)
// 0042c963: MOV dword ptr [EBX + 0x25a0],EAX
// 0042c969: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 0042c96d: MOV dword ptr [EBX + 0x25a4],EAX
// 0042c973: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 0042c977: PUSH 0xbf800000
// 0042c97c: MOV dword ptr [EBX + 0x25a8],EAX
// 0042c982: PUSH EBX
// 0042c983: MOV EAX,dword ptr [EBX + 0x154]
// 0042c989: CALL dword ptr [EAX + 0x14c]
// 0042c98f: ADD ESP,0x8
// 0042c992: POP EBX
// 0042c993: RET
// 0042c994: PUSH 0x0
//   Label: LAB_0042c994
// 0042c996: PUSH 0x617252
//   XREF to: 00617252 (DATA)
// 0042c99b: PUSH ESI
// 0042c99c: CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   XREF to: 0052dce0 (UNCONDITIONAL_CALL)
// 0042c9a1: ADD ESP,0x4
// 0042c9a4: PUSH EAX
// 0042c9a5: CALL core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0
//   XREF to: 0052d4f0 (UNCONDITIONAL_CALL)
// 0042c9aa: ADD ESP,0xc
// 0042c9ad: TEST EAX,EAX
// 0042c9af: JL 0x0042c954
//   XREF to: 0042c954 (CONDITIONAL_JUMP)
// 0042c9b1: PUSH 0x1
// 0042c9b3: PUSH 0x617258
//   XREF to: 00617258 (DATA)
// 0042c9b8: PUSH ESI
// 0042c9b9: CALL core_motion.cpp_FUN_0052db90
//   XREF to: 0052db90 (UNCONDITIONAL_CALL)
// 0042c9be: ADD ESP,0xc
// 0042c9c1: JMP 0x0042c954
//   XREF to: 0042c954 (UNCONDITIONAL_JUMP)
// 0042c9c3: MOV dword ptr [EBX + 0x25b0],0x1
//   Label: LAB_0042c9c3
// 0042c9cd: JMP 0x0042c95f
//   XREF to: 0042c95f (UNCONDITIONAL_JUMP)
