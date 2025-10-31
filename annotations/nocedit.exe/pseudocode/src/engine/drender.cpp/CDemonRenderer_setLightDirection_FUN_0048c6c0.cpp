// Name: engine_drender.cpp_CDemonRenderer_setLightDirection_FUN_0048c6c0
// Address: 0048c6c0
// Address Range: [[0048c6c0, 0048c6d9]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_setLightDirection_FUN_0048c6c0(CDemonRenderer * this_ptr, CVector3i * direction)
// Cross-references:
//   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190 (0056a190) at 0056a1ab [UNCONDITIONAL_CALL]
// Function calls:
//   engine_light.cpp_setDirectionalLightVector_FUN_005054d0

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_setLightDirection_FUN_0048c6c0
          (CDemonRenderer *this_ptr,CVector3i *direction)

{
  engine_light_cpp_setDirectionalLightVector_FUN_005054d0(direction->x,direction->y,direction->z);
  return;
}


// Assembly code:
// 0048c6c0: PUSH EBX
//   Label: engine_drender.cpp_CDemonRenderer_setLightDirection_FUN_0048c6c0
// 0048c6c1: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0048c6c5: MOV EDX,dword ptr [EAX + 0x8]
// 0048c6c8: PUSH EDX
// 0048c6c9: MOV ECX,dword ptr [EAX + 0x4]
// 0048c6cc: PUSH ECX
// 0048c6cd: MOV EBX,dword ptr [EAX]
// 0048c6cf: PUSH EBX
// 0048c6d0: CALL engine_light.cpp_setDirectionalLightVector_FUN_005054d0
//   XREF to: 005054d0 (UNCONDITIONAL_CALL)
// 0048c6d5: ADD ESP,0xc
// 0048c6d8: POP EBX
// 0048c6d9: RET
