// Name: core_gore.cpp_CBloodParticle_render_FUN_004ae190
// Address: 004ae190
// Address Range: [[004ae190, 004ae8ff]]
// Convention: unknown
// Signature: void core_gore_cpp_CBloodParticle_render_FUN_004ae190(CVector3f *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_gore_cpp_CBloodParticle_render_FUN_004ae190(CVector3f *param_1)

{
  SRenderVertex *output;
  float fVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float local_f0;
  float local_ec;
  CVector3i local_e8;
  CVector3f local_dc;
  CVector3i local_d0;
  CVector3i local_c4;
  CVector3i local_b8;
  float local_ac;
  float local_a8;
  uint local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  CVector3i local_94;
  CVector3i local_88;
  CVector3i local_7c;
  CVector3i local_70;
  CVector3i local_64;
  CVector3i local_58;
  float local_4c;
  float local_48;
  float local_44;
  int local_28;
  int local_24;
  int local_20;
  float local_1c;
  float local_18;
  
  output = DAT_005ae704->vertex_buffer_ptr;
  local_70.x = (int)ROUND(param_1->x * 256.0f);
  local_70.y = (int)ROUND(param_1->y * 256.0f);
  local_70.z = (int)ROUND(param_1->z * 256.0f);
  engine_special_cpp_transformPoint_FUN_00530a25(&output->projected_vertex,&local_70);
  if ((int)((output->projected_vertex).screen_x & -0x80000000) != 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(DAT_005ae704,param_1);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50(DAT_005ae704,&DAT_01c78ca8,0);
  local_ac = -0.1;
  local_a8 = -0.1;
  local_a4 = 0;
  local_e8.x = (int)ROUND(256.0f * -0.1);
  local_e8.y = (int)ROUND(256.0f * -0.1);
  local_e8.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&DAT_005ae704->vertex_buffer_ptr->projected_vertex,&local_e8);
  local_ac = 0.1;
  local_a8 = -0.1;
  local_a4 = 0;
  local_64.x = (int)ROUND(256.0f * 0.1);
  local_64.y = (int)ROUND(256.0f * -0.1);
  local_64.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&DAT_005ae704->vertex_buffer_ptr[1].projected_vertex,&local_64);
  local_ac = 0.1;
  local_a8 = 0.1;
  local_a4 = 0;
  local_b8.x = (int)ROUND(256.0f * 0.1);
  local_b8.y = (int)ROUND(256.0f * 0.1);
  local_b8.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&DAT_005ae704->vertex_buffer_ptr[2].projected_vertex,&local_b8);
  local_a8 = 0.1;
  local_ac = -0.1;
  local_a4 = 0;
  local_88.x = (int)ROUND(256.0f * -0.1);
  local_88.y = (int)ROUND(256.0f * 0.1);
  local_88.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&DAT_005ae704->vertex_buffer_ptr[3].projected_vertex,&local_88);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
            (DAT_005ae704,(SMRGLTextureBasic *)&DAT_005b96d4);
  _DAT_005c505c = ((uint)param_1[5].x & 3) * 0x400000;
  _DAT_005c5090 = ((int)param_1[5].x >> 2 & 3U) * 0x400000;
  DAT_005c502c = _DAT_005c505c + 0x80000;
  _DAT_005c5030 = _DAT_005c5090 + 0x80000;
  _DAT_005c505c = _DAT_005c505c + 0x380000;
  _DAT_005c5090 = _DAT_005c5090 + 0x380000;
  local_7c.x = (int)ROUND(param_1->x * 256.0f);
  local_7c.y = (int)ROUND(param_1->y * 256.0f);
  local_7c.z = (int)ROUND(param_1->z * 256.0f);
  _DAT_005c5060 = _DAT_005c5030;
  _DAT_005c508c = _DAT_005c505c;
  _DAT_005c50bc = DAT_005c502c;
  _DAT_005c50c0 = _DAT_005c5090;
  core_set_cpp_CDemonSet_computeLighting_FUN_0050bb50
            (0x01E57284,&local_7c,(CVector3i *)&DAT_01c78cb4,0,4);
  fVar1 = param_1[4].z;
  if (fVar1 != 0.0) {
    if ((uint)fVar1 < 2) {
      local_24 = 0;
      local_28 = 0x7f80;
      goto LAB_004ae466;
    }
    if (fVar1 == 2.8026e-45) {
      local_28 = 0;
      local_24 = 0;
      goto LAB_004ae466;
    }
  }
  local_24 = 0x2000;
  local_28 = 0;
