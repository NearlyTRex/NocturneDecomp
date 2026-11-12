// Name: core_setdir.cpp_FUN_00538d10
// Address: 00538d10
// Address Range: [[00538d10, 0053981d]]
// Convention: unknown
// Signature: undefined4 core_setdir_cpp_FUN_00538d10(CDemonSet *param_1,CDemonActor *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_setdir_cpp_FUN_00538d10(CDemonSet *param_1,CDemonActor *param_2,int param_3)

{
  CDemonActor *this_ptr;
  float fVar1;
  CDemonRenderer *this_ptr_00;
  byte *puVar2;
  byte *puVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  C3DSCamera *this_ptr_01;
  CZThumb *this_ptr_02;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  byte bVar11;
  float10 fVar12;
  float afStackY_10f4 [947];
  CBoundingBox3D *in_stack_fffffde0;
  CBoundingBox3D *in_stack_fffffde8;
  CVector3f *position;
  float *pfVar13;
  CBoundingBox3D *in_stack_fffffdf4;
  CVector3i aCStack_208 [7];
  int iStack_1b0;
  int iStack_1ac;
  int iStack_1a8;
  uint auStack_19c [4];
  uint auStack_18c [9];
  uint uStack_168;
  uint local_164;
  uint uStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  uint uStack_130;
  uint auStack_12c [2];
  CBoundingBox3D CStack_124;
  CVector3f CStack_10c;
  float fStack_100;
  float afStack_fc [8];
  float fStack_dc;
  float afStack_d8 [2];
  CVector3f CStack_d0;
  float fStack_c4;
  float afStack_c0 [4];
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_7c;
  float afStack_78 [4];
  float fStack_68;
  int iStack_64;
  int local_5c;
  int local_58;
  uint local_54;
  uint uStack_4c;
  int iStack_48;
  uint uStack_44;
  float fStack_3c;
  float fStack_38;
  C3DSCamera *pCStack_34;
  int *piStack_30;
  int iStack_2c;
  CLocation *pCStack_24;
  float *pfStack_20;
  int iStack_1c;
  CVector3f *pCStack_18;
  
  bVar11 = 0;
  local_54 = 0;
  if (param_2 == (CDemonActor *)0x0) {
    if (param_1->selected_camera_index < 0) {
      core_set_cpp_CDemonSet_setCameraView_FUN_0052ddf0(param_1,0);
    }
    return 1;
  }
  if (param_1->selected_camera_index < 0) {
    param_3 = 1;
  }
  else if (1 < param_3) goto LAB_00538d7f;
  if (0.0 < param_1->camera_switch_cooldown) {
    fVar4 = param_1->camera_switch_cooldown - g_CGamePtr->delta_time_float;
    param_1->camera_switch_cooldown = fVar4;
    if (0.0 < fVar4) {
      if ((-1 < param_1->pending_camera_index) &&
         (param_1->pending_camera_index != param_1->selected_camera_index)) {
        core_set_cpp_CDemonSet_setCameraView_FUN_0052ddf0(param_1,param_1->pending_camera_index);
        return 1;
      }
      return 0;
    }
    param_3 = 1;
  }
LAB_00538d7f:
  this_ptr_00 = DAT_0060b280;
  param_1->camera_switch_cooldown = 0.0;
  local_5c = _DAT_01c37788;
  _DAT_01c37788 = 0;
  local_58 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(this_ptr_00);
  engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_0046b940(DAT_0060b280,0);
  (*((param_2->vtable)._ub)->getBoundingBox)(param_2,in_stack_fffffde0);
  puVar8 = auStack_18c;
  puVar10 = &local_164;
  for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar10 = *puVar8;
    puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
    puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
  }
  piStack_30 = (int *)&stack0xfffffdf0;
  iStack_1c = 0;
  do {
    core_box_cpp_FUN_0041a600(&fStack_15c,iStack_1c);
    fStack_90 = afStack_fc[3];
    afStack_c0[(uint)bVar11 * -2 + 0xd] = afStack_fc[(uint)bVar11 * -2 + 4];
    afStack_c0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xe] =
         afStack_fc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 5];
    *piStack_30 = (int)ROUND(fStack_90 * _DAT_005fb33c);
    piStack_30[1] = (int)ROUND(fStack_8c * _DAT_005fb33c);
    piStack_30[2] = (int)ROUND(fStack_88 * _DAT_005fb33c);
    iStack_1c = iStack_1c + 1;
    piStack_30 = piStack_30 + 3;
  } while (iStack_1c < 8);
  fStack_a8 = fStack_15c + fStack_150;
  fStack_a4 = fStack_158 + fStack_14c;
  fStack_a0 = fStack_154 + fStack_148;
  afStack_fc[0] = fStack_15c + fStack_150;
  afStack_fc[(uint)bVar11 * -2 + 1] = afStack_c0[(uint)bVar11 * -2 + 7];
  afStack_fc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 2] =
       afStack_c0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 8];
  afStack_c0[3] = afStack_fc[0] * _DAT_005e5ff5;
  fStack_b0 = afStack_fc[1] * _DAT_005e5ff5;
  fStack_ac = afStack_fc[2] * _DAT_005e5ff5;
  fStack_9c = afStack_fc[0] * _DAT_005e5ff5;
  afStack_c0[(uint)bVar11 * -2 + 10] = afStack_c0[(uint)bVar11 * -2 + 4];
  afStack_c0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xb] =
       afStack_c0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 5];
  iStack_1b0 = (int)ROUND(fStack_9c * _DAT_005fb33c);
  iStack_1ac = (int)ROUND(fStack_98 * _DAT_005fb33c);
  iStack_1a8 = (int)ROUND(fStack_94 * _DAT_005fb33c);
  puVar2 = &DAT_0061b97c;
  do {
    iVar7 = *(int *)(puVar2 + 0x18);
    puVar3 = puVar2 + 0x48;
    *(int *)(puVar2 + 0x14) =
         *(int *)(puVar2 + 0xc) * aCStack_208[iVar7 + -1].z +
         *(int *)(puVar2 + 8) * aCStack_208[iVar7 + -1].y +
         *(int *)(puVar2 + 0x10) * aCStack_208[iVar7].x;
    puVar2 = puVar3;
  } while (puVar3 != &DAT_0061bb2c);
  if (param_3 == 0) {
    fVar12 = (float10)(param_1->camera_count * 10) * (float10)g_CGamePtr->delta_time_float;
    round();
    iStack_64 = (int)ROUND(fVar12);
    if (iStack_64 < 3) {
      iStack_64 = 3;
    }
    if (param_1->camera_count < iStack_64) {
      iStack_64 = param_1->camera_count;
    }
    fVar4 = param_1->previous_best_camera_timer - g_CGamePtr->delta_time_float;
    param_1->previous_best_camera_timer = fVar4;
    if (fVar4 <= 0.0) {
      param_1->previous_best_camera_index = -1;
      param_1->previous_best_camera_timer = 0.0;
    }
  }
  else {
    iStack_64 = param_1->camera_count;
    param_1->previous_best_camera_index = -1;
    _DAT_02093938 = 0;
    param_1->previous_best_camera_timer = 0.0;
  }
  (*((param_2->vtable)._ub)->getBoundingBox)(param_2,in_stack_fffffde8);
  puVar8 = auStack_19c;
  puVar10 = auStack_12c;
  for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar10 = *puVar8;
    puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
    puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
  }
  fVar4 = core_box_cpp_CBoundingBox3D_getMaximumBound_FUN_0041b6b0(&CStack_124);
  position = &CStack_d0;
  puVar8 = (uint *)((int)param_2 + (uint)bVar11 * -8 + 0x24);
  CStack_d0.x = (param_2->location).position.x;
  *(uint *)((int)&CStack_d0 + (uint)bVar11 * -8 + 4) = *puVar8;
  *(uint *)((int)&CStack_d0 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
       puVar8[(uint)bVar11 * -2 + 1];
  CStack_d0.y = CStack_d0.y + _DAT_005e6005;
  fStack_38 = fVar4 * (float)_DAT_005e5ffd + 1.0;
  iVar7 = core_setdir_cpp_CDemonSet_findVdirBoxAtPosition_FUN_0053a760(param_1,position);
  fStack_7c = CStack_124.min.x + CStack_124.max.x;
  afStack_78[0] = CStack_124.min.y + CStack_124.max.y;
  afStack_78[1] = CStack_124.min.z + CStack_124.max.z;
  fStack_100 = CStack_124.min.x + CStack_124.max.x;
  afStack_fc[(uint)bVar11 * -2] = afStack_78[(uint)bVar11 * -2];
  afStack_fc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
       afStack_78[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
  iStack_2c = iVar7;
  pfVar13 = afStack_fc + 8;
  fStack_c4 = fStack_100 * _DAT_005e5ff5;
  afStack_c0[0] = afStack_fc[0] * _DAT_005e5ff5;
  afStack_c0[1] = afStack_fc[1] * _DAT_005e5ff5;
  fStack_dc = fStack_100 * _DAT_005e5ff5;
  afStack_d8[(uint)bVar11 * -2] = afStack_c0[(uint)bVar11 * -2];
  afStack_d8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
       afStack_c0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
  core_actor_cpp_FUN_00408d70(param_2,pfVar13);
  CStack_10c.x = afStack_c0[2];
  *(float *)((int)&CStack_10c + (uint)bVar11 * -8 + 4) = afStack_c0[(uint)bVar11 * -2 + 3];
  *(float *)((int)&CStack_10c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
       afStack_c0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
  if (&CStack_d0 != &CStack_10c) {
    CStack_d0.x = CStack_10c.x;
    CStack_d0.y = CStack_10c.y;
    CStack_d0.z = CStack_10c.z;
  }
  if (iStack_2c != _DAT_0209393c) {
    local_5c = param_1->camera_count;
    param_3 = 1;
    param_1->previous_best_camera_index = -1;
    _DAT_02093938 = 0;
    param_1->previous_best_camera_timer = 0.0;
  }
  iVar7 = DAT_006141bc;
  _DAT_0209393c = iStack_2c;
  _DAT_020b1520 = (uint)(iStack_2c == -1);
  if (_DAT_020b0258 != 0) {
    _DAT_01d046a0 = "..\\core\\setdir.cpp";
    _DAT_01d046a4 = 0x67;
    core_main_c_FUN_004e4500("saveZBufferTable - already saved!");
  }
  if (0 < iVar7) {
    iVar9 = 0;
    do {
      iVar5 = iVar9 + 4;
      *(uint *)(&DAT_020b0258 + iVar9) = *(uint *)(&DAT_01c2b64c + iVar9);
      iVar9 = iVar5;
    } while (iVar5 < iVar7 * 4);
  }
  fStack_3c = _DAT_005fb358 * _DAT_005fb358;
  _DAT_020a2794 = 0;
  pCStack_24 = &param_2->location;
  pfStack_20 = (float *)0x0;
  for (iStack_1c = 0; iStack_1c < g_CDemonSetPtr->actor_count; iStack_1c = iStack_1c + 1) {
    this_ptr = *(CDemonActor **)((int)pfStack_20 + (int)(g_CDemonSetPtr->cameras + 0xcb0) + 0xa4);
    iVar7 = (*((this_ptr->vtable)._ub)->getBlockVirtualDirectorFlag)(this_ptr);
    if (((iVar7 != 0) && (this_ptr != param_2)) &&
       (fVar4 = (this_ptr->location).position.x - *pfStack_20,
       fVar1 = (this_ptr->location).position.y - pfStack_20[1],
       fVar6 = (this_ptr->location).position.z - pfStack_20[2],
       fVar6 * fVar6 + fVar1 * fVar1 + fVar4 * fVar4 <= fStack_38)) {
      *(CDemonActor **)(&DAT_020a2798 + _DAT_020a2794 * 4) = this_ptr;
      (*((this_ptr->vtable)._ub)->getBoundingBox)(this_ptr,in_stack_fffffdf4);
      puVar8 = &uStack_130;
      puVar10 = &uStack_168;
      for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
        puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
      }
      iVar7 = _DAT_020a2794 * 0x18;
      if ((uint *)(iVar7 + 0x20a46d8) != &uStack_160) {
        *(uint *)(iVar7 + 0x20a46d8) = uStack_160;
        *(float *)(iVar7 + 0x20a46dc) = fStack_15c;
        *(float *)(iVar7 + 0x20a46e0) = fStack_158;
      }
      if ((float *)(iVar7 + 0x20a46e4) != &fStack_154) {
        *(float *)(iVar7 + 0x20a46e4) = fStack_154;
        *(float *)(iVar7 + 0x20a46e8) = fStack_150;
        *(float *)(iVar7 + 0x20a46ec) = fStack_14c;
      }
      _DAT_020a2794 = _DAT_020a2794 + 1;
    }
    pfStack_20 = pfStack_20 + 1;
  }
  pCStack_18 = &(param_2->location).position;
  piStack_30 = (int *)(_DAT_005fb354 * _DAT_005fb354);
  pCStack_34 = param_1->cameras;
  while ((iVar9 = _DAT_02093938, iVar7 = DAT_006141bc, 0 < local_5c &&
         (_DAT_02093938 < param_1->camera_count))) {
    if (iStack_2c == param_1->cameras[_DAT_02093938].vdir_zone) {
      this_ptr_01 = pCStack_34 + _DAT_02093938;
      if (this_ptr_01->enabled == 0) {
        fVar4 = 0.0;
        fVar6 = fVar4;
      }
      else {
        fVar4 = (this_ptr_01->position).x - pCStack_18->x;
        fVar1 = (this_ptr_01->position).y - pCStack_18->y;
        fVar6 = (this_ptr_01->position).z - pCStack_18->z;
        if (fVar6 * fVar6 + fVar1 * fVar1 + fVar4 * fVar4 <= (float)piStack_30) {
          iVar7 = core_setutil_cpp_C3DSCamera_testSphereInFrustum_FUN_0053ae20
                            (this_ptr_01,pCStack_18,fStack_38);
          fVar4 = 0.0;
          fVar6 = fVar4;
          if (iVar7 != 0) {
            this_ptr_02 = g_CZThumbPool + iVar9 * 6;
            if (this_ptr_01->is_panning == 0) {
              fVar4 = core_setdir_cpp_CZThumb_calculateActorVisibility_FUN_005386e0
                                (this_ptr_02,param_2,aCStack_208,
                                 (SMRGLHeaderPrimitive *)&DAT_0061b97c,1);
              fVar6 = fVar4;
            }
            else {
              fVar4 = 0.0;
              do {
                fVar6 = core_setdir_cpp_CZThumb_calculateActorVisibility_FUN_005386e0
                                  (this_ptr_02,param_2,aCStack_208,
                                   (SMRGLHeaderPrimitive *)&DAT_0061b97c,0);
                fVar4 = fVar6 + fVar4;
                this_ptr_02 = this_ptr_02 + 1;
                fVar6 = fVar4;
              } while (this_ptr_02 != g_CZThumbPool + iVar9 * 6 + 6);
            }
          }
        }
        else {
          fStack_68 = 0.0;
          fVar4 = fStack_68;
          fVar6 = fStack_68;
        }
      }
    }
    else {
      fVar4 = -99999.9;
      fVar6 = fStack_68;
    }
    fStack_68 = fVar6;
    if ((param_3 == 0) && (0.0 < fVar4)) {
      if (_DAT_02093938 == param_1->selected_camera_index) {
        fVar4 = fVar4 * (float)_DAT_005e600d;
      }
      if (_DAT_02093938 == param_1->previous_best_camera_index) {
        fVar4 = fVar4 * (float)_DAT_005e6015;
      }
    }
    local_5c = local_5c + -1;
    *(float *)(&DAT_0209394c + _DAT_02093938 * 4) = fVar4;
    _DAT_02093938 = _DAT_02093938 + 1;
  }
  if (_DAT_020b0258 == 0) {
    _DAT_01d046a0 = "..\\core\\setdir.cpp";
    _DAT_01d046a4 = 0x70;
    core_main_c_FUN_004e4500("saveZBufferTable - not saved!");
  }
  if (0 < iVar7) {
    iVar9 = 0;
    do {
      iVar5 = iVar9 + 4;
      *(uint *)(&DAT_01c2b64c + iVar9) = *(uint *)(&DAT_020b0258 + iVar9);
      iVar9 = iVar5;
    } while (iVar5 < iVar7 * 4);
  }
  _DAT_020b0258 = 0;
  engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_0046b940(DAT_0060b280,iStack_48);
  _DAT_01c37788 = uStack_4c;
  if (param_1->camera_count <= _DAT_02093938) {
    iVar7 = -1;
    fVar4 = -1.0;
    iVar9 = 0;
    if (0 < param_1->camera_count) {
      iVar5 = 0;
      do {
        if (fVar4 < *(float *)(&DAT_0209394c + iVar5)) {
          fVar4 = *(float *)(&DAT_0209394c + iVar5);
          iVar7 = iVar9;
        }
        iVar9 = iVar9 + 1;
        iVar5 = iVar5 + 4;
      } while (iVar9 < param_1->camera_count);
    }
    if (-1 < iVar7) {
      if ((param_1->selected_camera_index < 0) ||
         (1 < param_3 || iVar7 != param_1->selected_camera_index && 0.0 < fVar4)) {
        param_1->last_switch_area_invalid = _DAT_020b1520;
        core_set_cpp_CDemonSet_setCameraView_FUN_0052ddf0(param_1,iVar7);
        uStack_44 = 1;
      }
    }
    _DAT_02093938 = 0;
  }
  return uStack_44;
}
