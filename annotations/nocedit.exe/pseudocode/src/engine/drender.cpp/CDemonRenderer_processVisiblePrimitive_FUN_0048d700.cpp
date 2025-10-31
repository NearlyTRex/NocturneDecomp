// Name: engine_drender.cpp_CDemonRenderer_processVisiblePrimitive_FUN_0048d700
// Address: 0048d700
// Address Range: [[0048d700, 0048d79e]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_processVisiblePrimitive_FUN_0048d700(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * primitive, int render_flags)
// Cross-references:
//   engine_drender.cpp_CDemonRenderer_renderFaceBatch_FUN_0048ce20 (0048ce20) at 0048ce52 [UNCONDITIONAL_CALL]
// Function calls:
//   engine_3d.c_isVisiblePlane_FUN_00403950
//   engine_drender.cpp_CDemonRenderer_captureFace_FUN_0048d8a0

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_processVisiblePrimitive_FUN_0048d700
          (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *primitive,int render_flags)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  int in_stack_00000010;
  STrianglePackedIndices local_14;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 uStack_6;
  
  if (this_ptr->plane_culling_enabled != 0) {
    iVar1 = engine_3d_c_isVisiblePlane_FUN_00403950(&primitive->surface_normal);
    if (iVar1 == 0) {
      return;
    }
  }
  local_14.vertex_index_0 = (ushort)primitive[1].base.type;
  local_14.vertex_index_1 = (ushort)primitive[1].surface_normal.B;
  local_14.vertex_index_2 = (ushort)primitive[2].base.type;
  local_e = (undefined2)((uint)primitive[1].base.count >> 8);
  local_c = (undefined2)((uint)primitive[1].surface_normal.C >> 8);
  local_a = (undefined2)((uint)primitive[2].base.count >> 8);
  local_8 = (undefined2)((uint)primitive[1].surface_normal.A >> 8);
  uStack_6 = (undefined2)((uint)primitive[1].surface_normal.D >> 8);
  engine_drender_cpp_CDemonRenderer_captureFace_FUN_0048d8a0
            ((CDemonRenderer *)primitive,&local_14,in_stack_00000010);
  return;
}


// Assembly code:
// 0048d700: PUSH EBX
//   Label: engine_drender.cpp_CDemonRenderer_processVisiblePrimitive_FUN_0048d700
// 0048d701: SUB ESP,0x14
// 0048d704: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 0048d708: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0048d70c: CMP dword ptr [EAX + 0xc],0x0
// 0048d710: JZ 0x0048d727
//   XREF to: 0048d727 (CONDITIONAL_JUMP)
// 0048d712: LEA EAX,[EBX + 0x8]
// 0048d715: PUSH EAX
// 0048d716: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 0048d71b: ADD ESP,0x4
// 0048d71e: TEST EAX,EAX
// 0048d720: JNZ 0x0048d727
//   XREF to: 0048d727 (CONDITIONAL_JUMP)
// 0048d722: ADD ESP,0x14
// 0048d725: POP EBX
// 0048d726: RET
// 0048d727: MOV AX,word ptr [EBX + 0x18]
//   Label: LAB_0048d727
// 0048d72b: MOV word ptr [ESP],AX
//   XREF to: Stack[-0x18] (DATA)
// 0048d72f: MOV AX,word ptr [EBX + 0x24]
// 0048d733: MOV word ptr [ESP + 0x2],AX
//   XREF to: Stack[-0x16] (WRITE)
// 0048d738: MOV AX,word ptr [EBX + 0x30]
// 0048d73c: MOV word ptr [ESP + 0x4],AX
//   XREF to: Stack[-0x14] (WRITE)
// 0048d741: MOV EAX,dword ptr [EBX + 0x1c]
// 0048d744: SAR EAX,0x8
// 0048d747: MOV word ptr [ESP + 0x6],AX
//   XREF to: Stack[-0x12] (WRITE)
// 0048d74c: MOV EAX,dword ptr [EBX + 0x28]
// 0048d74f: SAR EAX,0x8
// 0048d752: MOV word ptr [ESP + 0x8],AX
//   XREF to: Stack[-0x10] (WRITE)
// 0048d757: MOV EAX,dword ptr [EBX + 0x34]
// 0048d75a: SAR EAX,0x8
// 0048d75d: MOV word ptr [ESP + 0xa],AX
//   XREF to: Stack[-0xe] (WRITE)
// 0048d762: MOV EAX,dword ptr [EBX + 0x20]
// 0048d765: SAR EAX,0x8
// 0048d768: MOV word ptr [ESP + 0xc],AX
//   XREF to: Stack[-0xc] (WRITE)
// 0048d76d: MOV EAX,dword ptr [EBX + 0x2c]
// 0048d770: SAR EAX,0x8
// 0048d773: MOV word ptr [ESP + 0xe],AX
//   XREF to: Stack[-0xa] (WRITE)
// 0048d778: MOV EAX,dword ptr [EBX + 0x38]
// 0048d77b: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 0048d77f: SAR EAX,0x8
// 0048d782: PUSH ECX
// 0048d783: MOV word ptr [ESP + 0x14],AX
//   XREF to: Stack[-0x8] (WRITE)
// 0048d788: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x18] (DATA)
// 0048d78c: PUSH EAX
// 0048d78d: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 0048d791: PUSH EBX
// 0048d792: CALL engine_drender.cpp_CDemonRenderer_captureFace_FUN_0048d8a0
//   XREF to: 0048d8a0 (UNCONDITIONAL_CALL)
// 0048d797: ADD ESP,0xc
// 0048d79a: ADD ESP,0x14
// 0048d79d: POP EBX
// 0048d79e: RET
