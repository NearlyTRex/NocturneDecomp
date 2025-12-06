// Name: core_path.cpp_debugRenderGridQuad_FUN_00547dd0
// Address: 00547dd0
// Address Range: [[00547dd0, 00547fb9]]
// Convention: __cdecl
// Signature: void core_path.cpp_debugRenderGridQuad_FUN_00547dd0(int grid_x, int grid_y, int grid_z, int color, int fog, float w_recip)

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
  
  input = (CVector3i *)(g_CDemonRaytraceInstance.adjusted_size.x * 256f);
  fVar4 = (float10)256;
  fVar5 = (float10)g_CDemonRaytraceInstance.bbox_min.y * fVar4;
  fVar6 = (float10)grid_y * (float10)(g_CDemonRaytraceInstance.adjusted_size.y * 256f);
  dVar7 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(&stack0xffffffd0,g_CDemonRendererPtr));
  dVar7 = crt_math_c_round_FUN_005fe6b0(dVar7);
  fVar4 = fVar4 + fVar5 + fVar6;
  dVar7 = crt_math_c_round_FUN_005fe6b0(dVar7);
  iVar2 = (int)ROUND(fVar4);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            ((SProjectedVertex *)*SUB84 /* extract 2-byte value */(dVar7,0),in_stack_ffffffd4);
  fVar5 = (float10)iVar2 + (float10)(float)in_stack_ffffffec;
  dVar7 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(g_CDemonRendererPtr,&stack0xffffffe0));
  input_00 = (CVector3i *)(int)ROUND(fVar5);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            ((SProjectedVertex *)(*(int *)((ulonglong)dVar7 >> 0x20) + 0x30),input);
  dVar7 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(g_CDemonRendererPtr,&stack0xffffffe8));
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            ((SProjectedVertex *)(*(int *)((ulonglong)dVar7 >> 0x20) + 0x60),input_00);
  dVar7 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(g_CDemonRendererPtr,&stack0xfffffff0));
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
