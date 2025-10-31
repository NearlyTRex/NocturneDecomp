// Name: core_path.cpp_debugRenderGridQuad_FUN_00547dd0
// Address: 00547dd0
// Address Range: [[00547dd0, 00547fb9]]
// Convention: __cdecl
// Signature: void core_path.cpp_debugRenderGridQuad_FUN_00547dd0(int grid_x, int grid_y, int grid_z, int color, int fog, float w_recip)
// Globals:
//   float FLOAT_0063ea28 = 256
//   double DOUBLE_0063ea30 = 256
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
//   SMRGLHeaderPrimitive DAT_030d4fd0
//   undefined4 g_CDemonRaytraceInstance.bbox_min.y
//   undefined4 g_CDemonRaytraceInstance.adjusted_size.x
//   undefined4 g_CDemonRaytraceInstance.adjusted_size.y
//   undefined4 g_CDemonRaytraceInstance.adjusted_size.z
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   engine_drender.cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

void __cdecl
core_path_cpp_debugRenderGridQuad_FUN_00547dd0
          (int grid_x,int grid_y,int grid_z,int color,int fog,float w_recip)

{
  CDemonRenderer *this_ptr;
  BADSPACEBASE *in_ESP;
  float fVar1;
  int iVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  double dVar7;
  float in_stack_00000044;
  CVector3i *in_stack_ffffffd4;
  CVector3i *input;
  CVector3i *input_00;
  CVector3i *in_stack_ffffffec;
  
  input = (CVector3i *)(g_CDemonRaytraceInstance.adjusted_size.x * FLOAT_0063ea28);
  fVar4 = (float10)DOUBLE_0063ea30;
  fVar5 = (float10)g_CDemonRaytraceInstance.bbox_min.y * fVar4;
  fVar6 = (float10)grid_y * (float10)(g_CDemonRaytraceInstance.adjusted_size.y * FLOAT_0063ea28);
  dVar7 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(&stack0xffffffd0,g_CDemonRendererPtr));
  dVar7 = crt_math_c_round_FUN_005fe6b0(dVar7);
  fVar4 = fVar4 + fVar5 + fVar6;
  dVar7 = crt_math_c_round_FUN_005fe6b0(dVar7);
  iVar2 = (int)ROUND(fVar4);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            ((SProjectedVertex *)*SUB84(dVar7,0),in_stack_ffffffd4);
  fVar5 = (float10)iVar2 + (float10)(float)in_stack_ffffffec;
  dVar7 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(g_CDemonRendererPtr,&stack0xffffffe0));
  input_00 = (CVector3i *)(int)ROUND(fVar5);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            ((SProjectedVertex *)(*(int *)((ulonglong)dVar7 >> 0x20) + 0x30),input);
  dVar7 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(g_CDemonRendererPtr,&stack0xffffffe8));
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            ((SProjectedVertex *)(*(int *)((ulonglong)dVar7 >> 0x20) + 0x60),input_00);
  dVar7 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(g_CDemonRendererPtr,&stack0xfffffff0));
  fVar1 = (float)(color << 8);
  iVar2 = fog << 8;
  fVar3 = (float)((int)w_recip << 8);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            ((SProjectedVertex *)(*(int *)((ulonglong)dVar7 >> 0x20) + 0x90),in_stack_ffffffec);
  this_ptr = g_CDemonRendererPtr;
  g_CDemonRendererPtr->vertex_buffer_ptr->light = fVar1;
  this_ptr->vertex_buffer_ptr->color = iVar2;
  this_ptr->vertex_buffer_ptr->fog = fVar3;
  this_ptr->vertex_buffer_ptr->w_recip = in_stack_00000044;
  this_ptr->vertex_buffer_ptr[1].light = fVar1;
  this_ptr->vertex_buffer_ptr[1].color = iVar2;
  this_ptr->vertex_buffer_ptr[1].fog = fVar3;
  this_ptr->vertex_buffer_ptr[1].w_recip = in_stack_00000044;
  this_ptr->vertex_buffer_ptr[2].light = fVar1;
  this_ptr->vertex_buffer_ptr[2].color = iVar2;
  this_ptr->vertex_buffer_ptr[2].fog = fVar3;
  this_ptr->vertex_buffer_ptr[2].w_recip = in_stack_00000044;
  this_ptr->vertex_buffer_ptr[3].light = fVar1;
  this_ptr->vertex_buffer_ptr[3].color = iVar2;
  this_ptr->vertex_buffer_ptr[3].fog = fVar3;
  this_ptr->vertex_buffer_ptr[3].w_recip = in_stack_00000044;
  engine_drender_cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0(this_ptr,&DAT_030d4fd0)
  ;
  return;
}


