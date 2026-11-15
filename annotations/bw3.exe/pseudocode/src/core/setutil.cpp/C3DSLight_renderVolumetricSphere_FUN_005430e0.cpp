// Name: core_setutil.cpp_C3DSLight_renderVolumetricSphere_FUN_005430e0
// Address: 005430e0
// Address Range: [[005430e0, 00543370]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSLight_renderVolumetricSphere_FUN_005430e0(C3DSLight *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_setutil_cpp_C3DSLight_renderVolumetricSphere_FUN_005430e0(C3DSLight *this_ptr)

{
  SRenderVertex *pSVar1;
  CDemonRenderer *this_ptr_00;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  double dVar9;
  CVector3i CStack_50;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  if (ABS(this_ptr->atten_end) == 0.0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
            (DAT_005f2afc,&this_ptr->pos);
  iStack_c = 0;
  iStack_18 = 0;
  do {
    iVar3 = -4;
    iVar2 = iStack_18 + -0xc0;
    do {
      fVar4 = (float10)iStack_c * (float10)_DAT_005d1152 * (float10)_DAT_005d1156 *
              (float10)_DAT_005d115a;
      fVar5 = (float10)fsin(fVar4);
      fVar4 = (float10)fcos(fVar4);
      fVar6 = (float10)this_ptr->atten_end * (float10)_DAT_005d114a;
      fVar7 = (float10)iVar3 * (float10)_DAT_005d1162 * (float10)_DAT_005d1156 *
              (float10)_DAT_005d116a;
      fVar8 = (float10)fcos(fVar7);
      fVar7 = (float10)fsin(fVar7);
      fStack_3c = (float)(fVar4 * fVar6 * fVar8);
      fStack_44 = (float)(fVar5 * fVar6 * fVar8);
      fStack_40 = (float)(fVar7 * fVar6);
      CStack_50.x = (int)ROUND(fStack_44 * _DAT_005e3d18);
      CStack_50.y = (int)ROUND(fStack_40 * _DAT_005e3d18);
      CStack_50.z = (int)ROUND(fStack_3c * _DAT_005e3d18);
      iStack_8 = iVar3;
      engine_special_cpp_transformAndProjectPoint_FUN_005632a3
                ((SProjectedVertex *)
                 ((int)&(DAT_005f2afc->vertex_buffer_ptr->projected_vertex).transformed_x + iVar2),
                 &CStack_50);
      this_ptr_00 = DAT_005f2afc;
      *(uint *)((int)&DAT_005f2afc->vertex_buffer_ptr->u + iVar2) = 0x800000;
      *(uint *)((int)&this_ptr_00->vertex_buffer_ptr->v + iVar2) = 0x800000;
      pSVar1 = this_ptr_00->vertex_buffer_ptr;
      dVar9 = round((double)((this_ptr->color).r * _DAT_005d1172));
      iStack_c = (int)ROUND(dVar9);
      *(int *)((int)&pSVar1->r + iVar2) = iStack_c;
      pSVar1 = this_ptr_00->vertex_buffer_ptr;
      dVar9 = round((double)((this_ptr->color).g * _DAT_005d1172));
      iStack_10 = (int)ROUND(dVar9);
      *(int *)((int)&pSVar1->g + iVar2) = iStack_10;
      pSVar1 = this_ptr_00->vertex_buffer_ptr;
      dVar9 = round((double)((this_ptr->color).b * _DAT_005d1172));
      iStack_14 = (int)ROUND(dVar9);
      iVar3 = iVar3 + 1;
      *(int *)((int)&pSVar1->b + iVar2) = iStack_14;
      iVar2 = iVar2 + 0x30;
    } while (iVar3 < 5);
    iStack_18 = iStack_18 + 1;
    iStack_24 = iStack_24 + 0x1e0;
  } while (iStack_18 < 0x11);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
            (this_ptr_00,(SMRGLTextureBasic *)&DAT_0060409c);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(DAT_005f2afc,0x4000);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460(DAT_005f2afc,1);
  iStack_20 = 10;
  iStack_1c = 0;
  do {
    iVar2 = -4;
    do {
      iVar2 = iVar2 + 1;
      engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730
                (DAT_005f2afc,(SMRGLHeaderPrimitive *)&stack0xffffff7c);
    } while (iVar2 < 4);
    iStack_1c = iStack_1c + 10;
    iStack_20 = iStack_20 + 10;
  } while (iStack_1c != 0xa0);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460(DAT_005f2afc,0);
  return;
}
