// Name: core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_00538d10
// Address: 00538d10
// Address Range: [[00538d10, 0053981d]]
// Convention: __cdecl
// Signature: int __cdecl core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_00538d10(CDemonSet *this_ptr,CDemonActor *actor,int force_evaluation_mode)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_00538d10(CDemonSet *this_ptr,CDemonActor *actor,int force_evaluation_mode)

{
  CDemonActor *this_ptr_00;
  float fVar1;
  CDemonRenderer *this_ptr_01;
  byte *puVar2;
  byte *puVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  C3DSCamera *this_ptr_02;
  CZThumb *this_ptr_03;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  byte bVar11;
  double dVar12;
  float afStackY_10f8 [948];
  CBoundingBox3D *in_stack_fffffde0;
  CBoundingBox3D *out_box;
  CVector3f *pCVar13;
  CBoundingBox3D *in_stack_fffffdf0;
  CVector3i aCStack_20c [7];
  int iStack_1b0;
  int iStack_1ac;
  int iStack_1a8;
  uint auStack_1a0 [5];
  uint auStack_18c [8];
  uint auStack_16c [2];
  uint local_164;
  uint uStack_160;
  CBoundingBox3D CStack_15c;
  uint uStack_134;
  uint auStack_130 [2];
  CBoundingBox3D CStack_128;
  CVector3f CStack_110;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  CVector3f CStack_f0;
  CVector3f CStack_e0;
  CVector3f CStack_d4;
  float fStack_c8;
  float afStack_c4 [2];
  CVector3f CStack_bc;
  float afStack_b0 [4];
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_80;
  float fStack_7c;
  float afStack_78 [4];
  int iStack_68;
  int iStack_64;
  int iStack_60;
  uint local_5c;
  int local_58;
  uint local_54;
  uint uStack_50;
  int iStack_4c;
  int iStack_48;
  float fStack_40;
  float fStack_3c;
  C3DSCamera *pCStack_38;
  float fStack_34;
  int *piStack_30;
  CLocation *pCStack_28;
  float *pfStack_24;
  int iStack_20;
  CBoundingBox3D *pCStack_1c;
  CVector3i *pCStack_14;
  
  bVar11 = 0;
  local_54 = 0;
  if (actor == (CDemonActor *)0x0) {
    if (this_ptr->selected_camera_index < 0) {
      core_set_cpp_CDemonSet_setCameraView_FUN_0052ddf0(this_ptr,0);
    }
    return 1;
  }
  if (this_ptr->selected_camera_index < 0) {
    force_evaluation_mode = 1;
  }
  else if (1 < force_evaluation_mode) goto LAB_00538d7f;
  if (0.0 < this_ptr->camera_switch_cooldown) {
    fVar4 = this_ptr->camera_switch_cooldown - g_CGamePtr->delta_time_float;
    this_ptr->camera_switch_cooldown = fVar4;
    if (0.0 < fVar4) {
      if ((-1 < this_ptr->pending_camera_index) &&
         (this_ptr->pending_camera_index != this_ptr->selected_camera_index)) {
        core_set_cpp_CDemonSet_setCameraView_FUN_0052ddf0(this_ptr,this_ptr->pending_camera_index);
        return 1;
      }
      return 0;
    }
    force_evaluation_mode = 1;
  }
LAB_00538d7f:
  this_ptr_01 = DAT_0060b280;
  this_ptr->camera_switch_cooldown = 0.0;
  local_5c = _DAT_01c37788;
  _DAT_01c37788 = 0;
  local_58 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(this_ptr_01);
  engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_0046b940(DAT_0060b280,0);
  (*((actor->vtable)._ub)->getBoundingBox)(actor,in_stack_fffffde0);
  puVar8 = auStack_18c;
  puVar10 = &local_164;
  for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar10 = *puVar8;
    puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
    puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
  }
  piStack_30 = (int *)&stack0xfffffdf0;
  pCStack_1c = (CBoundingBox3D *)0x0;
  do {
    out_box = pCStack_1c;
    core_box_cpp_CBoundingBox3D_getCorner_FUN_0041a600(&CStack_15c,(uint)pCStack_1c,&CStack_f0);
    fStack_90 = CStack_f0.x;
    afStack_b0[(uint)bVar11 * -2 + 9] = *(float *)((int)&CStack_f0 + (uint)bVar11 * -8 + 4);
    afStack_b0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
         *(float *)((int)&CStack_f0 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    *piStack_30 = (int)ROUND(fStack_90 * _DAT_005fb33c);
    piStack_30[1] = (int)ROUND(fStack_8c * _DAT_005fb33c);
    piStack_30[2] = (int)ROUND(fStack_88 * _DAT_005fb33c);
    pCStack_1c = (CBoundingBox3D *)((int)&(pCStack_1c->min).x + 1);
    piStack_30 = piStack_30 + 3;
  } while ((int)pCStack_1c < 8);
  afStack_b0[2] = CStack_15c.min.x + CStack_15c.max.x;
  afStack_b0[3] = CStack_15c.min.y + CStack_15c.max.y;
  fStack_a0 = CStack_15c.min.z + CStack_15c.max.z;
  fStack_fc = CStack_15c.min.x + CStack_15c.max.x;
  *(float *)((int)&CStack_110 + ((uint)bVar11 * -2 + 5) * 4 + 4) = afStack_b0[(uint)bVar11 * -2 + 3]
  ;
  *(float *)((int)&CStack_110 + ((uint)bVar11 * -2 + (uint)bVar11 * -2 + 6) * 4 + 4) =
       afStack_b0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
  CStack_bc.z = fStack_fc * _DAT_005e5ff5;
  afStack_b0[0] = fStack_f8 * _DAT_005e5ff5;
  afStack_b0[1] = fStack_f4 * _DAT_005e5ff5;
  fStack_9c = fStack_fc * _DAT_005e5ff5;
  afStack_b0[(uint)bVar11 * -2 + 6] = afStack_b0[(uint)bVar11 * -2];
  afStack_b0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
       afStack_b0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
  iStack_1b0 = (int)ROUND(fStack_9c * _DAT_005fb33c);
  iStack_1ac = (int)ROUND(fStack_98 * _DAT_005fb33c);
  iStack_1a8 = (int)ROUND(fStack_94 * _DAT_005fb33c);
  puVar2 = &DAT_0061b97c;
  do {
    iVar7 = *(int *)(puVar2 + 0x18);
    puVar3 = puVar2 + 0x48;
    *(int *)(puVar2 + 0x14) =
         *(int *)(puVar2 + 0xc) * aCStack_20c[iVar7].x +
         *(int *)(puVar2 + 8) * aCStack_20c[iVar7 + -1].z +
         *(int *)(puVar2 + 0x10) * aCStack_20c[iVar7].y;
    puVar2 = puVar3;
  } while (puVar3 != &DAT_0061bb2c);
  if (force_evaluation_mode == 0) {
    out_box = (CBoundingBox3D *)0x53949c;
    dVar12 = round
                       ((double)((float)(this_ptr->camera_count * 10) * g_CGamePtr->delta_time_float
                                ));
    iStack_68 = (int)ROUND(dVar12);
    if (iStack_68 < 3) {
      iStack_68 = 3;
    }
    if (this_ptr->camera_count < iStack_68) {
      iStack_68 = this_ptr->camera_count;
    }
    fVar4 = this_ptr->previous_best_camera_timer - g_CGamePtr->delta_time_float;
    this_ptr->previous_best_camera_timer = fVar4;
    if (fVar4 <= 0.0) {
      this_ptr->previous_best_camera_index = -1;
      this_ptr->previous_best_camera_timer = 0.0;
    }
  }
  else {
    iStack_64 = this_ptr->camera_count;
    this_ptr->previous_best_camera_index = -1;
    _DAT_02093938 = 0;
    this_ptr->previous_best_camera_timer = 0.0;
  }
  (*((actor->vtable)._ub)->getBoundingBox)(actor,out_box);
  puVar8 = auStack_1a0;
  puVar10 = auStack_130;
  for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar10 = *puVar8;
    puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
    puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
  }
  fVar4 = core_box_cpp_CBoundingBox3D_getMaximumBound_FUN_0041b6b0(&CStack_128);
  pCVar13 = &CStack_d4;
  puVar8 = (uint *)((int)actor + (uint)bVar11 * -8 + 0x24);
  CStack_d4.x = (actor->location).position.x;
  *(uint *)((int)&CStack_d4 + (uint)bVar11 * -8 + 4) = *puVar8;
  *(uint *)((int)&CStack_d4 + ((uint)bVar11 * -2 + (uint)bVar11 * -2) * 4 + 8) =
       puVar8[(uint)bVar11 * -2 + 1];
  CStack_d4.y = CStack_d4.y + _DAT_005e6005;
  fStack_3c = fVar4 * (float)_DAT_005e5ffd + 1.0;
  iVar7 = core_setdir_cpp_CDemonSet_findVdirBoxAtPosition_FUN_0053a760(this_ptr,pCVar13);
  fStack_80 = CStack_128.min.x + CStack_128.max.x;
  fStack_7c = CStack_128.min.y + CStack_128.max.y;
  afStack_78[0] = CStack_128.min.z + CStack_128.max.z;
  fStack_104 = CStack_128.min.x + CStack_128.max.x;
  *(float *)((int)&CStack_110 + ((uint)bVar11 * -2 + 3) * 4 + 4) =
       afStack_78[(uint)bVar11 * -2 + -1];
  *(float *)((int)&CStack_110 + ((uint)bVar11 * -2 + (uint)bVar11 * -2 + 4) * 4 + 4) =
       afStack_78[(uint)bVar11 * -2 + (uint)bVar11 * -2];
  piStack_30 = (int *)iVar7;
  pCVar13 = &CStack_e0;
  fStack_c8 = fStack_104 * _DAT_005e5ff5;
  afStack_c4[0] = fStack_100 * _DAT_005e5ff5;
  afStack_c4[1] = fStack_fc * _DAT_005e5ff5;
  CStack_e0.x = fStack_104 * _DAT_005e5ff5;
  *(float *)((int)&CStack_e0 + (uint)bVar11 * -8 + 4) = afStack_c4[(uint)bVar11 * -2];
  *(float *)((int)&CStack_e0 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
       afStack_c4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70(actor,pCVar13,&CStack_bc);
  CStack_110.x = CStack_bc.x;
  *(float *)((int)&CStack_110 + (uint)bVar11 * -8 + 4) = afStack_b0[(uint)bVar11 * -2 + -2];
  *(float *)((int)&CStack_110 + ((uint)bVar11 * -2 + (uint)bVar11 * -2 + 1) * 4 + 4) =
       afStack_b0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + -1];
  if (&CStack_d4 != &CStack_110) {
    CStack_d4.x = CStack_110.x;
    CStack_d4.y = CStack_110.y;
    CStack_d4.z = CStack_110.z;
  }
  if (piStack_30 != (int *)_DAT_0209393c) {
    iStack_60 = this_ptr->camera_count;
    force_evaluation_mode = 1;
    this_ptr->previous_best_camera_index = -1;
    _DAT_02093938 = 0;
    this_ptr->previous_best_camera_timer = 0.0;
  }
  iVar7 = DAT_006141bc;
  _DAT_0209393c = (int)piStack_30;
  _DAT_020b1520 = (uint)(piStack_30 == (int *)0xffffffff);
  if (_DAT_020b0258 != 0) {
    _DAT_01d046a0 = "..\\core\\setdir.cpp";
    _DAT_01d046a4 = 0x67;
    core_main_c_displayErrorAndQuit_FUN_004e4500("saveZBufferTable - already saved!");
  }
  if (0 < iVar7) {
    iVar9 = 0;
    do {
      iVar5 = iVar9 + 4;
      *(uint *)(&DAT_020b0258 + iVar9) = *(uint *)(&DAT_01c2b64c + iVar9);
      iVar9 = iVar5;
    } while (iVar5 < iVar7 * 4);
  }
  fStack_40 = _DAT_005fb358 * _DAT_005fb358;
  _DAT_020a2794 = 0;
  pCStack_28 = &actor->location;
  pfStack_24 = (float *)0x0;
  for (iStack_20 = 0; iStack_20 < g_CDemonSetPtr->actor_count; iStack_20 = iStack_20 + 1) {
    this_ptr_00 = *(CDemonActor **)
                   ((int)(g_CDemonSetPtr->cameras + 0xcb0) + 0xa8 + (int)(pfStack_24 + -1));
    iVar7 = (*((this_ptr_00->vtable)._ub)->getBlockVirtualDirectorFlag)(this_ptr_00);
    if (((iVar7 != 0) && (this_ptr_00 != actor)) &&
       (fVar4 = (this_ptr_00->location).position.x - *pfStack_24,
       fVar1 = (this_ptr_00->location).position.y - pfStack_24[1],
       fVar6 = (this_ptr_00->location).position.z - pfStack_24[2],
       fVar6 * fVar6 + fVar1 * fVar1 + fVar4 * fVar4 <= fStack_3c)) {
      *(CDemonActor **)(&DAT_020a2798 + _DAT_020a2794 * 4) = this_ptr_00;
      (*((this_ptr_00->vtable)._ub)->getBoundingBox)(this_ptr_00,in_stack_fffffdf0);
      puVar8 = &uStack_134;
      puVar10 = auStack_16c;
      for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
        puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
      }
      iVar7 = _DAT_020a2794 * 0x18;
      if ((uint *)(iVar7 + 0x20a46d8) != &local_164) {
        *(uint *)(iVar7 + 0x20a46d8) = local_164;
        *(uint *)(iVar7 + 0x20a46dc) = uStack_160;
        *(float *)(iVar7 + 0x20a46e0) = CStack_15c.min.x;
      }
      if ((float *)(iVar7 + 0x20a46e4) != &CStack_15c.min.y) {
        *(float *)(iVar7 + 0x20a46e4) = CStack_15c.min.y;
        *(float *)(iVar7 + 0x20a46e8) = CStack_15c.min.z;
        *(float *)(iVar7 + 0x20a46ec) = CStack_15c.max.x;
      }
      _DAT_020a2794 = _DAT_020a2794 + 1;
    }
    pfStack_24 = pfStack_24 + 1;
  }
  pCStack_1c = (CBoundingBox3D *)&actor->location;
  fStack_34 = _DAT_005fb354 * _DAT_005fb354;
  pCStack_38 = this_ptr->cameras;
  while ((iVar9 = _DAT_02093938, iVar7 = DAT_006141bc, 0 < iStack_60 &&
         (_DAT_02093938 < this_ptr->camera_count))) {
    if (piStack_30 == (int *)this_ptr->cameras[_DAT_02093938].vdir_zone) {
      this_ptr_02 = pCStack_38 + _DAT_02093938;
      pCStack_14 = aCStack_20c;
      if (this_ptr_02->enabled == 0) {
        fVar4 = 0.0;
        fVar6 = fVar4;
      }
      else {
        fVar4 = (this_ptr_02->position).x - (pCStack_1c->min).x;
        fVar1 = (this_ptr_02->position).y - *(float *)((int)pCStack_1c + 4);
        fVar6 = (this_ptr_02->position).z - *(float *)((int)pCStack_1c + 8);
        if (fVar6 * fVar6 + fVar1 * fVar1 + fVar4 * fVar4 <= fStack_34) {
          iVar7 = core_setutil_cpp_C3DSCamera_testSphereInFrustum_FUN_0053ae20
                            (this_ptr_02,&pCStack_1c->min,fStack_3c);
          fVar4 = 0.0;
          fVar6 = fVar4;
          if (iVar7 != 0) {
            this_ptr_03 = g_CZThumbPool + iVar9 * 6;
            if (this_ptr_02->is_panning == 0) {
              fVar4 = core_setdir_cpp_CZThumb_calculateActorVisibility_FUN_005386e0
                                (this_ptr_03,actor,aCStack_20c,(SMRGLHeaderPrimitive *)&DAT_0061b97c
                                 ,1);
              fVar6 = fVar4;
            }
            else {
              fVar4 = 0.0;
              do {
                fVar6 = core_setdir_cpp_CZThumb_calculateActorVisibility_FUN_005386e0
                                  (this_ptr_03,actor,pCStack_14,
                                   (SMRGLHeaderPrimitive *)&DAT_0061b97c,0);
                fVar4 = fVar6 + fVar4;
                this_ptr_03 = this_ptr_03 + 1;
                fVar6 = fVar4;
              } while (this_ptr_03 != g_CZThumbPool + iVar9 * 6 + 6);
            }
          }
        }
        else {
          afStack_78[3] = 0.0;
          fVar4 = afStack_78[3];
          fVar6 = afStack_78[3];
        }
      }
    }
    else {
      fVar4 = -99999.9;
      fVar6 = afStack_78[3];
    }
    afStack_78[3] = fVar6;
    if ((force_evaluation_mode == 0) && (0.0 < fVar4)) {
      if (_DAT_02093938 == this_ptr->selected_camera_index) {
        fVar4 = fVar4 * (float)_DAT_005e600d;
      }
      if (_DAT_02093938 == this_ptr->previous_best_camera_index) {
        fVar4 = fVar4 * (float)_DAT_005e6015;
      }
    }
    iStack_60 = iStack_60 + -1;
    *(float *)(&DAT_0209394c + _DAT_02093938 * 4) = fVar4;
    _DAT_02093938 = _DAT_02093938 + 1;
  }
  if (_DAT_020b0258 == 0) {
    _DAT_01d046a0 = "..\\core\\setdir.cpp";
    _DAT_01d046a4 = 0x70;
    core_main_c_displayErrorAndQuit_FUN_004e4500("saveZBufferTable - not saved!");
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
  engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_0046b940(DAT_0060b280,iStack_4c);
  _DAT_01c37788 = uStack_50;
  if (this_ptr->camera_count <= _DAT_02093938) {
    iVar7 = -1;
    fVar4 = -1.0;
    iVar9 = 0;
    if (0 < this_ptr->camera_count) {
      iVar5 = 0;
      do {
        if (fVar4 < *(float *)(&DAT_0209394c + iVar5)) {
          fVar4 = *(float *)(&DAT_0209394c + iVar5);
          iVar7 = iVar9;
        }
        iVar9 = iVar9 + 1;
        iVar5 = iVar5 + 4;
      } while (iVar9 < this_ptr->camera_count);
    }
    if (-1 < iVar7) {
      if ((this_ptr->selected_camera_index < 0) ||
         (1 < force_evaluation_mode || iVar7 != this_ptr->selected_camera_index && 0.0 < fVar4)) {
        this_ptr->last_switch_area_invalid = _DAT_020b1520;
        core_set_cpp_CDemonSet_setCameraView_FUN_0052ddf0(this_ptr,iVar7);
        iStack_48 = 1;
      }
    }
    _DAT_02093938 = 0;
  }
  return iStack_48;
}
