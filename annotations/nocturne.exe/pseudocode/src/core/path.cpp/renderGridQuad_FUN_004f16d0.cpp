// Name: core_path.cpp_renderGridQuad_FUN_004f16d0
// Address: 004f16d0
// Address Range: [[004f16d0, 004f18b9]]
// Convention: unknown
// Signature: void core_path_cpp_renderGridQuad_FUN_004f16d0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_path_cpp_renderGridQuad_FUN_004f16d0(void)

{
  float fVar1;
  float fVar2;
  double dVar3;
  CDemonRenderer *pCVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  CVector3i *pCVar11;
  int *piVar12;
  int local_3c;
  float local_38;
  float local_2c;
  
  pCVar4 = DAT_005ae704;
  dVar3 = _DAT_0058ce27;
  fVar1 = _DAT_01fba970 * _DAT_0058ce1f;
  fVar2 = _DAT_01fba974 * _DAT_0058ce1f;
  dVar10 = (double)_DAT_01fba94c * _DAT_0058ce27;
  local_38 = 7.263381e-39;
  dVar8 = round
                    ((double)((float)in_stack_00000004 * _DAT_01fba96c * _DAT_0058ce1f));
  local_3c = 0x4f1761;
  dVar9 = round((double)((float)in_stack_0000000c * fVar2));
  local_38 = (float)(int)ROUND(dVar8);
  pCVar11 = (CVector3i *)0x4f1777;
  dVar10 = round(dVar3 + dVar10 + (double)in_stack_00000008 * (double)fVar1)
  ;
  local_38 = (float)(int)ROUND(dVar10);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&pCVar4->vertex_buffer_ptr->projected_vertex,pCVar11);
  pCVar4 = DAT_005ae704;
  piVar12 = &local_3c;
  pCVar11 = (CVector3i *)0x4f17aa;
  round((double)((float)local_3c + (float)(int)ROUND(dVar9)));
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&pCVar4->vertex_buffer_ptr[1].projected_vertex,pCVar11);
  pCVar4 = DAT_005ae704;
  pCVar11 = (CVector3i *)0x4f17e0;
  dVar10 = round((double)((float)(int)local_38 + local_2c));
  local_3c = (int)ROUND(dVar10);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&pCVar4->vertex_buffer_ptr[2].projected_vertex,pCVar11);
  pCVar4 = DAT_005ae704;
  pCVar11 = (CVector3i *)0x4f1816;
  round((double)((float)(int)piVar12 - local_38));
  iVar5 = in_stack_00000010 << 8;
  iVar6 = in_stack_00000014 << 8;
  iVar7 = in_stack_00000018 << 8;
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&pCVar4->vertex_buffer_ptr[3].projected_vertex,pCVar11);
  pCVar4 = DAT_005ae704;
  DAT_005ae704->vertex_buffer_ptr->r = iVar5;
  pCVar4->vertex_buffer_ptr->g = iVar6;
  pCVar4->vertex_buffer_ptr->b = iVar7;
  pCVar4->vertex_buffer_ptr->a = in_stack_00000004;
  pCVar4->vertex_buffer_ptr[1].r = iVar5;
  pCVar4->vertex_buffer_ptr[1].g = iVar6;
  pCVar4->vertex_buffer_ptr[1].b = iVar7;
  pCVar4->vertex_buffer_ptr[1].a = in_stack_00000004;
  pCVar4->vertex_buffer_ptr[2].r = iVar5;
  pCVar4->vertex_buffer_ptr[2].g = iVar6;
  pCVar4->vertex_buffer_ptr[2].b = iVar7;
  pCVar4->vertex_buffer_ptr[2].a = in_stack_00000004;
  pCVar4->vertex_buffer_ptr[3].r = iVar5;
  pCVar4->vertex_buffer_ptr[3].g = iVar6;
  pCVar4->vertex_buffer_ptr[3].b = iVar7;
  pCVar4->vertex_buffer_ptr[3].a = in_stack_00000004;
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_00460150
            (pCVar4,(SMRGLPrimitivePoly *)0x1e42810);
  return;
}
