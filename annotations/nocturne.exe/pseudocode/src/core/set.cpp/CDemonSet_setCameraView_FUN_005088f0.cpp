// Name: core_set.cpp_CDemonSet_setCameraView_FUN_005088f0
// Address: 005088f0
// Address Range: [[005088f0, 0050909a]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setCameraView_FUN_005088f0(CDemonSet *this_ptr,int index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_setCameraView_FUN_005088f0(CDemonSet *this_ptr,int index)

{
  CDemonActor **ppCVar1;
  CDemonLight *this_ptr_00;
  CVector3f *pCVar2;
  int iVar3;
  CDemonSet *pCVar4;
  int iVar5;
  char *pcVar6;
  float *pfVar7;
  uint *puVar8;
  float *pfVar9;
  CMatrix3x3f *pCVar10;
  CRect *rect;
  uint *puVar11;
  uint *puVar12;
  byte bVar13;
  CDemonActor *pCVar14;
  char local_f0 [80];
  float local_a0 [10];
  CMatrix3x3f local_78;
  CVector3f local_50;
  uint local_44;
  uint local_40;
  uint local_3c;
  CVector3f local_38;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  float *local_1c;
  int local_18;
  int local_14;
  
  bVar13 = 0;
  if ((index < 0) || (this_ptr->camera_count <= index)) {
    PTR_01cc4800 = "..\\core\\set.cpp";
    INT_01cc4804 = 0x3ed;
    core_main_c_FUN_004c8440("CDemonSet::setCameraView - invalid index: %d",index);
  }
  iVar5 = 0;
  if (0 < _DAT_01fba2d8) {
    iVar3 = 0;
    do {
      puVar12 = (uint *)(iVar3 + 0x1fba2dc);
      iVar3 = iVar3 + 4;
      iVar5 = iVar5 + 1;
      core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_0044e970(*puVar12);
    } while (iVar5 < _DAT_01fba2d8);
  }
  iVar5 = 0;
  if (0 < _DAT_01fb9b54) {
    iVar3 = 0;
    do {
      puVar12 = (uint *)(&DAT_01fb9b58 + iVar3);
      iVar3 = iVar3 + 4;
      iVar5 = iVar5 + 1;
      core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_0044e970(*puVar12);
    } while (iVar5 < _DAT_01fb9b54);
  }
  iVar5 = 0;
  if (0 < _DAT_01fb9b54) {
    iVar3 = 0;
    do {
      puVar12 = (uint *)(&DAT_01fb9b58 + iVar3);
      iVar3 = iVar3 + 4;
      iVar5 = iVar5 + 1;
      core_dlight_cpp_CDemonLight_freeMasterZBuffer_FUN_0044e440(*puVar12);
    } while (iVar5 < _DAT_01fb9b54);
  }
  core_dlight_cpp_resetRestoreMemoryAllocator_FUN_0044e3b0();
  this_ptr->renderable_actors[0x775] = (CDemonActor *)0x40400000;
  this_ptr->renderable_actors[0x6ea] = (CDemonActor *)0x1;
  pCVar14 = this_ptr->renderable_actors[0x773];
  this_ptr->vdir_boxes[0xec].rotation_matrix.m[2].y = 1.4013e-45;
  this_ptr->renderable_actors[0x774] = pCVar14;
  this_ptr->renderable_actors[0x773] = (CDemonActor *)index;
  _DAT_01fb9b54 = 0;
  pcVar6 = this_ptr->cameras[0].name + index * 0x1a0;
  _DAT_01fba9a4 = 0;
  _DAT_01fba2ec = 0;
  _DAT_01fba480 = 0;
  core_setutil_cpp_FUN_005148b0(pcVar6,0x1fb8508);
  ppCVar1 = this_ptr->renderable_actors + 0x6e2;
  if (*(int *)((int)&this_ptr->cameras[0].rotation_matrix + index * 0x1a0 + 0x34) == 0) {
    this_ptr->renderable_actors[0x6df] = *(CDemonActor **)(pcVar6 + 0x150);
    this_ptr->renderable_actors[0x6e0] = (CDemonActor *)(((SFog *)(pcVar6 + 0x154))->color_index).r;
    this_ptr->renderable_actors[0x6e1] = *(CDemonActor **)(pcVar6 + 0x158);
    if (ppCVar1 != (CDemonActor **)(pcVar6 + 0x15c)) {
      *ppCVar1 = *(CDemonActor **)(pcVar6 + 0x15c);
      this_ptr->renderable_actors[0x6e3] = (CDemonActor *)((CVector3f *)(pcVar6 + 0x160))->x;
      this_ptr->renderable_actors[0x6e4] = *(CDemonActor **)(pcVar6 + 0x164);
    }
    this_ptr->renderable_actors[0x6e5] = *(CDemonActor **)(pcVar6 + 0x168);
    this_ptr->renderable_actors[0x6e6] = *(CDemonActor **)(pcVar6 + 0x16c);
    this_ptr->renderable_actors[0x6e7] = *(CDemonActor **)(pcVar6 + 0x170);
  }
  else {
    this_ptr->renderable_actors[0x6df] = this_ptr->renderable_actors[0x6d6];
    this_ptr->renderable_actors[0x6e0] = this_ptr->renderable_actors[0x6d7];
    this_ptr->renderable_actors[0x6e1] = this_ptr->renderable_actors[0x6d8];
    if (ppCVar1 != this_ptr->renderable_actors + 0x6d9) {
      *ppCVar1 = this_ptr->renderable_actors[0x6d9];
      this_ptr->renderable_actors[0x6e3] = this_ptr->renderable_actors[0x6da];
      this_ptr->renderable_actors[0x6e4] = this_ptr->renderable_actors[0x6db];
    }
    this_ptr->renderable_actors[0x6e5] = this_ptr->renderable_actors[0x6dc];
    this_ptr->renderable_actors[0x6e6] = this_ptr->renderable_actors[0x6dd];
    this_ptr->renderable_actors[0x6e7] = this_ptr->renderable_actors[0x6de];
  }
  iVar5 = 0;
  core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_004474e0
            (0x1fb8508,this_ptr->renderable_actors + 0x6df);
  _DAT_01fba938 = 0;
  pCVar4 = this_ptr;
  if (0 < *(int *)this_ptr->lights[199].filter_names[0x14]) {
    do {
      iVar5 = iVar5 + 1;
      core_set_cpp_CDemonSet_snapshotActorTransformState_FUN_00508890
                (this_ptr,*(uint *)(pCVar4->lights[199].filter_names[0x14] + 4));
      pCVar4 = (CDemonSet *)pCVar4->cameras;
    } while (iVar5 < *(int *)this_ptr->lights[199].filter_names[0x14]);
  }
  core_dcamera_cpp_CDemonCamera_beginScene_FUN_00440290((CDemonCamera *)0x1fb8508,0);
  core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_00440b20((CDemonCamera *)0x1fb8508);
  core_set_cpp_CDemonSet_buildDisplayList_FUN_0050d2d0(this_ptr,0x10);
  core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00507c80(this_ptr,9999.9,1);
  core_dcamera_cpp_FUN_00448310(0x1fb8508);
  _DAT_01ffb060 = 1;
  core_set_cpp_CDemonSet_renderBackgroundActors_FUN_00508750(this_ptr,1);
  _DAT_01ffb060 = 0;
  core_dcamera_cpp_FUN_004421b0(0x1fb8508);
  core_dcamera_cpp_FUN_00448380(0x1fb8508);
  _sprintf(local_f0,"%s.raw",this_ptr->cameras[0].name + index * 0x1a0);
  core_dcamera_cpp_CDemonCamera_loadImage_FUN_00443250((CDemonCamera *)0x1fb8508,local_f0);
  core_set_cpp_CDemonSet_renderBackgroundActors_FUN_00508750(this_ptr,1);
  core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_00440c50((CDemonCamera *)0x1fb8508,0);
  if (_DAT_01c02594 != 0) {
    core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00507c80(this_ptr,9999.9,0);
    if (0x02DD1210->wave_animation_enabled == 0) {
      core_water_cpp_CWater_render_FUN_00550cb0(0x02DD1210,0);
    }
    core_set_cpp_CDemonSet_renderBackgroundActors_FUN_00508750(this_ptr,1);
  }
  core_dcamera_cpp_CDemonCamera_endScene_FUN_00440a20(0x1fb8508,0);
  if (this_ptr->renderable_actors[0x6eb] == (CDemonActor *)0x0) {
    local_14 = 0;
    if (0 < (int)this_ptr->cameras[0xf7].position.y) {
      local_20 = index << 4;
      local_1c = &this_ptr->cameras[0xf7].position.z;
      local_14 = 0;
      pCVar4 = this_ptr;
      iVar5 = 0;
      do {
        if ((pCVar4->cameras[0xf7].position.z == 1.4013e-45) &&
           (pCVar4->cameras[0xf8].name[index + 0x8c] != '\0')) {
          *(float **)(&DAT_01fba9a8 + _DAT_01fba9a4 * 4) = local_1c + local_14 * 0x626;
          _DAT_01fba9a4 = _DAT_01fba9a4 + 1;
          if (199 < _DAT_01fba9a4) {
            PTR_01cc4800 = "..\\core\\set.cpp";
            INT_01cc4804 = 0x460;
            core_main_c_FUN_004c8440("CDemonSet::setCameraView - Too many omni lights");
          }
        }
        iVar3 = iVar5;
        if ((pCVar4->cameras[0xf7].position.z == 0.0) &&
           (iVar3 = iVar5 + 1, pCVar4->cameras[0xf8].name[index + 0x8c] != '\0')) {
          *(uint *)(&DAT_01fb9b58 + _DAT_01fb9b54 * 4) =
               *(uint *)(&DAT_01fb99d4 + iVar5 * 4);
          puVar12 = (uint *)((int)(&pCVar4->cameras[0xf8].rotation_matrix + 3) + local_20 + 4)
          ;
          puVar11 = (uint *)(_DAT_01fb9b54 * 0x10 + 0x1fb9cdc + (uint)bVar13 * -8);
          puVar8 = puVar12 + (uint)bVar13 * -2 + 1;
          *(uint *)(_DAT_01fb9b54 * 0x10 + 0x1fb9cd8) = *puVar12;
          puVar12 = puVar11 + (uint)bVar13 * -2 + 1;
          *puVar11 = *puVar8;
          *puVar12 = puVar8[(uint)bVar13 * -2 + 1];
          puVar12[(uint)bVar13 * -2 + 1] = (puVar8 + (uint)bVar13 * -2 + 1)[(uint)bVar13 * -2 + 1];
          _DAT_01fb9b54 = _DAT_01fb9b54 + 1;
        }
        pCVar4 = (CDemonSet *)&pCVar4->cameras[0xe].vdir_zone;
        local_14 = local_14 + 1;
        iVar5 = iVar3;
      } while (local_14 < (int)this_ptr->cameras[0xf7].position.y);
    }
    core_set_cpp_CDemonSet_process_FUN_0050d040(this_ptr);
    iVar5 = 0;
    if (0 < _DAT_01fb9b54) {
      rect = (CRect *)0x1fb9cd8;
      local_18 = 0;
      do {
        this_ptr_00 = *(CDemonLight **)(&DAT_01fb9b58 + local_18);
        core_dlight_cpp_CDemonLight_allocMasterZBuffer_FUN_0044e3c0(this_ptr_00);
        core_dlight_cpp_CDemonLight_beginScene_FUN_0044e470(this_ptr_00,1);
        core_dlight_cpp_CDemonLight_beginBackgroundScene_FUN_0044e830(this_ptr_00);
        core_set_cpp_CDemonSet_renderBackgroundActors_FUN_00508750(this_ptr,1);
        core_dlight_cpp_CDemonLight_endBackgroundScene_FUN_0044e920(this_ptr_00);
        core_dlight_cpp_CDemonLight_endScene_FUN_0044e720(this_ptr_00,0);
        core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_0044e970(this_ptr_00);
        core_dcamera_cpp_CDemonCamera_precomputeLight_FUN_00441c50
                  ((CDemonCamera *)0x1fb8508,this_ptr_00,rect);
        iVar5 = iVar5 + 1;
        rect = rect + 1;
        local_18 = local_18 + 4;
      } while (iVar5 < _DAT_01fb9b54);
    }
  }
  this_ptr->renderable_actors[0x6ea] = (CDemonActor *)0x0;
  core_dcamera_cpp_CDemonCamera_beginScene_FUN_00440290((CDemonCamera *)0x1fb8508,1);
  core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_00440b20((CDemonCamera *)0x1fb8508);
  _DAT_01c038f4 = 0;
  if (this_ptr->sorted_render_actors[0x6d6] != (CDemonActor *)0x0) {
    core_dskybox_cpp_renderSkyDome_FUN_00463580
              (0x01B7B4E8,(char *)(this_ptr->sorted_render_actors + 0x6d7),
               (int)this_ptr->sorted_render_actors[0x6df]);
  }
  core_set_cpp_CDemonSet_renderBackgroundActors_FUN_00508750(this_ptr,1);
  core_gore_cpp_CGore_renderDecals_FUN_004afe80(INT_005b96c4,1);
  core_fire_cpp_CFireEffect_renderDecals_FUN_0048a970(0x01C08D04,1);
  if (0x02DD1210->wave_animation_enabled == 0) {
    core_water_cpp_CWater_render_FUN_00550cb0(0x02DD1210,0);
  }
  core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_00440c50((CDemonCamera *)0x1fb8508,0);
  core_dcamera_cpp_CDemonCamera_endScene_FUN_00440a20(0x1fb8508,0);
  this_ptr->vdir_boxes[0xec].rotation_matrix.m[2].y = 0.0;
  core_set_cpp_CDemonSet_renderStaticLights_FUN_00509760(this_ptr);
  if (*(int *)((int)&this_ptr->cameras[0].rotation_matrix + index * 0x1a0 + 0x34) == 0) {
    pCVar14 = *(CDemonActor **)((int)&this_ptr->cameras[0].rotation_matrix + index * 0x1a0 + 0x5c);
  }
  else {
    pCVar14 = this_ptr->renderable_actors[0x6e9];
  }
  core_sound_cpp_CSound_setReverbPreset_FUN_0052ece0(0x02DC9450,(int)pCVar14);
  local_2c = _DAT_01fb860c;
  local_28 = _DAT_01fb8610;
  local_24 = _DAT_01fb8614;
  if (&local_44 != &local_2c) {
    local_44 = _DAT_01fb860c;
    local_40 = _DAT_01fb8610;
    local_3c = _DAT_01fb8614;
  }
  pfVar7 = (float *)&DAT_01fb8618;
  pfVar9 = local_a0;
  for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar9 = *pfVar7;
    pfVar7 = pfVar7 + (uint)bVar13 * -2 + 1;
    pfVar9 = pfVar9 + (uint)bVar13 * -2 + 1;
  }
  pfVar7 = local_a0;
  pCVar10 = &local_78;
  for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
    pCVar10->m[0].x = *pfVar7;
    pfVar7 = pfVar7 + (uint)bVar13 * -2 + 1;
    pCVar10 = (CMatrix3x3f *)((int)pCVar10 + ((uint)bVar13 * -2 + 1) * 4);
  }
  pCVar2 = core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0(&local_78,&local_50);
  if (&local_38 != pCVar2) {
    local_38.x = pCVar2->x;
    local_38.y = pCVar2->y;
    local_38.z = pCVar2->z;
  }
  iVar5 = 0;
  core_weather_cpp_CWeather_setOriginAndRotation_FUN_005557d0(0x02DDF9F0,&local_44,&local_38);
  pCVar4 = this_ptr;
  if (0 < *(int *)this_ptr->lights[199].filter_names[0x14]) {
    do {
      iVar5 = iVar5 + 1;
      core_set_cpp_CDemonSet_snapshotActorTransformState_FUN_00508890
                (this_ptr,*(uint *)(pCVar4->lights[199].filter_names[0x14] + 4));
      pCVar4 = (CDemonSet *)pCVar4->cameras;
    } while (iVar5 < *(int *)this_ptr->lights[199].filter_names[0x14]);
  }
  _DAT_01ffb074 = 1;
  return;
}
