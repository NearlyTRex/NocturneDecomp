// Name: core_set.cpp_FUN_0050a260
// Address: 0050a260
// Address Range: [[0050a260, 0050a636]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_FUN_0050a260(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_FUN_0050a260(CDemonSet *this_ptr)

{
  CDemonActor *this_ptr_00;
  int iVar1;
  int iVar2;
  uint uVar3;
  CDemonLight *this_ptr_01;
  CSkeleton *this_ptr_02;
  int iVar4;
  CVector3f *input_local_point;
  int iVar5;
  CDemonSet *pCVar6;
  CVector3i local_5c;
  CVector3f local_50;
  CVector3f local_44;
  CVector3f local_38;
  CVector3f local_2c;
  CVector3f local_20;
  CDemonLight *local_14;
  
  this_ptr_00 = *(CDemonActor **)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
  local_14 = (CDemonLight *)&DAT_01c74640;
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
                          ((CDeformableModelInstance *)(this_ptr_00 + 1));
  iVar4 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_02,"Bip01 Head",0);
  local_44.y = 0.338;
  local_44.x = 0.0;
  local_44.z = 0.75;
  input_local_point =
       core_xform_cpp_transformVector3x4_FUN_0055a8b0
                 (&local_50,&local_44,
                  (CMatrix3x4f *)(this_ptr_00[0xc].actor_name + iVar4 * 0x30 + 0x10));
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(this_ptr_00,&local_2c,input_local_point)
  ;
  core_xform_cpp_matrixToEulerAngles_FUN_0055b180
            ((CMatrix3x4f *)(this_ptr_00[0xc].actor_name + iVar4 * 0x30 + 0x10),&local_38);
  local_20.z = 0.0;
  local_20.x = local_38.x + (float)0.261799387791667;
  _DAT_01c762fc = 0;
  local_20.y = local_38.y + (this_ptr_00->orient).vec.y;
  if (&stack0x00000000 != (byte *)0x1c74770) {
    _DAT_01c74744 = local_2c.x;
    _DAT_01c74748 = local_2c.y;
    _DAT_01c7474c = local_2c.z;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
            ((CMatrix3x3f *)((local_14->base).camera_name + 0xd0),&local_20);
  (local_14->base).camera_name[0xc0] = '\0';
  (local_14->base).camera_name[0xc1] = '\0';
  (local_14->base).camera_name[0xc2] = '\0';
  (local_14->base).camera_name[0xc3] = 'B';
  (local_14->base).camera_name[0xf8] = '\0';
  (local_14->base).camera_name[0xf9] = '\0';
  (local_14->base).camera_name[0xfa] = '\0';
  (local_14->base).camera_name[0xfb] = 'B';
  core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_00452080(local_14,1.0);
  this_ptr_01 = local_14;
  uVar3 = _DAT_01c02594;
  if (&stack0x00000000 != (byte *)0x1fb8638) {
    _DAT_01fb860c = local_2c.x;
    _DAT_01fb8610 = local_2c.y;
    _DAT_01fb8614 = local_2c.z;
  }
  if (*(int *)(0x01C775EC + 0x218) == 0) {
    core_dlight_cpp_CDemonLight_beginScene_FUN_0044e470(local_14,0);
    core_dlight_cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0044efb0(this_ptr_01);
    DAT_005be378 = 0;
    core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00507c80
              (this_ptr,*(float *)((this_ptr_01->base).camera_name + 0xc0),0);
    DAT_005be378 = 1;
    core_set_cpp_CDemonSet_buildDisplayList_FUN_0050d2d0(this_ptr,0xffffffff);
    core_set_cpp_CDemonSet_renderBackgroundActors_FUN_00508750(this_ptr,1);
    iVar4 = 0;
    core_set_cpp_CDemonSet_buildDisplayList_FUN_0050d2d0(this_ptr,1);
    pCVar6 = this_ptr;
    if (0 < (int)this_ptr->vdir_boxes[0xec].rotation_matrix.m[2].z) {
      do {
        iVar5 = pCVar6->vdir_boxes[0xec].dead;
        (**(code **)(*(int *)(iVar5 + 0x14c) + 8))(iVar5);
        iVar4 = iVar4 + 1;
        engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(DAT_005ae704,1);
        pCVar6 = (CDemonSet *)pCVar6->cameras;
      } while (iVar4 < (int)this_ptr->vdir_boxes[0xec].rotation_matrix.m[2].z);
    }
    core_gore_cpp_CGore_renderParticles_FUN_004afe00((CGore *)INT_005b96c4);
    core_fire_cpp_CFireEffect_render_FUN_0048a650(0x01C08D04);
    core_dlight_cpp_CDemonLight_endScene_FUN_0044e720(local_14,1);
    local_5c.x = (int)ROUND(local_2c.x * _DAT_005a18f0);
    local_5c.y = (int)ROUND(local_2c.y * _DAT_005a18f0);
    local_5c.z = (int)ROUND(local_2c.z * _DAT_005a18f0);
    core_set_cpp_CDemonSet_setLightingParameters_FUN_0050adc0
              (this_ptr,(CVector3f *)0x0,(UOrientationVector *)0x0,(CVector3f *)0x0,(CVector3f *)0x0
               ,(CMatrix3x3f *)0x0);
    iVar4 = core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_0050b5c0
                      (this_ptr,&local_5c,(CVector3i *)0x0);
    iVar5 = core_fire_cpp_CFireEffect_hasActiveMuzzleFlash_FUN_0048c8a0(0x01C08D04);
    if (DAT_005b7620 < 0xf1) {
      iVar1 = -local_14->shadow_map_width;
      iVar2 = -local_14->shadow_map_height;
    }
    else {
      iVar1 = local_14->shadow_map_width * -2;
      iVar2 = local_14->shadow_map_height * -2;
    }
    if (*(float *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f5a0) <= 0.0) {
      engine_special_cpp_clearScreen_FUN_0052ee70();
      return;
    }
    core_dlight_cpp_CDemonLight_drawShadowDepthBuffer_FUN_00452110
              (local_14,(DAT_005b761c + iVar1) / 2,(DAT_005b7620 + iVar2) / 2,
               ((int)((iVar4 + (iVar4 >> 0x1f) * -0x80) - (uint)((iVar4 >> 0x1f) << 6 < 0)) >> 7) +
               iVar5 * 0x80 + *(int *)(0x02DDF9F0 + 0x24) * 0x8000);
    return;
  }
  _DAT_01c02594 = 0;
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700
            (DAT_005ae704,&local_2c);
  engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_00460c00(DAT_005ae704,32.0);
  engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_00460780(DAT_005ae704,&local_20);
  _DAT_01fba938 = 1;
  engine_special_cpp_clearZBufferNative_FUN_0052eed4();
  core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00507c80(0x01E57284,9999.9,0);
  _DAT_01fba938 = 0;
  _DAT_01c02594 = uVar3;
  return;
}
