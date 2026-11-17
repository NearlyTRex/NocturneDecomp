// Name: core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_00463460
// Address: 00463460
// Address Range: [[00463460, 0046381e]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_renderCoronaGeometry_FUN_00463460(CDemonLight *this_ptr)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_renderCoronaGeometry_FUN_00463460(CDemonLight *this_ptr)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  float10 fVar5;
  float10 fVar6;
  double dVar7;
  float afStackY_107c [997];
  CDemonRenderer *pCVar8;
  CVector3f *pCVar9;
  CVector3f *translation;
  byte local_d8 [8];
  UIntegerFloat local_d0;
  UIntegerFloat local_cc;
  UIntegerFloat local_c8;
  UIntegerFloat local_c4;
  uint local_c0;
  int local_bc;
  int local_b8;
  uint local_b4;
  CVector3i local_ac;
  float local_a0;
  float local_9c;
  float local_98;
  CVector3f local_94;
  CVector3f local_88;
  CVector3f local_7c;
  float local_70;
  float local_6c [2];
  CVector3f local_64;
  CVector3f local_58;
  CVector3i local_4c;
  CVector3f local_40;
  float local_34;
  float local_30 [6];
  float local_18;
  int local_14;
  
  bVar4 = 0;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
            (g_CDemonRenderer_PTR_00612560,&(this_ptr->base).base.position.f);
  core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_0045f840
            (&(this_ptr->base).base.rotation_matrix,&local_7c);
  translation = (CVector3f *)0x0;
  pCVar9 = &local_88;
  local_88.x = local_7c.x;
  *(uint *)((int)&local_88 + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&local_7c + (uint)bVar4 * -8 + 4);
  pCVar8 = g_CDemonRenderer_PTR_00612560;
  *(uint *)((int)&local_88 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       *(uint *)((int)&local_7c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(pCVar8,pCVar9,translation);
  local_d8._0_4_ =
       ((float)18 / (this_ptr->base).base.focal_length) *
       (this_ptr->base).max_distance;
  iVar3 = 0;
  local_98 = (this_ptr->base).max_distance;
  iVar2 = 0;
  do {
    fVar5 = (float10)iVar3 * (float10)6.2831853070000001 * (float10)0.0625;
    fVar6 = (float10)fcos(fVar5);
    fVar5 = (float10)fsin(fVar5);
    local_a0 = (float)(fVar6 * (float10)(float)local_d8._0_4_);
    local_9c = (float)(fVar5 * (float10)(float)local_d8._0_4_);
    local_4c.x = (int)ROUND(local_a0 * 256.0f);
    local_4c.y = (int)ROUND(local_9c * 256.0f);
    local_4c.z = (int)ROUND(local_98 * 256.0f);
    local_14 = iVar3;
    engine_special_cpp_transformAndProjectPoint_FUN_00580173
              ((SProjectedVertex *)
               ((int)&(g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr->projected_vertex).
                      transformed_x + iVar2),&local_4c);
    pCVar8 = g_CDemonRenderer_PTR_00612560;
    iVar3 = iVar3 + 1;
    *(uint *)((int)&g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr->r + iVar2) = 0;
    iVar2 = iVar2 + 0x30;
  } while (iVar3 < 0x10);
  local_ac.x = (int)ROUND(g_CVector3f_01b2ee3c.x * 256.0f);
  local_ac.y = (int)ROUND(g_CVector3f_01b2ee3c.y * 256.0f);
  local_ac.z = (int)ROUND(g_CVector3f_01b2ee3c.z * 256.0f);
  engine_special_cpp_transformAndProjectPoint_FUN_00580173
            (&pCVar8->vertex_buffer_ptr[0x10].projected_vertex,&local_ac);
  pCVar8 = g_CDemonRenderer_PTR_00612560;
  g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr[0x10].r = 0xffff;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(pCVar8,1);
  engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_00483ae0
            (g_CDemonRenderer_PTR_00612560,&local_58);
  bVar1 = false;
  local_70 = local_58.x;
  local_6c[(uint)bVar4 * -2] = *(float *)((int)&local_58 + (uint)bVar4 * -8 + 4);
  local_6c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       *(float *)((int)&local_58 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  local_34 = local_70 - (this_ptr->base).base.position.f.x;
  pCVar9 = &local_64;
  local_30[0] = local_6c[0] - (this_ptr->base).base.position.f.y;
  local_30[1] = local_6c[1] - (this_ptr->base).base.position.f.z;
  local_64.x = local_34;
  *(float *)((int)&local_64 + (uint)bVar4 * -8 + 4) = local_30[(uint)bVar4 * -2];
  *(float *)((int)&local_64 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       local_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0045f700
            (&(this_ptr->base).base.rotation_matrix,pCVar9,&local_94);
  local_40.x = local_94.x;
  *(uint *)((int)&local_40 + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&local_94 + (uint)bVar4 * -8 + 4);
  *(uint *)((int)&local_40 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       *(uint *)((int)&local_94 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  if (&local_64 != &local_40) {
    local_64.x = local_40.x;
    local_64.y = local_40.y;
    local_64.z = local_40.z;
  }
  local_64.x = (this_ptr->base).base.focal_length * (float)0.055555555555555601 * local_64.x;
  local_64.y = (float)0.055555555555555601 * (this_ptr->base).base.focal_length * local_64.y;
  if ((((local_64.x < local_64.z) && (local_18 = -local_64.z, local_18 < local_64.x)) &&
      (local_64.y < local_64.z)) &&
     ((local_18 < local_64.y && (local_64.z < (this_ptr->base).max_distance)))) {
    bVar1 = true;
  }
  local_c0 = 0;
  local_c4.i = 0;
  local_c8.i = 0;
  local_cc.i = 0;
  local_d0.i = 3;
  if (bVar1) {
    core_dcamera_cpp_initializeCoronaBuffers_FUN_00450ee0();
  }
  else {
    local_b4 = 0x10;
    iVar2 = 0;
    do {
      if (iVar2 == 0xf) {
        local_bc = 0;
      }
      else {
        local_bc = iVar2 + 1;
      }
      iVar3 = iVar2 + 1;
      local_b8 = iVar2;
      engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_00483c50
                (g_CDemonRenderer_PTR_00612560,(SMRGLHeaderPrimitive *)(local_d8 + 4),
                 core_dcamera_cpp_renderCoronaDepthScanline_FUN_00450f20);
      iVar2 = iVar3;
    } while (iVar3 < 0x10);
  }
  local_cc.i = 0;
  local_c8.i = 0;
  local_c4.i = 0xffff;
  dVar7 = round
                    ((double)((this_ptr->base).max_distance * (float)256));
  local_c4.i = (int)ROUND(dVar7);
  iVar2 = 0;
  do {
    iVar3 = iVar2 + 1;
    local_c0 = 0;
    local_bc = iVar2;
    local_b8 = iVar3;
    engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_00483c50
              (g_CDemonRenderer_PTR_00612560,(SMRGLHeaderPrimitive *)local_d8,
               core_dcamera_cpp_renderCoronaDepthScanline_FUN_00450f20);
    iVar2 = iVar3;
  } while (iVar3 < 0xe);
  engine_drender_cpp_pop_FUN_004839a0();
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(g_CDemonRenderer_PTR_00612560,0);
  core_dlight_cpp_CDemonLight_renderExternalVolumetricShafts_FUN_00465060(this_ptr);
  return;
}
