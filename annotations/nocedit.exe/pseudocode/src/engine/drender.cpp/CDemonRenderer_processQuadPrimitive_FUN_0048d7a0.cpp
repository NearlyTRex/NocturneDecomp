// Name: engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_0048d7a0
// Address: 0048d7a0
// Address Range: [[0048d7a0, 0048d89c]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_0048d7a0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * quad_primitive, int render_flags)
// Cross-references:
//   engine_drender.cpp_CDemonRenderer_renderPrimitiveBatch_FUN_0048ce90 (0048ce90) at 0048cec2 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0 (0048aeb0) at 0048af67 [UNCONDITIONAL_CALL]
// Function calls:
//   engine_3d.c_isVisiblePlane_FUN_00403950
//   engine_drender.cpp_CDemonRenderer_captureFace_FUN_0048d8a0

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_processQuadPrimitive_FUN_0048d7a0
          (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *quad_primitive,int render_flags)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  int in_stack_00000010;
  int in_stack_00000014;
  STrianglePackedIndices local_1c;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 uStack_12;
  
  if ((this_ptr->plane_culling_enabled != 0) &&
     (iVar1 = engine_3d_c_isVisiblePlane_FUN_00403950(&quad_primitive->surface_normal), iVar1 == 0))
  {
    return;
  }
  local_1c.vertex_index_0 = (ushort)quad_primitive[2].base.type;
  local_1c.vertex_index_1 = (ushort)((uint)quad_primitive[1].base.count >> 8);
  local_1c.vertex_index_2 = (ushort)((uint)quad_primitive[1].surface_normal.C >> 8);
  local_16 = (undefined2)((uint)quad_primitive[2].base.count >> 8);
  local_14 = (undefined2)((uint)quad_primitive[1].surface_normal.A >> 8);
  uStack_12 = (undefined2)((uint)quad_primitive[1].surface_normal.D >> 8);
  engine_drender_cpp_CDemonRenderer_captureFace_FUN_0048d8a0
            (this_ptr,(STrianglePackedIndices *)&stack0xffffffe0,in_stack_00000010);
  if ((quad_primitive->base).count < 4) {
    return;
  }
  local_1c.vertex_index_1 = (ushort)quad_primitive[2].base.type;
  local_1c.vertex_index_2 = (ushort)quad_primitive[2].surface_normal.B;
  local_14 = (undefined2)((uint)quad_primitive[2].base.count >> 8);
  uStack_12 = (undefined2)((uint)quad_primitive[2].surface_normal.C >> 8);
  engine_drender_cpp_CDemonRenderer_captureFace_FUN_0048d8a0(this_ptr,&local_1c,in_stack_00000014);
  return;
}


