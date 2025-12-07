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
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  BADSPACEBASE *in_ESP;
  float10 fVar7;
  float10 fVar8;
  double dVar9;
  double dVar10;
  float *in_stack_00000014;
  CVector3i *position_00;
  CVector3i *rotation;
  CVector3i local_104;
  byte local_f0 [8];
  float local_e8;
  float local_e4;
  float local_dc;
  float local_d8;
  float local_d4;
  CVector3i local_d0 [3];
  float local_ac;
  float local_a8;
  float local_a4;
  byte local_a0 [8];
  int local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_84;
  float local_80;
  float local_7c;
  float local_70;
  float local_6c;
  CVector3i local_68;
  float local_58;
  float local_50;
  float local_48;
  float local_44;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_24;
  float local_1c;
  float local_18;
  float local_14;
  
  engine_drender_cpp_CDemonRenderer_matrixPush_FUN_0050d620();
  fVar7 = (float10)256f;
  fVar2 = (float)(this_ptr->base).position.y;
  fVar3 = position->y;
  fVar8 = ((float10)(float)(this_ptr->base).position.z - (float10)position->z) * fVar7;
  g_TransformMatrix.m[0].x = (this_ptr->source_matrix).m[0].x;
  g_TransformMatrix.m[0].y = (this_ptr->source_matrix).m[0].y;
  g_TransformMatrix.m[0].z = (this_ptr->source_matrix).m[0].z;
  g_TransformMatrix.m[1].x = (this_ptr->source_matrix).m[1].x;
  iVar5 = (this_ptr->source_matrix).m[1].y;
  dVar9 = crt_math_c_round_FUN_005fe6b0
                    ((double)(((float10)(float)(this_ptr->base).position.x - (float10)position->x) *
                             fVar7));
  iVar4 = (this_ptr->source_matrix).m[1].z;
  rotation = (CVector3i *)0x452230;
  g_TransformMatrix.m[1].y = iVar5;
  dVar10 = crt_math_c_round_FUN_005fe6b0((double)(((float10)fVar2 - (float10)fVar3) * fVar7));
  fVar7 = (float10)dVar10;
  iVar5 = (this_ptr->source_matrix).m[2].x;
  position_00 = (CVector3i *)0x452242;
  g_TransformMatrix.m[1].z = iVar4;
  dVar10 = crt_math_c_round_FUN_005fe6b0((double)fVar8);
  g_TransformMatrix.m[2].y = (this_ptr->source_matrix).m[2].y;
  g_RelativeX = (int)ROUND(dVar9);
  g_TransformMatrix.m[2].z = (this_ptr->source_matrix).m[2].z;
  g_RelativeY = (int)ROUND(fVar7);
  g_RelativeZ = (int)ROUND(dVar10);
  g_TransformMatrix.m[2].x = iVar5;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,position_00,rotation);
  local_70 = *in_stack_00000014;
  local_6c = max_corner->y;
  local_58 = in_stack_00000014[2];
  local_f0._4_4_ = (uint)ROUND(local_70 * 256f);
  local_e8 = (float)(int)ROUND(local_6c * 256f);
  local_e4 = (float)(int)ROUND(local_58 * 256f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[0x4e18].projected_vertex,
             (CVector3i *)(local_f0 + 4));
  local_dc = max_corner->x;
  local_d8 = max_corner->y;
  local_d4 = in_stack_00000014[2];
  local_d0[0].x = (int)ROUND(local_dc * 256f);
  local_d0[0].y = (int)ROUND(local_d8 * 256f);
  local_d0[0].z = (int)ROUND(local_d4 * 256f);
  local_70 = local_dc;
  local_68.y = (int)local_d8;
  local_68.z = (int)local_d4;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[0x4e19].projected_vertex,local_d0);
  local_84 = max_corner->x;
  local_80 = max_corner->y;
  local_7c = max_corner->z;
  local_f0._0_4_ = (uint)ROUND(local_84 * 256f);
  local_f0._4_4_ = (uint)ROUND(local_80 * 256f);
  local_e8 = (float)(int)ROUND(local_7c * 256f);
  local_58 = local_84;
  local_48 = local_80;
  local_24 = local_7c;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[0x4e1a].projected_vertex,(CVector3i *)local_f0)
  ;
  local_50 = max_corner->y;
  local_104.x = (int)ROUND(*in_stack_00000014 * 256f);
  local_104.y = (int)ROUND(local_50 * 256f);
  local_104.z = (int)ROUND(max_corner->z * 256f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[0x4e1b].projected_vertex,&local_104);
  local_94 = *in_stack_00000014;
  local_90 = in_stack_00000014[1];
  local_8c = in_stack_00000014[2];
  local_44 = local_8c;
  local_30 = local_94;
  local_2c = local_90;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[0x4e1c].projected_vertex,
             (CVector3i *)&stack0xfffffedc);
  local_84 = max_corner->x;
  local_80 = in_stack_00000014[1];
  local_7c = in_stack_00000014[2];
  local_a0._4_4_ = (uint)ROUND(local_84 * 256f);
  local_98 = (int)ROUND(local_80 * 256f);
  local_94 = (float)(int)ROUND(local_7c * 256f);
  local_38 = local_84;
  local_34 = local_80;
  local_30 = local_7c;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[0x4e1d].projected_vertex,
             (CVector3i *)(local_a0 + 4));
  local_f0._4_4_ = max_corner->x;
  local_e8 = in_stack_00000014[1];
  local_e4 = max_corner->z;
  local_68.x = (int)ROUND((float)local_f0._4_4_ * 256f);
  local_68.y = (int)ROUND(local_e8 * 256f);
  local_68.z = (int)ROUND(local_e4 * 256f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[0x4e1e].projected_vertex,&local_68);
  local_ac = *in_stack_00000014;
  local_a8 = in_stack_00000014[1];
  local_a4 = max_corner->z;
  local_a0._0_4_ = (uint)ROUND(local_ac * 256f);
  local_a0._4_4_ = (uint)ROUND(local_a8 * 256f);
  local_98 = (int)ROUND(local_a4 * 256f);
  local_1c = local_ac;
  local_18 = local_a8;
  local_14 = local_a4;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[19999].projected_vertex,(CVector3i *)local_a0);
  uVar6 = 0xffffffff;
  iVar5 = 0xea480;
  do {
    puVar1 = (uint *)((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).screen_x +
                     iVar5);
    iVar5 = iVar5 + 0x30;
    uVar6 = uVar6 & *puVar1;
  } while (iVar5 != 960000);
  iVar5 = 1;
  if (((uVar6 & 0x80000000) != 0) && ((char)uVar6 != '\0')) {
    iVar5 = 0;
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return iVar5;
}
