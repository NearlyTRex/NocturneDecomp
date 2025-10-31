// Name: core_tentacle.cpp_CTentacle_FUN_005dbb30
// Address: 005dbb30
// Address Range: [[005dbb30, 005dbb6a]]
// Convention: __cdecl
// Signature: int core_tentacle.cpp_CTentacle_FUN_005dbb30(CTentacle * this_ptr)
// Globals:
//   TerminatedCString s_wait_00654e94
// Function calls:
//   core_actor.cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

int __cdecl core_tentacle_cpp_CTentacle_FUN_005dbb30(CTentacle *this_ptr)

{
  char *str1;
  int iVar1;
  char *unaff_EBP;
  
  str1 = (char *)core_motion_cpp_CMotionController_FUN_0052dab0();
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(str1,unaff_EBP);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720((CDemonActor *)this_ptr);
  return iVar1;
}


// Assembly code:
// 005dbb30: PUSH EBP
//   Label: core_tentacle.cpp_CTentacle_FUN_005dbb30
// 005dbb31: MOV EBP,ESP
// 005dbb33: MOV EAX,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005dbb36: PUSH 0x654e94
//   XREF to: 00654e94 (DATA)
// 005dbb3b: ADD EAX,0x158
// 005dbb40: PUSH EAX
// 005dbb41: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005dbb46: ADD ESP,0x4
// 005dbb49: PUSH EAX
// 005dbb4a: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005dbb4f: ADD ESP,0x8
// 005dbb52: TEST EAX,EAX
// 005dbb54: JNZ 0x005dbb5d
//   XREF to: 005dbb5d (CONDITIONAL_JUMP)
// 005dbb56: MOV EAX,0x1
// 005dbb5b: POP EBP
// 005dbb5c: RET
// 005dbb5d: MOV EDX,dword ptr [EBP + 0x8]
//   Label: LAB_005dbb5d
//   XREF to: Stack[0x4] (READ)
// 005dbb60: PUSH EDX
// 005dbb61: CALL core_actor.cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720
//   XREF to: 0040c720 (UNCONDITIONAL_CALL)
// 005dbb66: ADD ESP,0x4
// 005dbb69: POP EBP
// 005dbb6a: RET
