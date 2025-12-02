// Name: core_set.cpp_CDemonSet_FUN_0056c990
// Address: 0056c990
// Address Range: [[0056c990, 0056cd56]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_FUN_0056c990(CDemonSet * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004da447 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Bip01_Head_00645dab
//   double DOUBLE_00645dbb = 0.261799387791667
//   float FLOAT_00662850 = 256
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CGame* g_CGamePtr = 02d81a9c
//   CGore* g_CGorePtr = 02d83364
//   CDemonSet* g_CDemonSetPtr = 03114278
//   int g_RenderMirrorsFlag = 0x1
//   CWeather* g_CWeatherPtr = 03f95dc0
//   CDemonRenderer g_CDemonRendererInstance
//   int g_UseExternalRenderer
//   CFireEffect g_CFireEffectInstance
//   CDemonLight g_CDemonLightInstance
//   undefined4 g_CDemonLightInstance.base.base.position.x
//   undefined4 g_CDemonLightInstance.base.base.position.y
//   undefined4 g_CDemonLightInstance.base.base.position.z
//   undefined4 DAT_02d7eb00
//   undefined4 g_CDemonLightInstance.base.max_distance
//   undefined4 g_CDemonLightInstance.field17_0x1cbc
//   undefined4 DAT_02d807b0
//   undefined4 DAT_02d807b4
//   CGame g_CGameInstance
//   undefined4 DAT_02d81cb4
//   CGore g_CGoreInstance
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
//   CDemonSet g_CDemonSetInstance
//   undefined4 DAT_032758e8
//   undefined4 g_CDemonCameraInstance.base.position.y
//   undefined4 g_CDemonCameraInstance.base.position.z
//   CDemonRaytrace g_CDemonRaytraceInstance
//   undefined4 DAT_03f95de4
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   core_dlight.cpp_CDemonLight_beginScene_FUN_00472a80
//   core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_004735c0
//   core_dlight.cpp_CDemonLight_drawShadowDepthBuffer_FUN_00476670
//   core_dlight.cpp_CDemonLight_endScene_FUN_00472d30
//   core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0
//   core_fire.cpp_CFireEffect_FUN_004c93d0
//   core_fire.cpp_CFireEffect_render_FUN_004c7180
//   core_gore.cpp_CGore_FUN_004ed7b0
//   core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80
//   core_set.cpp_CDemonSet_FUN_0056aca0
//   core_set.cpp_CDemonSet_FUN_0056d380
//   core_set.cpp_CDemonSet_FUN_0056fbd0
//   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
//   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
//   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
//   engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
//   engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_windll.cpp_clearZBuffer_FUN_005b3ed4

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_set_cpp_CDemonSet_FUN_0056c990(CDemonSet *this_ptr)

