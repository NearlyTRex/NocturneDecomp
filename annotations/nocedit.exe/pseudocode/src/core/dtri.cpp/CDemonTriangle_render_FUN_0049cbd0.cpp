// Name: core_dtri.cpp_CDemonTriangle_render_FUN_0049cbd0
// Address: 0049cbd0
// Address Range: [[0049cbd0, 0049cd1b]]
// Convention: __cdecl
// Signature: void core_dtri.cpp_CDemonTriangle_render_FUN_0049cbd0(CDemonTriangle * this_ptr)
// Globals:
//   double g_NormalVectorScaleFactor = -65536
//   double g_TriangleDataScaleFactor = 65536
//   double g_TriangleDepthScaleFactor = 256
//   float g_VertexCoordinateScaleFactor = 256
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

void __cdecl core_dtri_cpp_CDemonTriangle_render_FUN_0049cbd0(CDemonTriangle *this_ptr)

{
  undefined4 extraout_EAX;
  BADSPACEBASE *in_ESP;
  float10 fVar1;
  double dVar2;
  CDemonRenderer *this_ptr_00;
  SRenderVertex *polygon_info;
  CVector3i local_30;
  CVector3i local_1c;
  int local_10;
  
  local_30.x = (int)ROUND((this_ptr->vertex1).x * g_VertexCoordinateScaleFactor);
  local_30.y = (int)ROUND((this_ptr->vertex1).y * g_VertexCoordinateScaleFactor);
  local_30.z = (int)ROUND((this_ptr->vertex1).z * g_VertexCoordinateScaleFactor);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_30);
  local_1c.z = (int)ROUND((this_ptr->vertex2).x * g_VertexCoordinateScaleFactor);
  local_10 = (int)ROUND((this_ptr->vertex2).y * g_VertexCoordinateScaleFactor);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,(CVector3i *)&local_1c.z);
  local_1c.x = (int)ROUND((this_ptr->vertex3).x * g_VertexCoordinateScaleFactor);
  local_1c.y = (int)ROUND((this_ptr->vertex3).y * g_VertexCoordinateScaleFactor);
  local_1c.z = (int)ROUND((this_ptr->vertex3).z * g_VertexCoordinateScaleFactor);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_1c);
  fVar1 = (float10)(this_ptr->normal).x * (float10)g_NormalVectorScaleFactor;
  dVar2 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(3,extraout_EAX));
  polygon_info = (SRenderVertex *)(int)ROUND(fVar1);
  dVar2 = crt_math_c_round_FUN_005fe6b0(dVar2);
  dVar2 = crt_math_c_round_FUN_005fe6b0(dVar2);
  this_ptr_00 = (CDemonRenderer *)&stack0xffffffa0;
  local_30.x = 2;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44((int)((ulonglong)dVar2 >> 0x20),&stack0xffffffa0));
  engine_drender_cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
            (this_ptr_00,(SMRGLHeaderPrimitive *)polygon_info);
  return;
}


