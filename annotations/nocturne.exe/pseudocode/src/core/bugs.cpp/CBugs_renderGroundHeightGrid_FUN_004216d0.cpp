// Name: core_bugs.cpp_CBugs_renderGroundHeightGrid_FUN_004216d0
// Address: 004216d0
// Address Range: [[004216d0, 0042183a]]
// Convention: unknown
// Signature: void core_bugs_cpp_CBugs_renderGroundHeightGrid_FUN_004216d0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_bugs_cpp_CBugs_renderGroundHeightGrid_FUN_004216d0(int param_1)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  int iVar3;
  float fVar4;
  CVector3i CStack_3c;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  iStack_28 = 0;
  iStack_2c = param_1;
  do {
    fVar4 = (float)iStack_28 * 0.5f + *(float *)(param_1 + 0x19854);
    iStack_1c = iStack_28 * 0x30;
    iVar1 = 0;
    iVar3 = iStack_2c;
    do {
      CStack_3c.x = (int)ROUND(fVar4 * _DAT_0059ae90);
      CStack_3c.y = (int)ROUND((*(float *)(iVar3 + 0x12720) + (float)0.25) *
                               _DAT_0059ae90);
      CStack_3c.z = (int)ROUND(((float)iVar1 * 0.5f + *(float *)(param_1 + 0x19858)) *
                               _DAT_0059ae90);
      iStack_18 = iVar1;
      engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                ((SProjectedVertex *)
                 ((int)&(DAT_005ae704->vertex_buffer_ptr->projected_vertex).transformed_x +
                 iStack_1c),&CStack_3c);
      iVar3 = iVar3 + 4;
      iStack_1c = iStack_1c + 0x240;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xc);
    iStack_28 = iStack_28 + 1;
    iStack_2c = iStack_2c + 0x30;
  } while (iStack_28 < 0xc);
  engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00460f10(DAT_005ae704,-1);
  iStack_24 = 0xc;
  do {
    iStack_20 = iStack_24;
    iVar2 = 1;
    iVar3 = iStack_24;
    iVar1 = iStack_24 + -0xb;
    do {
      iStack_30 = iStack_20 + iVar2;
      engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_004610a0(DAT_005ae704,iStack_30,iVar3)
      ;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 1;
      engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_004610a0(DAT_005ae704,iStack_24,iVar1)
      ;
      iVar1 = iVar1 + 1;
    } while (iVar2 < 0xc);
    unaff_EDI = unaff_EDI + 0xc;
  } while (unaff_EDI != 0x90);
  return;
}
