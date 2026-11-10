// Name: core_bugs.cpp_CBugs_renderGroundHeightGrid_FUN_00425650
// Address: 00425650
// Address Range: [[00425650, 004257ba]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_renderGroundHeightGrid_FUN_00425650(CBugs *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bugs_cpp_CBugs_renderGroundHeightGrid_FUN_00425650(CBugs *this_ptr)

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
    fVar4 = (float)iStack_28 * _DAT_005fd228 + this_ptr->grid_origin_x;
    iStack_1c = iStack_28 * 0x30;
    iVar1 = 0;
    pCVar3 = pCStack_2c;
    do {
      CStack_3c.x = (int)ROUND(fVar4 * _DAT_005fd210);
      CStack_3c.y = (int)ROUND((pCVar3->ground_heights[0][0] + (float)_DAT_005d5048) * _DAT_005fd210
                              );
      CStack_3c.z = (int)ROUND(((float)iVar1 * _DAT_005fd228 + this_ptr->grid_origin_z) *
                               _DAT_005fd210);
      iStack_18 = iVar1;
      engine_special_cpp_FUN_00580173
                ((SProjectedVertex *)(DAT_00612560->vertex_buffer_ptr + iStack_1c),&CStack_3c);
      pCVar3 = (CBugs *)((pCVar3->base).base.base.actor_name + 4);
      iStack_1c = iStack_1c + 0x240;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xc);
    iStack_28 = iStack_28 + 1;
    pCStack_2c = (CBugs *)&(pCStack_2c->base).base.base.orient;
  } while (iStack_28 < 0xc);
  engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00483ce0(DAT_00612560,-1);
  iStack_24 = 0xc;
  do {
    iStack_20 = iStack_24;
    iVar2 = 1;
    iVar1 = iStack_24;
    vertex_index2 = iStack_24 + -0xb;
    do {
      iStack_30 = iStack_20 + iVar2;
      engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_00483e70(DAT_00612560,iStack_30,iVar1)
      ;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 1;
      engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_00483e70
                (DAT_00612560,iStack_24,vertex_index2);
      vertex_index2 = vertex_index2 + 1;
    } while (iVar2 < 0xc);
    unaff_EDI = unaff_EDI + 0xc;
  } while (unaff_EDI != 0x90);
  return;
}
