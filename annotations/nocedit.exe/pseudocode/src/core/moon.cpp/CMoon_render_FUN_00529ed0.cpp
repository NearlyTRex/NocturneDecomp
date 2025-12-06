// Name: core_moon.cpp_CMoon_render_FUN_00529ed0
// Address: 00529ed0
// Address Range: [[00529ed0, 0052a0ca] [0052a11f, 0052a2ab]]
// Convention: __cdecl
// Signature: void core_moon.cpp_CMoon_render_FUN_00529ed0(CMoon * this_ptr)

#include "nocturne.h"

void __cdecl core_moon_cpp_CMoon_render_FUN_00529ed0(CMoon *this_ptr)

{
  float fVar1;
  float fVar2;
  CDemonSet *pCVar3;
  char *pcVar4;
  uint extraout_EAX;
  int iVar5;
  uint extraout_EAX_00;
  uint uVar6;
  uint extraout_EDX;
  uint extraout_EDX_00;
  int iVar7;
  BADSPACEBASE *in_ESP;
  ulonglong *puVar8;
  ulonglong uVar9;
  float10 fVar10;
  double dVar11;
  float local_5c;
  CCourse *this_ptr_00;
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
  pCVar3 = g_CDemonSetPtr;
  g_CDemonSetPtr->rendering_mode = 1;
  (pCVar3->light_direction).x = -37000;
  (pCVar3->light_direction).y = -37000;
  (pCVar3->light_direction).z = 37000;
  pCVar3->ambient_base_quick = 0x280;
  core_set_cpp_CDemonSet_FUN_00570ca0(pCVar3);
  core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850
            (&this_ptr->moon,(CKeyFramedModelInstance *)0x0,0,0x205);
  pCVar3 = g_CDemonSetPtr;
  (g_CDemonSetPtr->light_direction).x = -0x4844;
  (pCVar3->light_direction).y = -0x4844;
  iVar7 = g_MoonBatsEnabled;
  (pCVar3->light_direction).z = 0x4844;
  pCVar3->ambient_base_quick = 0x2000;
  if (iVar7 != 0) {
    iVar7 = 0;
    do {
      if (0.0 <= *(float *)((int)&g_MoonBats[0].course_position + iVar7)) {
        this_ptr_00 = g_MoonBatCourses + *(int *)((int)&g_MoonBats[0].course_index + iVar7);
        core_course_cpp_CCourse_FUN_00442710(this_ptr_00);
        local_5c = 7.588094e-39;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr,(CVector3f *)&stack0xffffffbc);
        local_5c = 7.588122e-39;
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                  (g_CDemonRendererPtr,(CVector3i *)&stack0xffffffb0,(CVector3i *)0x0);
        fVar10 = (float10)*(float *)((int)&g_MoonBats[0].animation_frame + iVar7);
        crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX));
        core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850
                  (&g_MoonBatModel,(CKeyFramedModelInstance *)(int)ROUND(fVar10),0,(int)this_ptr_00)
        ;
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
        fVar1 = *(float *)((int)&g_MoonBats[0].course_position + iVar7) /
                (float)g_MoonBatCourses[*(int *)((int)&g_MoonBats[0].course_index + iVar7)].len;
        fVar2 = (float)0.5;
        if (fVar1 < fVar2) {
          fVar10 = (float10)8192f - (float10)fVar1 * (float10)16384f;
        }
        else {
          fVar10 = ((float10)fVar1 + (float10)-0.5) * (float10)8192;
        }
        dVar11 = crt_math_c_round_FUN_005fe6b0
                           ((double)CONCAT44 /* combine 2-byte values */(g_CDemonSetPtr,
                                             CONCAT22 /* combine 2-byte values */((short)((uint)g_MoonBatCourses
                                                                    [*(int *)((int)&g_MoonBats[0].
                                                                                    course_index +
                                                                             iVar7)].len >> 0x10),
                                                      (ushort)(fVar1 < fVar2) << 8 |
                                                      (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
                                                      (ushort)(fVar1 == fVar2) << 0xe)));
        *(int *)((int)((ulonglong)dVar11 >> 0x20) + 0x15ae80) = (int)ROUND(fVar10);
      }
      iVar7 = iVar7 + 0x18;
    } while (iVar7 != 0x2d0);
  }
  g_CDemonSetPtr->rendering_mode = 0;
  engine_alphabit_cpp_CAlphaBitmap_initPalette_FUN_00410cf0(&g_MoonCloudTexture);
  pcVar4 = g_MoonCloudTexture.ptrRaw;
  iVar7 = g_MoonCloudScrollX >> 0x10;
  iVar5 = g_MoonCloudScrollY >> 0x10;
  local_28 = 0;
  do {
    puVar8 = (ulonglong *)g_ScreenBufferArray[local_28];
    uVar6 = 0;
    do {
      uVar9 = paddusb(*puVar8,CONCAT44 /* combine 2-byte values */(g_Hardware32BitPalette
                                       [(byte)pcVar4[((uVar6 >> 1) + iVar7 & 0xff) * 0x100 +
                                                     ((local_28 >> 1) + iVar5 & 0xff)] >> 2],
                                       g_Hardware32BitPalette
                                       [(byte)pcVar4[((uVar6 >> 1) + iVar7 & 0xff) * 0x100 +
                                                     ((local_28 >> 1) + iVar5 & 0xff)] >> 2]));
      uVar9 = paddusb(uVar9,CONCAT44 /* combine 2-byte values */(g_Hardware32BitPalette
                                     [(byte)pcVar4[((uVar6 >> 2) + iVar7 & 0xff) * 0x100 +
                                                   ((local_28 >> 2) + iVar5 & 0xff)] >> 2],
                                     g_Hardware32BitPalette
                                     [(byte)pcVar4[((uVar6 >> 2) + iVar7 & 0xff) * 0x100 +
                                                   ((local_28 >> 2) + iVar5 & 0xff)] >> 2]));
      *puVar8 = uVar9;
      puVar8 = puVar8 + 1;
      uVar6 = uVar6 + 2;
    } while (uVar6 < 0x280);
    local_28 = local_28 + 1;
  } while ((int)local_28 < 0x1e0);
  engine_3d_c_setBlendMode_FUN_00406dd0(1);
  fVar10 = (float10)g_MoonAnimationTimer;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX_00,extraout_EAX_00));
  local_1c = (int)ROUND(fVar10);
  if (0x1d < local_1c) {
    local_1c = 0;
  }
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950(g_MoonAnimTextures + local_1c,0,0,48000);
  engine_3d_c_setBlendMode_FUN_00406dd0(0);
  return;
}
