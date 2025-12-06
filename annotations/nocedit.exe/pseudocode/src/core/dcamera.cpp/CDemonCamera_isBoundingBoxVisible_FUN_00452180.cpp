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
  int iVar2;
  uint extraout_EDX;
  uint uVar3;
  BADSPACEBASE *in_ESP;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  double dVar7;
  float *in_stack_00000014;
  CVector3i *in_stack_fffffed8;
  CVector3i *in_stack_fffffedc;
  CVector3i local_ec;
  byte local_d8 [8];
  float local_d0;
  float local_cc;
  float local_c4;
  float local_c0;
  float local_bc;
  CVector3i local_b8 [3];
  float local_94;
  float local_90;
  float local_8c;
  byte local_88 [8];
  int local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_6c;
  float local_68;
  float local_64;
  float local_58;
  float local_54;
  CVector3i local_50;
  float local_40;
  float local_38;
  float local_30;
  float local_2c;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  engine_drender_cpp_CDemonRenderer_matrixPush_FUN_0050d620();
  fVar4 = (float10)256f;
  fVar5 = ((float10)(float)(this_ptr->base).position.x - (float10)position->x) * fVar4;
  fVar6 = ((float10)(float)(this_ptr->base).position.y - (float10)position->y) * fVar4;
  fVar4 = ((float10)(float)(this_ptr->base).position.z - (float10)position->z) * fVar4;
  g_TransformMatrix.m[0].x = (this_ptr->source_matrix).m[0].x;
  g_TransformMatrix.m[0].y = (this_ptr->source_matrix).m[0].y;
  g_TransformMatrix.m[0].z = (this_ptr->source_matrix).m[0].z;
  g_TransformMatrix.m[1].x = (this_ptr->source_matrix).m[1].x;
  dVar7 = crt_math_c_round_FUN_005fe6b0
                    ((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,(this_ptr->source_matrix).m[1].y));
  g_TransformMatrix.m[1].y = SUB84 /* extract 2-byte value */(dVar7,0);
  dVar7 = crt_math_c_round_FUN_005fe6b0
                    ((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar7 >> 0x20),
                                      (this_ptr->source_matrix).m[1].z));
  g_TransformMatrix.m[1].z = SUB84 /* extract 2-byte value */(dVar7,0);
  dVar7 = crt_math_c_round_FUN_005fe6b0
                    ((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar7 >> 0x20),
                                      (this_ptr->source_matrix).m[2].x));
  g_TransformMatrix.m[2].x = SUB84 /* extract 2-byte value */(dVar7,0);
  g_TransformMatrix.m[2].y = (this_ptr->source_matrix).m[2].y;
  g_RelativeX = (int)ROUND(fVar5);
  g_TransformMatrix.m[2].z = (this_ptr->source_matrix).m[2].z;
  g_RelativeY = (int)ROUND(fVar6);
  g_RelativeZ = (int)ROUND(fVar4);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,in_stack_fffffed8,in_stack_fffffedc);
  local_58 = *in_stack_00000014;
  local_54 = max_corner->y;
  local_40 = in_stack_00000014[2];
  local_d8._4_4_ = (uint)ROUND(local_58 * 256f);
  local_d0 = (float)(int)ROUND(local_54 * 256f);
  local_cc = (float)(int)ROUND(local_40 * 256f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[0x4e18].projected_vertex,
             (CVector3i *)(local_d8 + 4));
  local_c4 = max_corner->x;
  local_c0 = max_corner->y;
  local_bc = in_stack_00000014[2];
  local_b8[0].x = (int)ROUND(local_c4 * 256f);
  local_b8[0].y = (int)ROUND(local_c0 * 256f);
  local_b8[0].z = (int)ROUND(local_bc * 256f);
  local_58 = local_c4;
  local_50.y = (int)local_c0;
  local_50.z = (int)local_bc;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[0x4e19].projected_vertex,local_b8);
  local_6c = max_corner->x;
  local_68 = max_corner->y;
  local_64 = max_corner->z;
  local_d8._0_4_ = (uint)ROUND(local_6c * 256f);
  local_d8._4_4_ = (uint)ROUND(local_68 * 256f);
  local_d0 = (float)(int)ROUND(local_64 * 256f);
  local_40 = local_6c;
  local_30 = local_68;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[0x4e1a].projected_vertex,(CVector3i *)local_d8)
  ;
  local_38 = max_corner->y;
  local_ec.x = (int)ROUND(*in_stack_00000014 * 256f);
  local_ec.y = (int)ROUND(local_38 * 256f);
  local_ec.z = (int)ROUND(max_corner->z * 256f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[0x4e1b].projected_vertex,&local_ec);
  local_7c = *in_stack_00000014;
  local_78 = in_stack_00000014[1];
  local_74 = in_stack_00000014[2];
  local_2c = local_74;
  local_18 = local_7c;
  local_14 = local_78;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[0x4e1c].projected_vertex,
             (CVector3i *)&stack0xfffffef4);
  local_6c = max_corner->x;
  local_68 = in_stack_00000014[1];
  local_64 = in_stack_00000014[2];
  local_88._4_4_ = (uint)ROUND(local_6c * 256f);
  local_80 = (int)ROUND(local_68 * 256f);
  local_7c = (float)(int)ROUND(local_64 * 256f);
  local_20 = local_6c;
  local_1c = local_68;
  local_18 = local_64;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[0x4e1d].projected_vertex,
             (CVector3i *)(local_88 + 4));
  local_d8._4_4_ = max_corner->x;
  local_d0 = in_stack_00000014[1];
  local_cc = max_corner->z;
  local_50.x = (int)ROUND((float)local_d8._4_4_ * 256f);
  local_50.y = (int)ROUND(local_d0 * 256f);
  local_50.z = (int)ROUND(local_cc * 256f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[0x4e1e].projected_vertex,&local_50);
  local_94 = *in_stack_00000014;
  local_90 = in_stack_00000014[1];
  local_8c = max_corner->z;
  local_88._0_4_ = (uint)ROUND(local_94 * 256f);
  local_88._4_4_ = (uint)ROUND(local_90 * 256f);
  local_80 = (int)ROUND(local_8c * 256f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[19999].projected_vertex,(CVector3i *)local_88);
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
