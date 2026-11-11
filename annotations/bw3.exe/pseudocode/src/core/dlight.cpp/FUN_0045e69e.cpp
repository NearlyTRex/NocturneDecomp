// Name: core_dlight.cpp_FUN_0045e69e
// Address: 0045e69e
// Address Range: [[0045e69e, 0045ed63]]
// Convention: unknown
// Signature: void core_dlight_cpp_FUN_0045e69e(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dlight_cpp_FUN_0045e69e(int param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  unkbyte10 Var8;
  float10 fVar9;
  ulonglong uVar10;
  float afStackY_109c [1000];
  CDemonRenderer *pCVar11;
  CVector3f *euler_angles;
  CVector3f *translation;
  float fStack_f0;
  int iStack_ec;
  SMRGLHeaderPrimitive SStack_e8;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  CVector3i CStack_c0;
  float fStack_b4;
  float afStack_b0 [2];
  CVector3f CStack_a8;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  CVector3i CStack_90;
  CVector3i CStack_84;
  CVector3i aCStack_78 [3];
  int iStack_54;
  int iStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  int iStack_34;
  int iStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  int iStack_1c;
  int iStack_18;
  
  bVar3 = 0;
  if (*(int *)(param_1 + 0x1cbc) != 0) {
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
              (DAT_005f2afc,(CVector3f *)(param_1 + 4));
    core_dirmat_cpp_FUN_0045b9b0(param_1 + 0x10);
    translation = (CVector3f *)0x0;
    euler_angles = &CStack_a8;
    CStack_a8.x = fStack_b4;
    *(float *)((int)&CStack_a8 + (uint)bVar3 * -8 + 4) = afStack_b0[(uint)bVar3 * -2];
    pCVar11 = DAT_005f2afc;
    *(float *)((int)&CStack_a8 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         afStack_b0[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
              (pCVar11,euler_angles,translation);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
              (DAT_005f2afc,(SMRGLTextureBasic *)&DAT_005f2828);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,1);
    iStack_ec = 1;
    do {
      fVar4 = (float10)iStack_ec * ((float10)_DAT_005bb53c / (float10)*(float *)(param_1 + 0x38)) *
              (float10)_DAT_005bb50c;
      fStack_f0 = (float)fVar4;
      Var8 = fpatan(fVar4,(float10)1);
      fVar4 = (float10)fcos(Var8);
      iVar2 = 0;
      fStack_48 = (float)fVar4;
      do {
        fVar4 = (float10)iVar2 * (float10)_DAT_005bb514 * (float10)_DAT_005bb518 *
                (float10)_DAT_005bb51c;
        fVar5 = (float10)fsin(fVar4);
        fVar9 = (float10)(iVar2 + 1) * (float10)_DAT_005bb514 * (float10)_DAT_005bb518 *
                (float10)_DAT_005bb51c;
        fVar6 = (float10)fsin(fVar9);
        fVar4 = (float10)fcos(fVar4);
        fVar9 = (float10)fcos(fVar9);
        iStack_1c = *(int *)(param_1 + 0x1cc0) - (*(int *)(param_1 + 0x1cc0) >> 0x1f) >> 1;
        iStack_18 = *(int *)(param_1 + 0x1cc4) - (*(int *)(param_1 + 0x1cc4) >> 0x1f) >> 1;
        fVar7 = (float10)fStack_f0;
        fStack_38 = (float)(fVar4 * fVar7);
        fVar4 = (float10)iStack_18 - (float10)iStack_18 * (float10)fStack_38;
        round();
        iStack_54 = (int)ROUND(fVar4);
        fStack_3c = (float)(fVar5 * fVar7);
        fVar6 = fVar6 * fVar7;
        fVar4 = (float10)iStack_1c * (float10)fStack_3c + (float10)iStack_1c;
        fVar9 = fVar9 * fVar7;
        uVar10 = round();
        iStack_50 = (int)ROUND(fVar4);
        fStack_2c = (float)*(ushort *)
                            (*(int *)((int)((ulonglong)uVar10 >> 0x20) + 0x2f94) +
                            ((int)uVar10 + iStack_50) * 2) * (float)_DAT_005bb524;
        iVar1 = 0;
        fStack_44 = (float)fVar6;
        fStack_40 = (float)fVar9;
        fStack_28 = fStack_2c;
        do {
          fStack_4c = *(float *)(param_1 + 0x140);
          fStack_20 = (float)iVar1 * fStack_48 * fStack_4c * _DAT_005bb52c;
          iStack_18 = iVar1 + 1;
          fStack_24 = (float)iStack_18 * fStack_48 * fStack_4c * _DAT_005bb52c;
          fVar5 = ((float10)fStack_4c - (float10)fStack_20) * ((float10)1 / (float10)fStack_4c) *
                  (float10)_DAT_005bb534;
          fVar9 = ((float10)fStack_4c - (float10)fStack_24) * ((float10)1 / (float10)fStack_4c) *
                  (float10)_DAT_005bb534;
          fVar4 = (float10)fStack_20;
          round();
          round();
          iStack_30 = (int)ROUND(fVar5);
          iStack_34 = (int)ROUND(fVar9);
          fStack_94 = fStack_28;
          if (fVar4 < (float10)fStack_28) {
            fStack_94 = fStack_20;
          }
          fStack_9c = fStack_94 * fStack_3c;
          fStack_98 = fStack_94 * fStack_38;
          CStack_c0.x = (int)ROUND(fStack_9c * _DAT_005de4f0);
          CStack_c0.y = (int)ROUND(fStack_98 * _DAT_005de4f0);
          CStack_c0.z = (int)ROUND(fStack_94 * _DAT_005de4f0);
          engine_special_cpp_FUN_005632a3
                    (&DAT_005f2afc->vertex_buffer_ptr->projected_vertex,&CStack_c0);
          fStack_94 = fStack_2c;
          if (fStack_20 < fStack_2c) {
            fStack_94 = fStack_20;
          }
          fStack_9c = fStack_94 * fStack_44;
          fStack_98 = fStack_94 * fStack_40;
          CStack_90.x = (int)ROUND(fStack_9c * _DAT_005de4f0);
          CStack_90.y = (int)ROUND(fStack_98 * _DAT_005de4f0);
          CStack_90.z = (int)ROUND(fStack_94 * _DAT_005de4f0);
          engine_special_cpp_FUN_005632a3
                    (&DAT_005f2afc->vertex_buffer_ptr[1].projected_vertex,&CStack_90);
          fStack_94 = fStack_2c;
          if (fStack_24 < fStack_2c) {
            fStack_94 = fStack_24;
          }
          fStack_9c = fStack_94 * fStack_44;
          fStack_98 = fStack_94 * fStack_40;
          CStack_84.x = (int)ROUND(fStack_9c * _DAT_005de4f0);
          CStack_84.y = (int)ROUND(fStack_98 * _DAT_005de4f0);
          CStack_84.z = (int)ROUND(fStack_94 * _DAT_005de4f0);
          engine_special_cpp_FUN_005632a3
                    (&DAT_005f2afc->vertex_buffer_ptr[2].projected_vertex,&CStack_84);
          fStack_94 = fStack_28;
          if (fStack_24 < fStack_28) {
            fStack_94 = fStack_24;
          }
          fStack_9c = fStack_94 * fStack_3c;
          fStack_98 = fStack_94 * fStack_38;
          aCStack_78[0].x = (int)ROUND(fStack_9c * _DAT_005de4f0);
          aCStack_78[0].y = (int)ROUND(fStack_98 * _DAT_005de4f0);
          aCStack_78[0].z = (int)ROUND(fStack_94 * _DAT_005de4f0);
          engine_special_cpp_FUN_005632a3
                    (&DAT_005f2afc->vertex_buffer_ptr[3].projected_vertex,aCStack_78);
          pCVar11 = DAT_005f2afc;
          DAT_005f2afc->vertex_buffer_ptr->a = iStack_30;
          pCVar11->vertex_buffer_ptr->b = 0xffff;
          pCVar11->vertex_buffer_ptr->g = 0xffff;
          pCVar11->vertex_buffer_ptr->r = 0xffff;
          pCVar11->vertex_buffer_ptr->u = 0xf80000;
          pCVar11->vertex_buffer_ptr->v = 0xf80000;
          pCVar11->vertex_buffer_ptr[1].a = iStack_30;
          pCVar11->vertex_buffer_ptr[1].b = 0xffff;
          pCVar11->vertex_buffer_ptr[1].g = 0xffff;
          pCVar11->vertex_buffer_ptr[1].r = 0xffff;
          pCVar11->vertex_buffer_ptr[1].u = 0x80000;
          pCVar11->vertex_buffer_ptr[1].v = 0xf80000;
          pCVar11->vertex_buffer_ptr[2].a = iStack_34;
          pCVar11->vertex_buffer_ptr[2].b = 0xffff;
          pCVar11->vertex_buffer_ptr[2].g = 0xffff;
          pCVar11->vertex_buffer_ptr[2].r = 0xffff;
          pCVar11->vertex_buffer_ptr[2].u = 0x80000;
          pCVar11->vertex_buffer_ptr[2].v = 0x80000;
          pCVar11->vertex_buffer_ptr[3].a = iStack_34;
          pCVar11->vertex_buffer_ptr[3].b = 0xffff;
          pCVar11->vertex_buffer_ptr[3].g = 0xffff;
          pCVar11->vertex_buffer_ptr[3].r = 0xffff;
          pCVar11->vertex_buffer_ptr[3].u = 0xf80000;
          iVar1 = iVar1 + 1;
          pCVar11->vertex_buffer_ptr[3].v = 0x80000;
          SStack_e8.surface_normal.D.i = 0;
          SStack_e8.surface_normal.C.i = 0;
          SStack_e8.base.count = 4;
          SStack_e8.surface_normal.B.i = 0;
          uStack_cc = 1;
          SStack_e8.surface_normal.A.i = 0;
          uStack_d0 = 0;
          uStack_c4 = 3;
          uStack_c8 = 2;
          engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510(pCVar11,&SStack_e8)
          ;
        } while (iVar1 < 4);
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x10);
      iStack_ec = iStack_ec + 1;
    } while (iStack_ec < 0x10);
    engine_matrix_c_pop_FUN_0046d080();
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
    return;
  }
  return;
}