LAB_004ae466:
  local_20 = 0;
  iVar5 = 0;
  do {
    lVar2 = (longlong)local_24 * (longlong)*(int *)((int)&DAT_005c5034 + iVar5);
    *(uint *)((int)&DAT_005c5034 + iVar5) =
         (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    lVar2 = (longlong)local_28 * (longlong)*(int *)((int)&DAT_005c5038 + iVar5);
    *(uint *)((int)&DAT_005c5038 + iVar5) =
         (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    iVar3 = iVar5 + 0x30;
    *(uint *)((int)&DAT_005c503c + iVar5) = 0;
    iVar5 = iVar3;
  } while (iVar3 != 0xc0);
  core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670(_DAT_007f7370,param_1,0);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,0xffff - _DAT_01c038f4)
  ;
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0
            (DAT_005ae704,(SMRGLHeaderPrimitive *)0x1c78c80);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
  local_dc.x = param_1->x;
  local_dc.y = param_1->y;
  local_dc.z = param_1->z;
  local_4c = param_1[1].x;
  local_48 = param_1[1].y;
  local_f0 = 1.0;
  local_ec = 0.025;
  local_44 = param_1[1].z;
  iVar5 = 0;
  do {
    local_ec = local_ec * (float)0.69999999999999996;
    local_f0 = (float)0.69999999999999996 * local_f0;
    local_a0 = local_4c * local_ec;
    local_48 = local_48 - local_ec * param_1[2].y;
    local_98 = local_44 * local_ec;
    local_9c = local_48 * local_ec;
    local_dc.x = local_dc.x - local_a0;
    local_dc.z = local_dc.z - local_98;
    local_dc.y = local_dc.y - local_9c;
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
              (DAT_005ae704,&local_dc);
    engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50
              (DAT_005ae704,&DAT_01c78ca8,0);
    local_ac = local_f0 * (float)-0.10000000000000001;
    local_a4 = 0;
    local_d0.x = (int)ROUND(local_ac * 256.0f);
    local_d0.y = (int)ROUND(local_ac * 256.0f);
    local_d0.z = (int)ROUND(256.0f * 0.0);
    local_a8 = local_ac;
    local_18 = local_ac;
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&DAT_005ae704->vertex_buffer_ptr->projected_vertex,&local_d0);
    local_ac = local_f0 * (float)0.10000000000000001;
    local_a4 = 0;
    local_a8 = local_18;
    local_94.x = (int)ROUND(local_ac * 256.0f);
    local_94.y = (int)ROUND(local_18 * 256.0f);
    local_94.z = (int)ROUND(256.0f * 0.0);
    local_1c = local_ac;
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&DAT_005ae704->vertex_buffer_ptr[1].projected_vertex,&local_94);
    local_ac = local_1c;
    local_a8 = local_1c;
    local_a4 = 0;
    local_58.x = (int)ROUND(local_1c * 256.0f);
    local_58.y = (int)ROUND(local_1c * 256.0f);
    local_58.z = (int)ROUND(256.0f * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&DAT_005ae704->vertex_buffer_ptr[2].projected_vertex,&local_58);
    local_ac = local_18;
    local_a4 = 0;
    local_a8 = local_1c;
    local_c4.x = (int)ROUND(local_18 * 256.0f);
    local_c4.y = (int)ROUND(local_1c * 256.0f);
    local_c4.z = (int)ROUND(256.0f * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&DAT_005ae704->vertex_buffer_ptr[3].projected_vertex,&local_c4);
    local_7c.x = (int)ROUND(local_dc.x * 256.0f);
    local_7c.y = (int)ROUND(local_dc.y * 256.0f);
    local_7c.z = (int)ROUND(local_dc.z * 256.0f);
    core_set_cpp_CDemonSet_computeLighting_FUN_0050bb50
              (0x01E57284,&local_7c,(CVector3i *)&DAT_01c78cb4,0,4);
    iVar3 = 0;
    do {
      lVar2 = (longlong)local_24 * (longlong)*(int *)((int)&DAT_005c5034 + iVar3);
      *(uint *)((int)&DAT_005c5034 + iVar3) =
           (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      lVar2 = (longlong)local_28 * (longlong)*(int *)((int)&DAT_005c5038 + iVar3);
      *(uint *)((int)&DAT_005c5038 + iVar3) =
           (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      iVar4 = iVar3 + 0x30;
      lVar2 = (longlong)local_20 * (longlong)*(int *)((int)&DAT_005c503c + iVar3);
      *(uint *)((int)&DAT_005c503c + iVar3) =
           (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      iVar3 = iVar4;
    } while (iVar4 != 0xc0);
    core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670(_DAT_007f7370,param_1,0);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
              (DAT_005ae704,0xffff - _DAT_01c038f4);
    engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0
              (DAT_005ae704,(SMRGLHeaderPrimitive *)0x1c78c80);
    iVar5 = iVar5 + 1;
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
  } while (iVar5 < 3);
  return;
}
