// Name: core_set.cpp_CDemonSet_initScene_FUN_005084c0
// Address: 005084c0
// Address Range: [[005084c0, 0050874d]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_initScene_FUN_005084c0(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_initScene_FUN_005084c0(CDemonSet *this_ptr)

{
  char *text;
  int *piVar1;
  CDemonLight *pCVar2;
  int iVar3;
  CVector3f *pCVar4;
  C3DSLight *this_ptr_00;
  CDemonSet *pCVar5;
  int iVar6;
  
  iVar6 = 0;
  text = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Initializing scene");
  core_level_cpp_CLevelLoader_update_FUN_004c59e0((CLevelLoader *)INT_005baca0,text,iVar6);
  core_dlight_cpp_resetRestoreMemoryAllocator_FUN_0044e3b0();
  core_dfilter_cpp_CFilterCache_free_FUN_0044bcd0(0x014B8DE8);
  _DAT_01fba2d8 = 0;
  this_ptr->renderable_actors[0x6f7] = (CDemonActor *)0x0;
  core_dcamera_cpp_CDemonCamera_initLookupTable_FUN_0043ff50((CDemonCamera *)0x1fb8508);
  core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_004474e0
            ((CDemonCamera *)0x1fb8508,(SFog *)(this_ptr->renderable_actors + 0x6d6));
  this_ptr->renderable_actors[0x6df] =
       (CDemonActor *)(((SFog *)(this_ptr->renderable_actors + 0x6d6))->color_index).r;
  this_ptr->renderable_actors[0x6e0] = this_ptr->renderable_actors[0x6d7];
  this_ptr->renderable_actors[0x6e1] = this_ptr->renderable_actors[0x6d8];
  if (this_ptr->renderable_actors + 0x6e2 != this_ptr->renderable_actors + 0x6d9) {
    this_ptr->renderable_actors[0x6e2] = this_ptr->renderable_actors[0x6d9];
    this_ptr->renderable_actors[0x6e3] = this_ptr->renderable_actors[0x6da];
    this_ptr->renderable_actors[0x6e4] = this_ptr->renderable_actors[0x6db];
  }
  this_ptr->renderable_actors[0x6e5] = this_ptr->renderable_actors[0x6dc];
  this_ptr->renderable_actors[0x6e6] = this_ptr->renderable_actors[0x6dd];
  this_ptr->renderable_actors[0x6e7] = this_ptr->renderable_actors[0x6de];
  iVar6 = 0;
  core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00446740
            ((CDemonCamera *)0x1fb8508,*(float *)(this_ptr->lights[199].filter_names[0x13] + 0x24));
  do {
    if (*(int *)(&DAT_01fb99d4 + iVar6) != 0) {
      PTR_01cc4800 = "..\\core\\set.cpp";
      INT_01cc4804 = 0x35b;
      core_main_c_FUN_004c8440("CDemonSet::initScene - Memory leakage detected in masterSpotList");
    }
    iVar6 = iVar6 + 4;
  } while (iVar6 != 0x180);
  iVar6 = 0;
  _DAT_01fb99d0 = 0;
  pCVar5 = this_ptr;
  if (0 < (int)this_ptr->cameras[0xf7].position.y) {
    do {
      if (pCVar5->cameras[0xf7].position.z == 0.0) {
        this_ptr_00 = (C3DSLight *)((int)this_ptr->cameras + iVar6 * 0x1898 + 0x19644);
        pCVar2 = core_setutil_cpp_C3DSLight_create_FUN_005151f0(this_ptr_00);
        *(CDemonLight **)(&DAT_01fb99d4 + _DAT_01fb99d0 * 4) = pCVar2;
        core_setutil_cpp_C3DSLight_apply_FUN_00515350(this_ptr_00,pCVar2);
        _DAT_01fb99d0 = _DAT_01fb99d0 + 1;
        if (0x60 < _DAT_01fb99d0) {
          PTR_01cc4800 = "..\\core\\set.cpp";
          INT_01cc4804 = 0x372;
          core_main_c_FUN_004c8440("CDemonSet::initScene - Too many spotlights!");
        }
      }
      iVar6 = iVar6 + 1;
      pCVar5 = (CDemonSet *)&pCVar5->cameras[0xe].vdir_zone;
    } while (iVar6 < (int)this_ptr->cameras[0xf7].position.y);
  }
  iVar6 = 0;
  if (0 < _DAT_01fb99d0) {
    iVar3 = 0;
    do {
      pCVar2 = *(CDemonLight **)(&DAT_01fb99d4 + iVar3);
      core_dlight_cpp_CDemonLight_beginScene_FUN_0044e470(pCVar2,0);
      core_dlight_cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0044efb0(pCVar2);
      core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00507c80(this_ptr,9999.9,0);
      iVar3 = iVar3 + 4;
      iVar6 = iVar6 + 1;
      core_dlight_cpp_CDemonLight_endScene_FUN_0044e720(pCVar2,0);
    } while (iVar6 < _DAT_01fb99d0);
  }
  this_ptr->renderable_actors[0x773] = (CDemonActor *)0xffffffff;
  this_ptr->renderable_actors[0x774] = (CDemonActor *)0xffffffff;
  iVar6 = 0;
  _DAT_01fb9b54 = 0;
  _DAT_01fba9a4 = 0;
  _DAT_01fba2ec = 0;
  _DAT_01fba480 = 0;
  this_ptr->renderable_actors[0x775] = (CDemonActor *)0x0;
  core_setdir_cpp_CDemonSet_buildVdirBoxGroups_FUN_005141f0(this_ptr);
  if (0 < this_ptr->camera_count) {
    pCVar4 = &this_ptr->cameras[0].position;
    pCVar5 = this_ptr;
    do {
      iVar6 = iVar6 + 1;
      piVar1 = (int *)core_setdir_cpp_CDemonSet_findVdirBoxAtPosition_FUN_00514340(this_ptr,pCVar4);
      pCVar5->cameras[0].pvs_list = piVar1;
      pCVar4 = (CVector3f *)((int)(pCVar4 + 0x22) + 8);
      pCVar5 = (CDemonSet *)&pCVar5->cameras[0].vdir_zone;
    } while (iVar6 < this_ptr->camera_count);
  }
  core_weather_cpp_CWeather_setWeatherType_FUN_00555750
            (0x02DDF9F0,(EWeatherType)this_ptr->sorted_render_actors[0x6e6]);
  return;
}
