// Name: core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_0044ac60
// Address: 0044ac60
// Address Range: [[0044ac60, 0044b01e]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_renderCoronaGeometry_FUN_0044ac60(CDemonLight *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dlight_cpp_CDemonLight_renderCoronaGeometry_FUN_0044ac60(CDemonLight *this_ptr)

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
  SMRGLHeaderPrimitive local_d4 [4];
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_ac;
  int local_a8;
  int local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float afStack_90 [2];
  CVector3f local_88;
  CVector3f local_7c;
  float local_70;
  float local_6c [4];
  float local_5c;
  float local_58;
  int local_4c;
  int local_48;
  int local_44;
  float local_40;
  float local_3c [4];
  float local_2c;
  float local_18;
  int local_14;
  
  bVar4 = 0;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
            (DAT_0060b280,(CVector3f *)&this_ptr->field_0x4);
  core_dirmat_cpp_FUN_004496e0(&this_ptr->field_0x10);
  translation = (CVector3f *)0x0;
  euler_angles = &local_88;
  local_88._0_4_ = local_7c._0_4_;
  *(uint *)((int)&local_88 + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&local_7c + (uint)bVar4 * -8 + 4);
  pCVar7 = DAT_0060b280;
  *(uint *)((int)&local_88 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       *(uint *)((int)&local_7c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (pCVar7,euler_angles,translation);
  local_d8 = ((float)_DAT_005cf43f / *(float *)&this_ptr->field_0x38) *
             *(float *)&this_ptr->field_0x140;
  iVar3 = 0;
  local_98 = *(float *)&this_ptr->field_0x140;
  iVar2 = 0;
  do {
    fVar5 = (float10)iVar3 * (float10)_DAT_005cf447 * (float10)_DAT_005cf44f;
    fVar6 = (float10)fcos(fVar5);
    fVar5 = (float10)fsin(fVar5);
    local_a0 = (float)(fVar6 * (float10)local_d8);
    local_9c = (float)(fVar5 * (float10)local_d8);
    local_4c = (int)ROUND(local_a0 * _DAT_005f5050);
    local_48 = (int)ROUND(local_9c * _DAT_005f5050);
    local_44 = (int)ROUND(local_98 * _DAT_005f5050);
    local_14 = iVar3;
    engine_special_cpp_FUN_0055d723
              ((SProjectedVertex *)(*(int *)DAT_0060b280 + iVar2),(CVector3i *)&local_4c);
    pCVar7 = DAT_0060b280;
    iVar3 = iVar3 + 1;
    *(uint *)(iVar2 + 0x20 + *(int *)DAT_0060b280) = 0;
    iVar2 = iVar2 + 0x30;
  } while (iVar3 < 0x10);
  local_ac = (int)ROUND(_DAT_01b1387c * _DAT_005f5050);
  local_a8 = (int)ROUND(_DAT_01b13880 * _DAT_005f5050);
  local_a4 = (int)ROUND(_DAT_01b13884 * _DAT_005f5050);
  engine_special_cpp_FUN_0055d723
            ((SProjectedVertex *)(*(int *)pCVar7 + 0x300),(CVector3i *)&local_ac);
  pCVar7 = DAT_0060b280;
  *(uint *)(*(int *)DAT_0060b280 + 800) = 0xffff;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046b880(pCVar7,1);
  engine_matrix_c_FUN_0046b5e0(DAT_0060b280);
  bVar1 = false;
  local_70 = local_58;
  local_6c[(uint)bVar4 * -2] = local_6c[(uint)bVar4 * -2 + 6];
  local_6c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       local_6c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
  local_3c[2] = local_70 - *(float *)&this_ptr->field_0x4;
  pfVar8 = local_6c + 2;
  local_3c[3] = local_6c[0] - *(float *)&this_ptr->field_0x8;
  local_2c = local_6c[1] - *(float *)&this_ptr->field_0xc;
  local_6c[2] = local_3c[2];
  local_6c[(uint)bVar4 * -2 + 3] = local_3c[(uint)bVar4 * -2 + 3];
  local_6c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       local_3c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  core_dirmat_cpp_FUN_004495a0(&this_ptr->field_0x10,pfVar8);
  local_40 = local_94;
  local_3c[(uint)bVar4 * -2] = afStack_90[(uint)bVar4 * -2];
  local_3c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  if (local_6c + 2 != &local_40) {
    local_6c[2] = local_40;
    local_6c[3] = local_3c[0];
    local_5c = local_3c[1];
  }
  local_6c[2] = *(float *)&this_ptr->field_0x38 * (float)_DAT_005cf457 * local_6c[2];
  local_6c[3] = (float)_DAT_005cf457 * *(float *)&this_ptr->field_0x38 * local_6c[3];
  if ((((local_6c[2] < local_5c) && (local_18 = -local_5c, local_18 < local_6c[2])) &&
      (local_6c[3] < local_5c)) &&
     ((local_18 < local_6c[3] && (local_5c < *(float *)&this_ptr->field_0x140)))) {
    bVar1 = true;
  }
  local_c0 = 0;
  local_c4 = 0;
  local_c8 = 0;
  local_cc = 0;
  local_d0 = 3;
  if (bVar1) {
    core_dcamera_cpp_initializeCoronaBuffers_FUN_0043f820();
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
      engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_0046b750
                (DAT_0060b280,local_d4,core_dcamera_cpp_renderCoronaDepthScanline_FUN_0043f860);
      iVar2 = iVar3;
    } while (iVar3 < 0x10);
  }
  local_cc = 0;
  local_c8 = 0;
  local_c4 = 0xffff;
  fVar5 = (float10)*(float *)&this_ptr->field_0x140 * (float10)_DAT_005cf45f;
  round();
  local_c0 = (int)ROUND(fVar5);
  iVar2 = 0;
  do {
    iVar3 = iVar2 + 1;
    local_bc = 0;
    local_b8 = iVar2;
    local_b4 = iVar3;
    engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_0046b750
              (DAT_0060b280,local_d4,core_dcamera_cpp_renderCoronaDepthScanline_FUN_0043f860);
    iVar2 = iVar3;
  } while (iVar3 < 0xe);
  engine_matrix_c_pop_FUN_0046b4a0();
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046b880(DAT_0060b280,0);
  core_dlight_cpp_CDemonLight_renderExternalVolumetricShafts_FUN_0044c830(this_ptr);
  return;
}
