// Name: core_skeleton.cpp_CDeformableModelInstance_FUN_0059f230
// Address: 0059f230
// Address Range: [[0059f230, 0059f256]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_FUN_0059f230(CDeformableModelInstance * this_ptr)
// Cross-references:
//   core_stranger.cpp_CStranger_FUN_005be520 (005be520) at 005be5fa [UNCONDITIONAL_CALL]
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059f260

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_FUN_0059f230(CDeformableModelInstance *this_ptr)

{
  core_skeleton_cpp_CDeformableModelInstance_FUN_0059f260(this_ptr);
  return;
}


// Assembly code:
// 0059f230: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModelInstance_FUN_0059f230
// 0059f231: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0059f235: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 0059f239: PUSH EDX
// 0059f23a: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x10] (READ)
// 0059f23e: PUSH ECX
// 0059f23f: PUSH dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 0059f243: PUSH EAX
// 0059f244: ADD EAX,0xc
// 0059f247: PUSH EAX
// 0059f248: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0059f24c: PUSH EBX
// 0059f24d: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059f260
//   XREF to: 0059f260 (UNCONDITIONAL_CALL)
// 0059f252: ADD ESP,0x18
// 0059f255: POP EBX
// 0059f256: RET
