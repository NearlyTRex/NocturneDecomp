// Name: core_ground.cpp_CGround_render_FUN_004efc90
// Address: 004efc90
// Address Range: [[004efc90, 004efd21]]
// Convention: __cdecl
// Signature: void core_ground.cpp_CGround_render_FUN_004efc90(CGround * this_ptr)
// Cross-references:
//   core_terrain.cpp_CTerrain_render_FUN_005e1f50 (005e1f50) at 005e2027 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   core_ground.cpp_CGround_renderVisibleTerrain_FUN_004efb70
//   core_ground.cpp_CGround_transformAndStoreVertices_FUN_004ef490
//   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   engine_matrix.c_getCameraOrigin_FUN_0050e2c0

#include "nocturne.h"

void __cdecl core_ground_cpp_CGround_render_FUN_004efc90(CGround *this_ptr)

{
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int in_stack_ffffffec;
  
  engine_matrix_c_getCameraOrigin_FUN_0050e2c0((CVector3i *)&stack0xffffffe8);
  this_ptr->camera_x = in_stack_ffffffec / (this_ptr->vertical_scale << 8);
  this_ptr->camera_y = unaff_EBP / (this_ptr->vertical_scale << 8);
  if (this_ptr->camera_x < 0) {
    this_ptr->camera_x = this_ptr->camera_x + -1;
  }
  if (this_ptr->camera_y < 0) {
    this_ptr->camera_y = this_ptr->camera_y + -1;
  }
  core_ground_cpp_CGround_transformAndStoreVertices_FUN_004ef490(this_ptr);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,1);
  core_ground_cpp_CGround_renderVisibleTerrain_FUN_004efb70(this_ptr);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
  return;
}


// Assembly code:
// 004efc90: PUSH EBX
//   Label: core_ground.cpp_CGround_render_FUN_004efc90
// 004efc91: PUSH ESI
// 004efc92: PUSH EBP
// 004efc93: SUB ESP,0xc
// 004efc96: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 004efc9a: MOV ESI,ESP
// 004efc9c: CALL engine_matrix.c_getCameraOrigin_FUN_0050e2c0
//   XREF to: 0050e2c0 (UNCONDITIONAL_CALL)
// 004efca1: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 004efca4: MOV ESI,dword ptr [EBX + 0x1c]
// 004efca7: MOV EDX,EAX
// 004efca9: SHL ESI,0x8
// 004efcac: SAR EDX,0x1f
// 004efcaf: IDIV ESI
// 004efcb1: MOV dword ptr [EBX + 0x2c],EAX
// 004efcb4: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x10] (READ)
// 004efcb8: MOV ESI,dword ptr [EBX + 0x1c]
// 004efcbb: MOV EDX,EAX
// 004efcbd: SHL ESI,0x8
// 004efcc0: SAR EDX,0x1f
// 004efcc3: IDIV ESI
// 004efcc5: MOV EDX,dword ptr [EBX + 0x2c]
// 004efcc8: MOV dword ptr [EBX + 0x30],EAX
// 004efccb: TEST EDX,EDX
// 004efccd: JL 0x004efd10
//   XREF to: 004efd10 (CONDITIONAL_JUMP)
// 004efccf: MOV ESI,dword ptr [EBX + 0x30]
//   Label: LAB_004efccf
// 004efcd2: TEST ESI,ESI
// 004efcd4: JL 0x004efd18
//   XREF to: 004efd18 (CONDITIONAL_JUMP)
// 004efcd6: PUSH EBX
//   Label: LAB_004efcd6
// 004efcd7: CALL core_ground.cpp_CGround_transformAndStoreVertices_FUN_004ef490
//   XREF to: 004ef490 (UNCONDITIONAL_CALL)
// 004efcdc: ADD ESP,0x4
// 004efcdf: PUSH 0x1
// 004efce1: MOV EBP,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004efce7: PUSH EBP
//   XREF to: 02c6d578 (DATA)
// 004efce8: CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   XREF to: 0048ca00 (UNCONDITIONAL_CALL)
// 004efced: ADD ESP,0x8
// 004efcf0: PUSH EBX
// 004efcf1: CALL core_ground.cpp_CGround_renderVisibleTerrain_FUN_004efb70
//   XREF to: 004efb70 (UNCONDITIONAL_CALL)
// 004efcf6: ADD ESP,0x4
// 004efcf9: PUSH 0x0
// 004efcfb: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004efd00: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 004efd01: CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   XREF to: 0048ca00 (UNCONDITIONAL_CALL)
// 004efd06: ADD ESP,0x8
// 004efd09: ADD ESP,0xc
// 004efd0c: POP EBP
// 004efd0d: POP ESI
// 004efd0e: POP EBX
// 004efd0f: RET
// 004efd10: LEA ECX,[EDX + -0x1]
//   Label: LAB_004efd10
// 004efd13: MOV dword ptr [EBX + 0x2c],ECX
// 004efd16: JMP 0x004efccf
//   XREF to: 004efccf (UNCONDITIONAL_JUMP)
// 004efd18: PUSH EDI
//   Label: LAB_004efd18
// 004efd19: LEA EDI,[ESI + -0x1]
// 004efd1c: MOV dword ptr [EBX + 0x30],EDI
// 004efd1f: POP EDI
// 004efd20: JMP 0x004efcd6
//   XREF to: 004efcd6 (UNCONDITIONAL_JUMP)
