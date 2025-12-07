// Name: core_moon.cpp_CMoon_render_FUN_00529ed0
// Address: 00529ed0
// Address Range: [[00529ed0, 0052a0ca] [0052a11f, 0052a2ab]]
// Convention: __cdecl
// Signature: void core_moon.cpp_CMoon_render_FUN_00529ed0(CMoon * this_ptr)

#include "nocturne.h"

void __cdecl core_moon_cpp_CMoon_render_FUN_00529ed0(CMoon *this_ptr)

{
  CDemonSet *pCVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  ulonglong *puVar6;
  ulonglong uVar7;
  double dVar8;
  float local_5c;
  float fVar9;
  uint local_28;
  int local_1c;
  
  sound_sndmain_cpp_processAudio_FUN_005abe20();
  local_5c = 7.587513e-39;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
  local_5c = 7.587544e-39;
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
            (g_CDemonRendererPtr,(CVector3i *)&g_ZeroVector);
  engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0048c650(g_CDemonRendererPtr,112.0);
  engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0(g_CDemonRendererPtr);
  local_5c = (this_ptr->rotation_phase + (float)-0.5) * (float)48;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)&local_5c);
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
  iVar5 = g_MoonBatsEnabled;
  (pCVar1->light_direction).z = 0x4844;
  pCVar1->ambient_base_quick = 0x2000;
  if (iVar5 != 0) {
    iVar5 = 0;
    do {
      if (0.0 <= *(float *)((int)&g_MoonBats[0].course_position + iVar5)) {
        core_course_cpp_CCourse_FUN_00442710
                  (g_MoonBatCourses + *(int *)((int)&g_MoonBats[0].course_index + iVar5));
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr,(CVector3f *)&stack0xffffffbc);
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                  (g_CDemonRendererPtr,(CVector3i *)&stack0xffffffb0,(CVector3i *)0x0);
        fVar9 = 7.588145e-39;
        dVar8 = crt_math_c_round_FUN_005fe6b0
                          ((double)*(float *)((int)&g_MoonBats[0].animation_frame + iVar5));
        core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850
                  (&g_MoonBatModel,(CKeyFramedModelInstance *)(int)ROUND(dVar8),0,(int)fVar9);
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
        pCVar1 = g_CDemonSetPtr;
        fVar9 = *(float *)((int)&g_MoonBats[0].course_position + iVar5) /
                (float)g_MoonBatCourses[*(int *)((int)&g_MoonBats[0].course_index + iVar5)].len;
        if ((float)0.5 <= fVar9) {
          dVar8 = ((double)fVar9 + -0.5) * 8192;
        }
        else {
          dVar8 = (double)8192f - (double)fVar9 * (double)16384f;
        }
        dVar8 = crt_math_c_round_FUN_005fe6b0(dVar8);
        pCVar1->ambient_base_quick = (int)ROUND(dVar8);
      }
      iVar5 = iVar5 + 0x18;
    } while (iVar5 != 0x2d0);
  }
  g_CDemonSetPtr->rendering_mode = 0;
  engine_alphabit_cpp_CAlphaBitmap_initPalette_FUN_00410cf0(&g_MoonCloudTexture);
  pcVar2 = g_MoonCloudTexture.ptrRaw;
  iVar5 = g_MoonCloudScrollX >> 0x10;
  iVar3 = g_MoonCloudScrollY >> 0x10;
  local_28 = 0;
  do {
    puVar6 = (ulonglong *)g_ScreenBufferArray[local_28];
    uVar4 = 0;
    do {
      uVar7 = paddusb(*puVar6,CONCAT44 /* combine 2-byte values */(g_Hardware32BitPalette
                                       [(byte)pcVar2[((uVar4 >> 1) + iVar5 & 0xff) * 0x100 +
                                                     ((local_28 >> 1) + iVar3 & 0xff)] >> 2],
                                       g_Hardware32BitPalette
                                       [(byte)pcVar2[((uVar4 >> 1) + iVar5 & 0xff) * 0x100 +
                                                     ((local_28 >> 1) + iVar3 & 0xff)] >> 2]));
      uVar7 = paddusb(uVar7,CONCAT44 /* combine 2-byte values */(g_Hardware32BitPalette
                                     [(byte)pcVar2[((uVar4 >> 2) + iVar5 & 0xff) * 0x100 +
                                                   ((local_28 >> 2) + iVar3 & 0xff)] >> 2],
                                     g_Hardware32BitPalette
                                     [(byte)pcVar2[((uVar4 >> 2) + iVar5 & 0xff) * 0x100 +
                                                   ((local_28 >> 2) + iVar3 & 0xff)] >> 2]));
      *puVar6 = uVar7;
      puVar6 = puVar6 + 1;
      uVar4 = uVar4 + 2;
    } while (uVar4 < 0x280);
    local_28 = local_28 + 1;
  } while ((int)local_28 < 0x1e0);
  engine_3d_c_setBlendMode_FUN_00406dd0(1);
  dVar8 = crt_math_c_round_FUN_005fe6b0((double)g_MoonAnimationTimer);
  local_1c = (int)ROUND(dVar8);
  if (0x1d < local_1c) {
    local_1c = 0;
  }
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950(g_MoonAnimTextures + local_1c,0,0,48000);
  engine_3d_c_setBlendMode_FUN_00406dd0(0);
  return;
}