// Assembly code:
// 00547dd0: PUSH ESI
//   Label: core_path.cpp_debugRenderGridQuad_FUN_00547dd0
// 00547dd1: PUSH EDI
// 00547dd2: PUSH EBP
// 00547dd3: SUB ESP,0x24
// 00547dd6: MOV EBP,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x10] (READ)
// 00547dda: MOV ESI,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x14] (READ)
// 00547dde: MOV EDI,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x18] (READ)
// 00547de2: PUSH EBX
// 00547de3: FLD float ptr [0x0063ea28]
//   XREF to: 0063ea28 (READ)
// 00547de9: FLD float ptr [0x03277d48]
//   XREF to: 03277d48 (READ)
// 00547def: FMUL ST1
// 00547df1: FLD float ptr [0x03277d4c]
//   XREF to: 03277d4c (READ)
// 00547df7: FMUL ST2
// 00547df9: FLD float ptr [0x03277d50]
//   XREF to: 03277d50 (READ)
// 00547dff: FMULP ST3
// 00547e01: FLD double ptr [0x0063ea30]
//   XREF to: 0063ea30 (READ)
// 00547e07: FLD float ptr [0x03277d28]
//   XREF to: 03277d28 (READ)
// 00547e0d: FMUL ST1
// 00547e0f: FILD dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 00547e13: FXCH ST4
// 00547e15: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x24] (WRITE)
// 00547e19: FXCH ST3
// 00547e1b: FMUL float ptr [ESP + 0x10]
//   XREF to: Stack[-0x24] (READ)
// 00547e1f: FILD dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x8] (READ)
// 00547e23: FXCH ST3
// 00547e25: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x20] (WRITE)
// 00547e29: FXCH ST2
// 00547e2b: FMUL float ptr [ESP + 0x14]
//   XREF to: Stack[-0x20] (READ)
// 00547e2f: FILD dword ptr [ESP + 0x40]
//   XREF to: Stack[0xc] (READ)
// 00547e33: MOV EDX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x1c] (READ)
// 00547e37: FXCH ST5
// 00547e39: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x1c] (WRITE)
// 00547e3d: FXCH ST4
// 00547e3f: FMUL float ptr [ESP + 0x18]
//   XREF to: Stack[-0x1c] (READ)
// 00547e43: SHL EDX,0x8
// 00547e46: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00547e4b: MOV dword ptr [ESP + 0x50],EDX
//   XREF to: Stack[0x1c] (WRITE)
// 00547e4f: LEA EDX,[ESP + 0x4]
//   XREF to: Stack[-0x30] (DATA)
// 00547e53: FXCH ST2
// 00547e55: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00547e5a: FXCH ST2
// 00547e5c: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00547e61: FXCH ST2
// 00547e63: FISTP dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x30] (WRITE)
// 00547e67: FXCH ST2
// 00547e69: FADDP ST3,ST0
// 00547e6b: FISTP dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x28] (WRITE)
// 00547e6f: FADDP
// 00547e71: PUSH EDX
// 00547e72: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00547e77: FISTP dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x2c] (WRITE)
// 00547e7b: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00547e7d: PUSH EAX
// 00547e7e: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00547e83: ADD ESP,0x8
// 00547e86: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x30] (READ)
// 00547e8a: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 00547e8e: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00547e94: FILD dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x10] (READ)
// 00547e98: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x30] (DATA)
// 00547e9c: FLD ST0
// 00547e9e: FADD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x24] (READ)
// 00547ea2: PUSH EAX
// 00547ea3: FSTP ST1
// 00547ea5: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00547eaa: FISTP dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x30] (WRITE)
// 00547eae: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00547eb0: ADD EAX,0x30
// 00547eb3: PUSH EAX
// 00547eb4: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00547eb9: ADD ESP,0x8
// 00547ebc: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x28] (READ)
// 00547ec0: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 00547ec4: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00547eca: FILD dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x10] (READ)
// 00547ece: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x30] (DATA)
// 00547ed2: FLD ST0
// 00547ed4: FADD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x1c] (READ)
// 00547ed8: PUSH EAX
// 00547ed9: FSTP ST1
// 00547edb: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00547ee0: FISTP dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x28] (WRITE)
// 00547ee4: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00547ee6: ADD EAX,0x60
// 00547ee9: PUSH EAX
// 00547eea: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00547eef: ADD ESP,0x8
// 00547ef2: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x30] (READ)
// 00547ef6: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 00547efa: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00547f00: FILD dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x10] (READ)
// 00547f04: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x30] (DATA)
// 00547f08: FLD ST0
// 00547f0a: FSUB float ptr [ESP + 0x10]
//   XREF to: Stack[-0x24] (READ)
// 00547f0e: PUSH EAX
// 00547f0f: FSTP ST1
// 00547f11: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00547f16: FISTP dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x30] (WRITE)
// 00547f1a: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00547f1c: SHL EBP,0x8
// 00547f1f: ADD EAX,0x90
// 00547f24: SHL ESI,0x8
// 00547f27: PUSH EAX
// 00547f28: SHL EDI,0x8
// 00547f2b: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00547f30: ADD ESP,0x8
// 00547f33: POP EBX
// 00547f34: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00547f39: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00547f3b: MOV dword ptr [EDX + 0x20],EBP
// 00547f3e: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00547f40: MOV dword ptr [EDX + 0x24],ESI
// 00547f43: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00547f45: MOV dword ptr [EDX + 0x28],EDI
// 00547f48: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00547f4a: MOV ECX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x1c] (READ)
// 00547f4e: MOV dword ptr [EDX + 0x2c],ECX
// 00547f51: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00547f53: MOV dword ptr [EDX + 0x50],EBP
// 00547f56: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00547f58: MOV dword ptr [EDX + 0x54],ESI
// 00547f5b: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00547f5d: MOV dword ptr [EDX + 0x58],EDI
// 00547f60: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00547f62: MOV dword ptr [EDX + 0x5c],ECX
// 00547f65: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00547f67: MOV dword ptr [EDX + 0x80],EBP
// 00547f6d: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00547f6f: MOV dword ptr [EDX + 0x84],ESI
// 00547f75: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00547f77: MOV dword ptr [EDX + 0x88],EDI
// 00547f7d: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00547f7f: MOV dword ptr [EDX + 0x8c],ECX
// 00547f85: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00547f87: MOV dword ptr [EDX + 0xb0],EBP
// 00547f8d: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00547f8f: MOV dword ptr [EDX + 0xb4],ESI
// 00547f95: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00547f97: MOV dword ptr [EDX + 0xb8],EDI
// 00547f9d: PUSH 0x30d4fd0
//   XREF to: 030d4fd0 (DATA)
// 00547fa2: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00547fa4: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 00547fa5: MOV dword ptr [EDX + 0xbc],ECX
// 00547fab: CALL engine_drender.cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0
//   XREF to: 0048bba0 (UNCONDITIONAL_CALL)
// 00547fb0: ADD ESP,0x8
// 00547fb3: ADD ESP,0x24
// 00547fb6: POP EBP
// 00547fb7: POP EDI
// 00547fb8: POP ESI
// 00547fb9: RET
