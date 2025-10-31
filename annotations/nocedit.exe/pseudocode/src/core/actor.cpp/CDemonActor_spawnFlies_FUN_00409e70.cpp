// Name: core_actor.cpp_CDemonActor_spawnFlies_FUN_00409e70
// Address: 00409e70
// Address Range: [[00409e70, 00409eb2]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CDemonActor_spawnFlies_FUN_00409e70(CDemonActor * this_ptr, int fly_count, float spawn_radius)
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_0042df90 (0042df90) at 0042dfa8 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_actor_cpp_006138f2
//   CGore* g_CGorePtr = 02d83364
//   CGore g_CGoreInstance
// Function calls:
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   core_flies.cpp_FUN_004cca50
//   core_gore.cpp_CGore_FUN_004ee030

#include "nocturne.h"

void __cdecl
core_actor_cpp_CDemonActor_spawnFlies_FUN_00409e70
          (CDemonActor *this_ptr,int fly_count,float spawn_radius)

{
  int iVar1;
  
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x510);
  iVar1 = core_flies_cpp_FUN_004cca50();
  if (iVar1 != 0) {
    return;
  }
  core_gore_cpp_CGore_FUN_004ee030(g_CGorePtr,this_ptr);
  return;
}


// Assembly code:
// 00409e70: PUSH EBX
//   Label: core_actor.cpp_CDemonActor_spawnFlies_FUN_00409e70
// 00409e71: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00409e75: PUSH 0x510
// 00409e7a: PUSH 0x6138f2
//   XREF to: 006138f2 (DATA)
// 00409e7f: PUSH EBX
// 00409e80: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 00409e85: ADD ESP,0xc
// 00409e88: PUSH EBX
// 00409e89: CALL core_flies.cpp_FUN_004cca50
//   XREF to: 004cca50 (UNCONDITIONAL_CALL)
// 00409e8e: ADD ESP,0x4
// 00409e91: TEST EAX,EAX
// 00409e93: JZ 0x00409e97
//   XREF to: 00409e97 (CONDITIONAL_JUMP)
// 00409e95: POP EBX
// 00409e96: RET
// 00409e97: PUSH EAX
//   Label: LAB_00409e97
// 00409e98: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00409e9c: PUSH dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 00409ea0: PUSH EDX
// 00409ea1: PUSH EBX
// 00409ea2: MOV ECX,dword ptr [0x0067b9a0]
//   XREF to: 02d83364 (PARAM)
//   XREF to: 0067b9a0 (READ)
// 00409ea8: PUSH ECX
//   XREF to: 02d83364 (DATA)
// 00409ea9: CALL core_gore.cpp_CGore_FUN_004ee030
//   XREF to: 004ee030 (UNCONDITIONAL_CALL)
// 00409eae: ADD ESP,0x14
// 00409eb1: POP EBX
// 00409eb2: RET
