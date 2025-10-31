// Name: core_cloth.cpp_FUN_0043b790
// Address: 0043b790
// Address Range: [[0043b790, 0043b7d1]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_0043b790()
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   core_cloth.cpp_FUN_0043b7e0
//   engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960

#include "nocturne.h"

void core_cloth_cpp_FUN_0043b790(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = 0;
  engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960(g_CDemonRendererPtr,0xff);
  if (0 < *(int *)(in_stack_00000004 + 0x3ce8c)) {
    do {
      core_cloth_cpp_FUN_0043b7e0();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_stack_00000004 + 0x3ce8c));
  }
  return;
}


// Assembly code:
// 0043b790: PUSH EBX
//   Label: core_cloth.cpp_FUN_0043b790
// 0043b791: PUSH ESI
// 0043b792: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0043b796: PUSH 0xff
// 0043b79b: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0043b7a1: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0043b7a2: XOR EBX,EBX
// 0043b7a4: CALL engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
//   XREF to: 0048c960 (UNCONDITIONAL_CALL)
// 0043b7a9: MOV ECX,dword ptr [ESI + 0x3ce8c]
// 0043b7af: ADD ESP,0x8
// 0043b7b2: TEST ECX,ECX
// 0043b7b4: JLE 0x0043b7cf
//   XREF to: 0043b7cf (CONDITIONAL_JUMP)
// 0043b7b6: PUSH EDI
// 0043b7b7: PUSH 0x0
//   Label: LAB_0043b7b7
// 0043b7b9: PUSH EBX
// 0043b7ba: PUSH ESI
// 0043b7bb: CALL core_cloth.cpp_FUN_0043b7e0
//   XREF to: 0043b7e0 (UNCONDITIONAL_CALL)
// 0043b7c0: INC EBX
// 0043b7c1: MOV EDI,dword ptr [ESI + 0x3ce8c]
// 0043b7c7: ADD ESP,0xc
// 0043b7ca: CMP EBX,EDI
// 0043b7cc: JL 0x0043b7b7
//   XREF to: 0043b7b7 (CONDITIONAL_JUMP)
// 0043b7ce: POP EDI
// 0043b7cf: POP ESI
//   Label: LAB_0043b7cf
// 0043b7d0: POP EBX
// 0043b7d1: RET