{
  CHero *this_ptr_00;
  int iVar1;
  int iVar2;
  CVector3f *euler_out;
  CDemonLight *this_ptr_01;
  CSkeleton *this_ptr_02;
  int iVar3;
  CVector3f *input_local_point;
  int iVar4;
  CDemonSet *pCVar5;
  BADSPACEBASE *in_ESP;
  CVector3i local_5c;
  CVector3f local_50;
  CVector3f local_44;
  CMatrix3x3f local_38;
  CDemonLight *local_14;
  
  this_ptr_00 = g_HeroActors[g_LocalHeroIndex];
  local_14 = &g_CDemonLightInstance;
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                          (&(this_ptr_00->base_character).model);
  iVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_02,"Bip01 Head");
  euler_out = (CVector3f *)
              ((this_ptr_00->base_character).model.bone_transform.bone_world_matrices + iVar3);
  local_44.y = 0.338;
  local_44.x = 0.0;
  local_44.z = 0.75;
  input_local_point =
       core_xform_cpp_transformVector3x4_FUN_005f4dc0(&local_50,&local_44,(CMatrix3x4f *)euler_out);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr_00,local_38.m + 1,input_local_point);
  core_xform_cpp_matrixToEulerAngles_FUN_005f5690(euler_out,&local_38);
  local_38.m[2].z = 0.0;
  local_38.m[2].x = local_38.m[0].x + (float)DOUBLE_00645dbb;
  g_CDemonLightInstance.field17_0x1cbc = 0;
  local_38.m[2].y = local_38.m[0].y + (this_ptr_00->base_character).base_actor.orient.bank;
  if ((int *)&stack0x00000000 != &g_CDemonLightInstance.base.base.rotation_matrix.m[2].z) {
    g_CDemonLightInstance.base.base.position.x = (int)local_38.m[1].x;
    g_CDemonLightInstance.base.base.position.y = (int)local_38.m[1].y;
    g_CDemonLightInstance.base.base.position.z = (int)local_38.m[1].z;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)&(local_14->base).base.rotation_matrix,local_38.m + 2);
  (local_14->base).max_distance = 32.0;
  (local_14->base).base.projection_scale = 32.0;
  core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0(local_14,1.0);
  this_ptr_01 = local_14;
  iVar3 = g_UseExternalRenderer;
  if ((int *)&stack0x00000000 != &g_CDemonCameraInstance.base.rotation_matrix.m[2].z) {
    g_CDemonCameraInstance.base.position.x = (int)local_38.m[1].x;
    g_CDemonCameraInstance.base.position.y = (int)local_38.m[1].y;
    g_CDemonCameraInstance.base.position.z = (int)local_38.m[1].z;
  }
  if (g_CGamePtr->field71_0x218 == 0) {
    core_dlight_cpp_CDemonLight_beginScene_FUN_00472a80(local_14,0);
    core_dlight_cpp_CDemonLight_clearCircularShadowMapEdges_FUN_004735c0(this_ptr_01);
    g_RenderMirrorsFlag = 0;
    core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
              (this_ptr,(this_ptr_01->base).max_distance,0);
    g_RenderMirrorsFlag = 1;
    core_set_cpp_CDemonSet_FUN_0056fbd0(this_ptr);
    core_set_cpp_CDemonSet_FUN_0056aca0(this_ptr);
    iVar3 = 0;
    core_set_cpp_CDemonSet_FUN_0056fbd0(this_ptr);
    pCVar5 = this_ptr;
    if (0 < *(int *)this_ptr->field73_0x15f6e4) {
      do {
        (**(code **)(*(int *)(*(int *)(pCVar5->field73_0x15f6e4 + 4) + 0x154) + 8))();
        iVar3 = iVar3 + 1;
        engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr,1);
        pCVar5 = (CDemonSet *)pCVar5->cameras;
      } while (iVar3 < *(int *)this_ptr->field73_0x15f6e4);
    }
    core_gore_cpp_CGore_FUN_004ed7b0(g_CGorePtr);
    core_fire_cpp_CFireEffect_render_FUN_004c7180(g_CFireEffectPtr);
    core_dlight_cpp_CDemonLight_endScene_FUN_00472d30(local_14);
    local_5c.x = (int)ROUND(local_38.m[1].x * FLOAT_00662850);
    local_5c.y = (int)ROUND(local_38.m[1].y * FLOAT_00662850);
    local_5c.z = (int)ROUND(local_38.m[1].z * FLOAT_00662850);
    core_set_cpp_CDemonSet_FUN_0056d380(this_ptr);
    iVar3 = core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80
                      (this_ptr,&local_5c,(CVector3i *)0x0);
    iVar4 = core_fire_cpp_CFireEffect_FUN_004c93d0(g_CFireEffectPtr);
    if (g_WindowHeight < 0xf1) {
      iVar1 = -local_14->shadow_map_width;
      iVar2 = -local_14->shadow_map_height;
    }
    else {
      iVar1 = local_14->shadow_map_width * -2;
      iVar2 = local_14->shadow_map_height * -2;
    }
    if ((g_HeroActors[g_LocalHeroIndex]->inventory).battery_charge <= 0.0) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      return;
    }
    core_dlight_cpp_CDemonLight_drawShadowDepthBuffer_FUN_00476670
              (local_14,(g_WindowWidth + iVar1) / 2,(g_WindowHeight + iVar2) / 2,
               ((int)((iVar3 + (iVar3 >> 0x1f) * -0x80) - (uint)((iVar3 >> 0x1f) << 6 < 0)) >> 7) +
               iVar4 * 0x80 + *(int *)(g_CWeatherPtr->field0_0x0 + 0x24) * 0x8000);
    return;
  }
  g_UseExternalRenderer = 0;
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
            (g_CDemonRendererPtr,(CVector3i *)(local_38.m + 1));
  engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0048c650(g_CDemonRendererPtr,32.0);
  engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0(g_CDemonRendererPtr);
  g_CDemonRaytraceInstance.rendering_mode = 1;
  wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
  core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(g_CDemonSetPtr,9999.9,0);
  g_CDemonRaytraceInstance.rendering_mode = 0;
  g_UseExternalRenderer = iVar3;
  return;
}


