// Name: core_setutil.cpp_C3DSLight_renderVolumetricSphere_FUN_0055d71c
// Address: 0055d71c
// Address Range: [[0055d71c, 0055d9b0]]
// Convention: unknown
// Signature: void core_setutil_cpp_C3DSLight_renderVolumetricSphere_FUN_0055d71c(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_setutil_cpp_C3DSLight_renderVolumetricSphere_FUN_0055d71c(int param_1)

{
  SRenderVertex *pSVar1;
  CDemonRenderer *pCVar2;
  int *extraout_EDX;
  int *extraout_EDX_00;
  CDemonRenderer *this_ptr;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  SMRGLHeaderPrimitive SStack_78;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  CVector3i CStack_50;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  if ((*(uint *)(param_1 + 0x11d4) & 0x7fffffff) == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
            (DAT_00612560,(CVector3f *)(param_1 + 0x104));
  iStack_c = 0;
  iStack_18 = 0;
  do {
    iVar5 = -4;
    iVar3 = iStack_18 + -0xc0;
    do {
      fVar6 = (float10)iStack_c * (float10)_DAT_005f14a9 * (float10)_DAT_005f14ad *
              (float10)_DAT_005f14b1;
      fVar7 = (float10)fsin(fVar6);
      fVar6 = (float10)fcos(fVar6);
      fVar8 = (float10)*(float *)(param_1 + 0x11d4) * (float10)_DAT_005f14a1;
      fVar9 = (float10)iVar5 * (float10)_DAT_005f14b9 * (float10)_DAT_005f14ad *
              (float10)_DAT_005f14c1;
      fVar10 = (float10)fcos(fVar9);
      fVar9 = (float10)fsin(fVar9);
      fStack_3c = (float)(fVar6 * fVar8 * fVar10);
      fStack_44 = (float)(fVar7 * fVar8 * fVar10);
      fStack_40 = (float)(fVar9 * fVar8);
      CStack_50.x = (int)ROUND(fStack_44 * _DAT_00605158);
      CStack_50.y = (int)ROUND(fStack_40 * _DAT_00605158);
      CStack_50.z = (int)ROUND(fStack_3c * _DAT_00605158);
      iStack_8 = iVar5;
      engine_special_cpp_FUN_00580173
                ((SProjectedVertex *)(DAT_00612560->vertex_buffer_ptr + iVar3),&CStack_50);
      pCVar2 = DAT_00612560;
      *(uint *)(DAT_00612560->vertex_buffer_ptr + iVar3 + 0x18) = 0x800000;
      *(uint *)(pCVar2->vertex_buffer_ptr + iVar3 + 0x1c) = 0x800000;
      fVar6 = (float10)*(float *)(param_1 + 0x11c4) * (float10)_DAT_005f14c9;
      pSVar1 = pCVar2->vertex_buffer_ptr;
      round();
      iStack_8 = (int)ROUND(fVar6);
      *(int *)(pSVar1 + iVar3 + 0x20) = iStack_8;
      iVar4 = *extraout_EDX;
      fVar6 = (float10)*(float *)(param_1 + 0x11c8) * (float10)_DAT_005f14c9;
      round();
      iStack_8 = (int)ROUND(fVar6);
      *(int *)(iVar4 + iVar3 + 0x24) = iStack_8;
      fVar6 = (float10)*(float *)(param_1 + 0x11cc) * (float10)_DAT_005f14c9;
      iVar4 = *extraout_EDX_00;
      round();
      iStack_8 = (int)ROUND(fVar6);
      iVar5 = iVar5 + 1;
      *(int *)(iVar3 + 0x28 + iVar4) = iStack_8;
      iVar3 = iVar3 + 0x30;
    } while (iVar5 < 5);
    iStack_c = iStack_c + 1;
    iStack_18 = iStack_18 + 0x1e0;
  } while (iStack_c < 0x11);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
            (this_ptr,(SMRGLTextureBasic *)&DAT_0062318c);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,0x4000);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,0);
  SStack_78.base.count = 4;
  SStack_78.surface_normal.D.i = 0;
  SStack_78.surface_normal.C.i = 0;
  SStack_78.surface_normal.B.i = 0;
  SStack_78.surface_normal.A.i = 0;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,1);
  iStack_14 = 10;
  iStack_10 = 0;
  do {
    iVar5 = iStack_10;
    iVar3 = iStack_14;
    iVar4 = -4;
    do {
      iStack_60 = iVar5 + iVar4;
      iStack_5c = iVar3 + iVar4;
      iVar4 = iVar4 + 1;
      iStack_58 = iVar3 + iVar4;
      iStack_54 = iVar5 + iVar4;
      engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050(DAT_00612560,&SStack_78);
    } while (iVar4 < 4);
    iStack_10 = iStack_10 + 10;
    iStack_14 = iStack_14 + 10;
  } while (iStack_10 != 0xa0);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,0);
  return;
}
