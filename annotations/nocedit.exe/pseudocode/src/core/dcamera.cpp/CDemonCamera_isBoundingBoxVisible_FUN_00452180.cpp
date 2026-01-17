// Name: core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180
// Address: 00452180
// Address Range: [[00452180, 00452707]]
// Convention: __cdecl
// Signature: int core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180(CDemonCamera * this_ptr, CVector3f * position, CVector3f * min_corner, CVector3f * max_corner)

#include "nocturne.h"

int __cdecl
core_dcamera_cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180
          (CDemonCamera *this_ptr,CVector3f *position,CVector3f *min_corner,CVector3f *max_corner)

{
  uint *puVar1;
  int extraout_EAX;
  int extraout_EAX_00;
  int extraout_EAX_01;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  double dVar7;
  float *in_stack_00000014;
  CVector3i *position_00;
  CVector3i *rotation;
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
  
  CStack_13c.z = (int)g_CDemonRendererPtr;
  CStack_13c.y = 0x4521b2;
  engine_drender_cpp_CDemonRenderer_matrixPush_FUN_0050d620();
  fVar4 = (float10)256;
  fVar5 = ((float10)(float)(this_ptr->base).position.y - (float10)position->y) * fVar4;
  fVar6 = ((float10)(float)(this_ptr->base).position.z - (float10)position->z) * fVar4;
  g_TransformMatrix.m[0].x = (this_ptr->source_matrix).m[0].x;
  g_TransformMatrix.m[0].y = (this_ptr->source_matrix).m[0].y;
  CStack_13c.z = 0;
  g_TransformMatrix.m[0].z = (this_ptr->source_matrix).m[0].z;
  g_TransformMatrix.m[1].x = (this_ptr->source_matrix).m[1].x;
  CStack_13c.y = (int)min_corner;
  CStack_13c.x = 0x45221e;
  dVar7 = crt_math_c_round_FUN_005fe6b0
                    ((double)(((float10)(float)(this_ptr->base).position.x - (float10)position->x) *
                             fVar4));
  fVar4 = (float10)dVar7;
  rotation = (CVector3i *)0x452230;
  g_TransformMatrix.m[1].y = extraout_EAX;
  dVar7 = crt_math_c_round_FUN_005fe6b0((double)fVar5);
  fVar5 = (float10)dVar7;
  position_00 = (CVector3i *)0x452242;
  g_TransformMatrix.m[1].z = extraout_EAX_00;
  dVar7 = crt_math_c_round_FUN_005fe6b0((double)fVar6);
  g_TransformMatrix.m[2].y = (this_ptr->source_matrix).m[2].y;
  g_RelativeX = (int)ROUND(fVar4);
  g_TransformMatrix.m[2].z = (this_ptr->source_matrix).m[2].z;
  g_RelativeY = (int)ROUND(fVar5);
  g_RelativeZ = (int)ROUND(dVar7);
  g_TransformMatrix.m[2].x = extraout_EAX_01;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,position_00,rotation);
  local_124 = *in_stack_00000014;
  local_120 = max_corner->y;
  local_11c = in_stack_00000014[2];
  local_f4.x = (int)ROUND(local_124 * 256.0f);
  local_f4.y = (int)ROUND(local_120 * 256.0f);
  local_f4.z = (int)ROUND(local_11c * 256.0f);
  local_78 = local_124;
  local_74 = local_120;
  local_60 = local_11c;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[0x4e18].projected_vertex,&local_f4);
  local_e8 = max_corner->x;
  local_e4 = max_corner->y;
  local_e0 = in_stack_00000014[2];
  local_dc.x = (int)ROUND(local_e8 * 256.0f);
  local_dc.y = (int)ROUND(local_e4 * 256.0f);
  local_dc.z = (int)ROUND(local_e0 * 256.0f);
  local_7c = local_e8;
  local_70 = local_e4;
  local_6c = local_e0;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[0x4e19].projected_vertex,&local_dc);
  local_94 = max_corner->x;
  local_90 = max_corner->y;
  local_8c = max_corner->z;
  local_100.x = (int)ROUND(local_94 * 256.0f);
  local_100.y = (int)ROUND(local_90 * 256.0f);
  local_100.z = (int)ROUND(local_8c * 256.0f);
  local_68 = local_94;
  local_58 = local_90;
  local_34 = local_8c;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[0x4e1a].projected_vertex,&local_100);
  local_130 = *in_stack_00000014;
  local_12c = max_corner->y;
  local_128 = max_corner->z;
  local_118.x = (int)ROUND(local_130 * 256.0f);
  local_118.y = (int)ROUND(local_12c * 256.0f);
  local_118.z = (int)ROUND(local_128 * 256.0f);
  local_64 = local_12c;
  local_24 = local_130;
  local_20 = local_128;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[0x4e1b].projected_vertex,&local_118);
  local_ac = *in_stack_00000014;
  local_a8 = in_stack_00000014[1];
  local_a4 = in_stack_00000014[2];
  CStack_13c.x = (int)ROUND(local_ac * 256.0f);
  CStack_13c.y = (int)ROUND(local_a8 * 256.0f);
  CStack_13c.z = (int)ROUND(local_a4 * 256.0f);
  local_5c = local_a4;
  local_48 = local_ac;
  local_44 = local_a8;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[0x4e1c].projected_vertex,&CStack_13c);
  local_a0 = max_corner->x;
  local_9c = in_stack_00000014[1];
  local_98 = in_stack_00000014[2];
  local_b8.x = (int)ROUND(local_a0 * 256.0f);
  local_b8.y = (int)ROUND(local_9c * 256.0f);
  local_b8.z = (int)ROUND(local_98 * 256.0f);
  local_54 = local_a0;
  local_50 = local_9c;
  local_4c = local_98;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[0x4e1d].projected_vertex,&local_b8);
  local_10c = max_corner->x;
  local_108 = in_stack_00000014[1];
  local_104 = max_corner->z;
  local_88.x = (int)ROUND(local_10c * 256.0f);
  local_88.y = (int)ROUND(local_108 * 256.0f);
  local_88.z = (int)ROUND(local_104 * 256.0f);
  local_30 = local_10c;
  local_2c = local_108;
  local_28 = local_104;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[0x4e1e].projected_vertex,&local_88);
  local_d0 = *in_stack_00000014;
  local_cc = in_stack_00000014[1];
  local_c8 = max_corner->z;
  local_c4.x = (int)ROUND(local_d0 * 256.0f);
  local_c4.y = (int)ROUND(local_cc * 256.0f);
  local_c4.z = (int)ROUND(local_c8 * 256.0f);
  local_40 = local_d0;
  local_3c = local_cc;
  local_38 = local_c8;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[19999].projected_vertex,&local_c4);
  uVar3 = 0xffffffff;
  iVar2 = 0xea480;
  do {
    puVar1 = (uint *)((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).screen_x +
                     iVar2);
    iVar2 = iVar2 + 0x30;
    uVar3 = uVar3 & *puVar1;
  } while (iVar2 != 960000);
  iVar2 = 1;
  if (((uVar3 & 0x80000000) != 0) && ((char)uVar3 != '\0')) {
    iVar2 = 0;
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return iVar2;
}
