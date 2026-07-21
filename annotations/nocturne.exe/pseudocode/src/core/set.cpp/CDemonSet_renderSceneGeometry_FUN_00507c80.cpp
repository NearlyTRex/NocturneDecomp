// Name: core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00507c80
// Address: 00507c80
// Address Range: [[00507c80, 00507f78]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00507c80(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00507c80(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int local_1c;
  int local_18;
  int local_14;
  
  engine_drender_cpp_CDemonRenderer_setLightDirection_FUN_00460c70(DAT_005ae704,&DAT_005be36c);
  engine_drender_cpp_CDemonRenderer_setLightIntensity_FUN_00460c40(DAT_005ae704,0x3e800000);
  if (*(int *)(param_1 + 0x15aa64) != 0) goto LAB_00507d51;
  if ((param_3 == 0) || (*(int *)(param_1 + 0x15aabc) < 0)) {
LAB_00507e84:
    if (param_3 != 1) goto LAB_00507d02;
    uVar2 = 1;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x15aabc) * 0x1a0 + param_1;
    iVar3 = *(int *)(iVar1 + 0x194);
    if ((0 < iVar3) && (iVar1 = *(int *)(iVar1 + 0x198), iVar1 != 0)) {
      core_dtrace_cpp_CDemonRaytrace_setPVS_FUN_0046ace0(&DAT_01fba938,iVar3,iVar1);
      goto LAB_00507e84;
    }
    param_3 = 2;
LAB_00507d02:
    uVar2 = 0;
  }
  FUN_00469ce0(&DAT_01fba938,param_2,uVar2);
  if (param_3 == 2) {
    iVar3 = *(int *)(param_1 + 0x15aabc) * 0x1a0 + param_1 + 4;
    core_dtrace_cpp_CDemonRaytrace_savePVS_FUN_0046ae40(&DAT_01fba938,iVar3 + 400,iVar3 + 0x194);
  }
LAB_00507d51:
  iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
  if (iVar3 == 0) {
    if (_DAT_01c02594 == 0) {
      core_set_cpp_CDemonSet_buildMirrorList_FUN_0050e210(param_1);
    }
    if (_DAT_01c02594 == 0) {
      if (*(int *)(param_1 + 0x15a8ac) != 0) {
        local_1c = _DAT_01c02594;
        local_18 = _DAT_01c02594;
        local_14 = _DAT_01c02594;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
                  (DAT_005ae704,&local_1c);
        core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00453040(0x1fbacc8,0,0,0xffffffff);
      }
      if ((*(int *)(param_1 + 0x15a8a8) == 0) && (*(int *)(param_1 + 0x161240) != 0)) {
        core_dskybox_cpp_renderSkyDome_FUN_00463580
                  (0x01B7B4E8,param_1 + 0x161244,*(uint *)(param_1 + 0x161264));
      }
      if ((*(int *)(param_1 + 0x15a8a4) == 0) &&
         (core_water_cpp_CWater_calculateVisibleTiles_FUN_00550800(0x02DD1210), *0x02DD1210 == 0
         )) {
        core_water_cpp_CWater_render_FUN_00550cb0(0x02DD1210,1);
      }
      if (*(int *)(param_1 + 0x15a8c0) != 0) {
        core_terrain_cpp_CTerrain_render_FUN_00549310(0x02DD10C8,1);
      }
    }
    iVar1 = 0;
    iVar3 = param_1;
    if (0 < *(int *)(param_1 + 0x15a8cc)) {
      do {
        core_mirror_cpp_CMirror_renderMirrorQuadDepth_FUN_004d7980
                  (*(int *)(iVar3 + 0x15a8d0) + 0x1e4);
        if (*(int *)(*(int *)(iVar3 + 0x15a8d0) + 0x178) != 0) {
          FUN_004ac7c0(*(int *)(iVar3 + 0x15a8d0));
        }
        FUN_0050e080(param_1,iVar1,1);
        FUN_00469ce0(&DAT_01fba938,param_2,0);
        iVar1 = iVar1 + 1;
        core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190(param_1);
        iVar3 = iVar3 + 4;
      } while (iVar1 < *(int *)(param_1 + 0x15a8cc));
    }
  }
  else if ((DAT_005be378 != 0) && (iVar1 = 0, iVar3 = param_1, 0 < *(int *)(param_1 + 0x15a8cc))) {
    do {
      core_mirror_cpp_CMirror_renderMirrorQuadDepth_FUN_004d7980(*(int *)(iVar3 + 0x15a8d0) + 0x1e4)
      ;
      if (*(int *)(*(int *)(iVar3 + 0x15a8d0) + 0x178) != 0) {
        FUN_004ac7c0(*(int *)(iVar3 + 0x15a8d0));
      }
      FUN_0050e080(param_1,iVar1,0);
      FUN_00469ce0(&DAT_01fba938,param_2,0);
      iVar3 = iVar3 + 4;
      iVar1 = iVar1 + 1;
      core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190(param_1);
    } while (iVar1 < *(int *)(param_1 + 0x15a8cc));
  }
  return;
}
