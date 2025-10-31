// Name: engine_drender.cpp_CDemonRenderer_depthTest_FUN_0048dc50
// Address: 0048dc50
// Address Range: [[0048dc50, 0048dcbd]]
// Convention: __cdecl
// Signature: int engine_drender.cpp_CDemonRenderer_depthTest_FUN_0048dc50(CDemonRenderer * this_ptr, SRenderVertex * vertex_ptr)
// Cross-references:
//   core_fire.cpp_CPopcorn_render_FUN_004c64c0 (004c64c0) at 004c6516 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CRainDrop_render_FUN_004c6830 (004c6830) at 004c6886 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CShell_render_FUN_004c6200 (004c6200) at 004c6261 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CSmokeParticle_render_FUN_004bf4c0 (004bf4c0) at 004bf512 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CSpark_render_FUN_004c0420 (004c0420) at 004c0484 [UNCONDITIONAL_CALL]
//   core_weather.cpp_CWeather_FUN_005ef190 (005ef190) at 005ef33c [UNCONDITIONAL_CALL]
// Globals:
//   void*[1024] g_ScreenBufferArray
//   uint*[1024] g_ZBufferScanlineArray
// Function calls:
//   engine_prim.c_replaceWWithDepth_FUN_00552110

#include "nocturne.h"

int __cdecl
engine_drender_cpp_CDemonRenderer_depthTest_FUN_0048dc50
          (CDemonRenderer *this_ptr,SRenderVertex *vertex_ptr)

{
  int iVar1;
  int iVar2;
  
  if ((int)((vertex_ptr->projected_vertex).screen_x & -0x80000000) != 0) {
    return 0;
  }
  if (this_ptr->face_count == 0) {
    engine_prim_c_replaceWWithDepth_FUN_00552110(vertex_ptr,1);
  }
  iVar1 = (vertex_ptr->projected_vertex).screen_x >> 0x10;
  iVar2 = (vertex_ptr->projected_vertex).screen_y >> 0x10;
  if ((vertex_ptr->projected_vertex).transformed_y == 0) {
    if ((vertex_ptr->projected_vertex).transformed_z < (int)g_ZBufferScanlineArray[iVar2][iVar1]) {
      return 0;
    }
  }
  else if ((vertex_ptr->projected_vertex).transformed_z <
           *(int *)((int)g_ScreenBufferArray[iVar2] + iVar1 * 4)) {
    return 0;
  }
  return 1;
}


// Assembly code:
// 0048dc50: PUSH EBX
//   Label: engine_drender.cpp_CDemonRenderer_depthTest_FUN_0048dc50
// 0048dc51: PUSH ESI
// 0048dc52: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0048dc56: TEST byte ptr [EBX + 0x13],0x80
// 0048dc5a: JNZ 0x0048dc91
//   XREF to: 0048dc91 (CONDITIONAL_JUMP)
// 0048dc5c: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0048dc60: CMP dword ptr [EAX + 0x4],0x0
// 0048dc64: JZ 0x0048dc96
//   XREF to: 0048dc96 (CONDITIONAL_JUMP)
// 0048dc66: MOV ECX,dword ptr [ESP + 0xc]
//   Label: LAB_0048dc66
//   XREF to: Stack[0x4] (READ)
// 0048dc6a: MOV EAX,dword ptr [EBX + 0x10]
// 0048dc6d: MOV EDX,dword ptr [EBX + 0x14]
// 0048dc70: SAR EAX,0x10
// 0048dc73: SAR EDX,0x10
// 0048dc76: MOV ESI,dword ptr [ECX + 0x4]
// 0048dc79: SHL EAX,0x2
// 0048dc7c: SHL EDX,0x2
// 0048dc7f: TEST ESI,ESI
// 0048dc81: JNZ 0x0048dca3
//   XREF to: 0048dca3 (CONDITIONAL_JUMP)
// 0048dc83: MOV EDX,dword ptr [EDX + 0x2cf7d5c]
//   XREF to: 02cf7d5c (DATA)
// 0048dc89: MOV EAX,dword ptr [EDX + EAX*0x1]
// 0048dc8c: CMP EAX,dword ptr [EBX + 0x8]
// 0048dc8f: JLE 0x0048dcb6
//   XREF to: 0048dcb6 (CONDITIONAL_JUMP)
// 0048dc91: XOR EAX,EAX
//   Label: LAB_0048dc91
// 0048dc93: POP ESI
// 0048dc94: POP EBX
// 0048dc95: RET
// 0048dc96: PUSH 0x1
//   Label: LAB_0048dc96
// 0048dc98: PUSH EBX
// 0048dc99: CALL engine_prim.c_replaceWWithDepth_FUN_00552110
//   XREF to: 00552110 (UNCONDITIONAL_CALL)
// 0048dc9e: ADD ESP,0x8
// 0048dca1: JMP 0x0048dc66
//   XREF to: 0048dc66 (UNCONDITIONAL_JUMP)
// 0048dca3: MOV EDX,dword ptr [EDX + 0x2cf6a9c]
//   Label: LAB_0048dca3
//   XREF to: 02cf6a9c (DATA)
// 0048dca9: MOV EAX,dword ptr [EDX + EAX*0x1]
// 0048dcac: CMP EAX,dword ptr [EBX + 0x8]
// 0048dcaf: JLE 0x0048dcb6
//   XREF to: 0048dcb6 (CONDITIONAL_JUMP)
// 0048dcb1: XOR EAX,EAX
// 0048dcb3: POP ESI
// 0048dcb4: POP EBX
// 0048dcb5: RET
// 0048dcb6: MOV EAX,0x1
//   Label: LAB_0048dcb6
// 0048dcbb: POP ESI
// 0048dcbc: POP EBX
// 0048dcbd: RET
