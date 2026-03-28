// Name: core_moon.cpp_CMoon_render_FUN_00529ed0
// Address: 00529ed0
// Address Range: [[00529ed0, 0052a0ca] [0052a11f, 0052a2ab]]
// Convention: __cdecl
// Signature: void __cdecl core_moon_cpp_CMoon_render_FUN_00529ed0(CMoon *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_moon_cpp_CMoon_render_FUN_00529ed0(CMoon *this_ptr)

{
  float fVar1;
  CDemonSet *pCVar3;
  int iVar4;
  int iVar6;
  uint uVar4;
  int iVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
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
  double dVar1;
  char *pcVar3;
  CDemonSet *pCVar2;
  
  sound_sndmain_cpp_processAudio_FUN_005abe20();
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  wincore_windll_cpp_clearZBufferNative_FUN_005b3ed4();
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
            (g_CDemonRendererPtr2,&g_ZeroVector.i);
  engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0048c650(g_CDemonRendererPtr2,112.0);
  engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0
            (g_CDemonRendererPtr2,&g_ZeroVector.f);
  local_5c.x = (this_ptr->rotation_phase + (float)-0.5) * (float)48;
  local_5c.y = (float)48 * (this_ptr->rotation_phase + (float)-0.5);
  local_5c.z = 72.0;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,&local_5c);
  pCVar2 = g_CDemonSetPtr;
  g_CDemonSetPtr->rendering_mode = 1;
  (pCVar2->light_direction).x = -37000;
  (pCVar2->light_direction).y = -37000;
  (pCVar2->light_direction).z = 37000;
  pCVar2->ambient_base_quick = 0x280;
  core_set_cpp_CDemonSet_setScaleFactors_FUN_00570ca0(pCVar2,0x10000,0x10000,0x10000);
  core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850
            (&this_ptr->moon,0,(CKeyFramedModelInstance *)0x0,0x205);
  pCVar3 = g_CDemonSetPtr;
  (g_CDemonSetPtr->light_direction).x = -0x4844;
  (pCVar3->light_direction).y = -0x4844;
  iVar4 = g_MoonBatsEnabled;
  (pCVar3->light_direction).z = 0x4844;
  pCVar3->ambient_base_quick = 0x2000;
  if (iVar4 != 0) {
    iVar5 = 0;
    do {
      if (0.0 <= *(float *)((int)&g_MoonBats[0].course_position + iVar5)) {
        core_course_cpp_CCourse_evaluate_FUN_00442710
                  (g_MoonBatCourses + *(int *)((int)&g_MoonBats[0].course_index + iVar5),
                   *(float *)((int)&g_MoonBats[0].course_position + iVar5),&local_44,&local_50);
        local_44.x = local_44.x + *(float *)((int)&g_MoonBats[0].random_offset.x + iVar5);
        local_44.y = local_44.y + *(float *)((int)&g_MoonBats[0].random_offset.y + iVar5);
        local_44.z = local_44.z + *(float *)((int)&g_MoonBats[0].random_offset.z + iVar5);
        local_50.y = local_50.y + 1.570796f;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr2,&local_44);
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                  (g_CDemonRendererPtr2,(CVector3i *)&local_50,(CVector3i *)0x0);
        core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850
                  (&g_MoonBatModel,
                   (int)ROUND(ROUND(*(float *)((int)&g_MoonBats[0].animation_frame + iVar5))),
                   (CKeyFramedModelInstance *)0x0,-1);
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
        fVar1 = *(float *)((int)&g_MoonBats[0].course_position + iVar5) /
                (float)g_MoonBatCourses[*(int *)((int)&g_MoonBats[0].course_index + iVar5)].len;
        if ((float)0.5 <= fVar1) {
          dVar1 = ((double)fVar1 + -0.5) * 8192;
        }
        else {
          dVar1 = (double)8192.0f - (double)fVar1 * (double)16384.0f;
        }
        local_5c.x = 7.588293e-39;
        g_CDemonSetPtr->ambient_base_quick = (int)ROUND(ROUND(dVar1));
      }
      iVar5 = iVar5 + 0x18;
    } while (iVar5 != 0x2d0);
  }
  g_CDemonSetPtr->rendering_mode = 0;
  engine_alphabit_cpp_CAlphaBitmap_initPalette_FUN_00410cf0(&g_MoonCloudTexture);
  pcVar3 = g_MoonCloudTexture.raw;
  iVar4 = g_MoonCloudScrollX >> 0x10;
  iVar6 = g_MoonCloudScrollY >> 0x10;
  local_28 = 0;
  do {
    puVar6 = g_ScreenBufferArray[local_28];
    uVar4 = 0;
    do {
      uVar7 = paddusb(*puVar6,CONCAT44(g_Hardware32BitPalette
                                       [(byte)pcVar3[((uVar4 >> 1) + iVar4 & 0xff) * 0x100 +
                                                     ((local_28 >> 1) + iVar6 & 0xff)] >> 2],
                                       g_Hardware32BitPalette
                                       [(byte)pcVar3[((uVar4 >> 1) + iVar4 & 0xff) * 0x100 +
                                                     ((local_28 >> 1) + iVar6 & 0xff)] >> 2]));
      uVar7 = paddusb(uVar7,CONCAT44(g_Hardware32BitPalette
                                     [(byte)pcVar3[((uVar4 >> 2) + iVar4 & 0xff) * 0x100 +
                                                   ((local_28 >> 2) + iVar6 & 0xff)] >> 2],
                                     g_Hardware32BitPalette
                                     [(byte)pcVar3[((uVar4 >> 2) + iVar4 & 0xff) * 0x100 +
                                                   ((local_28 >> 2) + iVar6 & 0xff)] >> 2]));
      *puVar6 = uVar7;
      puVar6 = puVar6 + 1;
      uVar4 = uVar4 + 2;
    } while (uVar4 < 0x280);
    local_28 = local_28 + 1;
  } while ((int)local_28 < 0x1e0);
  engine_3d_c_setBlendMode_FUN_00406dd0(1);
  local_1c = (int)ROUND(ROUND(g_MoonAnimationTimer));
  if (0x1d < local_1c) {
    local_1c = 0;
  }
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950(g_MoonAnimTextures + local_1c,0,0,48000);
  engine_3d_c_setBlendMode_FUN_00406dd0(0);
  return;
}
