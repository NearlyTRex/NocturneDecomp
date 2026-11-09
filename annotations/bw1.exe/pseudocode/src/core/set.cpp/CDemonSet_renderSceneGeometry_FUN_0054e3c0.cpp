// Name: core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0054e3c0
// Address: 0054e3c0
// Address Range: [[0054e3c0, 0054e694]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0054e3c0(CDemonSet *this_ptr,float frustum_param,int render_mode)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0054e3c0(CDemonSet *this_ptr,float frustum_param,int render_mode)

{
  int iVar1;
  CDemonSet *pCVar2;
  CVector3f local_1c;
  
  engine_matrix_c_FUN_00483a20(DAT_00612560,&DAT_00622c1c);
  engine_matrix_c_FUN_004839f0(DAT_00612560,0x3e800000);
  if ((render_mode == 0) || (iVar1 = *(int *)&this_ptr->field_0x15aeb8, iVar1 < 0)) {
LAB_0054e5a1:
    if (render_mode == 1) {
      iVar1 = 1;
      goto LAB_0054e42b;
    }
  }
  else {
    if ((0 < *(int *)(&this_ptr->field_0x198 + iVar1 * 0x1a4)) &&
       (*(int **)(&this_ptr->field_0x19c + iVar1 * 0x1a4) != (int *)0x0)) {
      core_dtrace_cpp_CDemonRaytrace_setPVS_FUN_0048e4e0
                (&g_CDemonRaytraceInstance,*(int *)(&this_ptr->field_0x198 + iVar1 * 0x1a4),
                 *(int **)(&this_ptr->field_0x19c + iVar1 * 0x1a4));
      goto LAB_0054e5a1;
    }
    render_mode = 2;
  }
  iVar1 = 0;
LAB_0054e42b:
  core_dtrace_cpp_CDemonRaytrace_renderFrustumCubes_FUN_0048d4f0
            (&g_CDemonRaytraceInstance,frustum_param,iVar1);
  if (render_mode == 2) {
    iVar1 = *(int *)&this_ptr->field_0x15aeb8 * 0x1a4;
    core_dtrace_cpp_CDemonRaytrace_savePVS_FUN_0048e640
              (&g_CDemonRaytraceInstance,(int *)(&this_ptr->field_0x198 + iVar1),
               (int **)(&this_ptr->field_0x19c + iVar1));
  }
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
  if (iVar1 == 0) {
    if (_DAT_01c50948 == 0) {
      core_set_cpp_CDemonSet_buildMirrorList_FUN_00555610(this_ptr);
    }
    if (_DAT_01c50948 == 0) {
      if (*(int *)&this_ptr->field_0x15aca4 != 0) {
        local_1c._0_4_ = _DAT_01c50948;
        local_1c._4_4_ = _DAT_01c50948;
        local_1c._8_4_ = _DAT_01c50948;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
                  (DAT_00612560,&local_1c);
        core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00467270
                  (&g_CKeyFramedModelInstance,0,(CKeyFramedModelInstance *)0x0,-1);
      }
      if ((*(int *)&this_ptr->field_0x15aca0 == 0) && (*(int *)&this_ptr->field_0x161640 != 0)) {
        core_dskybox_cpp_FUN_00486900
                  (0x01BEEFBC,&this_ptr->field_0x161644,*(int *)&this_ptr->field_0x161664);
      }
      if ((*(int *)&this_ptr->field_0x15ac9c == 0) &&
         (core_water_cpp_CWater_calculateVisibleTiles_FUN_005a9a40(g_CWaterPtr),
         *(int *)g_CWaterPtr == 0)) {
        core_water_cpp_FUN_005a9f10(g_CWaterPtr,1);
      }
      if (*(int *)&this_ptr->field_0x15acb8 != 0) {
        core_terrain_cpp_CTerrain_render_FUN_0059f3e0(0x02C8AE68,1);
      }
    }
    iVar1 = 0;
    pCVar2 = this_ptr;
    if (0 < *(int *)&this_ptr->field_0x15acc8) {
      do {
        core_mirror_cpp_CMirror_renderMirrorQuadDepth_FUN_00519e40
                  ((CMirror *)(*(int *)&pCVar2->field_0x15accc + 0x1ec));
        if (*(int *)&(*(CGlass **)&pCVar2->field_0x15accc)->field_0x180 != 0) {
          core_glass_cpp_FUN_004e1db0(*(CGlass **)&pCVar2->field_0x15accc);
        }
        core_set_cpp_FUN_00555460(this_ptr,iVar1,1);
        core_dtrace_cpp_CDemonRaytrace_renderFrustumCubes_FUN_0048d4f0
                  (&g_CDemonRaytraceInstance,frustum_param,0);
        iVar1 = iVar1 + 1;
        core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_00555590(this_ptr);
        pCVar2 = (CDemonSet *)&pCVar2->field_0x4;
      } while (iVar1 < *(int *)&this_ptr->field_0x15acc8);
    }
  }
  else if ((DAT_00622c28 != 0) &&
          (iVar1 = 0, pCVar2 = this_ptr, 0 < *(int *)&this_ptr->field_0x15acc8)) {
    do {
      core_mirror_cpp_CMirror_renderMirrorQuadDepth_FUN_00519e40
                ((CMirror *)(*(int *)&pCVar2->field_0x15accc + 0x1ec));
      if (*(int *)&(*(CGlass **)&pCVar2->field_0x15accc)->field_0x180 != 0) {
        core_glass_cpp_FUN_004e1db0(*(CGlass **)&pCVar2->field_0x15accc);
      }
      core_set_cpp_FUN_00555460(this_ptr,iVar1,0);
      core_dtrace_cpp_CDemonRaytrace_renderFrustumCubes_FUN_0048d4f0
                (&g_CDemonRaytraceInstance,frustum_param,0);
      pCVar2 = (CDemonSet *)&pCVar2->field_0x4;
      iVar1 = iVar1 + 1;
      core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_00555590(this_ptr);
    } while (iVar1 < *(int *)&this_ptr->field_0x15acc8);
  }
  return;
}
