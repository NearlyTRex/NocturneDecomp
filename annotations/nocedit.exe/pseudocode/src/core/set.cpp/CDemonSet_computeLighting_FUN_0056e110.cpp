// Name: core_set.cpp_CDemonSet_computeLighting_FUN_0056e110
// Address: 0056e110
// Address Range: [[0056e110, 0056e173]]
// Convention: __cdecl
// Signature: int core_set.cpp_CDemonSet_computeLighting_FUN_0056e110(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, int vertex_count)
// Cross-references:
//   core_chain.cpp_FUN_004308f0 (004308f0) at 00430e36 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CBulletHole_render_FUN_004bfac0 (004bfac0) at 004bfdd2 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CGlassParticle_render_FUN_004c1ef0 (004c1ef0) at 004c207a [UNCONDITIONAL_CALL]
//   core_fire.cpp_CPopcorn_render_FUN_004c64c0 (004c64c0) at 004c6795 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CRainDrop_render_FUN_004c6830 (004c6830) at 004c6b3f [UNCONDITIONAL_CALL]
//   core_fire.cpp_CSmokeParticle_render_FUN_004bf4c0 (004bf4c0) at 004bf784 [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004ebac0 (004ebac0) at 004ebd83 [UNCONDITIONAL_CALL]
//   core_weather.cpp_CWeather_FUN_005ef190 (005ef190) at 005ef3ae [UNCONDITIONAL_CALL]
// Globals:
//   SRenderVertex[16] g_RenderVertexBuffer
//   undefined4 g_RenderVertexBuffer[0].light
//   undefined4 g_RenderVertexBuffer[0].color
//   undefined4 g_RenderVertexBuffer[0].fog
//   undefined4 g_RenderVertexBuffer[1].light
//   undefined4 g_RenderVertexBuffer[1].color
//   undefined4 g_RenderVertexBuffer[1].fog
//   undefined4 g_RenderVertexBuffer[2].light
//   undefined4 g_RenderVertexBuffer[2].color
//   undefined4 g_RenderVertexBuffer[2].fog
// Function calls:
//   core_set.cpp_CDemonSet_lightVertexColor_FUN_0056ddb0

#include "nocturne.h"

int __cdecl
core_set_cpp_CDemonSet_computeLighting_FUN_0056e110
          (CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal,
          int start_vertex_index,int vertex_count)

{
  int iVar1;
  int iVar2;
  
  core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
            (this_ptr,world_position,surface_normal,start_vertex_index,0);
  iVar1 = vertex_count * 0x30 + 0x688044;
  for (iVar2 = vertex_count + -1; 0 < iVar2; iVar2 = iVar2 + -1) {
    *(float *)(iVar1 + 0x20) = g_RenderVertexBuffer[vertex_count].light;
    *(int *)(iVar1 + 0x24) = g_RenderVertexBuffer[vertex_count].color;
    *(float *)(iVar1 + 0x28) = g_RenderVertexBuffer[vertex_count].fog;
    iVar1 = iVar1 + 0x30;
  }
  return iVar1;
}


// Assembly code:
// 0056e110: PUSH EBX
//   Label: core_set.cpp_CDemonSet_computeLighting_FUN_0056e110
// 0056e111: PUSH ESI
// 0056e112: PUSH EDI
// 0056e113: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x14] (READ)
// 0056e117: PUSH 0x0
// 0056e119: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0056e11d: PUSH EDX
// 0056e11e: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 0056e122: PUSH ECX
// 0056e123: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 0056e127: PUSH ESI
// 0056e128: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0056e12c: PUSH EDI
// 0056e12d: CALL core_set.cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
//   XREF to: 0056ddb0 (UNCONDITIONAL_CALL)
// 0056e132: ADD ESP,0x14
// 0056e135: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x10] (READ)
// 0056e139: LEA EAX,[EDX*0x4 + 0x0]
// 0056e140: SUB EAX,EDX
// 0056e142: MOV EDX,0x688014
//   XREF to: 00688014 (DATA)
// 0056e147: SHL EAX,0x4
// 0056e14a: ADD EDX,EAX
// 0056e14c: DEC EBX
// 0056e14d: LEA EAX,[EDX + 0x30]
// 0056e150: TEST EBX,EBX
// 0056e152: JLE 0x0056e170
//   XREF to: 0056e170 (CONDITIONAL_JUMP)
// 0056e154: MOV ECX,dword ptr [EDX + 0x20]
//   Label: LAB_0056e154
//   XREF to: 00688034 (DATA)
// 0056e157: MOV dword ptr [EAX + 0x20],ECX
//   XREF to: 00688064 (DATA)
//   XREF to: 00688094 (DATA)
// 0056e15a: MOV ECX,dword ptr [EDX + 0x24]
//   XREF to: 00688038 (DATA)
// 0056e15d: MOV dword ptr [EAX + 0x24],ECX
//   XREF to: 00688068 (DATA)
//   XREF to: 00688098 (DATA)
// 0056e160: ADD EAX,0x30
// 0056e163: MOV ECX,dword ptr [EDX + 0x28]
//   XREF to: 0068803c (DATA)
// 0056e166: DEC EBX
// 0056e167: MOV dword ptr [EAX + -0x8],ECX
//   XREF to: 0068806c (DATA)
//   XREF to: 0068809c (DATA)
// 0056e16a: TEST EBX,EBX
// 0056e16c: JG 0x0056e154
//   XREF to: 0056e154 (CONDITIONAL_JUMP)
// 0056e16e: MOV EAX,EAX
// 0056e170: POP EDI
//   Label: LAB_0056e170
// 0056e171: POP ESI
// 0056e172: POP EBX
// 0056e173: RET
