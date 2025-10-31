// Name: engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
// Address: 0048db80
// Address Range: [[0048db80, 0048dc12]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
// Cross-references:
//   core_actor.cpp_FUN_0040dec0 (0040dec0) at 0040dfd4 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_FUN_00419340 (00419340) at 00419464 [UNCONDITIONAL_CALL]
//   core_chain.cpp_FUN_004308f0 (004308f0) at 00430979 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_00429b40 (00429b40) at 00429ba8 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042ad00 (0042ad00) at 0042ad2b [UNCONDITIONAL_CALL]
//   core_curtain.cpp_FUN_0044b060 (0044b060) at 0044b0f1 [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044f3e0 (0044f3e0) at 0044fa78 [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_uploadBackdropTexture_FUN_0044f310 (0044f310) at 0044f381 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderLightBloomQuad_FUN_00473a20 (00473a20) at 00473ec9 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90 (00473f90) at 00474571 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderRadialVolumetricScattering_FUN_00475210 (00475210) at 00475278 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_00474ad0 (00474ad0) at 0047505e [UNCONDITIONAL_CALL]
//   core_dlight.cpp_captureLightTextures_FUN_00474a90 (00474a90) at 00474aa3 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_renderConeLightGeometry_FUN_004760d0 (004760d0) at 00476133 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_captureTextures_FUN_00478190 (00478190) at 004781b3 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_00477980 (00477980) at 00477bd4 [UNCONDITIONAL_CALL]
//   core_dskybox.cpp_renderSkyDome_FUN_004901f0 (004901f0) at 00490359 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CBulletHole_FUN_004bfa40 (004bfa40) at 004bfaa0 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CCrater_FUN_004c4620 (004c4620) at 004c4655 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CExplosion_FUN_004c3b10 (004c3b10) at 004c3b66 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireEffect_FUN_004c7ab0 (004c7ab0) at 004c7ae5 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CGlassParticle_render_FUN_004c1ef0 (004c1ef0) at 004c1ff9 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CGunFlame_FUN_004c50b0 (004c50b0) at 004c5103 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CLaserBeam_FUN_004c25c0 (004c25c0) at 004c25db [UNCONDITIONAL_CALL]
//   core_fire.cpp_CLightningBolt_FUN_004c5720 (004c5720) at 004c5774 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CPopcorn_render_FUN_004c64c0 (004c64c0) at 004c66dd [UNCONDITIONAL_CALL]
//   core_fire.cpp_CRainDrop_render_FUN_004c6830 (004c6830) at 004c6a4a [UNCONDITIONAL_CALL]
//   core_fire.cpp_CSmokeParticle_render_FUN_004bf4c0 (004bf4c0) at 004bf57a [UNCONDITIONAL_CALL]
//   core_fire.cpp_CSpark_render_FUN_004c0420 (004c0420) at 004c04a7 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CTrail_FUN_004c5e90 (004c5e90) at 004c5ec2 [UNCONDITIONAL_CALL]
//   core_fire.cpp_FUN_004c4d50 (004c4d50) at 004c4d89 [UNCONDITIONAL_CALL]
//   core_fire.cpp_FUN_004c5600 (004c5600) at 004c5615 [UNCONDITIONAL_CALL]
//   core_flame.cpp_FUN_004ca110 (004ca110) at 004ca5a5 [UNCONDITIONAL_CALL]
//   core_glass.cpp_CGlass_FUN_004e9930 (004e9930) at 004e99b4 [UNCONDITIONAL_CALL]
//   core_glass.cpp_CGlass_FUN_004e9af0 (004e9af0) at 004e9b69 [UNCONDITIONAL_CALL]
//   core_glass.cpp_CGlass_FUN_004e9ca0 (004e9ca0) at 004e9d17 [UNCONDITIONAL_CALL]
//   core_glass.cpp_FUN_004e9e90 (004e9e90) at 004e9f03 [UNCONDITIONAL_CALL]
//   core_glass.cpp_FUN_004eaef0 (004eaef0) at 004eb13f [UNCONDITIONAL_CALL]
//   core_glass.cpp_FUN_004eb250 (004eb250) at 004eb2c3 [UNCONDITIONAL_CALL]
//   core_gore.cpp_CGore_FUN_004ede60 (004ede60) at 004ede88 [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004ebac0 (004ebac0) at 004ebce1 [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004ec500 (004ec500) at 004ec5bd [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004ecce0 (004ecce0) at 004ecd66 [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004ed3c0 (004ed3c0) at 004ed477 [UNCONDITIONAL_CALL]
//   core_inv.cpp_drawItemIconBackground_FUN_005001e0 (005001e0) at 005001f3 [UNCONDITIONAL_CALL]
//   core_inv.cpp_drawWeaponIconBackground_FUN_00500050 (00500050) at 00500063 [UNCONDITIONAL_CALL]
//   core_level.cpp_CLevelLoader_show_FUN_00503dc0 (00503dc0) at 00503e5e [UNCONDITIONAL_CALL]
//   core_level.cpp_CLevelLoader_update_FUN_00504160 (00504160) at 0050453f [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_00509d50 (00509d50) at 0050a150 [UNCONDITIONAL_CALL]
//   core_marquee.cpp_FUN_0050c050 (0050c050) at 0050c0a6 [UNCONDITIONAL_CALL]
//   core_menu.cpp_FUN_0050fe70 (0050fe70) at 0050ffb2 [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052b160 (0052b160) at 0052b207 [UNCONDITIONAL_CALL]
//   core_path.cpp_FUN_00547fc0 (00547fc0) at 0054803a [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_00570040 (00570040) at 0057005d [UNCONDITIONAL_CALL]
//   core_set.cpp_FUN_005702b0 (005702b0) at 005702cb [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_005817d0 (005817d0) at 00581947 [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSLight_renderVolumetricSphere_FUN_00587b50 (00587b50) at 00587d01 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_DefinitelyRelatedToEditorMode_FUN_005968b0 (005968b0) at 00597508 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_FUN_0059abf0 (0059abf0) at 0059b568 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_LoadSkeletonAndRenderTexture_FUN_0059a780 (0059a780) at 0059a7d0 [UNCONDITIONAL_CALL]
//   core_stairs.cpp_FUN_005b9c10 (005b9c10) at 005b9c8a [UNCONDITIONAL_CALL]
//   core_texlist.cpp_CTextureList_captureAllTextures_FUN_005dc230 (005dc230) at 005dc24c [UNCONDITIONAL_CALL]
//   core_texlist.cpp_CTextureList_captureTexture_FUN_005dc270 (005dc270) at 005dc297 [UNCONDITIONAL_CALL]
//   core_texlist.cpp_CTextureList_previewTexture_FUN_005dc760 (005dc760) at 005dc96a [UNCONDITIONAL_CALL]
//   core_trigger.cpp_CTrigger_FUN_005e00d0 (005e00d0) at 005e025b [UNCONDITIONAL_CALL]
//   core_water.cpp_CWater_captureTextures_FUN_005e9e40 (005e9e40) at 005e9e55 [UNCONDITIONAL_CALL]
//   core_water.cpp_CWater_render_FUN_005ea320 (005ea320) at 005ea3c6 [UNCONDITIONAL_CALL]
//   core_wateract.cpp_CWaterActor_FUN_005eb280 (005eb280) at 005eb31c [UNCONDITIONAL_CALL]
//   core_weather.cpp_CWeather_FUN_005ef190 (005ef190) at 005ef1f0 [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_FUN_005f1230 (005f1230) at 005f17d6 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80 (0048da80) at 0048db29 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_drender_cpp_006221bf
//   TerminatedCString s_CDR_texture_Too_many_cap_006221d5
//   int g_CaptureTextureCount
//   SMRGLTextureBasic[100] g_CapturedTextureArray
//   undefined4 g_CapturedTextureArray[0].base.count
//   undefined4 DAT_02c9951c
//   undefined4 DAT_02c9951d
//   undefined4 DAT_02c9951e
//   undefined4 DAT_02c9951f
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_texture.cpp_ensureTextureLoaded_FUN_005dd800

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
          (CDemonRenderer *this_ptr,SMRGLTextureBasic *texture)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(texture);
  if (texture[1].base.count != 0) {
    g_CaptureTextureCount = g_CaptureTextureCount + 1;
    if (100 < g_CaptureTextureCount) {
      g_CurrentFilename = "..\\engine\\drender.cpp";
      g_CurrentLineNumber = 0xbf3;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDR::texture - Too many captured textures");
    }
    iVar2 = g_CaptureTextureCount;
    g_CapturedTextureArray[g_CaptureTextureCount * 3].base.count = (texture->base).count;
    pcVar3 = texture->texture_name;
    pcVar4 = g_CapturedTextureArray[iVar2 * 3].texture_name;
    do {
      cVar1 = *pcVar3;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
  }
  return;
}


