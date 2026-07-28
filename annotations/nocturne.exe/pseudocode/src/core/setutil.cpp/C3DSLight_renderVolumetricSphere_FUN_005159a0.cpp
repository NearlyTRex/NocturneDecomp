// Name: core_setutil.cpp_C3DSLight_renderVolumetricSphere_FUN_005159a0
// Address: 005159a0
// Address Range: [[005159a0, 00515c30]]
// Convention: unknown
// Signature: void core_setutil_cpp_C3DSLight_renderVolumetricSphere_FUN_005159a0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_setutil_cpp_C3DSLight_renderVolumetricSphere_FUN_005159a0(void)

{
  SRenderVertex *pSVar1;
  CDemonRenderer *this_ptr;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  double dVar9;
  int in_stack_00000004;
  CVector3i local_50;
  float local_44;
  float local_40;
  float local_3c;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if ((*(uint *)(in_stack_00000004 + 0x11d4) & 0x7fffffff) == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            (DAT_005ae704,(CVector3f *)(in_stack_00000004 + 0x104));
  local_c = 0;
  local_18 = 0;
  do {
    iVar3 = -4;
    iVar2 = local_18 + -0xc0;
    do {
      fVar4 = (float10)local_c * (float10)_DAT_00591001 * (float10)_DAT_00591009 *
              (float10)_DAT_00591011;
      fVar5 = (float10)fsin(fVar4);
      fVar4 = (float10)fcos(fVar4);
      fVar6 = (float10)*(float *)(in_stack_00000004 + 0x11d4) * (float10)_DAT_00590ff9;
      fVar7 = (float10)iVar3 * (float10)_DAT_00591019 * (float10)_DAT_00591009 *
              (float10)_DAT_00591021;
      fVar8 = (float10)fcos(fVar7);
      fVar7 = (float10)fsin(fVar7);
      local_3c = (float)(fVar4 * fVar6 * fVar8);
      local_44 = (float)(fVar5 * fVar6 * fVar8);
      local_40 = (float)(fVar7 * fVar6);
      local_50.x = (int)ROUND(local_44 * _DAT_005a1ab0);
      local_50.y = (int)ROUND(local_40 * _DAT_005a1ab0);
      local_50.z = (int)ROUND(local_3c * _DAT_005a1ab0);
      local_8 = iVar3;
      engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                ((SProjectedVertex *)
                 ((int)&(DAT_005ae704->vertex_buffer_ptr->projected_vertex).transformed_x + iVar2),
                 &local_50);
      this_ptr = DAT_005ae704;
      *(uint *)((int)&DAT_005ae704->vertex_buffer_ptr->u + iVar2) = 0x800000;
      *(uint *)((int)&this_ptr->vertex_buffer_ptr->v + iVar2) = 0x800000;
      pSVar1 = this_ptr->vertex_buffer_ptr;
      dVar9 = round
                        ((double)(*(float *)(in_stack_00000004 + 0x11c4) * _DAT_00591029));
      local_c = (int)ROUND(dVar9);
      *(int *)((int)&pSVar1->r + iVar2) = local_c;
      pSVar1 = this_ptr->vertex_buffer_ptr;
      dVar9 = round
                        ((double)(*(float *)(in_stack_00000004 + 0x11c8) * _DAT_00591029));
      local_10 = (int)ROUND(dVar9);
      *(int *)((int)&pSVar1->g + iVar2) = local_10;
      pSVar1 = this_ptr->vertex_buffer_ptr;
      dVar9 = round
                        ((double)(*(float *)(in_stack_00000004 + 0x11cc) * _DAT_00591029));
      local_14 = (int)ROUND(dVar9);
      iVar3 = iVar3 + 1;
      *(int *)((int)&pSVar1->b + iVar2) = local_14;
      iVar2 = iVar2 + 0x30;
    } while (iVar3 < 5);
    local_18 = local_18 + 1;
    local_24 = local_24 + 0x1e0;
  } while (local_18 < 0x11);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
            (this_ptr,(SMRGLTextureBasic *)&DAT_005be924);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,0x4000);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,0);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,1);
  local_20 = 10;
  local_1c = 0;
  do {
    iVar2 = -4;
    do {
      iVar2 = iVar2 + 1;
      engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0
                (DAT_005ae704,(SMRGLHeaderPrimitive *)&stack0xffffff7c);
    } while (iVar2 < 4);
    local_1c = local_1c + 10;
    local_20 = local_20 + 10;
  } while (local_1c != 0xa0);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,0);
  return;
}
