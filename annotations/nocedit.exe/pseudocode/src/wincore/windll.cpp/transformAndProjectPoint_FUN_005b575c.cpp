// Name: wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
// Address: 005b575c
// Address Range: [[005b575c, 005b5a24]]
// Convention: __cdecl
// Signature: void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
// Cross-references:
//   core_actor.cpp_CDemonActor_renderTargetPoints_FUN_00409b90 (00409b90) at 00409c30 [UNCONDITIONAL_CALL]
//   core_actor.cpp_FUN_00409930 (00409930) at 0040996e [UNCONDITIONAL_CALL]
//   core_actor.cpp_FUN_0040d330 (0040d330) at 0040d3ec [UNCONDITIONAL_CALL]
//   core_actor.cpp_FUN_0040d470 (0040d470) at 0040d58f [UNCONDITIONAL_CALL]
//   core_actor.cpp_FUN_0040dec0 (0040dec0) at 0040df70 [UNCONDITIONAL_CALL]
//   core_actor.cpp_renderActorBoundingBox_FUN_0040d940 (0040d940) at 0040de61 [UNCONDITIONAL_CALL]
//   core_box.cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840 (00420840) at 004208cf [UNCONDITIONAL_CALL]
//   core_box.cpp_CBoundingBox3D_isVisibleWithCamera_FUN_00420680 (00420680) at 004206e3 [UNCONDITIONAL_CALL]
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 (004204f0) at 004205eb [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_00425340 (00425340) at 004253ef [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_00429b40 (00429b40) at 0042a048 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_FUN_0042f930 (0042f930) at 0042f978 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_BoneAndClothEditor_FUN_0043c880 (0043c880) at 0043cbcf [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043b7e0 (0043b7e0) at 0043b8c0 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043c820 (0043c820) at 0043c85e [UNCONDITIONAL_CALL]
//   core_cloth.cpp_LockVerticesMaybe_FUN_0043d590 (0043d590) at 0043d73a [UNCONDITIONAL_CALL]
//   core_course.cpp_FUN_00443760 (00443760) at 004439e6 [UNCONDITIONAL_CALL]
//   core_course.cpp_FUN_00443bc0 (00443bc0) at 00443ddc [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180 (00452180) at 004522fd [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_transformAndStoreVertex_FUN_00452110 (00452110) at 00452172 [UNCONDITIONAL_CALL]
//   core_dcube.cpp_CDemonCube_rotateVertices_FUN_00457650 (00457650) at 004576ec [UNCONDITIONAL_CALL]
//   core_dglobe.cpp_CDemonGlobe_renderCoronaTextured_FUN_004715e0 (004715e0) at 00471679 [UNCONDITIONAL_CALL]
//   core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_00471400 (00471400) at 00471502 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_004736c0 (004736c0) at 004737a1 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_004758d0 (004758d0) at 00475d7d [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderLightBloomQuad_FUN_00473a20 (00473a20) at 00473ccb [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90 (00473f90) at 00474449 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderRadialVolumetricScattering_FUN_00475210 (00475210) at 00475552 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_00474ad0 (00474ad0) at 00474f3d [UNCONDITIONAL_CALL]
//   core_dlight.cpp_renderConeLightGeometry_FUN_004760d0 (004760d0) at 004762e2 [UNCONDITIONAL_CALL]
//   core_dskybox.cpp_generateSkyDomeVertex_FUN_004900b0 (004900b0) at 0049019e [UNCONDITIONAL_CALL]
//   core_dskybox.cpp_renderSkyDome_FUN_004901f0 (004901f0) at 004903ab [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500 (00497500) at 004979e1 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_renderGridCube_FUN_00496e70 (00496e70) at 00496f3a [UNCONDITIONAL_CALL]
//   core_dtri.cpp_CDemonTriangle_render_FUN_0049cbd0 (0049cbd0) at 0049cc10 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CExplosion_FUN_004c3b10 (004c3b10) at 004c3c83 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CGlassParticle_render_FUN_004c1ef0 (004c1ef0) at 004c1f57 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CGunFlame_FUN_004c50b0 (004c50b0) at 004c52a8 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CLaserBeam_FUN_004c25c0 (004c25c0) at 004c2a80 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CLightningBolt_FUN_004c5720 (004c5720) at 004c5927 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CPopcorn_render_FUN_004c64c0 (004c64c0) at 004c65c5 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CRainDrop_render_FUN_004c6830 (004c6830) at 004c6932 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CSmokeParticle_render_FUN_004bf4c0 (004bf4c0) at 004bf606 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CSpark_render_FUN_004c0420 (004c0420) at 004c097b [UNCONDITIONAL_CALL]
//   core_fire.cpp_CTrail_FUN_004c5e90 (004c5e90) at 004c5fad [UNCONDITIONAL_CALL]
//   core_fire.cpp_FUN_004bfac0 (004bfac0) at 004bfba8 [UNCONDITIONAL_CALL]
//   core_fire.cpp_FUN_004c24d0 (004c24d0) at 004c251a [UNCONDITIONAL_CALL]
//   core_flame.cpp_FUN_004ca110 (004ca110) at 004ca34c [UNCONDITIONAL_CALL]
//   core_flies.cpp_FUN_004cc300 (004cc300) at 004cc572 [UNCONDITIONAL_CALL]
//   core_glass.cpp_CGlass_FUN_004e9ca0 (004e9ca0) at 004e9d83 [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004ebac0 (004ebac0) at 004ebba4 [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004ec500 (004ec500) at 004ec62f [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004ecce0 (004ecce0) at 004ece60 [UNCONDITIONAL_CALL]
//   core_ladder.cpp_FUN_00502620 (00502620) at 00502742 [UNCONDITIONAL_CALL]
//   core_level.cpp_CLevelLoader_update_FUN_00504160 (00504160) at 005043c3 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_005090d0 (005090d0) at 00509151 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_00509d50 (00509d50) at 00509ef6 [UNCONDITIONAL_CALL]
//   core_morph.cpp_CMorphModel_rotatePoints_FUN_0052af70 (0052af70) at 0052b06c [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052cc10 (0052cc10) at 0052cc2f [UNCONDITIONAL_CALL]
//   core_motion.cpp_CMotionController_FUN_0052e700 (0052e700) at 0052e792 [UNCONDITIONAL_CALL]
//   core_path.cpp_FUN_00547fc0 (00547fc0) at 005482c3 [UNCONDITIONAL_CALL]
//   core_path.cpp_debugRenderGridQuad_FUN_00547dd0 (00547dd0) at 00547e7e [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0 (0056e7c0) at 0056e805 [UNCONDITIONAL_CALL]
//   core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_00574ba0 (00574ba0) at 00574c20 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00583170 (00583170) at 0058372d [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_005817d0 (005817d0) at 005818a2 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_00582930 (00582930) at 00582985 [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSLight_renderVolumetricSphere_FUN_00587b50 (00587b50) at 00587c4d [UNCONDITIONAL_CALL]
//   core_setutil.cpp_generateSphereVertex_FUN_00587a40 (00587a40) at 00587b00 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_DefinitelyRelatedToEditorMode_FUN_005968b0 (005968b0) at 005973fd [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_FUN_0059b640 (0059b640) at 0059b6cc [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_FUN_0059b800 (0059b800) at 0059b87b [UNCONDITIONAL_CALL]
//   core_stairs.cpp_FUN_005b9c10 (005b9c10) at 005b9e01 [UNCONDITIONAL_CALL]
//   core_trigger.cpp_CTrigger_FUN_005e00d0 (005e00d0) at 005e03ca [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_CTVBat_FUN_005e4d80 (005e4d80) at 005e4fa5 [UNCONDITIONAL_CALL]
//   core_water.cpp_CWater_calculateVisibleTiles_FUN_005e9e70 (005e9e70) at 005ea100 [UNCONDITIONAL_CALL]
//   core_water.cpp_CWater_render_FUN_005ea320 (005ea320) at 005ea534 [UNCONDITIONAL_CALL]
//   core_waypoint.cpp_CWaypoint_FUN_005ebf70 (005ebf70) at 005ec242 [UNCONDITIONAL_CALL]
//   core_weather.cpp_CWeather_FUN_005ef190 (005ef190) at 005ef4b7 [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_FUN_005f1230 (005f1230) at 005f1461 [UNCONDITIONAL_CALL]
//   engine_3d.c_transformAndBufferVertices_FUN_00403840 (00403840) at 004038a5 [UNCONDITIONAL_CALL]
//   engine_matrix.c_transformToCache_FUN_0050cd70 (0050cd70) at 0050cd8c [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_draw3DProjectedLine_FUN_004a28a0 (004a28a0) at 004a28d8 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051e6b0 (0051e6b0) at 0051e721 [UNCONDITIONAL_CALL]
// Globals:
//   int g_TempX = 0x0
//   int g_TempY = 0x0
//   int g_TempZ = 0x0
//   int g_TempTransformedX = 0x0
//   int g_TempTransformedY = 0x0
//   int g_TempTransformedZ = 0x0
//   int g_ViewportCenterXFixed
//   int g_ViewportCenterYFixed
//   int g_ViewportRightFixed
//   int g_ViewportBottomFixed
//   BOOL g_MMXSupported
//   int g_RelativeX
//   int g_RelativeY
//   int g_RelativeZ
//   CMatrix3x3i g_TransformMatrix
//   undefined4 g_TransformMatrix[0][1]
//   undefined4 g_TransformMatrix[0][2]
//   undefined4 g_TransformMatrix[1][0]
//   undefined4 g_TransformMatrix[1][1]
//   undefined4 g_TransformMatrix[1][2]
//   undefined4 g_TransformMatrix[2][0]
//   undefined4 g_TransformMatrix[2][1]
//   undefined4 g_TransformMatrix[2][2]

#include "nocturne.h"

void __cdecl
wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex *output,CVector3i *input)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  if (g_MMXSupported != 0) {
    iVar2 = input->x - g_RelativeX;
    iVar7 = input->y - g_RelativeY;
    iVar8 = input->z - g_RelativeZ;
    lVar1 = (longlong)iVar7 * (longlong)g_TransformMatrix.m[1][0] +
            (longlong)iVar2 * (longlong)g_TransformMatrix.m[0][0] +
            (longlong)iVar8 * (longlong)g_TransformMatrix.m[2][0];
    uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar7 * (longlong)g_TransformMatrix.m[1][1] +
            (longlong)iVar2 * (longlong)g_TransformMatrix.m[0][1] +
            (longlong)iVar8 * (longlong)g_TransformMatrix.m[2][1];
    uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar7 * (longlong)g_TransformMatrix.m[1][2] +
            (longlong)iVar2 * (longlong)g_TransformMatrix.m[0][2] +
            (longlong)iVar8 * (longlong)g_TransformMatrix.m[2][2];
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    uVar6 = 0;
    if ((int)uVar5 < (int)uVar3) {
      uVar6 = GAME_CLIP_RIGHT;
    }
    if (SBORROW4(uVar3,-uVar5) != (int)(uVar3 + uVar5) < 0) {
      uVar6 = uVar6 | GAME_CLIP_LEFT;
    }
    if ((int)uVar5 < (int)uVar4) {
      uVar6 = uVar6 | GAME_CLIP_BOTTOM;
    }
    if (SBORROW4(uVar4,-uVar5) != (int)(uVar4 + uVar5) < 0) {
      uVar6 = uVar6 | GAME_CLIP_TOP;
    }
    if ((int)uVar5 < 1) {
      uVar6 = uVar6 | GAME_CLIP_NEAR;
    }
    output->transformed_x = uVar3;
    output->transformed_y = uVar4;
    output->transformed_z = uVar5;
    if (uVar6 == 0) {
      output->inv_z = (int)(0x7fffffff / (longlong)(int)uVar5);
      output->screen_x =
           (int)(((longlong)(int)uVar3 * (longlong)g_ViewportCenterXFixed) / (longlong)(int)uVar5) +
           g_ViewportRightFixed;
      output->screen_y =
           (int)(((longlong)(int)uVar4 * (longlong)g_ViewportCenterYFixed) / (longlong)(int)uVar5) +
           g_ViewportBottomFixed;
      return;
    }
    output->screen_x = uVar6;
    return;
  }
  g_TempX = input->x - g_RelativeX;
  g_TempY = input->y - g_RelativeY;
  g_TempZ = input->z - g_RelativeZ;
  lVar1 = (longlong)g_TempY * (longlong)g_TransformMatrix.m[1][0] +
          (longlong)g_TempX * (longlong)g_TransformMatrix.m[0][0] +
          (longlong)g_TempZ * (longlong)g_TransformMatrix.m[2][0];
  g_TempTransformedX = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)g_TempY * (longlong)g_TransformMatrix.m[1][1] +
          (longlong)g_TempX * (longlong)g_TransformMatrix.m[0][1] +
          (longlong)g_TempZ * (longlong)g_TransformMatrix.m[2][1];
  uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)g_TempY * (longlong)g_TransformMatrix.m[1][2] +
          (longlong)g_TempX * (longlong)g_TransformMatrix.m[0][2] +
          (longlong)g_TempZ * (longlong)g_TransformMatrix.m[2][2];
  uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  uVar5 = 0;
  if ((int)uVar4 < g_TempTransformedX) {
    uVar5 = GAME_CLIP_RIGHT;
  }
  if (g_TempTransformedX < (int)-uVar4) {
    uVar5 = uVar5 | GAME_CLIP_LEFT;
  }
  if ((int)uVar4 < (int)uVar3) {
    uVar5 = uVar5 | GAME_CLIP_BOTTOM;
  }
  if ((int)uVar3 < (int)-uVar4) {
    uVar5 = uVar5 | GAME_CLIP_TOP;
  }
  if ((int)uVar4 < 1) {
    uVar5 = uVar5 | GAME_CLIP_NEAR;
  }
  g_TempTransformedY = uVar3;
  g_TempTransformedZ = uVar4;
  if (uVar5 == 0) {
    output->transformed_x = g_TempTransformedX;
    output->transformed_y = uVar3;
    output->transformed_z = uVar4;
    output->inv_z = (int)(0x7fffffff / (longlong)(int)uVar4);
    output->screen_x =
         (int)(((longlong)g_TempTransformedX * (longlong)g_ViewportCenterXFixed) /
              (longlong)(int)uVar4) + g_ViewportRightFixed;
    output->screen_y =
         (int)(((longlong)g_TempTransformedY * (longlong)g_ViewportCenterYFixed) /
              (longlong)(int)uVar4) + g_ViewportBottomFixed;
    return;
  }
  output->transformed_x = g_TempTransformedX;
  output->transformed_y = uVar3;
  output->transformed_z = uVar4;
  output->screen_x = uVar5;
  return;
}


