// Name: core_moon.cpp_CMoon_render_FUN_00529ed0
// Address: 00529ed0
// Address Range: [[00529ed0, 0052a0ca] [0052a11f, 0052a2ab]]
// Convention: __cdecl
// Signature: void __cdecl core_moon_cpp_CMoon_render_FUN_00529ed0(CMoon *this_ptr)

#include "nocturne.h"

void __cdecl core_moon_cpp_CMoon_render_FUN_00529ed0(CMoon *this_ptr)

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
  CVector3i local_50;
  CVector3f local_44;
  double local_38;
  int local_30;
  char *local_2c;
  uint local_28;
  int local_24;
  ulonglong *local_20;
  int local_1c;
  float local_18;
  CKeyFramedModelInstance *local_14;
  
  sound_sndmain_cpp_processAudio_FUN_005abe20();
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
            (g_CDemonRendererPtr2,(CVector3i *)&g_ZeroVector);
  engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0048c650(g_CDemonRendererPtr2,112.0);
  engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0(g_CDemonRendererPtr2);
  local_5c.x = (this_ptr->rotation_phase + (float)-0.5) * (float)48;
  local_5c.y = (float)48 * (this_ptr->rotation_phase + (float)-0.5);
  local_5c.z = 72.0;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,&local_5c);
  pCVar1 = g_CDemonSetPtr;
  g_CDemonSetPtr->rendering_mode = 1;
  (pCVar1->light_direction).x = -37000;
  (pCVar1->light_direction).y = -37000;
  (pCVar1->light_direction).z = 37000;
  pCVar1->ambient_base_quick = 0x280;
  core_set_cpp_CDemonSet_FUN_00570ca0(pCVar1);
  core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850
            (&this_ptr->moon,(CKeyFramedModelInstance *)0x0,0,0x205);
  pCVar1 = g_CDemonSetPtr;
  (g_CDemonSetPtr->light_direction).x = -0x4844;
  (pCVar1->light_direction).y = -0x4844;
  iVar4 = g_MoonBatsEnabled;
  (pCVar1->light_direction).z = 0x4844;
  pCVar1->ambient_base_quick = 0x2000;
  if (iVar4 != 0) {
    iVar4 = 0;
    do {
      if (0.0 <= *(float *)((int)&g_MoonBats[0].course_position + iVar4)) {
        core_course_cpp_CCourse_FUN_00442710
                  (g_MoonBatCourses + *(int *)((int)&g_MoonBats[0].course_index + iVar4));
        local_44.x = local_44.x + *(float *)((int)&g_MoonBats[0].random_offset.x + iVar4);
        local_44.y = local_44.y + *(float *)((int)&g_MoonBats[0].random_offset.y + iVar4);
        local_44.z = local_44.z + *(float *)((int)&g_MoonBats[0].random_offset.z + iVar4);
        local_50.y = (int)((float)local_50.y + 1.570796f);
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr2,&local_44);
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                  (g_CDemonRendererPtr2,&local_50,(CVector3i *)0x0);
        render_flags = 0x52a0a9;
        dVar7 = crt_math_c_round_FUN_005fe6b0
                          ((double)*(float *)((int)&g_MoonBats[0].animation_frame + iVar4));
        local_14 = (CKeyFramedModelInstance *)(int)ROUND(dVar7);
        core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850
                  (&g_MoonBatModel,local_14,0,render_flags);
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
        pCVar1 = g_CDemonSetPtr;
        local_14 = (CKeyFramedModelInstance *)
                   g_MoonBatCourses[*(int *)((int)&g_MoonBats[0].course_index + iVar4)].len;
        local_18 = *(float *)((int)&g_MoonBats[0].course_position + iVar4) / (float)(int)local_14;
        local_38 = (double)local_18;
        if ((float)0.5 <= local_18) {
          dVar7 = (local_38 + -0.5) * 8192;
        }
        else {
          dVar7 = (double)8192.0f - (double)local_18 * (double)16384.0f;
        }
        local_5c.x = 7.588293e-39;
        dVar7 = crt_math_c_round_FUN_005fe6b0(dVar7);
        local_14 = (CKeyFramedModelInstance *)(int)ROUND(dVar7);
        pCVar1->ambient_base_quick = (int)local_14;
      }
      iVar4 = iVar4 + 0x18;
    } while (iVar4 != 0x2d0);
  }
  g_CDemonSetPtr->rendering_mode = 0;
  engine_alphabit_cpp_CAlphaBitmap_initPalette_FUN_00410cf0(&g_MoonCloudTexture);
  pcVar2 = g_MoonCloudTexture.raw;
  local_30 = g_MoonCloudScrollX >> 0x10;
  local_24 = g_MoonCloudScrollY >> 0x10;
  local_2c = g_MoonCloudTexture.raw;
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
  engine_3d_c_setBlendMode_FUN_00406dd0(1);
  dVar7 = crt_math_c_round_FUN_005fe6b0((double)g_MoonAnimationTimer);
  local_1c = (int)ROUND(dVar7);
  if (0x1d < local_1c) {
    local_1c = 0;
  }
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950(g_MoonAnimTextures + local_1c,0,0,48000);
  engine_3d_c_setBlendMode_FUN_00406dd0(0);
  return;
}