// Assembly code:
// 0048db80: PUSH ESI
//   Label: engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
// 0048db81: PUSH EBP
// 0048db82: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0048db86: PUSH ESI
// 0048db87: CALL engine_texture.cpp_ensureTextureLoaded_FUN_005dd800
//   XREF to: 005dd800 (UNCONDITIONAL_CALL)
// 0048db8c: ADD ESP,0x4
// 0048db8f: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0048db93: CMP dword ptr [EAX + 0x1c],0x0
// 0048db97: JZ 0x0048dc10
//   XREF to: 0048dc10 (CONDITIONAL_JUMP)
// 0048db99: PUSH EDI
// 0048db9a: MOV ECX,dword ptr [0x02c6d5f0]
//   XREF to: 02c6d5f0 (READ)
// 0048dba0: INC ECX
// 0048dba1: MOV dword ptr [0x02c6d5f0],ECX
//   XREF to: 02c6d5f0 (WRITE)
// 0048dba7: CMP ECX,0x64
// 0048dbaa: JLE 0x0048dbcf
//   XREF to: 0048dbcf (CONDITIONAL_JUMP)
// 0048dbac: MOV EDI,0x6221bf
//   XREF to: 006221bf (DATA)
// 0048dbb1: MOV EBP,0xbf3
// 0048dbb6: PUSH 0x6221d5
//   XREF to: 006221d5 (DATA)
// 0048dbbb: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 0048dbc1: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 0048dbc7: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0048dbcc: ADD ESP,0x4
// 0048dbcf: MOV EDX,dword ptr [0x02c6d5f0]
//   Label: LAB_0048dbcf
//   XREF to: 02c6d5f0 (READ)
// 0048dbd5: LEA EAX,[EDX*0x8 + 0x0]
// 0048dbdc: ADD EAX,EDX
// 0048dbde: SHL EAX,0x3
// 0048dbe1: MOV EDX,dword ptr [ESI + 0x4]
// 0048dbe4: MOV dword ptr [EAX + 0x2c99518],EDX
//   XREF to: 02c99518 (DATA)
// 0048dbea: ADD EAX,0x2c99514
//   XREF to: 02c99514 (DATA)
// 0048dbef: ADD ESI,0x8
// 0048dbf2: LEA EDI,[EAX + 0x8]
// 0048dbf5: PUSH EDI
// 0048dbf6: MOV AL,byte ptr [ESI]
//   Label: LAB_0048dbf6
// 0048dbf8: MOV byte ptr [EDI],AL
//   XREF to: 02c9951c (DATA)
//   XREF to: 02c9951e (DATA)
// 0048dbfa: CMP AL,0x0
// 0048dbfc: JZ 0x0048dc0e
//   XREF to: 0048dc0e (CONDITIONAL_JUMP)
// 0048dbfe: MOV AL,byte ptr [ESI + 0x1]
// 0048dc01: ADD ESI,0x2
// 0048dc04: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02c9951d (DATA)
//   XREF to: 02c9951f (DATA)
// 0048dc07: ADD EDI,0x2
// 0048dc0a: CMP AL,0x0
// 0048dc0c: JNZ 0x0048dbf6
//   XREF to: 0048dbf6 (CONDITIONAL_JUMP)
// 0048dc0e: POP EDI
//   Label: LAB_0048dc0e
// 0048dc0f: POP EDI
// 0048dc10: POP EBP
//   Label: LAB_0048dc10
// 0048dc11: POP ESI
// 0048dc12: RET
