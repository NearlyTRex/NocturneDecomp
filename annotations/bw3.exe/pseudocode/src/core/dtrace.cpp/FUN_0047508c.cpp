// Name: core_dtrace.cpp_FUN_0047508c
// Address: 0047508c
// Address Range: [[0047508c, 0047508f]]
// Convention: unknown
// Signature: void core_dtrace_cpp_FUN_0047508c(int param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dtrace_cpp_FUN_0047508c(int param_1,float *param_2)

{
  uint uVar1;
  SMRGLPrimitivePoly SStack_e8;
  CVector3i CStack_70;
  CVector3i CStack_64;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  CVector3i CStack_40;
  CVector3i CStack_34;
  CVector3i CStack_28;
  CVector3i CStack_1c;
  
  fStack_58 = *(float *)(param_1 + 0x28) * _DAT_005bca21;
  fStack_54 = *(float *)(param_1 + 0x2c) * _DAT_005bca21;
  fStack_50 = *(float *)(param_1 + 0x30) * _DAT_005bca21;
  if (SStack_e8.vertices + 4 != (SMRGLVertex *)&fStack_4c) {
    SStack_e8.vertices[4].vertex_index = (int)fStack_58;
    SStack_e8.vertices[4].texture_u = (int)fStack_54;
    SStack_e8.vertices[4].texture_v = (int)fStack_50;
  }
  fStack_4c = fStack_58;
  fStack_48 = fStack_54;
  fStack_44 = fStack_50;
  engine_drender_cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0046ce60
            (0x01BDD7E4,(CVector3i *)0x1c599c0);
  SStack_e8.vertices[5].vertex_index = (int)ROUND(*param_2 * _DAT_005dee30);
  SStack_e8.vertices[5].texture_u = (int)ROUND(param_2[1] * _DAT_005dee30);
  SStack_e8.vertices[5].texture_v = (int)ROUND(param_2[2] * _DAT_005dee30);
  engine_special_cpp_FUN_005632a3
            (&DAT_005f2afc->vertex_buffer_ptr->projected_vertex,
             (CVector3i *)(SStack_e8.vertices + 5));
  SStack_e8.vertices[7].vertex_index = (int)(*param_2 + (float)SStack_e8.vertices[4].vertex_index);
  SStack_e8.vertices[7].texture_u = (int)param_2[1];
  SStack_e8.vertices[7].texture_v = (int)param_2[2];
  CStack_70.x = (int)ROUND((float)SStack_e8.vertices[7].vertex_index * _DAT_005dee30);
  CStack_70.y = (int)ROUND((float)SStack_e8.vertices[7].texture_u * _DAT_005dee30);
  CStack_70.z = (int)ROUND((float)SStack_e8.vertices[7].texture_v * _DAT_005dee30);
  engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr[1].projected_vertex,&CStack_70);
  SStack_e8.vertices[7].vertex_index = (int)(*param_2 + (float)SStack_e8.vertices[4].vertex_index);
  SStack_e8.vertices[7].texture_u = (int)param_2[1];
  SStack_e8.vertices[7].texture_v = (int)(param_2[2] + (float)SStack_e8.vertices[4].texture_v);
  CStack_40.x = (int)ROUND((float)SStack_e8.vertices[7].vertex_index * _DAT_005dee30);
  CStack_40.y = (int)ROUND((float)SStack_e8.vertices[7].texture_u * _DAT_005dee30);
  CStack_40.z = (int)ROUND((float)SStack_e8.vertices[7].texture_v * _DAT_005dee30);
  engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr[2].projected_vertex,&CStack_40);
  SStack_e8.vertices[7].vertex_index = (int)*param_2;
  SStack_e8.vertices[7].texture_u = (int)param_2[1];
  SStack_e8.vertices[7].texture_v = (int)(param_2[2] + (float)SStack_e8.vertices[4].texture_v);
  CStack_64.x = (int)ROUND((float)SStack_e8.vertices[7].vertex_index * _DAT_005dee30);
  CStack_64.y = (int)ROUND((float)SStack_e8.vertices[7].texture_u * _DAT_005dee30);
  CStack_64.z = (int)ROUND((float)SStack_e8.vertices[7].texture_v * _DAT_005dee30);
  engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr[3].projected_vertex,&CStack_64);
  SStack_e8.vertices[7].vertex_index = (int)*param_2;
  SStack_e8.vertices[7].texture_u = (int)(param_2[1] + (float)SStack_e8.vertices[4].texture_u);
  SStack_e8.vertices[7].texture_v = (int)param_2[2];
  CStack_34.x = (int)ROUND((float)SStack_e8.vertices[7].vertex_index * _DAT_005dee30);
  CStack_34.y = (int)ROUND((float)SStack_e8.vertices[7].texture_u * _DAT_005dee30);
  CStack_34.z = (int)ROUND((float)SStack_e8.vertices[7].texture_v * _DAT_005dee30);
  engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr[4].projected_vertex,&CStack_34);
  SStack_e8.vertices[7].vertex_index = (int)(*param_2 + (float)SStack_e8.vertices[4].vertex_index);
  SStack_e8.vertices[7].texture_u = (int)(param_2[1] + (float)SStack_e8.vertices[4].texture_u);
  SStack_e8.vertices[7].texture_v = (int)param_2[2];
  SStack_e8.vertices[6].vertex_index =
       (int)ROUND((float)SStack_e8.vertices[7].vertex_index * _DAT_005dee30);
  SStack_e8.vertices[6].texture_u =
       (int)ROUND((float)SStack_e8.vertices[7].texture_u * _DAT_005dee30);
  SStack_e8.vertices[6].texture_v =
       (int)ROUND((float)SStack_e8.vertices[7].texture_v * _DAT_005dee30);
  engine_special_cpp_FUN_005632a3
            (&DAT_005f2afc->vertex_buffer_ptr[5].projected_vertex,
             (CVector3i *)(SStack_e8.vertices + 6));
  SStack_e8.vertices[7].vertex_index = (int)(*param_2 + (float)SStack_e8.vertices[4].vertex_index);
  SStack_e8.vertices[7].texture_u = (int)(param_2[1] + (float)SStack_e8.vertices[4].texture_u);
  SStack_e8.vertices[7].texture_v = (int)(param_2[2] + (float)SStack_e8.vertices[4].texture_v);
  CStack_1c.x = (int)ROUND((float)SStack_e8.vertices[7].vertex_index * _DAT_005dee30);
  CStack_1c.y = (int)ROUND((float)SStack_e8.vertices[7].texture_u * _DAT_005dee30);
  CStack_1c.z = (int)ROUND((float)SStack_e8.vertices[7].texture_v * _DAT_005dee30);
  engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr[6].projected_vertex,&CStack_1c);
  SStack_e8.vertices[7].vertex_index = (int)*param_2;
  SStack_e8.vertices[7].texture_u = (int)(param_2[1] + (float)SStack_e8.vertices[4].texture_u);
  SStack_e8.vertices[7].texture_v = (int)(param_2[2] + (float)SStack_e8.vertices[4].texture_v);
  CStack_28.x = (int)ROUND((float)SStack_e8.vertices[7].vertex_index * _DAT_005dee30);
  CStack_28.y = (int)ROUND((float)SStack_e8.vertices[7].texture_u * _DAT_005dee30);
  CStack_28.z = (int)ROUND((float)SStack_e8.vertices[7].texture_v * _DAT_005dee30);
  engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr[7].projected_vertex,&CStack_28);
  uVar1 = rand();
  engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0046d3c0(DAT_005f2afc,uVar1 & 0xff);
  SStack_e8.base.base.count = 4;
  SStack_e8.base.surface_normal.A.i = 0;
  SStack_e8.base.surface_normal.B.i = 0;
  SStack_e8.base.surface_normal.C.i = 0;
  SStack_e8.base.surface_normal.D.i = 0;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460(DAT_005f2afc,1);
  SStack_e8.vertices[3].vertex_index = 0;
  SStack_e8.vertices[2].vertex_index = 1;
  SStack_e8.vertices[0].vertex_index = 4;
  SStack_e8.vertices[1].vertex_index = 5;
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0(DAT_005f2afc,&SStack_e8);
  SStack_e8.vertices[3].vertex_index = 2;
  SStack_e8.vertices[2].vertex_index = 3;
  SStack_e8.vertices[1].vertex_index = 7;
  SStack_e8.vertices[0].vertex_index = 6;
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0(DAT_005f2afc,&SStack_e8);
  SStack_e8.vertices[1].vertex_index = 7;
  SStack_e8.vertices[3].vertex_index = 0;
  SStack_e8.vertices[2].vertex_index = 4;
  SStack_e8.vertices[0].vertex_index = 3;
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0(DAT_005f2afc,&SStack_e8);
  SStack_e8.vertices[3].vertex_index = 1;
  SStack_e8.vertices[2].vertex_index = 2;
  SStack_e8.vertices[1].vertex_index = 6;
  SStack_e8.vertices[0].vertex_index = 5;
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0(DAT_005f2afc,&SStack_e8);
  SStack_e8.vertices[1].vertex_index = 6;
  SStack_e8.vertices[3].vertex_index = 4;
  SStack_e8.vertices[2].vertex_index = 5;
  SStack_e8.vertices[0].vertex_index = 7;
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0(DAT_005f2afc,&SStack_e8);
  SStack_e8.vertices[2].vertex_index = 2;
  SStack_e8.vertices[1].vertex_index = 1;
  SStack_e8.vertices[3].vertex_index = 3;
  SStack_e8.vertices[0].vertex_index = 0;
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0(DAT_005f2afc,&SStack_e8);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460(DAT_005f2afc,0);
  return;
}
