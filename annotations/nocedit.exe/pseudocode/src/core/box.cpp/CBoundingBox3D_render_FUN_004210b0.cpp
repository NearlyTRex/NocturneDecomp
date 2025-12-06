// Name: core_box.cpp_CBoundingBox3D_render_FUN_004210b0
// Address: 004210b0
// Address Range: [[004210b0, 0042154b]]
// Convention: __cdecl
// Signature: void core_box.cpp_CBoundingBox3D_render_FUN_004210b0(CBoundingBox3D * this_ptr, int param1, int param2, int param3)

#include "nocturne.h"

void __cdecl
core_box_cpp_CBoundingBox3D_render_FUN_004210b0
          (CBoundingBox3D *this_ptr,int param1,int param2,int param3)

{
  float fVar1;
  float fVar2;
  CDemonRenderer *pCVar3;
  void *pvVar4;
  BADSPACEBASE *in_ESP;
  uint corner_index;
  int *piVar5;
  byte local_3c [8];
  byte local_34 [8];
  byte local_2c [8];
  int local_24;
  int local_20;
  CVector3f local_1c;
  float local_10;
  uint local_c;
  int local_8;
  
  corner_index = 0;
  piVar5 = (int *)&stack0xffffff50;
  do {
    core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0(this_ptr,&local_1c,corner_index);
    corner_index = corner_index + 1;
    *piVar5 = (int)ROUND(local_1c.y * 256f);
    piVar5[1] = (int)ROUND(local_1c.z * 256f);
    piVar5[2] = (int)ROUND(local_10 * 256f);
    piVar5 = piVar5 + 3;
  } while ((int)corner_index < 8);
  core_set_cpp_CDemonSet_rotateVertices_FUN_0056e7c0(g_CDemonSetPtr,8,(int *)&stack0xffffff54);
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr,1);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
  local_1c.y = (float)(int)ROUND((this_ptr->min).x * 256f);
  local_1c.z = (float)(int)ROUND((this_ptr->min).y * 256f);
  local_10 = (float)(int)ROUND((this_ptr->min).z * 256f);
  fVar1 = (this_ptr->max).y * 256f;
  fVar2 = (this_ptr->max).z * 256f;
  pvVar4 = (void *)engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  pCVar3 = g_CDemonRendererPtr;
  if (pvVar4 == (void *)0x0) {
    g_CurrentTextureData = pvVar4;
    g_CurrentTextureOpacityData = pvVar4;
    g_CDemonRendererPtr->vertex_buffer_ptr->light = 4.59163e-41;
    pCVar3->vertex_buffer_ptr->color = 0;
    pCVar3->vertex_buffer_ptr->fog = 0.0;
    pCVar3->vertex_buffer_ptr[1].light = 0.0;
    pCVar3->vertex_buffer_ptr[1].color = 0x7fff;
    pCVar3->vertex_buffer_ptr[1].fog = 0.0;
    pCVar3->vertex_buffer_ptr[2].light = 0.0;
    pCVar3->vertex_buffer_ptr[2].color = 0;
    pCVar3->vertex_buffer_ptr[2].fog = 4.59163e-41;
    pCVar3->vertex_buffer_ptr[3].light = 4.59163e-41;
    pCVar3->vertex_buffer_ptr[3].color = 0x7fff;
    pCVar3->vertex_buffer_ptr[3].fog = 0.0;
    pCVar3->vertex_buffer_ptr[4].light = 0.0;
    pCVar3->vertex_buffer_ptr[4].color = 0x7fff;
    pCVar3->vertex_buffer_ptr[4].fog = 4.59163e-41;
    pCVar3->vertex_buffer_ptr[5].light = 4.59163e-41;
    pCVar3->vertex_buffer_ptr[5].color = 0;
    pCVar3->vertex_buffer_ptr[5].fog = 4.59163e-41;
    pCVar3->vertex_buffer_ptr[6].light = 4.59163e-41;
    pCVar3->vertex_buffer_ptr[6].color = 0x7fff;
    pCVar3->vertex_buffer_ptr[6].fog = 4.59163e-41;
    pCVar3->vertex_buffer_ptr[7].light = 0.0;
    pCVar3->vertex_buffer_ptr[7].color = 0;
    pCVar3->vertex_buffer_ptr[7].fog = 0.0;
  }
  local_34._0_4_ = -1;
  local_34._4_4_ = 0;
  local_2c._0_4_ = 0;
  local_24 = 0;
  local_20 = 4;
  local_1c.x = 8.40779e-45;
  local_2c._4_4_ = -(int)local_1c.z;
  local_1c.y = 2.8026e-45;
  engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)local_3c,0x2c4);
  local_34._4_4_ = 1;
  local_2c._0_4_ = 0;
  local_1c.x = 4.2039e-45;
  local_20 = 1;
  local_2c._4_4_ = 0;
  local_1c.y = 9.80909e-45;
  local_1c.z = 7.00649e-45;
  local_24 = (int)ROUND(fVar2);
  engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)(local_3c + 4),0x2c4);
  local_2c._0_4_ = 0;
  local_2c._4_4_ = -1;
  local_24 = 0;
  local_1c.x = 0.0;
  local_1c.y = 1.4013e-45;
  local_20 = -local_8;
  local_1c.z = 7.00649e-45;
  local_10 = 5.60519e-45;
  engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)local_34,0x2c4);
  local_2c._4_4_ = 0;
  local_24 = 1;
  local_20 = 0;
  local_1c.y = 2.8026e-45;
  local_1c.z = 8.40779e-45;
  local_10 = 9.80909e-45;
  local_c = 3;
  engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)(local_34 + 4),0x2c4);
  local_24 = 0;
  local_20 = 0;
  local_1c.x = -NAN;
  local_1c.z = 0.0;
  local_8 = 1;
  local_10 = 2.8026e-45;
  local_c = 3;
  local_1c.y = (float)-(int)ROUND(fVar1);
  engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)local_2c,0x2c4);
  local_20 = 0;
  local_1c.x = 0.0;
  local_10 = 5.60519e-45;
  local_c = 5;
  local_1c.y = 1.4013e-45;
  local_8 = 7;
  engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)(local_2c + 4),0x2c4);
  return;
}
