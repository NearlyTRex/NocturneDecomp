// Name: core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_0044ef20
// Address: 0044ef20
// Address Range: [[0044ef20, 0044f4c6]]
// Convention: __cdecl
// Signature: int __cdecl core_dcamera_cpp_CDemonCamera_isBoundingBoxVisible_FUN_0044ef20(CDemonCamera *this_ptr,CVector3f *position,CVector3f *orientation,CVector3f *bbox_min ,CVector3f *bbox_max)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_dcamera_cpp_CDemonCamera_isBoundingBoxVisible_FUN_0044ef20(CDemonCamera *this_ptr,CVector3f *position,CVector3f *orientation,CVector3f *bbox_min ,CVector3f *bbox_max)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  CVector3f *translation;
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
  
  engine_drender_cpp_matrixPush_FUN_0046d070();
  fVar4 = (float10)_DAT_005b9f5e;
  fVar5 = ((float10)(this_ptr->base).position.f.x - (float10)position->x) * fVar4;
  fVar6 = ((float10)(this_ptr->base).position.f.y - (float10)position->y) * fVar4;
  fVar4 = ((float10)(this_ptr->base).position.f.z - (float10)position->z) * fVar4;
  _DAT_01c6e2fc = (this_ptr->source_matrix).m[0].x;
  _DAT_01c6e300 = (this_ptr->source_matrix).m[0].y;
  translation = (CVector3f *)0x0;
  _DAT_01c6e304 = (this_ptr->source_matrix).m[0].z;
  _DAT_01c6e308 = (this_ptr->source_matrix).m[1].x;
  _DAT_01c6e30c = round();
  _DAT_01c6e310 = round();
  _DAT_01c6e314 = round();
  _DAT_01c6e318 = (this_ptr->source_matrix).m[2].y;
  _DAT_01c6e2cc = (int)ROUND(fVar5);
  _DAT_01c6e31c = (this_ptr->source_matrix).m[2].z;
  _DAT_01c6e2d0 = (int)ROUND(fVar6);
  _DAT_01c6e2d4 = (int)ROUND(fVar4);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
            (DAT_005f2afc,orientation,translation);
  local_118 = bbox_max->x;
  local_114 = bbox_min->y;
  local_110 = bbox_max->z;
  local_e8.x = (int)ROUND(local_118 * _DAT_005ddfbc);
  local_e8.y = (int)ROUND(local_114 * _DAT_005ddfbc);
  local_e8.z = (int)ROUND(local_110 * _DAT_005ddfbc);
  local_6c = local_118;
  local_68 = local_114;
  local_54 = local_110;
  engine_special_cpp_FUN_005632a3
            (&DAT_005f2afc->vertex_buffer_ptr[0x61a0].projected_vertex,&local_e8);
  local_dc = bbox_min->x;
  local_d8 = bbox_min->y;
  local_d4 = bbox_max->z;
  local_d0.x = (int)ROUND(local_dc * _DAT_005ddfbc);
  local_d0.y = (int)ROUND(local_d8 * _DAT_005ddfbc);
  local_d0.z = (int)ROUND(local_d4 * _DAT_005ddfbc);
  local_70 = local_dc;
  local_64 = local_d8;
  local_60 = local_d4;
  engine_special_cpp_FUN_005632a3
            (&DAT_005f2afc->vertex_buffer_ptr[0x61a1].projected_vertex,&local_d0);
  local_88 = bbox_min->x;
  local_84 = bbox_min->y;
  local_80 = bbox_min->z;
  local_f4.x = (int)ROUND(local_88 * _DAT_005ddfbc);
  local_f4.y = (int)ROUND(local_84 * _DAT_005ddfbc);
  local_f4.z = (int)ROUND(local_80 * _DAT_005ddfbc);
  local_5c = local_88;
  local_4c = local_84;
  local_28 = local_80;
  engine_special_cpp_FUN_005632a3
            (&DAT_005f2afc->vertex_buffer_ptr[0x61a2].projected_vertex,&local_f4);
  local_124 = bbox_max->x;
  local_120 = bbox_min->y;
  local_11c = bbox_min->z;
  local_10c.x = (int)ROUND(local_124 * _DAT_005ddfbc);
  local_10c.y = (int)ROUND(local_120 * _DAT_005ddfbc);
  local_10c.z = (int)ROUND(local_11c * _DAT_005ddfbc);
  local_58 = local_120;
  local_18 = local_124;
  local_14 = local_11c;
  engine_special_cpp_FUN_005632a3
            (&DAT_005f2afc->vertex_buffer_ptr[0x61a3].projected_vertex,&local_10c);
  local_a0 = bbox_max->x;
  local_9c = bbox_max->y;
  local_98 = bbox_max->z;
  local_130.x = (int)ROUND(local_a0 * _DAT_005ddfbc);
  local_130.y = (int)ROUND(local_9c * _DAT_005ddfbc);
  local_130.z = (int)ROUND(local_98 * _DAT_005ddfbc);
  local_50 = local_98;
  local_3c = local_a0;
  local_38 = local_9c;
  engine_special_cpp_FUN_005632a3
            (&DAT_005f2afc->vertex_buffer_ptr[0x61a4].projected_vertex,&local_130);
  local_94 = bbox_min->x;
  local_90 = bbox_max->y;
  local_8c = bbox_max->z;
  local_ac.x = (int)ROUND(local_94 * _DAT_005ddfbc);
  local_ac.y = (int)ROUND(local_90 * _DAT_005ddfbc);
  local_ac.z = (int)ROUND(local_8c * _DAT_005ddfbc);
  local_48 = local_94;
  local_44 = local_90;
  local_40 = local_8c;
  engine_special_cpp_FUN_005632a3
            (&DAT_005f2afc->vertex_buffer_ptr[0x61a5].projected_vertex,&local_ac);
  local_100 = bbox_min->x;
  local_fc = bbox_max->y;
  local_f8 = bbox_min->z;
  local_7c.x = (int)ROUND(local_100 * _DAT_005ddfbc);
  local_7c.y = (int)ROUND(local_fc * _DAT_005ddfbc);
  local_7c.z = (int)ROUND(local_f8 * _DAT_005ddfbc);
  local_24 = local_100;
  local_20 = local_fc;
  local_1c = local_f8;
  engine_special_cpp_FUN_005632a3
            (&DAT_005f2afc->vertex_buffer_ptr[0x61a6].projected_vertex,&local_7c);
  local_c4 = bbox_max->x;
  local_c0 = bbox_max->y;
  local_bc = bbox_min->z;
  local_b8.x = (int)ROUND(local_c4 * _DAT_005ddfbc);
  local_b8.y = (int)ROUND(local_c0 * _DAT_005ddfbc);
  local_b8.z = (int)ROUND(local_bc * _DAT_005ddfbc);
  local_34 = local_c4;
  local_30 = local_c0;
  local_2c = local_bc;
  engine_special_cpp_FUN_005632a3
            (&DAT_005f2afc->vertex_buffer_ptr[24999].projected_vertex,&local_b8);
  uVar3 = 0xffffffff;
  iVar2 = 0x124e00;
  do {
    puVar1 = (uint *)((int)&(DAT_005f2afc->vertex_buffer_ptr->projected_vertex).screen_x + iVar2);
    iVar2 = iVar2 + 0x30;
    uVar3 = uVar3 & *puVar1;
  } while (iVar2 != 1200000);
  iVar2 = 1;
  if (((uVar3 & 0x80000000) != 0) && ((char)uVar3 != '\0')) {
    iVar2 = 0;
  }
  engine_drender_cpp_pop_FUN_0046d080();
  engine_drender_cpp_pop_FUN_0046d080();
  return iVar2;
}
