// Name: core_charactr.cpp_CCharacter_FUN_0042c580
// Address: 0042c580
// Address Range: [[0042c580, 0042c5e0]]
// Convention: __cdecl
// Signature: int core_charactr.cpp_CCharacter_FUN_0042c580(CCharacter * this_ptr)
// Cross-references:
//   core_stranger.cpp_CStranger_FUN_005c67c0 (005c67c0) at 005c67e0 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_DIE_006171a2
//   TerminatedCString s_DEAD_006171a6
// Function calls:
//   core_motion.cpp_CMotionController_FUN_0052dcf0
//   crt_string.c_stricmp_FUN_005fe7f0
//   crt_string.c_strnicmp_FUN_005ff070

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_FUN_0042c580(CCharacter *this_ptr)

{
  char *pcVar1;
  int iVar2;
  int unaff_EBX;
  char *str2;
  
  if ((this_ptr->base_actor).was_created == 2) {
    return 2;
  }
  str2 = (char *)0x3;
  pcVar1 = (char *)core_motion_cpp_CMotionController_FUN_0052dcf0
                             (&(this_ptr->model).motion_controller);
  iVar2 = crt_string_c_strnicmp_FUN_005ff070(pcVar1,str2,unaff_EBX);
  if (iVar2 == 0) {
    return 1;
  }
  pcVar1 = (char *)core_motion_cpp_CMotionController_FUN_0052dcf0
                             (&(this_ptr->model).motion_controller);
  iVar2 = crt_string_c_stricmp_FUN_005fe7f0(pcVar1,(char *)this_ptr);
  if (iVar2 == 0) {
    return 2;
  }
  return 0;
}


// Assembly code:
// 0042c580: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042c580
// 0042c581: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0042c585: MOV EDX,dword ptr [EBX + 0x70]
// 0042c588: CMP EDX,0x2
// 0042c58b: JNZ 0x0042c591
//   XREF to: 0042c591 (CONDITIONAL_JUMP)
// 0042c58d: MOV EAX,EDX
// 0042c58f: POP EBX
// 0042c590: RET
// 0042c591: PUSH 0x3
//   Label: LAB_0042c591
// 0042c593: PUSH 0x6171a2
//   XREF to: 006171a2 (DATA)
// 0042c598: ADD EBX,0x158
// 0042c59e: PUSH EBX
// 0042c59f: CALL core_motion.cpp_CMotionController_FUN_0052dcf0
//   XREF to: 0052dcf0 (UNCONDITIONAL_CALL)
// 0042c5a4: ADD ESP,0x4
// 0042c5a7: PUSH EAX
// 0042c5a8: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 0042c5ad: ADD ESP,0xc
// 0042c5b0: TEST EAX,EAX
// 0042c5b2: JNZ 0x0042c5bb
//   XREF to: 0042c5bb (CONDITIONAL_JUMP)
// 0042c5b4: MOV EAX,0x1
// 0042c5b9: POP EBX
// 0042c5ba: RET
// 0042c5bb: PUSH 0x6171a6
//   Label: LAB_0042c5bb
//   XREF to: 006171a6 (DATA)
// 0042c5c0: PUSH EBX
// 0042c5c1: CALL core_motion.cpp_CMotionController_FUN_0052dcf0
//   XREF to: 0052dcf0 (UNCONDITIONAL_CALL)
// 0042c5c6: ADD ESP,0x4
// 0042c5c9: PUSH EAX
// 0042c5ca: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0042c5cf: ADD ESP,0x8
// 0042c5d2: TEST EAX,EAX
// 0042c5d4: JNZ 0x0042c5dd
//   XREF to: 0042c5dd (CONDITIONAL_JUMP)
// 0042c5d6: MOV EAX,0x2
// 0042c5db: POP EBX
// 0042c5dc: RET
// 0042c5dd: XOR EAX,EAX
//   Label: LAB_0042c5dd
// 0042c5df: POP EBX
// 0042c5e0: RET
