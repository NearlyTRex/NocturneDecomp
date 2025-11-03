// Name: core_fire.cpp_CGlassParticle_render_FUN_004c1ef0
// Address: 004c1ef0
// Address Range: [[004c1ef0, 004c20e0]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CGlassParticle_render_FUN_004c1ef0(CGlassParticle * this_ptr)
// Globals:
//   float FLOAT_0065dca8 = 256
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 g_RenderVertexBuffer[0].u
//   undefined4 g_RenderVertexBuffer[0].v
//   undefined4 g_RenderVertexBuffer[1].u
//   undefined4 g_RenderVertexBuffer[1].v
//   undefined4 g_RenderVertexBuffer[2].u
//   CDemonRenderer g_CDemonRendererInstance
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_set.cpp_CDemonSet_computeLighting_FUN_0056e110
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
//   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

void __cdecl core_fire_cpp_CGlassParticle_render_FUN_004c1ef0(CGlassParticle *this_ptr)

{
  BADSPACEBASE *in_ESP;
  SMRGLHeaderPrimitive SStack_44;
  undefined1 local_24 [8];
  int local_1c;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)this_ptr);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)&this_ptr->euler_angles,(CVector3i *)0x0);
  local_24._0_4_ = (undefined4)ROUND((this_ptr->triangle_delta).vertices[0].x * FLOAT_0065dca8);
  local_24._4_4_ = (undefined4)ROUND((this_ptr->triangle_delta).vertices[0].y * FLOAT_0065dca8);
  local_1c = (int)ROUND((this_ptr->triangle_delta).vertices[0].z * FLOAT_0065dca8);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,(CVector3i *)(local_24 + 4));
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,
             (CVector3i *)&stack0xfffffff0);
  local_24._0_4_ = (undefined4)ROUND((this_ptr->triangle_delta).vertices[2].x * FLOAT_0065dca8);
  local_24._4_4_ = (undefined4)ROUND((this_ptr->triangle_delta).vertices[2].y * FLOAT_0065dca8);
  local_1c = (int)ROUND((this_ptr->triangle_delta).vertices[2].z * FLOAT_0065dca8);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,(CVector3i *)local_24);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,&this_ptr->texture);
  SStack_44.surface_normal.A = 0;
  SStack_44.base.count = 0;
  SStack_44.base.type = 0;
  SStack_44.surface_normal.B = 0;
  SStack_44.surface_normal.C = 1;
  SStack_44.surface_normal.D = 2;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
            (g_CDemonRendererPtr,this_ptr->lifetime);
  local_24._0_4_ = (undefined4)ROUND((this_ptr->base).position.x * FLOAT_0065dca8);
  local_24._4_4_ = (undefined4)ROUND((this_ptr->base).position.y * FLOAT_0065dca8);
  local_1c = (int)ROUND((this_ptr->base).position.z * FLOAT_0065dca8);
  core_set_cpp_CDemonSet_computeLighting_FUN_0056e110
            (g_CDemonSetPtr,(CVector3i *)local_24,(CVector3i *)0x0,0,3);
  g_RenderVertexBuffer[0].u = (this_ptr->uv_u_per_vertex).x;
  g_RenderVertexBuffer[0].v = (this_ptr->uv_v_per_vertex).x;
  g_RenderVertexBuffer[1].u = (this_ptr->uv_u_per_vertex).y;
  g_RenderVertexBuffer[1].v = (this_ptr->uv_v_per_vertex).y;
  g_RenderVertexBuffer[2].u = (this_ptr->uv_u_per_vertex).z;
  g_RenderVertexBuffer[2].v = (this_ptr->uv_v_per_vertex).z;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
            (g_CDemonRendererPtr,&SStack_44);
  SStack_44.base.type = (int)g_CDemonRendererPtr;
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return;
}


