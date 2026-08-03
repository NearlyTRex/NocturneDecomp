// Name: core_bugs.cpp_CBugs_renderGroundHeightGrid_FUN_004216d0
// Address: 004216d0
// Address Range: [[004216d0, 0042183a]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_renderGroundHeightGrid_FUN_004216d0(CBugs *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bugs_cpp_CBugs_renderGroundHeightGrid_FUN_004216d0(CBugs *this_ptr)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  CBugs *pCVar3;
  int vertex_index2;
  float fVar4;
  CVector3i CStack_3c;
  int iStack_30;
  CBugs *pCStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  iStack_28 = 0;
  pCStack_2c = this_ptr;
  do {
    fVar4 = (float)iStack_28 * 0.5f + this_ptr->grid_origin_x;
    iStack_1c = iStack_28 * 0x30;
    iVar1 = 0;
    pCVar3 = pCStack_2c;
    do {
      CStack_3c.x = (int)ROUND(fVar4 * _DAT_0059ae90);
      CStack_3c.y = (int)ROUND((pCVar3->ground_heights[0][0] + (float)0.25) *
                               _DAT_0059ae90);
      CStack_3c.z = (int)ROUND(((float)iVar1 * 0.5f + this_ptr->grid_origin_z) *
                               _DAT_0059ae90);
      iStack_18 = iVar1;
      engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                ((SProjectedVertex *)
                 ((int)&(DAT_005ae704->vertex_buffer_ptr->projected_vertex).transformed_x +
                 iStack_1c),&CStack_3c);
      pCVar3 = (CBugs *)((pCVar3->base).base.base.actor_name + 4);
      iStack_1c = iStack_1c + 0x240;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xc);
    iStack_28 = iStack_28 + 1;
    pCStack_2c = (CBugs *)&(pCStack_2c->base).base.base.orient;
  } while (iStack_28 < 0xc);
  engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00460f10(DAT_005ae704,-1);
  iStack_24 = 0xc;
  do {
    iStack_20 = iStack_24;
    iVar2 = 1;
    iVar1 = iStack_24;
    vertex_index2 = iStack_24 + -0xb;
    do {
      iStack_30 = iStack_20 + iVar2;
      engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_004610a0(DAT_005ae704,iStack_30,iVar1)
      ;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 1;
      engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_004610a0
                (DAT_005ae704,iStack_24,vertex_index2);
      vertex_index2 = vertex_index2 + 1;
    } while (iVar2 < 0xc);
    unaff_EDI = unaff_EDI + 0xc;
  } while (unaff_EDI != 0x90);
  return;
}