// Assembly code:
// 005b575c: TEST dword ptr [0x02d05248],0xffffffff
//   Label: wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 02d05248 (READ)
// 005b5766: JZ 0x005b58aa
//   XREF to: 005b58aa (CONDITIONAL_JUMP)
// 005b576c: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005b5770: MOV EAX,dword ptr [EBX]
// 005b5772: MOV ECX,dword ptr [EBX + 0x4]
// 005b5775: MOV EDX,dword ptr [EBX + 0x8]
// 005b5778: SUB EAX,dword ptr [0x02d052b8]
//   XREF to: 02d052b8 (READ)
// 005b577e: SUB ECX,dword ptr [0x02d052bc]
//   XREF to: 02d052bc (READ)
// 005b5784: SUB EDX,dword ptr [0x02d052c0]
//   XREF to: 02d052c0 (READ)
// 005b578a: MOVD MM0,EAX
// 005b578d: MOVD MM1,ECX
// 005b5790: MOVD MM2,EDX
// 005b5793: IMUL dword ptr [0x02d052e8]
//   XREF to: 02d052e8 (READ)
// 005b5799: MOV EBX,EAX
// 005b579b: MOV ECX,EDX
// 005b579d: MOVD EAX,MM1
// 005b57a0: IMUL dword ptr [0x02d052f4]
//   XREF to: 02d052f4 (READ)
// 005b57a6: ADD EBX,EAX
// 005b57a8: ADC ECX,EDX
// 005b57aa: MOVD EAX,MM2
// 005b57ad: IMUL dword ptr [0x02d05300]
//   XREF to: 02d05300 (READ)
// 005b57b3: ADD EAX,EBX
// 005b57b5: ADC EDX,ECX
// 005b57b7: SHRD EAX,EDX,0x10
// 005b57bb: MOVD MM4,EAX
// 005b57be: MOVD EAX,MM0
// 005b57c1: IMUL dword ptr [0x02d052ec]
//   XREF to: 02d052ec (READ)
// 005b57c7: MOV EBX,EAX
// 005b57c9: MOV ECX,EDX
// 005b57cb: MOVD EAX,MM1
// 005b57ce: IMUL dword ptr [0x02d052f8]
//   XREF to: 02d052f8 (READ)
// 005b57d4: ADD EBX,EAX
// 005b57d6: ADC ECX,EDX
// 005b57d8: MOVD EAX,MM2
// 005b57db: IMUL dword ptr [0x02d05304]
//   XREF to: 02d05304 (READ)
// 005b57e1: ADD EAX,EBX
// 005b57e3: ADC EDX,ECX
// 005b57e5: SHRD EAX,EDX,0x10
// 005b57e9: MOVD MM5,EAX
// 005b57ec: MOVD EAX,MM0
// 005b57ef: IMUL dword ptr [0x02d052f0]
//   XREF to: 02d052f0 (READ)
// 005b57f5: MOV EBX,EAX
// 005b57f7: MOV ECX,EDX
// 005b57f9: MOVD EAX,MM1
// 005b57fc: IMUL dword ptr [0x02d052fc]
//   XREF to: 02d052fc (READ)
// 005b5802: ADD EBX,EAX
// 005b5804: ADC ECX,EDX
// 005b5806: MOVD EAX,MM2
// 005b5809: IMUL dword ptr [0x02d05308]
//   XREF to: 02d05308 (READ)
// 005b580f: ADD EAX,EBX
// 005b5811: ADC EDX,ECX
// 005b5813: SHRD EAX,EDX,0x10
// 005b5817: MOVD MM6,EAX
// 005b581a: NEG EAX
// 005b581c: MOV EDX,EAX
// 005b581e: XOR EAX,EAX
// 005b5820: MOVD EBX,MM4
// 005b5823: MOVD ECX,MM6
// 005b5826: CMP EBX,ECX
// 005b5828: JLE 0x005b582f
//   XREF to: 005b582f (CONDITIONAL_JUMP)
// 005b582a: OR EAX,0x80000001
// 005b582f: CMP EBX,EDX
//   Label: LAB_005b582f
// 005b5831: JGE 0x005b5838
//   XREF to: 005b5838 (CONDITIONAL_JUMP)
// 005b5833: OR EAX,0x80000002
// 005b5838: MOVD EBX,MM5
//   Label: LAB_005b5838
// 005b583b: CMP EBX,ECX
// 005b583d: JLE 0x005b5844
//   XREF to: 005b5844 (CONDITIONAL_JUMP)
// 005b583f: OR EAX,0x80000004
// 005b5844: CMP EBX,EDX
//   Label: LAB_005b5844
// 005b5846: JGE 0x005b584d
//   XREF to: 005b584d (CONDITIONAL_JUMP)
// 005b5848: OR EAX,0x80000008
// 005b584d: CMP ECX,0x0
//   Label: LAB_005b584d
// 005b5850: JG 0x005b5857
//   XREF to: 005b5857 (CONDITIONAL_JUMP)
// 005b5852: OR EAX,0x80000010
// 005b5857: MOV EBX,dword ptr [ESP + 0x4]
//   Label: LAB_005b5857
//   XREF to: Stack[0x4] (READ)
// 005b585b: MOVD dword ptr [EBX],MM4
// 005b585e: MOVD dword ptr [EBX + 0x4],MM5
// 005b5862: MOVD dword ptr [EBX + 0x8],MM6
// 005b5866: TEST EAX,0xffffffff
// 005b586b: JNZ 0x005b58a4
//   XREF to: 005b58a4 (CONDITIONAL_JUMP)
// 005b586d: MOV EAX,0x7fffffff
// 005b5872: XOR EDX,EDX
// 005b5874: IDIV ECX
// 005b5876: MOV dword ptr [EBX + 0xc],EAX
// 005b5879: MOVD EAX,MM4
// 005b587c: IMUL dword ptr [0x02d02548]
//   XREF to: 02d02548 (READ)
// 005b5882: IDIV ECX
// 005b5884: ADD EAX,dword ptr [0x02d02550]
//   XREF to: 02d02550 (READ)
// 005b588a: MOV dword ptr [EBX + 0x10],EAX
// 005b588d: MOVD EAX,MM5
// 005b5890: IMUL dword ptr [0x02d0254c]
//   XREF to: 02d0254c (READ)
// 005b5896: IDIV ECX
// 005b5898: ADD EAX,dword ptr [0x02d02554]
//   XREF to: 02d02554 (READ)
// 005b589e: MOV dword ptr [EBX + 0x14],EAX
// 005b58a1: EMMS
// 005b58a3: RET
// 005b58a4: MOV dword ptr [EBX + 0x10],EAX
//   Label: LAB_005b58a4
// 005b58a7: EMMS
// 005b58a9: RET
// 005b58aa: PUSH ESI
//   Label: LAB_005b58aa
// 005b58ab: PUSH EDI
// 005b58ac: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005b58b0: MOV EDI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005b58b4: MOV EAX,dword ptr [ESI]
// 005b58b6: MOV EBX,dword ptr [ESI + 0x4]
// 005b58b9: MOV ECX,dword ptr [ESI + 0x8]
// 005b58bc: SUB EAX,dword ptr [0x02d052b8]
//   XREF to: 02d052b8 (READ)
// 005b58c2: SUB EBX,dword ptr [0x02d052bc]
//   XREF to: 02d052bc (READ)
// 005b58c8: SUB ECX,dword ptr [0x02d052c0]
//   XREF to: 02d052c0 (READ)
// 005b58ce: MOV [0x00682668],EAX
//   XREF to: 00682668 (WRITE)
// 005b58d3: MOV dword ptr [0x0068266c],EBX
//   XREF to: 0068266c (WRITE)
// 005b58d9: MOV dword ptr [0x00682670],ECX
//   XREF to: 00682670 (WRITE)
// 005b58df: IMUL dword ptr [0x02d052e8]
//   XREF to: 02d052e8 (READ)
// 005b58e5: MOV EBX,EAX
// 005b58e7: MOV ECX,EDX
// 005b58e9: MOV EAX,[0x0068266c]
//   XREF to: 0068266c (READ)
// 005b58ee: IMUL dword ptr [0x02d052f4]
//   XREF to: 02d052f4 (READ)
// 005b58f4: ADD EBX,EAX
// 005b58f6: ADC ECX,EDX
// 005b58f8: MOV EAX,[0x00682670]
//   XREF to: 00682670 (READ)
// 005b58fd: IMUL dword ptr [0x02d05300]
//   XREF to: 02d05300 (READ)
// 005b5903: ADD EAX,EBX
// 005b5905: ADC EDX,ECX
// 005b5907: SHRD EAX,EDX,0x10
// 005b590b: MOV [0x00682678],EAX
//   XREF to: 00682678 (WRITE)
// 005b5910: MOV EAX,[0x00682668]
//   XREF to: 00682668 (READ)
// 005b5915: IMUL dword ptr [0x02d052ec]
//   XREF to: 02d052ec (READ)
// 005b591b: MOV EBX,EAX
// 005b591d: MOV ECX,EDX
// 005b591f: MOV EAX,[0x0068266c]
//   XREF to: 0068266c (READ)
// 005b5924: IMUL dword ptr [0x02d052f8]
//   XREF to: 02d052f8 (READ)
// 005b592a: ADD EBX,EAX
// 005b592c: ADC ECX,EDX
// 005b592e: MOV EAX,[0x00682670]
//   XREF to: 00682670 (READ)
// 005b5933: IMUL dword ptr [0x02d05304]
//   XREF to: 02d05304 (READ)
// 005b5939: ADD EAX,EBX
// 005b593b: ADC EDX,ECX
// 005b593d: SHRD EAX,EDX,0x10
// 005b5941: MOV [0x0068267c],EAX
//   XREF to: 0068267c (WRITE)
// 005b5946: MOV EAX,[0x00682668]
//   XREF to: 00682668 (READ)
// 005b594b: IMUL dword ptr [0x02d052f0]
//   XREF to: 02d052f0 (READ)
// 005b5951: MOV EBX,EAX
// 005b5953: MOV ECX,EDX
// 005b5955: MOV EAX,[0x0068266c]
//   XREF to: 0068266c (READ)
// 005b595a: IMUL dword ptr [0x02d052fc]
//   XREF to: 02d052fc (READ)
// 005b5960: ADD EBX,EAX
// 005b5962: ADC ECX,EDX
// 005b5964: MOV EAX,[0x00682670]
//   XREF to: 00682670 (READ)
// 005b5969: IMUL dword ptr [0x02d05308]
//   XREF to: 02d05308 (READ)
// 005b596f: ADD EAX,EBX
// 005b5971: ADC EDX,ECX
// 005b5973: SHRD EAX,EDX,0x10
// 005b5977: MOV [0x00682680],EAX
//   XREF to: 00682680 (WRITE)
// 005b597c: NEG EAX
// 005b597e: MOV EDX,EAX
// 005b5980: XOR EAX,EAX
// 005b5982: MOV EBX,dword ptr [0x00682678]
//   XREF to: 00682678 (READ)
// 005b5988: MOV ECX,dword ptr [0x00682680]
//   XREF to: 00682680 (READ)
// 005b598e: CMP EBX,ECX
// 005b5990: JLE 0x005b5997
//   XREF to: 005b5997 (CONDITIONAL_JUMP)
// 005b5992: OR EAX,0x80000001
// 005b5997: CMP EBX,EDX
//   Label: LAB_005b5997
// 005b5999: JGE 0x005b59a0
//   XREF to: 005b59a0 (CONDITIONAL_JUMP)
// 005b599b: OR EAX,0x80000002
// 005b59a0: MOV EBX,dword ptr [0x0068267c]
//   Label: LAB_005b59a0
//   XREF to: 0068267c (READ)
// 005b59a6: CMP EBX,ECX
// 005b59a8: JLE 0x005b59af
//   XREF to: 005b59af (CONDITIONAL_JUMP)
// 005b59aa: OR EAX,0x80000004
// 005b59af: CMP EBX,EDX
//   Label: LAB_005b59af
// 005b59b1: JGE 0x005b59b8
//   XREF to: 005b59b8 (CONDITIONAL_JUMP)
// 005b59b3: OR EAX,0x80000008
// 005b59b8: CMP ECX,0x0
//   Label: LAB_005b59b8
// 005b59bb: JG 0x005b59c2
//   XREF to: 005b59c2 (CONDITIONAL_JUMP)
// 005b59bd: OR EAX,0x80000010
// 005b59c2: TEST EAX,0xffffffff
//   Label: LAB_005b59c2
// 005b59c7: JNZ 0x005b5a11
//   XREF to: 005b5a11 (CONDITIONAL_JUMP)
// 005b59c9: MOV EAX,[0x00682678]
//   XREF to: 00682678 (READ)
// 005b59ce: MOV dword ptr [EDI],EAX
// 005b59d0: MOV dword ptr [EDI + 0x4],EBX
// 005b59d3: MOV dword ptr [EDI + 0x8],ECX
// 005b59d6: MOV EAX,0x7fffffff
// 005b59db: XOR EDX,EDX
// 005b59dd: IDIV ECX
// 005b59df: MOV dword ptr [EDI + 0xc],EAX
// 005b59e2: MOV EAX,[0x00682678]
//   XREF to: 00682678 (READ)
// 005b59e7: IMUL dword ptr [0x02d02548]
//   XREF to: 02d02548 (READ)
// 005b59ed: IDIV ECX
// 005b59ef: ADD EAX,dword ptr [0x02d02550]
//   XREF to: 02d02550 (READ)
// 005b59f5: MOV dword ptr [EDI + 0x10],EAX
// 005b59f8: MOV EAX,[0x0068267c]
//   XREF to: 0068267c (READ)
// 005b59fd: IMUL dword ptr [0x02d0254c]
//   XREF to: 02d0254c (READ)
// 005b5a03: IDIV ECX
// 005b5a05: ADD EAX,dword ptr [0x02d02554]
//   XREF to: 02d02554 (READ)
// 005b5a0b: MOV dword ptr [EDI + 0x14],EAX
// 005b5a0e: POP EDI
// 005b5a0f: POP ESI
// 005b5a10: RET
// 005b5a11: MOV EDX,dword ptr [0x00682678]
//   Label: LAB_005b5a11
//   XREF to: 00682678 (READ)
// 005b5a17: MOV dword ptr [EDI],EDX
// 005b5a19: MOV dword ptr [EDI + 0x4],EBX
// 005b5a1c: MOV dword ptr [EDI + 0x8],ECX
// 005b5a1f: MOV dword ptr [EDI + 0x10],EAX
// 005b5a22: POP EDI
// 005b5a23: POP ESI
// 005b5a24: RET
