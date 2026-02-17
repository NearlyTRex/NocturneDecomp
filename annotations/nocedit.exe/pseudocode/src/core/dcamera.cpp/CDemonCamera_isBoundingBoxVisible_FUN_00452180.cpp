// Name: core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180
// Address: 00452180
// Address Range: [[00452180, 00452707]]
// Convention: __cdecl
// Signature: int __cdecl core_dcamera_cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180(CDemonCamera *this_ptr,CVector3f *position,CVector3f *min_corner,CVector3f *max_corner)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

int __cdecl core_dcamera_cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180(CDemonCamera *this_ptr,CVector3f *position,CVector3f *min_corner,CVector3f *max_corner)

{
  uint *puVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  float *in_stack_00000014;
  CVector3i local_130;
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
  
  engine_drender_cpp_CDemonRenderer_matrixPush_FUN_0050d620();
  fVar2 = (float)256;
  g_TransformMatrix.m[0].x = (this_ptr->source_matrix).m[0].x;
  g_TransformMatrix.m[0].y = (this_ptr->source_matrix).m[0].y;
  g_TransformMatrix.m[0].z = (this_ptr->source_matrix).m[0].z;
  g_TransformMatrix.m[1].x = (this_ptr->source_matrix).m[1].x;
  g_TransformMatrix.m[1].y = (this_ptr->source_matrix).m[1].y;
  g_TransformMatrix.m[1].z = (this_ptr->source_matrix).m[1].z;
  g_TransformMatrix.m[2].x = (this_ptr->source_matrix).m[2].x;
  g_TransformMatrix.m[2].y = (this_ptr->source_matrix).m[2].y;
  g_RelativeX = (int)ROUND(ROUND(((float)(this_ptr->base).position.x - position->x) * fVar2));
  g_TransformMatrix.m[2].z = (this_ptr->source_matrix).m[2].z;
  g_RelativeY = (int)ROUND(ROUND(((float)(this_ptr->base).position.y - position->y) * fVar2));
  g_RelativeZ = (int)ROUND(ROUND(((float)(this_ptr->base).position.z - position->z) * fVar2));
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,(CVector3i *)min_corner,(CVector3i *)0x0);
  local_118 = *in_stack_00000014;
  local_114 = max_corner->y;
  local_110 = in_stack_00000014[2];
  local_e8.x = (int)ROUND(local_118 * 256.0f);
  local_e8.y = (int)ROUND(local_114 * 256.0f);
  local_e8.z = (int)ROUND(local_110 * 256.0f);
  local_6c = local_118;
  local_68 = local_114;
  local_54 = local_110;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[0x4e18].projected_vertex,&local_e8);
  local_dc = max_corner->x;
  local_d8 = max_corner->y;
  local_d4 = in_stack_00000014[2];
  local_d0.x = (int)ROUND(local_dc * 256.0f);
  local_d0.y = (int)ROUND(local_d8 * 256.0f);
  local_d0.z = (int)ROUND(local_d4 * 256.0f);
  local_70 = local_dc;
  local_64 = local_d8;
  local_60 = local_d4;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[0x4e19].projected_vertex,&local_d0);
  local_88 = max_corner->x;
  local_84 = max_corner->y;
  local_80 = max_corner->z;
  local_f4.x = (int)ROUND(local_88 * 256.0f);
  local_f4.y = (int)ROUND(local_84 * 256.0f);
  local_f4.z = (int)ROUND(local_80 * 256.0f);
  local_5c = local_88;
  local_4c = local_84;
  local_28 = local_80;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[0x4e1a].projected_vertex,&local_f4);
  local_124 = *in_stack_00000014;
  local_120 = max_corner->y;
  local_11c = max_corner->z;
  local_10c.x = (int)ROUND(local_124 * 256.0f);
  local_10c.y = (int)ROUND(local_120 * 256.0f);
  local_10c.z = (int)ROUND(local_11c * 256.0f);
  local_58 = local_120;
  local_18 = local_124;
  local_14 = local_11c;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[0x4e1b].projected_vertex,&local_10c);
  local_a0 = *in_stack_00000014;
  local_9c = in_stack_00000014[1];
  local_98 = in_stack_00000014[2];
  local_130.x = (int)ROUND(local_a0 * 256.0f);
  local_130.y = (int)ROUND(local_9c * 256.0f);
  local_130.z = (int)ROUND(local_98 * 256.0f);
  local_50 = local_98;
  local_3c = local_a0;
  local_38 = local_9c;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[0x4e1c].projected_vertex,&local_130);
  local_94 = max_corner->x;
  local_90 = in_stack_00000014[1];
  local_8c = in_stack_00000014[2];
  local_ac.x = (int)ROUND(local_94 * 256.0f);
  local_ac.y = (int)ROUND(local_90 * 256.0f);
  local_ac.z = (int)ROUND(local_8c * 256.0f);
  local_48 = local_94;
  local_44 = local_90;
  local_40 = local_8c;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[0x4e1d].projected_vertex,&local_ac);
  local_100 = max_corner->x;
  local_fc = in_stack_00000014[1];
  local_f8 = max_corner->z;
  local_7c.x = (int)ROUND(local_100 * 256.0f);
  local_7c.y = (int)ROUND(local_fc * 256.0f);
  local_7c.z = (int)ROUND(local_f8 * 256.0f);
  local_24 = local_100;
  local_20 = local_fc;
  local_1c = local_f8;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[0x4e1e].projected_vertex,&local_7c);
  local_c4 = *in_stack_00000014;
  local_c0 = in_stack_00000014[1];
  local_bc = max_corner->z;
  local_b8.x = (int)ROUND(local_c4 * 256.0f);
  local_b8.y = (int)ROUND(local_c0 * 256.0f);
  local_b8.z = (int)ROUND(local_bc * 256.0f);
  local_34 = local_c4;
  local_30 = local_c0;
  local_2c = local_bc;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[19999].projected_vertex,&local_b8);
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
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return iVar3;
}
