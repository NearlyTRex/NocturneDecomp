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
  uint uVar2;
  int iVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  double dVar6;
  int render_flags;
  CVector3f local_5c;
  CVector3f local_50;
  CVector3f local_44;
  double local_38;
  int local_30;
  int local_2c;
  uint local_28;
  int local_24;
  ulonglong *local_20;
  int local_1c;
  float local_18;
  CDemonActor *local_14;
  
  sound_sndmain_cpp_processAudio_FUN_005288f0();
  engine_special_cpp_clearScreen_FUN_0052ee70();
  engine_special_cpp_clearZBufferNative_FUN_0052eed4();
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700
            (DAT_005ae704,(CVector3f *)&DAT_02dd1184);
  engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_00460c00(DAT_005ae704,112.0);
  engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_00460780
            (DAT_005ae704,(CVector3f *)&DAT_02dd1184);
  local_5c.x = (this_ptr->rotation_phase + (float)-0.5) * (float)48;
  local_5c.y = (float)48 * (this_ptr->rotation_phase + (float)-0.5);
  local_5c.z = 72.0;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(DAT_005ae704,&local_5c)
  ;
  pCVar1 = 0x01E57284;
  0x01E57284->renderable_actors[0x766] = (CDemonActor *)0x1;
  pCVar1->renderable_actors[0x767] = (CDemonActor *)0xffff6f78;
  pCVar1->renderable_actors[0x768] = (CDemonActor *)0xffff6f78;
  pCVar1->renderable_actors[0x769] = (CDemonActor *)0x9088;
  pCVar1->renderable_actors[0x76a] = (CDemonActor *)0x280;
  core_set_cpp_CDemonSet_setFlatColor_FUN_0050e340(pCVar1,0x10000,0x10000,0x10000);
  core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00453040
            (&this_ptr->moon,0,(CKeyFramedModelInstance *)0x0,0x205);
  pCVar1 = 0x01E57284;
  0x01E57284->renderable_actors[0x767] = (CDemonActor *)0xffffb7bc;
  pCVar1->renderable_actors[0x768] = (CDemonActor *)0xffffb7bc;
  iVar3 = DAT_005bb210;
  pCVar1->renderable_actors[0x769] = (CDemonActor *)0x4844;
  pCVar1->renderable_actors[0x76a] = (CDemonActor *)0x2000;
  if (iVar3 != 0) {
    iVar3 = 0;
    do {
      if (0.0 <= *(float *)(iVar3 + 0x1ccdef0)) {
        core_course_cpp_CCourse_evaluate_FUN_0043b800
                  ((CCourse *)(&DAT_01ccdec8 + *(int *)(iVar3 + 0x1ccdeec) * 0xc),
                   *(float *)(iVar3 + 0x1ccdef0),&local_44,&local_50);
        local_44.x = local_44.x + *(float *)(iVar3 + 0x1ccdef8);
        local_44.y = local_44.y + *(float *)(iVar3 + 0x1ccdefc);
        local_44.z = local_44.z + *(float *)(iVar3 + 0x1ccdf00);
        local_50.y = local_50.y + 1.570796f;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
                  (DAT_005ae704,&local_44);
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
                  (DAT_005ae704,&local_50,(CVector3f *)0x0);
        render_flags = 0x4dee29;
        dVar6 = round((double)*(float *)(iVar3 + 0x1ccdef4));
        local_14 = (CDemonActor *)(int)ROUND(dVar6);
        core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00453040
                  ((CKeyFramedModel *)&DAT_01cce1bc,(int)local_14,(CKeyFramedModelInstance *)0x0,
                   render_flags);
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
        pCVar1 = 0x01E57284;
        local_14 = *(CDemonActor **)(&DAT_01ccdec8 + *(int *)(iVar3 + 0x1ccdeec) * 0xc);
        local_18 = *(float *)(iVar3 + 0x1ccdef0) / (float)(int)local_14;
        local_38 = (double)local_18;
        if ((float)0.5 <= local_18) {
          dVar6 = (local_38 + -0.5) * 8192;
        }
        else {
          dVar6 = (double)8192.0f - (double)local_18 * (double)16384.0f;
        }
        local_5c.x = 7.156918e-39;
        dVar6 = round(dVar6);
        local_14 = (CDemonActor *)(int)ROUND(dVar6);
        pCVar1->renderable_actors[0x76a] = local_14;
      }
      iVar3 = iVar3 + 0x18;
    } while (iVar3 != 0x2d0);
  }
  0x01E57284->renderable_actors[0x766] = (CDemonActor *)0x0;
  engine_alphabit_cpp_CAlphaBitmap_initPalette_FUN_0040eab0((CAlphaBitmap *)&DAT_01ccdc50);
  iVar3 = _DAT_01ccdc50;
  local_30 = _DAT_01ccdebc >> 0x10;
  local_24 = _DAT_01ccdec0 >> 0x10;
  local_2c = _DAT_01ccdc50;
  local_28 = 0;
  do {
    local_20 = *(ulonglong **)(&DAT_01bd2fa0 + local_28 * 4);
    uVar2 = 0;
    puVar4 = local_20;
    do {
      uVar5 = paddusb(*puVar4,CONCAT44(*(uint *)
                                        (&DAT_01c00024 +
                                        (uint)(*(byte *)(((uVar2 >> 1) + local_30 & 0xff) * 0x100 +
                                                         ((local_28 >> 1) + local_24 & 0xff) + iVar3
                                                        ) >> 2) * 4),
                                       *(uint *)
                                        (&DAT_01c00024 +
                                        (uint)(*(byte *)(((uVar2 >> 1) + local_30 & 0xff) * 0x100 +
                                                         ((local_28 >> 1) + local_24 & 0xff) + iVar3
                                                        ) >> 2) * 4)));
      uVar5 = paddusb(uVar5,CONCAT44(*(uint *)
                                      (&DAT_01c00024 +
                                      (uint)(*(byte *)(((uVar2 >> 2) + local_30 & 0xff) * 0x100 +
                                                       ((local_28 >> 2) + local_24 & 0xff) + iVar3)
                                            >> 2) * 4),
                                     *(uint *)
                                      (&DAT_01c00024 +
                                      (uint)(*(byte *)(((uVar2 >> 2) + local_30 & 0xff) * 0x100 +
                                                       ((local_28 >> 2) + local_24 & 0xff) + iVar3)
                                            >> 2) * 4)));
      *puVar4 = uVar5;
      puVar4 = puVar4 + 1;
      uVar2 = uVar2 + 2;
    } while (uVar2 < 0x280);
    local_28 = local_28 + 1;
  } while ((int)local_28 < 0x1e0);
  engine_3d_c_setBlendMode_FUN_004083c0(1);
  dVar6 = round((double)_DAT_01ccdec4);
  local_1c = (int)ROUND(dVar6);
  if (0x1d < local_1c) {
    local_1c = 0;
  }
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040e710
            ((CAlphaBitmap *)(&DAT_01ccdc64 + local_1c * 0x14),0,0,48000);
  engine_3d_c_setBlendMode_FUN_004083c0(0);
  return;
}