// Assembly code:
// 0048d7a0: PUSH EBX
//   Label: engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_0048d7a0
// 0048d7a1: PUSH ESI
// 0048d7a2: PUSH EDI
// 0048d7a3: PUSH EBP
// 0048d7a4: SUB ESP,0x14
// 0048d7a7: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 0048d7ab: MOV EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 0048d7af: CMP dword ptr [ESI + 0xc],0x0
// 0048d7b3: JZ 0x0048d7cd
//   XREF to: 0048d7cd (CONDITIONAL_JUMP)
// 0048d7b5: LEA EAX,[EBX + 0x8]
// 0048d7b8: PUSH EAX
// 0048d7b9: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 0048d7be: ADD ESP,0x4
// 0048d7c1: TEST EAX,EAX
// 0048d7c3: JNZ 0x0048d7cd
//   XREF to: 0048d7cd (CONDITIONAL_JUMP)
// 0048d7c5: ADD ESP,0x14
//   Label: LAB_0048d7c5
// 0048d7c8: POP EBP
// 0048d7c9: POP EDI
// 0048d7ca: POP ESI
// 0048d7cb: POP EBX
// 0048d7cc: RET
// 0048d7cd: MOV AX,word ptr [EBX + 0x18]
//   Label: LAB_0048d7cd
// 0048d7d1: MOV word ptr [ESP],AX
//   XREF to: Stack[-0x24] (DATA)
// 0048d7d5: MOV AX,word ptr [EBX + 0x24]
// 0048d7d9: MOV word ptr [ESP + 0x2],AX
//   XREF to: Stack[-0x22] (WRITE)
// 0048d7de: MOV AX,word ptr [EBX + 0x30]
// 0048d7e2: MOV word ptr [ESP + 0x4],AX
//   XREF to: Stack[-0x20] (WRITE)
// 0048d7e7: MOV EAX,dword ptr [EBX + 0x1c]
// 0048d7ea: SAR EAX,0x8
// 0048d7ed: MOV word ptr [ESP + 0x6],AX
//   XREF to: Stack[-0x1e] (WRITE)
// 0048d7f2: MOV EAX,dword ptr [EBX + 0x28]
// 0048d7f5: SAR EAX,0x8
// 0048d7f8: MOV word ptr [ESP + 0x8],AX
//   XREF to: Stack[-0x1c] (WRITE)
// 0048d7fd: MOV EAX,dword ptr [EBX + 0x34]
// 0048d800: SAR EAX,0x8
// 0048d803: MOV word ptr [ESP + 0xa],AX
//   XREF to: Stack[-0x1a] (WRITE)
// 0048d808: MOV EAX,dword ptr [EBX + 0x20]
// 0048d80b: SAR EAX,0x8
// 0048d80e: MOV word ptr [ESP + 0xc],AX
//   XREF to: Stack[-0x18] (WRITE)
// 0048d813: MOV EAX,dword ptr [EBX + 0x2c]
// 0048d816: SAR EAX,0x8
// 0048d819: MOV word ptr [ESP + 0xe],AX
//   XREF to: Stack[-0x16] (WRITE)
// 0048d81e: MOV EAX,dword ptr [EBX + 0x38]
// 0048d821: MOV ECX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0xc] (READ)
// 0048d825: SAR EAX,0x8
// 0048d828: PUSH ECX
// 0048d829: MOV word ptr [ESP + 0x14],AX
//   XREF to: Stack[-0x14] (WRITE)
// 0048d82e: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x24] (DATA)
// 0048d832: PUSH EAX
// 0048d833: PUSH ESI
// 0048d834: CALL engine_drender.cpp_CDemonRenderer_captureFace_FUN_0048d8a0
//   XREF to: 0048d8a0 (UNCONDITIONAL_CALL)
// 0048d839: MOV EDI,dword ptr [EBX + 0x4]
// 0048d83c: ADD ESP,0xc
// 0048d83f: CMP EDI,0x3
// 0048d842: JLE 0x0048d7c5
//   XREF to: 0048d7c5 (CONDITIONAL_JUMP)
// 0048d844: MOV AX,word ptr [EBX + 0x30]
// 0048d848: MOV word ptr [ESP + 0x2],AX
//   XREF to: Stack[-0x22] (WRITE)
// 0048d84d: MOV AX,word ptr [EBX + 0x3c]
// 0048d851: MOV word ptr [ESP + 0x4],AX
//   XREF to: Stack[-0x20] (WRITE)
// 0048d856: MOV EAX,dword ptr [EBX + 0x34]
// 0048d859: SAR EAX,0x8
// 0048d85c: MOV word ptr [ESP + 0x8],AX
//   XREF to: Stack[-0x1c] (WRITE)
// 0048d861: MOV EAX,dword ptr [EBX + 0x40]
// 0048d864: SAR EAX,0x8
// 0048d867: MOV word ptr [ESP + 0xa],AX
//   XREF to: Stack[-0x1a] (WRITE)
// 0048d86c: MOV EAX,dword ptr [EBX + 0x38]
// 0048d86f: SAR EAX,0x8
// 0048d872: MOV word ptr [ESP + 0xe],AX
//   XREF to: Stack[-0x16] (WRITE)
// 0048d877: MOV EAX,dword ptr [EBX + 0x44]
// 0048d87a: MOV EBP,dword ptr [ESP + 0x30]
//   XREF to: Stack[0xc] (READ)
// 0048d87e: SAR EAX,0x8
// 0048d881: PUSH EBP
// 0048d882: MOV word ptr [ESP + 0x14],AX
//   XREF to: Stack[-0x14] (WRITE)
// 0048d887: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x24] (DATA)
// 0048d88b: PUSH EAX
// 0048d88c: PUSH ESI
// 0048d88d: CALL engine_drender.cpp_CDemonRenderer_captureFace_FUN_0048d8a0
//   XREF to: 0048d8a0 (UNCONDITIONAL_CALL)
// 0048d892: ADD ESP,0xc
// 0048d895: ADD ESP,0x14
// 0048d898: POP EBP
// 0048d899: POP EDI
// 0048d89a: POP ESI
// 0048d89b: POP EBX
// 0048d89c: RET
