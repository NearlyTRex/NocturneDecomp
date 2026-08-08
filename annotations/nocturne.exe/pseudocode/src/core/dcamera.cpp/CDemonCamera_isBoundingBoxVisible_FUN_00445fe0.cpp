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
  CVector3i CStack_13c;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  CVector3i local_118;
  float local_10c;
  float local_108;
  float local_104;
  CVector3i local_100;
  CVector3i local_f4;
  float local_e8;
  float local_e4;
  float local_e0;
  CVector3i local_dc;
  float local_d0;
  float local_cc;
  float local_c8;
  CVector3i local_c4;
  CVector3i local_b8;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  CVector3i local_88;
  float local_7c;
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
  
  CStack_13c.z = (int)g_CDemonRenderer_PTR_005ae704;
  CStack_13c.y = 0x446012;
  engine_drender_cpp_CDemonRenderer_matrixPush_FUN_00460be0();
  fVar7 = (float)256;
  fVar2 = (this_ptr->position).z;
  fVar3 = (this_ptr->position).y;
  fVar4 = position->y;
  fVar5 = position->z;
  g_TransformMatrix.m[0].x = (this_ptr->source_matrix).m[0].x;
  g_TransformMatrix.m[0].y = (this_ptr->source_matrix).m[0].y;
  CStack_13c.z = 0;
  g_TransformMatrix.m[0].z = (this_ptr->source_matrix).m[0].z;
  g_TransformMatrix.m[1].x = (this_ptr->source_matrix).m[1].x;
  CStack_13c.y = (int)orientation;
  iVar8 = (this_ptr->source_matrix).m[1].y;
  CStack_13c.x = 0x446087;
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
  local_124 = bbox_max->x;
  local_120 = bbox_min->y;
  local_11c = bbox_max->z;
  local_f4.x = (int)ROUND(local_124 * 256.0f);
  local_f4.y = (int)ROUND(local_120 * 256.0f);
  local_f4.z = (int)ROUND(local_11c * 256.0f);
  local_78 = local_124;
  local_74 = local_120;
  local_60 = local_11c;
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[0x4e18].projected_vertex,&local_f4);
  local_e8 = bbox_min->x;
  local_e4 = bbox_min->y;
  local_e0 = bbox_max->z;
  local_dc.x = (int)ROUND(local_e8 * 256.0f);
  local_dc.y = (int)ROUND(local_e4 * 256.0f);
  local_dc.z = (int)ROUND(local_e0 * 256.0f);
  local_7c = local_e8;
  local_70 = local_e4;
  local_6c = local_e0;
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[0x4e19].projected_vertex,&local_dc);
  local_94 = bbox_min->x;
  local_90 = bbox_min->y;
  local_8c = bbox_min->z;
  local_100.x = (int)ROUND(local_94 * 256.0f);
  local_100.y = (int)ROUND(local_90 * 256.0f);
  local_100.z = (int)ROUND(local_8c * 256.0f);
  local_68 = local_94;
  local_58 = local_90;
  local_34 = local_8c;
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[0x4e1a].projected_vertex,&local_100);
  local_130 = bbox_max->x;
  local_12c = bbox_min->y;
  local_128 = bbox_min->z;
  local_118.x = (int)ROUND(local_130 * 256.0f);
  local_118.y = (int)ROUND(local_12c * 256.0f);
  local_118.z = (int)ROUND(local_128 * 256.0f);
  local_64 = local_12c;
  local_24 = local_130;
  local_20 = local_128;
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[0x4e1b].projected_vertex,&local_118);
  local_ac = bbox_max->x;
  local_a8 = bbox_max->y;
  local_a4 = bbox_max->z;
  CStack_13c.x = (int)ROUND(local_ac * 256.0f);
  CStack_13c.y = (int)ROUND(local_a8 * 256.0f);
  CStack_13c.z = (int)ROUND(local_a4 * 256.0f);
  local_5c = local_a4;
  local_48 = local_ac;
  local_44 = local_a8;
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[0x4e1c].projected_vertex,&CStack_13c)
  ;
  local_a0 = bbox_min->x;
  local_9c = bbox_max->y;
  local_98 = bbox_max->z;
  local_b8.x = (int)ROUND(local_a0 * 256.0f);
  local_b8.y = (int)ROUND(local_9c * 256.0f);
  local_b8.z = (int)ROUND(local_98 * 256.0f);
  local_54 = local_a0;
  local_50 = local_9c;
  local_4c = local_98;
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[0x4e1d].projected_vertex,&local_b8);
  local_10c = bbox_min->x;
  local_108 = bbox_max->y;
  local_104 = bbox_min->z;
  local_88.x = (int)ROUND(local_10c * 256.0f);
  local_88.y = (int)ROUND(local_108 * 256.0f);
  local_88.z = (int)ROUND(local_104 * 256.0f);
  local_30 = local_10c;
  local_2c = local_108;
  local_28 = local_104;
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[0x4e1e].projected_vertex,&local_88);
  local_d0 = bbox_max->x;
  local_cc = bbox_max->y;
  local_c8 = bbox_min->z;
  local_c4.x = (int)ROUND(local_d0 * 256.0f);
  local_c4.y = (int)ROUND(local_cc * 256.0f);
  local_c4.z = (int)ROUND(local_c8 * 256.0f);
  local_40 = local_d0;
  local_3c = local_cc;
  local_38 = local_c8;
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[19999].projected_vertex,&local_c4);
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
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
  return iVar8;
}
