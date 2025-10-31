// Name: core_batcreat.cpp_CBatCreature_FUN_004162f0
// Address: 004162f0
// Address Range: [[004162f0, 0041631b]]
// Convention: __cdecl
// Signature: void core_batcreat.cpp_CBatCreature_FUN_004162f0(CBatCreature * this_ptr)
// Function calls:
//   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260

#include "nocturne.h"

void __cdecl core_batcreat_cpp_CBatCreature_FUN_004162f0(CBatCreature *this_ptr)

{
  FILE *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0
            ((CDemonActor *)this_ptr,in_stack_00000008);
  core_skeledit_cpp_GetModelPtrOfFile_FUN_0058a260();
  return;
}


// Assembly code:
// 004162f0: PUSH EBX
//   Label: core_batcreat.cpp_CBatCreature_FUN_004162f0
// 004162f1: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004162f5: PUSH EDX
// 004162f6: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004162fa: PUSH ECX
// 004162fb: CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
// 00416300: ADD ESP,0x8
// 00416303: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00416307: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0041630b: PUSH EBX
// 0041630c: ADD EAX,0x158
// 00416311: PUSH EAX
// 00416312: CALL core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
//   XREF to: 0058a260 (UNCONDITIONAL_CALL)
// 00416317: ADD ESP,0x8
// 0041631a: POP EBX
// 0041631b: RET
