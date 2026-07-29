// Name: core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00507c80
// Address: 00507c80
// Address Range: [[00507c80, 00507f78]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00507c80(CDemonSet *this_ptr,float frustum_param,int render_mode)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00507c80(CDemonSet *this_ptr,float frustum_param,int render_mode)

{
  CDemonActor *pCVar1;
  int *visible_cube_indices;
  int iVar2;
  CDemonSet *pCVar3;
  CVector3f local_1c;
  
  engine_drender_cpp_CDemonRenderer_setLightDirection_FUN_00460c70
            (DAT_005ae704,(CVector3i *)&DAT_005be36c);
  engine_drender_cpp_CDemonRenderer_setLightIntensity_FUN_00460c40(DAT_005ae704,0.25);
  if (this_ptr->renderable_actors[0x75d] != (CDemonActor *)0x0) goto LAB_00507d51;
  if ((render_mode == 0) || (pCVar1 = this_ptr->renderable_actors[0x773], (int)pCVar1 < 0)) {
LAB_00507e84:
    if (render_mode != 1) goto LAB_00507d02;
    iVar2 = 1;
  }
  else {
    iVar2 = *(int *)((int)&this_ptr->cameras[0].rotation_matrix + (int)pCVar1 * 0x1a0 + 0x78);
    if ((0 < iVar2) &&
       (visible_cube_indices =
             *(int **)((int)&this_ptr->cameras[0].rotation_matrix + (int)pCVar1 * 0x1a0 + 0x7c),
       visible_cube_indices != (int *)0x0)) {
      core_dtrace_cpp_CDemonRaytrace_setPVS_FUN_0046ace0
                ((CDemonRaytrace *)&DAT_01fba938,iVar2,visible_cube_indices);
      goto LAB_00507e84;
    }
    render_mode = 2;
LAB_00507d02:
    iVar2 = 0;
  }
  core_dtrace_cpp_CDemonRaytrace_renderFrustumCubes_FUN_00469ce0
            ((CDemonRaytrace *)&DAT_01fba938,frustum_param,iVar2);
  if (render_mode == 2) {
    iVar2 = (int)this_ptr->renderable_actors[0x773] * 0x1a0;
    core_dtrace_cpp_CDemonRaytrace_savePVS_FUN_0046ae40
              ((CDemonRaytrace *)&DAT_01fba938,
               (int *)((int)&this_ptr->cameras[0].rotation_matrix + iVar2 + 0x78),
               (int **)((int)&this_ptr->cameras[0].rotation_matrix + iVar2 + 0x7c));
  }
LAB_00507d51:
  iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
  if (iVar2 == 0) {
    if (_DAT_01c02594 == 0.0) {
      core_set_cpp_CDemonSet_buildMirrorList_FUN_0050e210(this_ptr);
    }
    if (_DAT_01c02594 == 0.0) {
      if (this_ptr->renderable_actors[0x6ef] != (CDemonActor *)0x0) {
        local_1c.x = _DAT_01c02594;
        local_1c.y = _DAT_01c02594;
        local_1c.z = _DAT_01c02594;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
                  (DAT_005ae704,&local_1c);
        core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00453040
                  ((CKeyFramedModel *)0x1fbacc8,0,(CKeyFramedModelInstance *)0x0,-1);
      }
      if ((this_ptr->renderable_actors[0x6ee] == (CDemonActor *)0x0) &&
         (this_ptr->sorted_render_actors[0x6d6] != (CDemonActor *)0x0)) {
        core_dskybox_cpp_renderSkyDome_FUN_00463580
                  (0x01B7B4E8,(char *)(this_ptr->sorted_render_actors + 0x6d7),
                   (int)this_ptr->sorted_render_actors[0x6df]);
      }
      if ((this_ptr->renderable_actors[0x6ed] == (CDemonActor *)0x0) &&
         (core_water_cpp_CWater_calculateVisibleTiles_FUN_00550800(0x02DD1210),
         0x02DD1210->wave_animation_enabled == 0)) {
        core_water_cpp_CWater_render_FUN_00550cb0(0x02DD1210,1);
      }
      if (this_ptr->renderable_actors[0x6f4] != (CDemonActor *)0x0) {
        core_terrain_cpp_CTerrain_render_FUN_00549310(0x02DD10C8,1);
      }
    }
    iVar2 = 0;
    pCVar3 = this_ptr;
    if (0 < (int)this_ptr->renderable_actors[0x6f7]) {
      do {
        core_mirror_cpp_CMirror_renderMirrorQuadDepth_FUN_004d7980
                  ((CMirror *)(pCVar3->renderable_actors[0x6f8][1].create_event + 0x1c));
        if (((CGlass *)pCVar3->renderable_actors[0x6f8])->shattered != 0) {
          core_glass_cpp_FUN_004ac7c0((CGlass *)pCVar3->renderable_actors[0x6f8]);
        }
        core_set_cpp_FUN_0050e080(this_ptr,iVar2,1);
        core_dtrace_cpp_CDemonRaytrace_renderFrustumCubes_FUN_00469ce0
                  ((CDemonRaytrace *)&DAT_01fba938,frustum_param,0);
        iVar2 = iVar2 + 1;
        core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190(this_ptr);
        pCVar3 = (CDemonSet *)pCVar3->cameras;
      } while (iVar2 < (int)this_ptr->renderable_actors[0x6f7]);
    }
  }
  else if ((DAT_005be378 != 0) &&
          (iVar2 = 0, pCVar3 = this_ptr, 0 < (int)this_ptr->renderable_actors[0x6f7])) {
    do {
      core_mirror_cpp_CMirror_renderMirrorQuadDepth_FUN_004d7980
                ((CMirror *)(pCVar3->renderable_actors[0x6f8][1].create_event + 0x1c));
      if (((CGlass *)pCVar3->renderable_actors[0x6f8])->shattered != 0) {
        core_glass_cpp_FUN_004ac7c0((CGlass *)pCVar3->renderable_actors[0x6f8]);
      }
      core_set_cpp_FUN_0050e080(this_ptr,iVar2,0);
      core_dtrace_cpp_CDemonRaytrace_renderFrustumCubes_FUN_00469ce0
                ((CDemonRaytrace *)&DAT_01fba938,frustum_param,0);
      pCVar3 = (CDemonSet *)pCVar3->cameras;
      iVar2 = iVar2 + 1;
      core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190(this_ptr);
    } while (iVar2 < (int)this_ptr->renderable_actors[0x6f7]);
  }
  return;
}
