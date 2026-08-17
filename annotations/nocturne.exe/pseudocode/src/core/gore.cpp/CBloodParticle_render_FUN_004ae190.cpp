// Name: core_gore.cpp_CBloodParticle_render_FUN_004ae190
// Address: 004ae190
// Address Range: [[004ae190, 004ae8ff]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodParticle_render_FUN_004ae190(CBloodParticle *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_CBloodParticle_render_FUN_004ae190(CBloodParticle *this_ptr)

{
  SRenderVertex *output;
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float local_ec;
  CVector3i local_e8;
  CVector3f local_d8;
  CVector3i local_cc;
  byte local_c0 [12];
  int local_b4;
  int local_b0;
  uint local_ac;
  float local_a8;
  float local_a4;
  uint local_a0;
  float local_9c;
  float local_98;
  float local_94;
  byte local_90 [12];
  int local_84;
  int local_80;
  byte local_7c [8];
  int local_74;
  CVector3i local_70;
  CVector3i local_64;
  CVector3i local_54;
  float local_48;
  float local_44;
  float fStack_40;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  float local_18;
  float fStack_14;
  
  output = g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr;
  local_70.x = (int)ROUND((this_ptr->base).position.x * 256.0f);
  local_70.y = (int)ROUND((this_ptr->base).position.y * 256.0f);
  local_70.z = (int)ROUND((this_ptr->base).position.z * 256.0f);
  engine_special_cpp_transformPoint_FUN_00530a25(&output->projected_vertex,&local_70);
  if ((int)((output->projected_vertex).screen_x & -0x80000000) != 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            (g_CDemonRenderer_PTR_005ae704,(CVector3f *)this_ptr);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50
            (g_CDemonRenderer_PTR_005ae704,(CVector3i *)&DAT_01c78ca8,(CVector3i *)0x0);
  local_ac = 0xbdcccccd;
  local_a8 = -0.1;
  local_a4 = 0.0;
  local_e8.x = (int)ROUND(256.0f * -0.1);
  local_e8.y = (int)ROUND(256.0f * -0.1);
  local_e8.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->projected_vertex,&local_e8);
  local_ac = 0x3dcccccd;
  local_a8 = -0.1;
  local_a4 = 0.0;
  local_64.x = (int)ROUND(256.0f * 0.1);
  local_64.y = (int)ROUND(256.0f * -0.1);
  local_64.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[1].projected_vertex,&local_64);
  local_ac = 0x3dcccccd;
  local_a8 = 0.1;
  local_a4 = 0.0;
  local_c0._8_4_ = (uint)ROUND(256.0f * 0.1);
  local_b4 = (int)ROUND(256.0f * 0.1);
  local_b0 = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[2].projected_vertex,
             (CVector3i *)(local_c0 + 8));
  local_a8 = 0.1;
  local_ac = 0xbdcccccd;
  local_a4 = 0.0;
  local_90._8_4_ = (uint)ROUND(256.0f * -0.1);
  local_84 = (int)ROUND(256.0f * 0.1);
  local_80 = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[3].projected_vertex,
             (CVector3i *)(local_90 + 8));
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
            (g_CDemonRenderer_PTR_005ae704,(SMRGLTextureBasic *)&DAT_005b96d4);
  _DAT_005c505c = (this_ptr->texture_index & 3U) * 0x400000;
  _DAT_005c5090 = (this_ptr->texture_index >> 2 & 3U) * 0x400000;
  DAT_005c502c = _DAT_005c505c + 0x80000;
  _DAT_005c5030 = _DAT_005c5090 + 0x80000;
  _DAT_005c505c = _DAT_005c505c + 0x380000;
  _DAT_005c5090 = _DAT_005c5090 + 0x380000;
  local_7c._0_4_ = (uint)ROUND((this_ptr->base).position.x * 256.0f);
  local_7c._4_4_ = (uint)ROUND((this_ptr->base).position.y * 256.0f);
  local_74 = (int)ROUND((this_ptr->base).position.z * 256.0f);
  _DAT_005c5060 = _DAT_005c5030;
  _DAT_005c508c = _DAT_005c505c;
  _DAT_005c50bc = DAT_005c502c;
  _DAT_005c50c0 = _DAT_005c5090;
  core_set_cpp_CDemonSet_computeLighting_FUN_0050bb50
            (g_CDemonSet_PTR_005be368,(CVector3i *)local_7c,(CVector3i *)&DAT_01c78cb4,0,4);
  uVar1 = this_ptr->blood_type;
  if (uVar1 != 0) {
    if (uVar1 < 2) {
      local_24 = 0;
      local_28 = 0x7f80;
      goto LAB_004ae466;
    }
    if (uVar1 == 2) {
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
  core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670
            (_DAT_007f7370,(CVector3f *)this_ptr,(SProjectedVertex *)0x0);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
            (g_CDemonRenderer_PTR_005ae704,0xffff - _DAT_01c038f4);
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0
            (g_CDemonRenderer_PTR_005ae704,(SMRGLHeaderPrimitive *)0x1c78c80);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(g_CDemonRenderer_PTR_005ae704);
  local_d8.x = (this_ptr->base).position.x;
  local_d8.y = (this_ptr->base).position.y;
  local_d8.z = (this_ptr->base).position.z;
  local_48 = (this_ptr->base).velocity.x;
  local_44 = (this_ptr->base).velocity.y;
  local_ec = 1.0;
  local_e8.x = 0x3ccccccd;
  fStack_40 = (this_ptr->base).velocity.z;
  iVar5 = 0;
  do {
    local_e8.x = (int)((float)local_e8.x * (float)0.69999999999999996);
    local_ec = (float)0.69999999999999996 * local_ec;
    local_9c = local_48 * (float)local_e8.x;
    local_44 = local_44 - (float)local_e8.x * (this_ptr->base).gravity_acceleration;
    local_94 = fStack_40 * (float)local_e8.x;
    local_98 = local_44 * (float)local_e8.x;
    local_d8.x = local_d8.x - local_9c;
    local_d8.z = local_d8.z - local_94;
    local_d8.y = local_d8.y - local_98;
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
              (g_CDemonRenderer_PTR_005ae704,&local_d8);
    engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50
              (g_CDemonRenderer_PTR_005ae704,(CVector3i *)&DAT_01c78ca8,(CVector3i *)0x0);
    local_a8 = local_ec * (float)-0.10000000000000001;
    local_a0 = 0;
    local_cc.x = (int)ROUND(local_a8 * 256.0f);
    local_cc.y = (int)ROUND(local_a8 * 256.0f);
    local_cc.z = (int)ROUND(256.0f * 0.0);
    local_a4 = local_a8;
    fStack_14 = local_a8;
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->projected_vertex,&local_cc);
    local_a8 = local_ec * (float)0.10000000000000001;
    local_a0 = 0;
    local_a4 = fStack_14;
    local_90._0_4_ = (uint)ROUND(local_a8 * 256.0f);
    local_90._4_4_ = (uint)ROUND(fStack_14 * 256.0f);
    local_90._8_4_ = (uint)ROUND(256.0f * 0.0);
    local_18 = local_a8;
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[1].projected_vertex,
               (CVector3i *)local_90);
    local_a8 = local_18;
    local_a4 = local_18;
    local_a0 = 0;
    local_54.x = (int)ROUND(local_18 * 256.0f);
    local_54.y = (int)ROUND(local_18 * 256.0f);
    local_54.z = (int)ROUND(256.0f * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[2].projected_vertex,&local_54);
    local_a8 = fStack_14;
    local_a0 = 0;
    local_a4 = local_18;
    local_c0._0_4_ = (uint)ROUND(fStack_14 * 256.0f);
    local_c0._4_4_ = (uint)ROUND(local_18 * 256.0f);
    local_c0._8_4_ = (uint)ROUND(256.0f * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[3].projected_vertex,
               (CVector3i *)local_c0);
    local_7c._4_4_ = (uint)ROUND(local_d8.x * 256.0f);
    local_74 = (int)ROUND(local_d8.y * 256.0f);
    local_70.x = (int)ROUND(local_d8.z * 256.0f);
    core_set_cpp_CDemonSet_computeLighting_FUN_0050bb50
              (g_CDemonSet_PTR_005be368,(CVector3i *)(local_7c + 4),(CVector3i *)&DAT_01c78cb4,0,4);
    iVar3 = 0;
    do {
      lVar2 = (longlong)local_20 * (longlong)*(int *)((int)&DAT_005c5034 + iVar3);
      *(uint *)((int)&DAT_005c5034 + iVar3) =
           (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      lVar2 = (longlong)local_24 * (longlong)*(int *)((int)&DAT_005c5038 + iVar3);
      *(uint *)((int)&DAT_005c5038 + iVar3) =
           (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      iVar4 = iVar3 + 0x30;
      lVar2 = (longlong)local_1c * (longlong)*(int *)((int)&DAT_005c503c + iVar3);
      *(uint *)((int)&DAT_005c503c + iVar3) =
           (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      iVar3 = iVar4;
    } while (iVar4 != 0xc0);
    core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670
              (_DAT_007f7370,(CVector3f *)this_ptr,(SProjectedVertex *)0x0);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
              (g_CDemonRenderer_PTR_005ae704,0xffff - _DAT_01c038f4);
    engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0
              (g_CDemonRenderer_PTR_005ae704,(SMRGLHeaderPrimitive *)0x1c78c80);
    iVar5 = iVar5 + 1;
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(g_CDemonRenderer_PTR_005ae704);
  } while (iVar5 < 3);
  return;
}
