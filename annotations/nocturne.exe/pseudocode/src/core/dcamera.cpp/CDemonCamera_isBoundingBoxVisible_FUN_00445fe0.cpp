// Name: core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00445fe0
// Address: 00445fe0
// Address Range: [[00445fe0, 0044658f]]
// Convention: __cdecl
// Signature: int __cdecl core_dcamera_cpp_CDemonCamera_isBoundingBoxVisible_FUN_00445fe0(CDemonCamera *this_ptr,CVector3f *position,CVector3f *orientation,CVector3f *bbox_min ,CVector3f *bbox_max)

#include "nocturne.h"

int __cdecl core_dcamera_cpp_CDemonCamera_isBoundingBoxVisible_FUN_00445fe0(CDemonCamera *this_ptr,CVector3f *position,CVector3f *orientation,CVector3f *bbox_min ,CVector3f *bbox_max)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  int iVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  CVector3f *position_00;
  CVector3f *rotation;
  CVector3i local_114;
  float local_108;
  float local_104;
  float local_100;
  CVector3i local_fc;
  CVector3i local_f0;
  float local_e4;
  float local_e0;
  float local_dc;
  CVector3i local_d8;
  float local_cc;
  float local_c8;
  float local_c4;
  CVector3i local_c0;
  CVector3i local_b4;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  CVector3i local_84;
  float local_78;
  float local_74;
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
  
  engine_drender_cpp_CDemonRenderer_matrixPush_FUN_00460be0(g_CDemonRenderer_PTR_005ae704);
  fVar7 = (float)256;
  fVar2 = (this_ptr->position).z;
  fVar3 = (this_ptr->position).y;
  fVar4 = position->y;
  fVar5 = position->z;
  g_TransformMatrix.m[0].x = (this_ptr->source_matrix).m[0].x;
  g_TransformMatrix.m[0].y = (this_ptr->source_matrix).m[0].y;
  g_TransformMatrix.m[0].z = (this_ptr->source_matrix).m[0].z;
  g_TransformMatrix.m[1].x = (this_ptr->source_matrix).m[1].x;
  iVar8 = (this_ptr->source_matrix).m[1].y;
  dVar10 = round((double)(((this_ptr->position).x - position->x) * fVar7));
  iVar6 = (this_ptr->source_matrix).m[1].z;
  rotation = (CVector3f *)0x446099;
  g_TransformMatrix.m[1].y = iVar8;
  dVar11 = round((double)((fVar3 - fVar4) * fVar7));
  iVar8 = (this_ptr->source_matrix).m[2].x;
  position_00 = (CVector3f *)0x4460ab;
  g_TransformMatrix.m[1].z = iVar6;
  dVar12 = round((double)((fVar2 - fVar5) * fVar7));
  g_TransformMatrix.m[2].y = (this_ptr->source_matrix).m[2].y;
  g_RelativeX = (int)ROUND(dVar10);
  g_TransformMatrix.m[2].z = (this_ptr->source_matrix).m[2].z;
  g_RelativeY = (int)ROUND(dVar11);
  g_RelativeZ = (int)ROUND(dVar12);
  g_TransformMatrix.m[2].x = iVar8;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
            (g_CDemonRenderer_PTR_005ae704,position_00,rotation);
  local_74 = bbox_max->x;
  local_70 = bbox_min->y;
  local_5c = bbox_max->z;
  local_f0.x = (int)ROUND(local_74 * 256.0f);
  local_f0.y = (int)ROUND(local_70 * 256.0f);
  local_f0.z = (int)ROUND(local_5c * 256.0f);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[0x4e18].projected_vertex,&local_f0);
  local_e4 = bbox_min->x;
  local_e0 = bbox_min->y;
  local_dc = bbox_max->z;
  local_d8.x = (int)ROUND(local_e4 * 256.0f);
  local_d8.y = (int)ROUND(local_e0 * 256.0f);
  local_d8.z = (int)ROUND(local_dc * 256.0f);
  local_78 = local_e4;
  local_6c = local_e0;
  local_68 = local_dc;
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[0x4e19].projected_vertex,&local_d8);
  local_90 = bbox_min->x;
  local_8c = bbox_min->y;
  local_88 = bbox_min->z;
  local_fc.x = (int)ROUND(local_90 * 256.0f);
  local_fc.y = (int)ROUND(local_8c * 256.0f);
  local_fc.z = (int)ROUND(local_88 * 256.0f);
  local_64 = local_90;
  local_54 = local_8c;
  local_30 = local_88;
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[0x4e1a].projected_vertex,&local_fc);
  local_20 = bbox_max->x;
  local_60 = bbox_min->y;
  local_1c = bbox_min->z;
  local_114.x = (int)ROUND(local_20 * 256.0f);
  local_114.y = (int)ROUND(local_60 * 256.0f);
  local_114.z = (int)ROUND(local_1c * 256.0f);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[0x4e1b].projected_vertex,&local_114);
  local_a8 = bbox_max->x;
  local_a4 = bbox_max->y;
  local_a0 = bbox_max->z;
  local_58 = local_a0;
  local_44 = local_a8;
  local_40 = local_a4;
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[0x4e1c].projected_vertex,
             (CVector3i *)&stack0xfffffec8);
  local_9c = bbox_min->x;
  local_98 = bbox_max->y;
  local_94 = bbox_max->z;
  local_b4.x = (int)ROUND(local_9c * 256.0f);
  local_b4.y = (int)ROUND(local_98 * 256.0f);
  local_b4.z = (int)ROUND(local_94 * 256.0f);
  local_50 = local_9c;
  local_4c = local_98;
  local_48 = local_94;
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[0x4e1d].projected_vertex,&local_b4);
  local_108 = bbox_min->x;
  local_104 = bbox_max->y;
  local_100 = bbox_min->z;
  local_84.x = (int)ROUND(local_108 * 256.0f);
  local_84.y = (int)ROUND(local_104 * 256.0f);
  local_84.z = (int)ROUND(local_100 * 256.0f);
  local_2c = local_108;
  local_28 = local_104;
  local_24 = local_100;
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[0x4e1e].projected_vertex,&local_84);
  local_cc = bbox_max->x;
  local_c8 = bbox_max->y;
  local_c4 = bbox_min->z;
  local_c0.x = (int)ROUND(local_cc * 256.0f);
  local_c0.y = (int)ROUND(local_c8 * 256.0f);
  local_c0.z = (int)ROUND(local_c4 * 256.0f);
  local_3c = local_cc;
  local_38 = local_c8;
  local_34 = local_c4;
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[19999].projected_vertex,&local_c0);
  uVar9 = 0xffffffff;
  iVar8 = 0xea480;
  do {
    puVar1 = (uint *)((int)&(g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->projected_vertex).
                            screen_x + iVar8);
    iVar8 = iVar8 + 0x30;
    uVar9 = uVar9 & *puVar1;
  } while (iVar8 != 960000);
  iVar8 = 1;
  if (((uVar9 & 0x80000000) != 0) && ((char)uVar9 != '\0')) {
    iVar8 = 0;
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(g_CDemonRenderer_PTR_005ae704);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(g_CDemonRenderer_PTR_005ae704);
  return iVar8;
}
