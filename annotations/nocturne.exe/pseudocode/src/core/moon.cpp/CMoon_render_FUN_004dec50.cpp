// Name: core_moon.cpp_CMoon_render_FUN_004dec50
// Address: 004dec50
// Address Range: [[004dec50, 004df03f]]
// Convention: __cdecl
// Signature: void __cdecl core_moon_cpp_CMoon_render_FUN_004dec50(CMoon *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_moon_cpp_CMoon_render_FUN_004dec50(CMoon *this_ptr)

{
  CDemonSet *pCVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  double dVar7;
  int render_flags;
  CVector3f local_5c;
  CVector3f local_50;
  CVector3f local_44;
  double local_38;
  int local_30;
  char *local_2c;
  uint local_28;
  int local_24;
  ulonglong *local_20;
  int local_1c;
  float local_18;
  int local_14;
  
  sound_sndmain_cpp_processAudio_FUN_005288f0();
  engine_special_cpp_clearScreen_FUN_0052ee70();
  engine_special_cpp_clearZBufferNative_FUN_0052eed4();
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700
            (g_CDemonRenderer_PTR_005ae704,(CVector3f *)&DAT_02dd1184);
  engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_00460c00
            (g_CDemonRenderer_PTR_005ae704,112.0);
  engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_00460780
            (g_CDemonRenderer_PTR_005ae704,(CVector3f *)&DAT_02dd1184);
  local_5c.x = (this_ptr->rotation_phase + (float)-0.5) * (float)48;
  local_5c.y = (float)48 * (this_ptr->rotation_phase + (float)-0.5);
  local_5c.z = 72.0;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            (g_CDemonRenderer_PTR_005ae704,&local_5c);
  pCVar1 = g_CDemonSet_PTR_005be368;
  g_CDemonSet_PTR_005be368->rendering_mode = 1;
  (pCVar1->light_direction).x = -37000;
  (pCVar1->light_direction).y = -37000;
  (pCVar1->light_direction).z = 37000;
  pCVar1->ambient_base_quick = 0x280;
  core_set_cpp_CDemonSet_setFlatColor_FUN_0050e340(pCVar1,0x10000,0x10000,0x10000);
  core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00453040
            (&this_ptr->moon,0,(CKeyFramedModelInstance *)0x0,0x205);
  pCVar1 = g_CDemonSet_PTR_005be368;
  (g_CDemonSet_PTR_005be368->light_direction).x = -0x4844;
  (pCVar1->light_direction).y = -0x4844;
  iVar4 = DAT_005bb210;
  (pCVar1->light_direction).z = 0x4844;
  pCVar1->ambient_base_quick = 0x2000;
  if (iVar4 != 0) {
    iVar4 = 0;
    do {
      if (0.0 <= *(float *)((int)&g_SBat_ARRAY_01ccdeec[0].course_position + iVar4)) {
        core_course_cpp_CCourse_evaluate_FUN_0043b800
                  (g_CCourse_ARRAY_01ccdec8 +
                   *(int *)((int)&g_SBat_ARRAY_01ccdeec[0].course_index + iVar4),
                   *(float *)((int)&g_SBat_ARRAY_01ccdeec[0].course_position + iVar4),&local_44,
                   &local_50);
        local_44.x = local_44.x + *(float *)((int)&g_SBat_ARRAY_01ccdeec[0].random_offset.x + iVar4)
        ;
        local_44.y = local_44.y + *(float *)((int)&g_SBat_ARRAY_01ccdeec[0].random_offset.y + iVar4)
        ;
        local_44.z = local_44.z + *(float *)((int)&g_SBat_ARRAY_01ccdeec[0].random_offset.z + iVar4)
        ;
        local_50.y = local_50.y + 1.570796f;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
                  (g_CDemonRenderer_PTR_005ae704,&local_44);
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
                  (g_CDemonRenderer_PTR_005ae704,&local_50,(CVector3f *)0x0);
        render_flags = 0x4dee29;
        dVar7 = round
                          ((double)*(float *)((int)&g_SBat_ARRAY_01ccdeec[0].animation_frame + iVar4
                                             ));
        local_14 = (int)ROUND(dVar7);
        core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00453040
                  (&g_CKeyFramedModel_01cce1bc,local_14,(CKeyFramedModelInstance *)0x0,render_flags)
        ;
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(g_CDemonRenderer_PTR_005ae704);
        pCVar1 = g_CDemonSet_PTR_005be368;
        local_14 = g_CCourse_ARRAY_01ccdec8
                   [*(int *)((int)&g_SBat_ARRAY_01ccdeec[0].course_index + iVar4)].len;
        local_18 = *(float *)((int)&g_SBat_ARRAY_01ccdeec[0].course_position + iVar4) /
                   (float)local_14;
        local_38 = (double)local_18;
        if ((float)0.5 <= local_18) {
          dVar7 = (local_38 + -0.5) * 8192;
        }
        else {
          dVar7 = (double)8192.0f - (double)local_18 * (double)16384.0f;
        }
        local_5c.x = 7.156918e-39;
        dVar7 = round(dVar7);
        local_14 = (int)ROUND(dVar7);
        pCVar1->ambient_base_quick = local_14;
      }
      iVar4 = iVar4 + 0x18;
    } while (iVar4 != 0x2d0);
  }
  g_CDemonSet_PTR_005be368->rendering_mode = 0;
  engine_alphabit_cpp_CAlphaBitmap_initPalette_FUN_0040eab0(&g_CAlphaBitmap_01ccdc50);
  pcVar2 = g_CAlphaBitmap_01ccdc50.raw;
  local_30 = _DAT_01ccdebc >> 0x10;
  local_24 = _DAT_01ccdec0 >> 0x10;
  local_2c = g_CAlphaBitmap_01ccdc50.raw;
  local_28 = 0;
  do {
    local_20 = g_ScreenBufferArray[local_28];
    uVar3 = 0;
    puVar5 = local_20;
    do {
      uVar6 = paddusb(*puVar5,CONCAT44(g_Hardware32BitPalette
                                       [(byte)pcVar2[((uVar3 >> 1) + local_30 & 0xff) * 0x100 +
                                                     ((local_28 >> 1) + local_24 & 0xff)] >> 2],
                                       g_Hardware32BitPalette
                                       [(byte)pcVar2[((uVar3 >> 1) + local_30 & 0xff) * 0x100 +
                                                     ((local_28 >> 1) + local_24 & 0xff)] >> 2]));
      uVar6 = paddusb(uVar6,CONCAT44(g_Hardware32BitPalette
                                     [(byte)pcVar2[((uVar3 >> 2) + local_30 & 0xff) * 0x100 +
                                                   ((local_28 >> 2) + local_24 & 0xff)] >> 2],
                                     g_Hardware32BitPalette
                                     [(byte)pcVar2[((uVar3 >> 2) + local_30 & 0xff) * 0x100 +
                                                   ((local_28 >> 2) + local_24 & 0xff)] >> 2]));
      *puVar5 = uVar6;
      puVar5 = puVar5 + 1;
      uVar3 = uVar3 + 2;
    } while (uVar3 < 0x280);
    local_28 = local_28 + 1;
  } while ((int)local_28 < 0x1e0);
  engine_3d_c_setBlendMode_FUN_004083c0(1);
  dVar7 = round((double)_DAT_01ccdec4);
  local_1c = (int)ROUND(dVar7);
  if (0x1d < local_1c) {
    local_1c = 0;
  }
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040e710
            (g_CAlphaBitmap_ARRAY_01ccdc64 + local_1c,0,0,48000);
  engine_3d_c_setBlendMode_FUN_004083c0(0);
  return;
}
