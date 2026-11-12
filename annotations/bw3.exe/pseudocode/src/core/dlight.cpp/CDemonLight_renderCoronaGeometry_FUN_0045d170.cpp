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
  float afStackY_107c [998];
  CDemonRenderer *pCVar7;
  CVector3f *euler_angles;
  CVector3f *translation;
  float *pfVar8;
  float local_d8;
  SMRGLHeaderPrimitive local_d4;
  int local_bc;
  int local_b8;
  int local_b4;
  CVector3i local_ac;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float afStack_90 [2];
  CVector3f local_88;
  float local_7c;
  float afStack_78 [4];
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  CVector3i local_4c;
  float local_40;
  float local_3c [4];
  float local_2c;
  float local_18;
  int local_14;
  
  bVar4 = 0;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
            (DAT_005f2afc,&(this_ptr->base).base.position.f);
  core_dirmat_cpp_FUN_0045b9b0(&(this_ptr->base).base.rotation_matrix);
  translation = (CVector3f *)0x0;
  euler_angles = &local_88;
  local_88.x = local_7c;
  *(float *)((int)&local_88 + (uint)bVar4 * -8 + 4) = afStack_78[(uint)bVar4 * -2];
  pCVar7 = DAT_005f2afc;
  *(float *)((int)&local_88 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       afStack_78[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
            (pCVar7,euler_angles,translation);
  local_d8 = ((float)_DAT_005bb474 / (this_ptr->base).base.focal_length) *
             (this_ptr->base).max_distance;
  iVar3 = 0;
  local_98 = (this_ptr->base).max_distance;
  iVar2 = 0;
  do {
    fVar5 = (float10)iVar3 * (float10)_DAT_005bb47c * (float10)_DAT_005bb484;
    fVar6 = (float10)fcos(fVar5);
    fVar5 = (float10)fsin(fVar5);
    local_a0 = (float)(fVar6 * (float10)local_d8);
    local_9c = (float)(fVar5 * (float10)local_d8);
    local_4c.x = (int)ROUND(local_a0 * _DAT_005de4f0);
    local_4c.y = (int)ROUND(local_9c * _DAT_005de4f0);
    local_4c.z = (int)ROUND(local_98 * _DAT_005de4f0);
    local_14 = iVar3;
    engine_special_cpp_FUN_005632a3
              ((SProjectedVertex *)
               ((int)&(DAT_005f2afc->vertex_buffer_ptr->projected_vertex).transformed_x + iVar2),
               &local_4c);
    pCVar7 = DAT_005f2afc;
    iVar3 = iVar3 + 1;
    *(uint *)((int)&DAT_005f2afc->vertex_buffer_ptr->r + iVar2) = 0;
    iVar2 = iVar2 + 0x30;
  } while (iVar3 < 0x10);
  local_ac.x = (int)ROUND(_DAT_01b4b6a8 * _DAT_005de4f0);
  local_ac.y = (int)ROUND(_DAT_01b4b6ac * _DAT_005de4f0);
  local_ac.z = (int)ROUND(_DAT_01b4b6b0 * _DAT_005de4f0);
  engine_special_cpp_FUN_005632a3(&pCVar7->vertex_buffer_ptr[0x10].projected_vertex,&local_ac);
  pCVar7 = DAT_005f2afc;
  DAT_005f2afc->vertex_buffer_ptr[0x10].r = 0xffff;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460(pCVar7,1);
  engine_drender_cpp_FUN_0046d1c0(DAT_005f2afc);
  bVar1 = false;
  afStack_78[2] = local_58;
  afStack_78[(uint)bVar4 * -2 + 3] = afStack_78[(uint)bVar4 * -2 + 9];
  afStack_78[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       afStack_78[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
  local_3c[2] = afStack_78[2] - (this_ptr->base).base.position.f.x;
  pfVar8 = afStack_78 + 5;
  local_3c[3] = afStack_78[3] - (this_ptr->base).base.position.f.y;
  local_2c = local_68 - (this_ptr->base).base.position.f.z;
  local_64 = local_3c[2];
  afStack_78[(uint)bVar4 * -2 + 6] = local_3c[(uint)bVar4 * -2 + 3];
  afStack_78[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
       local_3c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  core_dirmat_cpp_FUN_0045b870(&(this_ptr->base).base.rotation_matrix,pfVar8);
  local_40 = local_94;
  local_3c[(uint)bVar4 * -2] = afStack_90[(uint)bVar4 * -2];
  local_3c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  if (afStack_78 + 5 != &local_40) {
    local_64 = local_40;
    local_60 = local_3c[0];
    local_5c = local_3c[1];
  }
  local_64 = (this_ptr->base).base.focal_length * (float)_DAT_005bb48c * local_64;
  local_60 = (float)_DAT_005bb48c * (this_ptr->base).base.focal_length * local_60;
  if ((((local_64 < local_5c) && (local_18 = -local_5c, local_18 < local_64)) &&
      (local_60 < local_5c)) &&
     ((local_18 < local_60 && (local_5c < (this_ptr->base).max_distance)))) {
    bVar1 = true;
  }
  local_d4.surface_normal.D.i = 0;
  local_d4.surface_normal.C.i = 0;
  local_d4.surface_normal.B.i = 0;
  local_d4.surface_normal.A.i = 0;
  local_d4.base.count = 3;
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
                (DAT_005f2afc,&local_d4,core_dcamera_cpp_renderCoronaDepthScanline_FUN_0044d060);
      iVar2 = iVar3;
    } while (iVar3 < 0x10);
  }
  local_d4.surface_normal.A.i = 0;
  local_d4.surface_normal.B.i = 0;
  local_d4.surface_normal.C.i = 0xffff;
  fVar5 = (float10)(this_ptr->base).max_distance * (float10)_DAT_005bb494;
  round();
  local_d4.surface_normal.D.i = (int)ROUND(fVar5);
  iVar2 = 0;
  do {
    iVar3 = iVar2 + 1;
    local_bc = 0;
    local_b8 = iVar2;
    local_b4 = iVar3;
    engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_0046d330
              (DAT_005f2afc,&local_d4,core_dcamera_cpp_renderCoronaDepthScanline_FUN_0044d060);
    iVar2 = iVar3;
  } while (iVar3 < 0xe);
  engine_drender_cpp_pop_FUN_0046d080();
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460(DAT_005f2afc,0);
  core_dlight_cpp_CDemonLight_renderExternalVolumetricShafts_FUN_0045ed70(this_ptr);
  return;
}