// Assembly code:
// 0049cbd0: PUSH EBX
//   Label: core_dtri.cpp_CDemonTriangle_render_FUN_0049cbd0
// 0049cbd1: PUSH ESI
// 0049cbd2: PUSH EDI
// 0049cbd3: SUB ESP,0x6c
// 0049cbd6: MOV ESI,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x4] (READ)
// 0049cbda: LEA EBX,[ESP + 0x48]
//   XREF to: Stack[-0x30] (DATA)
// 0049cbde: MOV EAX,ESI
// 0049cbe0: MOV EDX,dword ptr [0x006703e8]
//   XREF to: 006703e8 (READ)
// 0049cbe6: FLD float ptr [EAX]
// 0049cbe8: FMUL float ptr [0x0065d2d0]
//   XREF to: 0065d2d0 (READ)
// 0049cbee: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x30] (DATA)
// 0049cbf0: FLD float ptr [EAX + 0x4]
// 0049cbf3: FMUL float ptr [0x0065d2d0]
//   XREF to: 0065d2d0 (READ)
// 0049cbf9: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x2c] (WRITE)
// 0049cbfc: FLD float ptr [EAX + 0x8]
// 0049cbff: FMUL float ptr [0x0065d2d0]
//   XREF to: 0065d2d0 (READ)
// 0049cc05: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x28] (WRITE)
// 0049cc08: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[-0x30] (DATA)
// 0049cc0c: PUSH EAX
// 0049cc0d: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0049cc0f: PUSH EAX
// 0049cc10: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 0049cc15: LEA EBX,[ESP + 0x68]
//   XREF to: Stack[-0x18] (DATA)
// 0049cc19: ADD ESP,0x8
// 0049cc1c: LEA EAX,[ESI + 0xc]
// 0049cc1f: MOV EDX,dword ptr [0x006703e8]
//   XREF to: 006703e8 (READ)
// 0049cc25: FLD float ptr [EAX]
// 0049cc27: FMUL float ptr [0x0065d2d0]
//   XREF to: 0065d2d0 (READ)
// 0049cc2d: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x18] (DATA)
// 0049cc2f: FLD float ptr [EAX + 0x4]
// 0049cc32: FMUL float ptr [0x0065d2d0]
//   XREF to: 0065d2d0 (READ)
// 0049cc38: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x14] (WRITE)
// 0049cc3b: FLD float ptr [EAX + 0x8]
// 0049cc3e: FMUL float ptr [0x0065d2d0]
//   XREF to: 0065d2d0 (READ)
// 0049cc44: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x10] (WRITE)
// 0049cc47: LEA EAX,[ESP + 0x60]
//   XREF to: Stack[-0x18] (DATA)
// 0049cc4b: PUSH EAX
// 0049cc4c: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0049cc4e: ADD EAX,0x30
// 0049cc51: PUSH EAX
// 0049cc52: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 0049cc57: LEA EBX,[ESP + 0x5c]
//   XREF to: Stack[-0x24] (DATA)
// 0049cc5b: ADD ESP,0x8
// 0049cc5e: LEA EAX,[ESI + 0x18]
// 0049cc61: MOV EDX,dword ptr [0x006703e8]
//   XREF to: 006703e8 (READ)
// 0049cc67: FLD float ptr [EAX]
// 0049cc69: FMUL float ptr [0x0065d2d0]
//   XREF to: 0065d2d0 (READ)
// 0049cc6f: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x24] (DATA)
// 0049cc71: FLD float ptr [EAX + 0x4]
// 0049cc74: FMUL float ptr [0x0065d2d0]
//   XREF to: 0065d2d0 (READ)
// 0049cc7a: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x20] (WRITE)
// 0049cc7d: FLD float ptr [EAX + 0x8]
// 0049cc80: FMUL float ptr [0x0065d2d0]
//   XREF to: 0065d2d0 (READ)
// 0049cc86: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x1c] (WRITE)
// 0049cc89: LEA EAX,[ESP + 0x54]
//   XREF to: Stack[-0x24] (DATA)
// 0049cc8d: PUSH EAX
// 0049cc8e: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0049cc90: ADD EAX,0x60
// 0049cc93: PUSH EAX
// 0049cc94: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 0049cc99: MOV EDX,0x3
// 0049cc9e: ADD ESP,0x8
// 0049cca1: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x74] (WRITE)
// 0049cca5: FLD double ptr [0x00622e4a]
//   XREF to: 00622e4a (READ)
// 0049ccab: FLD float ptr [ESI + 0x24]
// 0049ccae: FMUL ST1
// 0049ccb0: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0049ccb5: FISTP dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x70] (WRITE)
// 0049ccb9: FLD float ptr [ESI + 0x28]
// 0049ccbc: FMUL ST1
// 0049ccbe: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0049ccc3: FISTP dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x6c] (WRITE)
// 0049ccc7: FMUL float ptr [ESI + 0x2c]
// 0049ccca: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0049cccf: FISTP dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x68] (WRITE)
// 0049ccd3: FLD float ptr [ESI + 0x30]
// 0049ccd6: FMUL double ptr [0x00622e52]
//   XREF to: 00622e52 (READ)
// 0049ccdc: FMUL double ptr [0x00622e5a]
//   XREF to: 00622e5a (READ)
// 0049cce2: MOV EAX,ESP
// 0049cce4: MOV EBX,0x1
// 0049cce9: PUSH EAX
// 0049ccea: MOV EDI,dword ptr [0x006703e8]
//   XREF to: 006703e8 (READ)
// 0049ccf0: XOR ECX,ECX
// 0049ccf2: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 0049ccf3: MOV ESI,0x2
// 0049ccf8: MOV dword ptr [ESP + 0x20],ECX
//   XREF to: Stack[-0x60] (WRITE)
// 0049ccfc: MOV dword ptr [ESP + 0x2c],EBX
//   XREF to: Stack[-0x54] (WRITE)
// 0049cd00: MOV dword ptr [ESP + 0x38],ESI
//   XREF to: Stack[-0x48] (WRITE)
// 0049cd04: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0049cd09: FISTP dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x64] (WRITE)
// 0049cd0d: CALL engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
//   XREF to: 0048a8a0 (UNCONDITIONAL_CALL)
// 0049cd12: ADD ESP,0x8
// 0049cd15: ADD ESP,0x6c
// 0049cd18: POP EDI
// 0049cd19: POP ESI
// 0049cd1a: POP EBX
// 0049cd1b: RET