// Assembly code:
// 004c1ef0: PUSH EBX
//   Label: core_fire.cpp_CGlassParticle_render_FUN_004c1ef0
// 004c1ef1: PUSH ESI
// 004c1ef2: PUSH EDI
// 004c1ef3: PUSH EBP
// 004c1ef4: SUB ESP,0x58
// 004c1ef7: MOV ESI,dword ptr [ESP + 0x6c]
// 004c1efb: PUSH ESI
// 004c1efc: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c1f02: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004c1f03: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 004c1f08: ADD ESP,0x8
// 004c1f0b: PUSH 0x0
// 004c1f0d: LEA EAX,[ESI + 0x54]
// 004c1f10: PUSH EAX
// 004c1f11: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c1f17: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004c1f18: LEA EBX,[ESP + 0x4c]
// 004c1f1c: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 004c1f21: ADD ESP,0xc
// 004c1f24: LEA EAX,[ESI + 0x78]
// 004c1f27: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c1f2d: FLD float ptr [EAX]
// 004c1f2f: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c1f35: FISTP dword ptr [EBX]
// 004c1f37: FLD float ptr [EAX + 0x4]
// 004c1f3a: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c1f40: FISTP dword ptr [EBX + 0x4]
// 004c1f43: FLD float ptr [EAX + 0x8]
// 004c1f46: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c1f4c: FISTP dword ptr [EBX + 0x8]
// 004c1f4f: LEA EAX,[ESP + 0x40]
// 004c1f53: PUSH EAX
// 004c1f54: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c1f56: PUSH EAX
// 004c1f57: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004c1f5c: LEA EBX,[ESP + 0x54]
// 004c1f60: ADD ESP,0x8
// 004c1f63: LEA EAX,[ESI + 0x84]
// 004c1f69: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c1f6f: FLD float ptr [EAX]
// 004c1f71: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c1f77: FISTP dword ptr [EBX]
// 004c1f79: FLD float ptr [EAX + 0x4]
// 004c1f7c: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c1f82: FISTP dword ptr [EBX + 0x4]
// 004c1f85: FLD float ptr [EAX + 0x8]
// 004c1f88: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c1f8e: FISTP dword ptr [EBX + 0x8]
// 004c1f91: LEA EAX,[ESP + 0x4c]
// 004c1f95: PUSH EAX
// 004c1f96: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c1f98: ADD EAX,0x30
// 004c1f9b: PUSH EAX
// 004c1f9c: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004c1fa1: LEA EBX,[ESP + 0x3c]
// 004c1fa5: ADD ESP,0x8
// 004c1fa8: LEA EAX,[ESI + 0x90]
// 004c1fae: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c1fb4: FLD float ptr [EAX]
// 004c1fb6: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c1fbc: FISTP dword ptr [EBX]
// 004c1fbe: FLD float ptr [EAX + 0x4]
// 004c1fc1: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c1fc7: FISTP dword ptr [EBX + 0x4]
// 004c1fca: FLD float ptr [EAX + 0x8]
// 004c1fcd: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c1fd3: FISTP dword ptr [EBX + 0x8]
// 004c1fd6: LEA EAX,[ESP + 0x34]
// 004c1fda: PUSH EAX
// 004c1fdb: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c1fdd: ADD EAX,0x60
// 004c1fe0: PUSH EAX
// 004c1fe1: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004c1fe6: ADD ESP,0x8
// 004c1fe9: LEA EAX,[ESI + 0x3c]
// 004c1fec: PUSH EAX
// 004c1fed: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c1ff3: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 004c1ff4: MOV EDI,0x3
// 004c1ff9: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 004c1ffe: ADD ESP,0x8
// 004c2001: XOR EBP,EBP
// 004c2003: MOV dword ptr [ESP + 0x4],EDI
// 004c2007: MOV dword ptr [ESP + 0x14],EBP
// 004c200b: MOV dword ptr [ESP + 0x10],EBP
// 004c200f: MOV dword ptr [ESP + 0xc],EBP
// 004c2013: MOV dword ptr [ESP + 0x8],EBP
// 004c2017: MOV dword ptr [ESP + 0x18],EBP
// 004c201b: MOV EDI,0x1
// 004c2020: MOV EBP,0x2
// 004c2025: MOV dword ptr [ESP + 0x1c],EDI
// 004c2029: MOV dword ptr [ESP + 0x20],EBP
// 004c202d: MOV EAX,dword ptr [ESI + 0x38]
// 004c2030: PUSH EAX
// 004c2031: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c2037: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004c2038: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 004c203d: ADD ESP,0x8
// 004c2040: LEA EBX,[ESP + 0x28]
// 004c2044: MOV EAX,ESI
// 004c2046: FLD float ptr [EAX]
// 004c2048: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c204e: FISTP dword ptr [EBX]
// 004c2050: FLD float ptr [EAX + 0x4]
// 004c2053: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c2059: FISTP dword ptr [EBX + 0x4]
// 004c205c: FLD float ptr [EAX + 0x8]
// 004c205f: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c2065: FISTP dword ptr [EBX + 0x8]
// 004c2068: PUSH 0x3
// 004c206a: PUSH 0x0
// 004c206c: PUSH 0x0
// 004c206e: LEA EAX,[ESP + 0x34]
// 004c2072: PUSH EAX
// 004c2073: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 004c2079: PUSH ECX
//   XREF to: 03114278 (DATA)
// 004c207a: CALL core_set.cpp_CDemonSet_computeLighting_FUN_0056e110
//   XREF to: 0056e110 (UNCONDITIONAL_CALL)
// 004c207f: MOV EAX,dword ptr [ESI + 0x60]
// 004c2082: MOV [0x0068802c],EAX
//   XREF to: 0068802c (WRITE)
// 004c2087: MOV EAX,dword ptr [ESI + 0x6c]
// 004c208a: MOV [0x00688030],EAX
//   XREF to: 00688030 (WRITE)
// 004c208f: MOV EAX,dword ptr [ESI + 0x64]
// 004c2092: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c2098: MOV [0x0068805c],EAX
//   XREF to: 0068805c (WRITE)
// 004c209d: MOV EAX,dword ptr [ESI + 0x70]
// 004c20a0: ADD ESP,0x14
// 004c20a3: MOV [0x00688060],EAX
//   XREF to: 00688060 (WRITE)
// 004c20a8: MOV EAX,dword ptr [ESI + 0x68]
// 004c20ab: PUSH 0x0
// 004c20ad: MOV [0x0068808c],EAX
//   XREF to: 0068808c (WRITE)
// 004c20b2: MOV EAX,dword ptr [ESI + 0x74]
// 004c20b5: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 004c20b6: MOV [0x00688090],EAX
//   XREF to: 00688090 (WRITE)
// 004c20bb: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 004c20c0: ADD ESP,0x8
// 004c20c3: MOV EAX,ESP
// 004c20c5: PUSH EAX
// 004c20c6: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c20cc: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 004c20cd: CALL engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
//   XREF to: 0048bcf0 (UNCONDITIONAL_CALL)
// 004c20d2: ADD ESP,0x8
// 004c20d5: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c20db: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 004c20dc: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
