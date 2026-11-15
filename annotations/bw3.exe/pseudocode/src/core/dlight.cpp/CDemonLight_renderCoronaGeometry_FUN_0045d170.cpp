// Name: core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_0045d170
// Address: 0045d170
// Address Range: [[0045d170, 0045d52e]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_renderCoronaGeometry_FUN_0045d170(CDemonLight *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dlight_cpp_CDemonLight_renderCoronaGeometry_FUN_0045d170(CDemonLight *this_ptr)

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
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
            (DAT_005f2afc,&(this_ptr->base).base.position.f);
  core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_0045b9b0
            (&(this_ptr->base).base.rotation_matrix,&local_7c);
  translation = (CVector3f *)0x0;
  pCVar9 = &local_88;
  local_88.x = local_7c.x;
  *(uint *)((int)&local_88 + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&local_7c + (uint)bVar4 * -8 + 4);
  pCVar8 = DAT_005f2afc;
  *(uint *)((int)&local_88 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       *(uint *)((int)&local_7c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(pCVar8,pCVar9,translation);
  local_d8._0_4_ =
       ((float)_DAT_005bb474 / (this_ptr->base).base.focal_length) * (this_ptr->base).max_distance;
  iVar3 = 0;
  local_98 = (this_ptr->base).max_distance;
  iVar2 = 0;
  do {
    fVar5 = (float10)iVar3 * (float10)_DAT_005bb47c * (float10)_DAT_005bb484;
    fVar6 = (float10)fcos(fVar5);
    fVar5 = (float10)fsin(fVar5);
    local_a0 = (float)(fVar6 * (float10)(float)local_d8._0_4_);
    local_9c = (float)(fVar5 * (float10)(float)local_d8._0_4_);
    local_4c.x = (int)ROUND(local_a0 * _DAT_005de4f0);
    local_4c.y = (int)ROUND(local_9c * _DAT_005de4f0);
    local_4c.z = (int)ROUND(local_98 * _DAT_005de4f0);
    local_14 = iVar3;
    engine_special_cpp_transformAndProjectPoint_FUN_005632a3
              ((SProjectedVertex *)
               ((int)&(DAT_005f2afc->vertex_buffer_ptr->projected_vertex).transformed_x + iVar2),
               &local_4c);
    pCVar8 = DAT_005f2afc;
    iVar3 = iVar3 + 1;
    *(uint *)((int)&DAT_005f2afc->vertex_buffer_ptr->r + iVar2) = 0;
    iVar2 = iVar2 + 0x30;
  } while (iVar3 < 0x10);
  local_ac.x = (int)ROUND(_DAT_01b4b6a8 * _DAT_005de4f0);
  local_ac.y = (int)ROUND(_DAT_01b4b6ac * _DAT_005de4f0);
  local_ac.z = (int)ROUND(_DAT_01b4b6b0 * _DAT_005de4f0);
  engine_special_cpp_transformAndProjectPoint_FUN_005632a3
            (&pCVar8->vertex_buffer_ptr[0x10].projected_vertex,&local_ac);
  pCVar8 = DAT_005f2afc;
  DAT_005f2afc->vertex_buffer_ptr[0x10].r = 0xffff;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460(pCVar8,1);
  engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_0046d1c0(DAT_005f2afc,&local_58);
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
  core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0045b870
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
  local_64.x = (this_ptr->base).base.focal_length * (float)_DAT_005bb48c * local_64.x;
  local_64.y = (float)_DAT_005bb48c * (this_ptr->base).base.focal_length * local_64.y;
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
    core_dcamera_cpp_initializeCoronaBuffers_FUN_0044d020();
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
      engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_0046d330
                (DAT_005f2afc,(SMRGLHeaderPrimitive *)(local_d8 + 4),
                 core_dcamera_cpp_renderCoronaDepthScanline_FUN_0044d060);
      iVar2 = iVar3;
    } while (iVar3 < 0x10);
  }
  local_cc.i = 0;
  local_c8.i = 0;
  local_c4.i = 0xffff;
  dVar7 = round
                    ((double)((this_ptr->base).max_distance * (float)_DAT_005bb494));
  local_c4.i = (int)ROUND(dVar7);
  iVar2 = 0;
  do {
    iVar3 = iVar2 + 1;
    local_c0 = 0;
    local_bc = iVar2;
    local_b8 = iVar3;
    engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_0046d330
              (DAT_005f2afc,(SMRGLHeaderPrimitive *)local_d8,
               core_dcamera_cpp_renderCoronaDepthScanline_FUN_0044d060);
    iVar2 = iVar3;
  } while (iVar3 < 0xe);
  engine_drender_cpp_pop_FUN_0046d080();
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460(DAT_005f2afc,0);
  core_dlight_cpp_CDemonLight_renderExternalVolumetricShafts_FUN_0045ed70(this_ptr);
  return;
}