// Assembly code:
// 0056c990: PUSH EBX
//   Label: core_set.cpp_CDemonSet_FUN_0056c990
// 0056c991: PUSH ESI
// 0056c992: PUSH EDI
// 0056c993: PUSH EBP
// 0056c994: MOV EBP,ESP
// 0056c996: SUB ESP,0x4c
// 0056c999: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0056c99c: MOV EBX,dword ptr [0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 0056c9a2: MOV EBX,dword ptr [EBX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 0056c9a9: LEA ESI,[EBX + 0x158]
// 0056c9af: MOV EDX,0x2d7eaf0
//   XREF to: 02d7eaf0 (PARAM)
// 0056c9b4: PUSH ESI
// 0056c9b5: MOV dword ptr [EBP + -0x4],EDX
//   XREF to: Stack[-0x14] (WRITE)
//   XREF to: 02d7eaf0 (DATA)
// 0056c9b8: CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 0056c9bd: ADD ESP,0x4
// 0056c9c0: PUSH 0x0
// 0056c9c2: PUSH 0x645dab
//   XREF to: 00645dab (DATA)
// 0056c9c7: PUSH EAX
// 0056c9c8: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0056c9cd: MOV EDX,EAX
// 0056c9cf: SHL EAX,0x2
// 0056c9d2: SUB EAX,EDX
// 0056c9d4: ADD ESI,0xe80
// 0056c9da: SHL EAX,0x4
// 0056c9dd: ADD ESP,0xc
// 0056c9e0: ADD ESI,EAX
// 0056c9e2: MOV EAX,0x3ead0e56
// 0056c9e7: PUSH ESI
// 0056c9e8: MOV dword ptr [EBP + -0x30],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0056c9eb: LEA EAX,[EBP + -0x34]
//   XREF to: Stack[-0x44] (DATA)
// 0056c9ee: XOR ECX,ECX
// 0056c9f0: PUSH EAX
// 0056c9f1: LEA EAX,[EBP + -0x40]
//   XREF to: Stack[-0x50] (DATA)
// 0056c9f4: MOV EDX,0x3f400000
// 0056c9f9: PUSH EAX
// 0056c9fa: MOV dword ptr [EBP + -0x34],ECX
//   XREF to: Stack[-0x44] (WRITE)
// 0056c9fd: MOV dword ptr [EBP + -0x2c],EDX
//   XREF to: Stack[-0x3c] (WRITE)
// 0056ca00: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 0056ca05: ADD ESP,0xc
// 0056ca08: PUSH EAX
// 0056ca09: LEA EAX,[EBP + -0x1c]
//   XREF to: Stack[-0x2c] (DATA)
// 0056ca0c: PUSH EAX
// 0056ca0d: PUSH EBX
// 0056ca0e: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0056ca13: ADD ESP,0xc
// 0056ca16: LEA EAX,[EBP + -0x28]
//   XREF to: Stack[-0x38] (DATA)
// 0056ca19: PUSH EAX
// 0056ca1a: PUSH ESI
// 0056ca1b: CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   XREF to: 005f5690 (UNCONDITIONAL_CALL)
// 0056ca20: FLD float ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 0056ca23: FLD float ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 0056ca26: MOV EDX,0x2d7eaf0
//   XREF to: 02d7eaf0 (DATA)
// 0056ca2b: LEA EAX,[EBP + -0x1c]
//   XREF to: Stack[-0x2c] (DATA)
// 0056ca2e: XOR ECX,ECX
// 0056ca30: ADD ESP,0x8
// 0056ca33: MOV dword ptr [EBP + -0xc],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 0056ca36: MOV dword ptr [EBP + -0x8],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 0056ca39: FXCH
// 0056ca3b: FADD double ptr [0x00645dbb]
//   XREF to: 00645dbb (READ)
// 0056ca41: MOV dword ptr [0x02d807ac],ECX
//   XREF to: 02d807ac (WRITE)
// 0056ca47: FSTP float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 0056ca4a: FADD float ptr [EBX + 0x34]
// 0056ca4d: ADD EDX,0x4
//   XREF to: 02d7eaf4 (PARAM)
// 0056ca50: FSTP float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (WRITE)
// 0056ca53: CMP EDX,EAX
// 0056ca55: JZ 0x0056ca68
//   XREF to: 0056ca68 (CONDITIONAL_JUMP)
// 0056ca57: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (DATA)
// 0056ca5a: MOV dword ptr [EDX],EAX
//   XREF to: 02d7eaf4 (WRITE)
// 0056ca5c: MOV EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0056ca5f: MOV dword ptr [EDX + 0x4],EAX
//   XREF to: 02d7eaf8 (WRITE)
// 0056ca62: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0056ca65: MOV dword ptr [EDX + 0x8],EAX
//   XREF to: 02d7eafc (WRITE)
// 0056ca68: LEA EAX,[EBP + -0x10]
//   Label: LAB_0056ca68
//   XREF to: Stack[-0x20] (DATA)
// 0056ca6b: PUSH EAX
// 0056ca6c: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0056ca6f: ADD EAX,0x10
//   XREF to: 02d7eb00 (PARAM)
// 0056ca72: PUSH EAX
//   XREF to: 02d7eb00 (DATA)
// 0056ca73: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 0056ca78: ADD ESP,0x8
// 0056ca7b: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
//   XREF to: 02d7eaf0 (PARAM)
// 0056ca7e: PUSH 0x3f800000
// 0056ca83: MOV dword ptr [EAX + 0x140],0x42000000
//   XREF to: 02d7ec30 (WRITE)
// 0056ca8d: PUSH EAX
//   XREF to: 02d7eaf0 (DATA)
// 0056ca8e: MOV dword ptr [EAX + 0x38],0x42000000
//   XREF to: 02d7eb28 (WRITE)
// 0056ca95: CALL core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0
//   XREF to: 004765e0 (UNCONDITIONAL_CALL)
// 0056ca9a: LEA EAX,[EBP + -0x1c]
//   XREF to: Stack[-0x2c] (DATA)
// 0056ca9d: ADD ESP,0x8
// 0056caa0: CMP EAX,0x32758e8
//   XREF to: 032758e8 (DATA)
// 0056caa5: JZ 0x0056cabf
//   XREF to: 0056cabf (CONDITIONAL_JUMP)
// 0056caa7: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (DATA)
// 0056caaa: MOV [0x032758e8],EAX
//   XREF to: 032758e8 (WRITE)
// 0056caaf: MOV EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0056cab2: MOV [0x032758ec],EAX
//   XREF to: 032758ec (WRITE)
// 0056cab7: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0056caba: MOV [0x032758f0],EAX
//   XREF to: 032758f0 (WRITE)
// 0056cabf: MOV EAX,[0x0067b654]
//   Label: LAB_0056cabf
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 0056cac4: MOV ECX,dword ptr [EAX + 0x218]
//   XREF to: 02d81cb4 (READ)
// 0056caca: TEST ECX,ECX
// 0056cacc: JNZ 0x0056cc95
//   XREF to: 0056cc95 (CONDITIONAL_JUMP)
// 0056cad2: PUSH ECX
// 0056cad3: MOV EBX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
//   XREF to: 02d7eaf0 (PARAM)
// 0056cad6: PUSH EBX
//   XREF to: 02d7eaf0 (DATA)
// 0056cad7: CALL core_dlight.cpp_CDemonLight_beginScene_FUN_00472a80
//   XREF to: 00472a80 (UNCONDITIONAL_CALL)
// 0056cadc: ADD ESP,0x8
// 0056cadf: PUSH EBX
//   XREF to: 02d7eaf0 (DATA)
// 0056cae0: CALL core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_004735c0
//   XREF to: 004735c0 (UNCONDITIONAL_CALL)
// 0056cae5: ADD ESP,0x4
// 0056cae8: XOR EAX,EAX
// 0056caea: PUSH EAX
// 0056caeb: PUSH dword ptr [EBX + 0x140]
//   XREF to: 02d7ec30 (READ)
// 0056caf1: PUSH EDI
// 0056caf2: MOV [0x006810d8],EAX
//   XREF to: 006810d8 (WRITE)
// 0056caf7: CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
//   XREF to: 0056a190 (UNCONDITIONAL_CALL)
// 0056cafc: ADD ESP,0xc
// 0056caff: PUSH -0x1
// 0056cb01: MOV EDX,0x1
// 0056cb06: PUSH EDI
// 0056cb07: MOV dword ptr [0x006810d8],EDX
//   XREF to: 006810d8 (WRITE)
// 0056cb0d: CALL core_set.cpp_CDemonSet_FUN_0056fbd0
//   XREF to: 0056fbd0 (UNCONDITIONAL_CALL)
// 0056cb12: ADD ESP,0x8
// 0056cb15: PUSH 0x1
// 0056cb17: PUSH EDI
// 0056cb18: CALL core_set.cpp_CDemonSet_FUN_0056aca0
//   XREF to: 0056aca0 (UNCONDITIONAL_CALL)
// 0056cb1d: ADD ESP,0x8
// 0056cb20: PUSH 0x1
// 0056cb22: MOV ESI,EBX
// 0056cb24: PUSH EDI
// 0056cb25: XOR ESI,EBX
// 0056cb27: CALL core_set.cpp_CDemonSet_FUN_0056fbd0
//   XREF to: 0056fbd0 (UNCONDITIONAL_CALL)
// 0056cb2c: MOV ECX,dword ptr [EDI + 0x15f6e4]
// 0056cb32: ADD ESP,0x8
// 0056cb35: TEST ECX,ECX
// 0056cb37: JLE 0x0056cb70
//   XREF to: 0056cb70 (CONDITIONAL_JUMP)
// 0056cb39: MOV EBX,EDI
// 0056cb3b: MOV EAX,dword ptr [EBX + 0x15f6e8]
//   Label: LAB_0056cb3b
// 0056cb41: PUSH EAX
// 0056cb42: MOV EDX,dword ptr [EAX + 0x154]
// 0056cb48: CALL dword ptr [EDX + 0x8]
// 0056cb4b: ADD ESP,0x4
// 0056cb4e: PUSH 0x1
// 0056cb50: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0056cb55: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 0056cb56: ADD EBX,0x4
// 0056cb59: INC ESI
// 0056cb5a: CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
//   XREF to: 0048caa0 (UNCONDITIONAL_CALL)
// 0056cb5f: MOV EDX,dword ptr [EDI + 0x15f6e4]
// 0056cb65: ADD ESP,0x8
// 0056cb68: CMP ESI,EDX
// 0056cb6a: JL 0x0056cb3b
//   XREF to: 0056cb3b (CONDITIONAL_JUMP)
// 0056cb6c: LEA EAX,[EAX]
// 0056cb70: MOV ECX,dword ptr [0x0067b9a0]
//   Label: LAB_0056cb70
//   XREF to: 02d83364 (PARAM)
//   XREF to: 0067b9a0 (READ)
// 0056cb76: PUSH ECX
//   XREF to: 02d83364 (DATA)
// 0056cb77: CALL core_gore.cpp_CGore_FUN_004ed7b0
//   XREF to: 004ed7b0 (UNCONDITIONAL_CALL)
// 0056cb7c: ADD ESP,0x4
// 0056cb7f: MOV EBX,dword ptr [0x0067a3d0]
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 0056cb85: PUSH EBX
//   XREF to: 02d12db0 (DATA)
// 0056cb86: CALL core_fire.cpp_CFireEffect_render_FUN_004c7180
//   XREF to: 004c7180 (UNCONDITIONAL_CALL)
// 0056cb8b: ADD ESP,0x4
// 0056cb8e: PUSH 0x1
// 0056cb90: MOV ESI,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0056cb93: PUSH ESI
//   XREF to: 02d7eaf0 (DATA)
// 0056cb94: CALL core_dlight.cpp_CDemonLight_endScene_FUN_00472d30
//   XREF to: 00472d30 (UNCONDITIONAL_CALL)
// 0056cb99: ADD ESP,0x8
// 0056cb9c: LEA EBX,[EBP + -0x4c]
//   XREF to: Stack[-0x5c] (DATA)
// 0056cb9f: LEA EAX,[EBP + -0x1c]
//   XREF to: Stack[-0x2c] (DATA)
// 0056cba2: FLD float ptr [EAX]
//   XREF to: Stack[-0x2c] (DATA)
// 0056cba4: FMUL float ptr [0x00662850]
//   XREF to: 00662850 (READ)
// 0056cbaa: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x5c] (DATA)
// 0056cbac: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x28] (READ)
// 0056cbaf: FMUL float ptr [0x00662850]
//   XREF to: 00662850 (READ)
// 0056cbb5: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x58] (WRITE)
// 0056cbb8: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x24] (READ)
// 0056cbbb: FMUL float ptr [0x00662850]
//   XREF to: 00662850 (READ)
// 0056cbc1: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x54] (WRITE)
// 0056cbc4: PUSH 0x0
// 0056cbc6: PUSH 0x0
// 0056cbc8: PUSH 0x0
// 0056cbca: PUSH 0x0
// 0056cbcc: PUSH 0x0
// 0056cbce: PUSH EDI
// 0056cbcf: CALL core_set.cpp_CDemonSet_FUN_0056d380
//   XREF to: 0056d380 (UNCONDITIONAL_CALL)
// 0056cbd4: ADD ESP,0x18
// 0056cbd7: PUSH 0x0
// 0056cbd9: LEA EAX,[EBP + -0x4c]
//   XREF to: Stack[-0x5c] (DATA)
// 0056cbdc: PUSH EAX
// 0056cbdd: PUSH EDI
// 0056cbde: CALL core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80
//   XREF to: 0056db80 (UNCONDITIONAL_CALL)
// 0056cbe3: MOV EDX,EAX
// 0056cbe5: SAR EDX,0x1f
// 0056cbe8: SHL EDX,0x7
// 0056cbeb: SBB EAX,EDX
// 0056cbed: SAR EAX,0x7
// 0056cbf0: ADD ESP,0xc
// 0056cbf3: MOV EDI,dword ptr [0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
// 0056cbf9: PUSH EDI
//   XREF to: 02d12db0 (DATA)
// 0056cbfa: MOV ESI,EAX
// 0056cbfc: CALL core_fire.cpp_CFireEffect_FUN_004c93d0
//   XREF to: 004c93d0 (UNCONDITIONAL_CALL)
// 0056cc01: SHL EAX,0x7
// 0056cc04: ADD ESI,EAX
// 0056cc06: MOV EAX,[0x006848fc]
//   XREF to: 006848fc (READ)
// 0056cc0b: MOV EAX,dword ptr [EAX + 0x24]
//   XREF to: 03f95de4 (READ)
// 0056cc0e: SHL EAX,0xf
// 0056cc11: ADD ESI,EAX
// 0056cc13: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 0056cc18: ADD ESP,0x4
// 0056cc1b: CMP EAX,0xf0
// 0056cc20: JLE 0x0056cd17
//   XREF to: 0056cd17 (CONDITIONAL_JUMP)
// 0056cc26: MOV EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0056cc29: MOV EDX,dword ptr [EDX + 0x1cc0]
//   XREF to: 02d807b0 (READ)
// 0056cc2f: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0056cc34: ADD EDX,EDX
// 0056cc36: SUB EAX,EDX
// 0056cc38: MOV EDX,EAX
// 0056cc3a: SAR EDX,0x1f
// 0056cc3d: SUB EAX,EDX
// 0056cc3f: SAR EAX,0x1
// 0056cc41: MOV EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0056cc44: MOV EBX,EAX
// 0056cc46: MOV EDX,dword ptr [EDX + 0x1cc4]
//   XREF to: 02d807b4 (READ)
// 0056cc4c: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 0056cc51: ADD EDX,EDX
// 0056cc53: SUB EAX,EDX
// 0056cc55: MOV EDX,EAX
// 0056cc57: SAR EDX,0x1f
//   Label: LAB_0056cc57
// 0056cc5a: SUB EAX,EDX
// 0056cc5c: SAR EAX,0x1
// 0056cc5e: MOV EDX,EAX
// 0056cc60: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 0056cc65: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 0056cc6c: FLD float ptr [EAX + 0x1f738]
// 0056cc72: FLDZ
// 0056cc74: FCOMPP
// 0056cc76: FNSTSW AX
// 0056cc78: SAHF
// 0056cc79: JNC 0x0056cd4b
//   XREF to: 0056cd4b (CONDITIONAL_JUMP)
// 0056cc7f: PUSH ESI
// 0056cc80: PUSH EDX
// 0056cc81: PUSH EBX
// 0056cc82: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
//   XREF to: 02d7eaf0 (PARAM)
// 0056cc85: PUSH EAX
//   XREF to: 02d7eaf0 (DATA)
// 0056cc86: CALL core_dlight.cpp_CDemonLight_drawShadowDepthBuffer_FUN_00476670
//   XREF to: 00476670 (UNCONDITIONAL_CALL)
// 0056cc8b: ADD ESP,0x10
// 0056cc8e: MOV ESP,EBP
// 0056cc90: POP EBP
// 0056cc91: POP EDI
// 0056cc92: POP ESI
// 0056cc93: POP EBX
// 0056cc94: RET
// 0056cc95: LEA EAX,[EBP + -0x1c]
//   Label: LAB_0056cc95
//   XREF to: Stack[-0x2c] (DATA)
// 0056cc98: PUSH EAX
// 0056cc99: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0056cc9f: XOR EBX,EBX
// 0056cca1: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 0056cca2: MOV ESI,dword ptr [0x02d03e94]
//   XREF to: 02d03e94 (READ)
// 0056cca8: MOV dword ptr [0x02d03e94],EBX
//   XREF to: 02d03e94 (WRITE)
// 0056ccae: CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
//   XREF to: 0048c150 (UNCONDITIONAL_CALL)
// 0056ccb3: ADD ESP,0x8
// 0056ccb6: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0056ccbb: PUSH 0x42000000
// 0056ccc0: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 0056ccc1: CALL engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
//   XREF to: 0048c650 (UNCONDITIONAL_CALL)
// 0056ccc6: ADD ESP,0x8
// 0056ccc9: LEA EAX,[EBP + -0x10]
//   XREF to: Stack[-0x20] (DATA)
// 0056cccc: PUSH EAX
// 0056cccd: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0056ccd3: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0056ccd4: CALL engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0
//   XREF to: 0048c1d0 (UNCONDITIONAL_CALL)
// 0056ccd9: MOV ECX,0x1
// 0056ccde: ADD ESP,0x8
// 0056cce1: MOV dword ptr [0x03277d14],ECX
//   XREF to: 03277d14 (WRITE)
// 0056cce7: CALL wincore_windll.cpp_clearZBuffer_FUN_005b3ed4
//   XREF to: 005b3ed4 (UNCONDITIONAL_CALL)
// 0056ccec: PUSH 0x0
// 0056ccee: MOV EBX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0056ccf4: PUSH 0x461c3f9a
// 0056ccf9: PUSH EBX
//   XREF to: 03114278 (DATA)
// 0056ccfa: XOR EDI,EDI
// 0056ccfc: CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
//   XREF to: 0056a190 (UNCONDITIONAL_CALL)
// 0056cd01: ADD ESP,0xc
// 0056cd04: MOV dword ptr [0x03277d14],EDI
//   XREF to: 03277d14 (WRITE)
// 0056cd0a: MOV dword ptr [0x02d03e94],ESI
//   XREF to: 02d03e94 (WRITE)
// 0056cd10: MOV ESP,EBP
// 0056cd12: POP EBP
// 0056cd13: POP EDI
// 0056cd14: POP ESI
// 0056cd15: POP EBX
// 0056cd16: RET
// 0056cd17: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0056cd17
//   XREF to: Stack[-0x14] (READ)
// 0056cd1a: MOV EDX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 0056cd20: MOV ECX,dword ptr [EAX + 0x1cc0]
//   XREF to: 02d807b0 (READ)
// 0056cd26: SUB EDX,ECX
// 0056cd28: MOV EAX,EDX
// 0056cd2a: SAR EDX,0x1f
// 0056cd2d: SUB EAX,EDX
// 0056cd2f: SAR EAX,0x1
// 0056cd31: MOV EBX,EAX
// 0056cd33: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0056cd36: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0056cd3c: MOV EDI,dword ptr [EAX + 0x1cc4]
//   XREF to: 02d807b4 (READ)
// 0056cd42: SUB EDX,EDI
// 0056cd44: MOV EAX,EDX
// 0056cd46: JMP 0x0056cc57
//   XREF to: 0056cc57 (UNCONDITIONAL_JUMP)
// 0056cd4b: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   Label: LAB_0056cd4b
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0056cd50: MOV ESP,EBP
// 0056cd52: POP EBP
// 0056cd53: POP EDI
// 0056cd54: POP ESI
// 0056cd55: POP EBX
// 0056cd56: RET
