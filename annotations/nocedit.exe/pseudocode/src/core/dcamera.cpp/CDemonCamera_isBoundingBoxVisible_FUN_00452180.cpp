// Name: core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180
// Address: 00452180
// Address Range: [[00452180, 00452726]]
// Convention: __cdecl
// Signature: int __cdecl core_dcamera_cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180(CDemonCamera *this_ptr,CVector3f *position,CVector3f *orientation,CVector3f *bbox_min ,CVector3f *bbox_max)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

int __cdecl core_dcamera_cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180(CDemonCamera *this_ptr,CVector3f *position,CVector3f *orientation,CVector3f *bbox_min ,CVector3f *bbox_max)

{
  uint *puVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  CVector3i local_10c;
  float local_100;
  float local_fc;
  float local_f8;
  CVector3i local_f4;
  CVector3i local_e8;
  float local_dc;
  float local_d8;
  float local_d4;
  CVector3i local_d0;
  float local_c4;
  float local_c0;
  float local_bc;
  CVector3i local_b8;
  CVector3i local_ac;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  CVector3i local_7c;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  engine_drender_cpp_CDemonRenderer_matrixPush_FUN_0048c630(g_CDemonRendererPtr2);
  fVar2 = (float)256;
  g_TransformMatrix.m[0].x = (this_ptr->source_matrix).m[0].x;
  g_TransformMatrix.m[0].y = (this_ptr->source_matrix).m[0].y;
  g_TransformMatrix.m[0].z = (this_ptr->source_matrix).m[0].z;
  g_TransformMatrix.m[1].x = (this_ptr->source_matrix).m[1].x;
  g_TransformMatrix.m[1].y = (this_ptr->source_matrix).m[1].y;
  g_TransformMatrix.m[1].z = (this_ptr->source_matrix).m[1].z;
  g_TransformMatrix.m[2].x = (this_ptr->source_matrix).m[2].x;
  g_TransformMatrix.m[2].y = (this_ptr->source_matrix).m[2].y;
  g_RelativeX = (int)ROUND(ROUND(((this_ptr->base).position.f.x - position->x) * fVar2));
  g_TransformMatrix.m[2].z = (this_ptr->source_matrix).m[2].z;
  g_RelativeY = (int)ROUND(ROUND(((this_ptr->base).position.f.y - position->y) * fVar2));
  g_RelativeZ = (int)ROUND(ROUND(((this_ptr->base).position.f.z - position->z) * fVar2));
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,bbox_min,(CVector3f *)0x0);
  local_10c.x = (int)bbox_max->z;
  local_e8.y = (int)ROUND(bbox_max->x * 256.0f);
  local_e8.z = (int)ROUND(bbox_min->y * 256.0f);
  engine_special_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[0x4e18].projected_vertex,
             (CVector3i *)&local_e8.y);
  local_d0.x = (int)bbox_max->z;
  local_d0.y = (int)ROUND(bbox_min->x * 256.0f);
  local_d0.z = (int)ROUND(bbox_min->y * 256.0f);
  engine_special_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[0x4e19].projected_vertex,
             (CVector3i *)&local_d0.y);
  local_7c.x = (int)bbox_min->z;
  local_f4.y = (int)ROUND(bbox_min->x * 256.0f);
  local_f4.z = (int)ROUND(bbox_min->y * 256.0f);
  local_e8.x = (int)ROUND((float)local_7c.x * 256.0f);
  engine_special_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[0x4e1a].projected_vertex,
             (CVector3i *)&local_f4.y);
  local_10c.y = (int)ROUND(bbox_max->x * 256.0f);
  local_10c.z = (int)ROUND(bbox_min->y * 256.0f);
  engine_special_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[0x4e1b].projected_vertex,
             (CVector3i *)&local_10c.y);
  engine_special_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[0x4e1c].projected_vertex,
             (CVector3i *)&stack0xfffffed4);
  local_ac.y = (int)ROUND(bbox_min->x * 256.0f);
  local_ac.z = (int)ROUND(bbox_max->y * 256.0f);
  engine_special_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[0x4e1d].projected_vertex,
             (CVector3i *)&local_ac.y);
  local_f4.x = (int)bbox_min->z;
  local_7c.y = (int)ROUND(bbox_min->x * 256.0f);
  local_7c.z = (int)ROUND(bbox_max->y * 256.0f);
  engine_special_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[0x4e1e].projected_vertex,
             (CVector3i *)&local_7c.y);
  local_b8.x = (int)bbox_min->z;
  local_b8.y = (int)ROUND(bbox_max->x * 256.0f);
  local_b8.z = (int)ROUND(bbox_max->y * 256.0f);
  local_ac.x = (int)ROUND((float)local_b8.x * 256.0f);
  engine_special_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[19999].projected_vertex,
             (CVector3i *)&local_b8.y);
  uVar4 = 0xffffffff;
  iVar3 = 0xea480;
  do {
    puVar1 = (uint *)((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).screen_x +
                     iVar3);
    iVar3 = iVar3 + 0x30;
    uVar4 = uVar4 & *puVar1;
  } while (iVar3 != 960000);
  iVar3 = 1;
  if (((uVar4 & 0x80000000) != 0) && ((char)uVar4 != '\0')) {
    iVar3 = 0;
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
  return iVar3;
}
