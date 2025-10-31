// Name: core_fire.cpp_CFireEffect_FUN_004c7ab0
// Address: 004c7ab0
// Address Range: [[004c7ab0, 004c7b16]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireEffect_FUN_004c7ab0(CFireEffect * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_FUN_004e07a0 (004e07a0) at 004e07b7 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   SMRGLTextureBasic g_FireEffectBlackHoleTexture
//   SMRGLTextureBasic g_FireEffectSparkTexture
//   SMRGLTextureBasic g_FireEffectBlueSparkTexture
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   core_fire.cpp_Debris_FUN_004c38d0
//   core_fire.cpp_DoNothing_FUN_004c17e0
//   core_fire.cpp_FireBalls_FUN_004c0ad0
//   core_fire.cpp_flamingstake_FUN_004bfe00
//   core_fire.cpp_FUN_004c41d0
//   core_fire.cpp_FUN_004c4d50
//   core_fire.cpp_FUN_004c5600
//   core_fire.cpp_GunFlashModel_FUN_004c1be0
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_FUN_004c7ab0(CFireEffect *this_ptr)

{
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  undefined4 uStack00000010;
  undefined4 uStack00000014;
  undefined4 uStack00000018;
  undefined4 uStack0000001c;
  undefined4 uStack00000020;
  
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,&g_FireEffectBlackHoleTexture);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,&g_FireEffectSparkTexture);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,&g_FireEffectBlueSparkTexture);
  core_fire_cpp_flamingstake_FUN_004bfe00();
  uStack00000008 = 0x4c7af7;
  core_fire_cpp_FireBalls_FUN_004c0ad0();
  uStack0000000c = 0x4c7afc;
  core_fire_cpp_DoNothing_FUN_004c17e0();
  uStack00000010 = 0x4c7b01;
  core_fire_cpp_FUN_004c41d0();
  uStack00000014 = 0x4c7b06;
  core_fire_cpp_FUN_004c4d50();
  uStack00000018 = 0x4c7b0b;
  core_fire_cpp_GunFlashModel_FUN_004c1be0();
  uStack0000001c = 0x4c7b10;
  core_fire_cpp_FUN_004c5600();
  uStack00000020 = 0x4c7b15;
  core_fire_cpp_Debris_FUN_004c38d0();
  return;
}


// Assembly code:
// 004c7ab0: PUSH EBX
//   Label: core_fire.cpp_CFireEffect_FUN_004c7ab0
// 004c7ab1: PUSH 0x67a794
//   XREF to: 0067a794 (DATA)
// 004c7ab6: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004c7abc: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004c7abd: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 004c7ac2: ADD ESP,0x8
// 004c7ac5: PUSH 0x67a7ac
//   XREF to: 0067a7ac (DATA)
// 004c7aca: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004c7ad0: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004c7ad1: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 004c7ad6: ADD ESP,0x8
// 004c7ad9: PUSH 0x67a7c4
//   XREF to: 0067a7c4 (DATA)
// 004c7ade: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004c7ae4: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 004c7ae5: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 004c7aea: ADD ESP,0x8
// 004c7aed: CALL core_fire.cpp_flamingstake_FUN_004bfe00
//   XREF to: 004bfe00 (UNCONDITIONAL_CALL)
// 004c7af2: CALL core_fire.cpp_FireBalls_FUN_004c0ad0
//   XREF to: 004c0ad0 (UNCONDITIONAL_CALL)
// 004c7af7: CALL core_fire.cpp_DoNothing_FUN_004c17e0
//   XREF to: 004c17e0 (UNCONDITIONAL_CALL)
// 004c7afc: CALL core_fire.cpp_FUN_004c41d0
//   XREF to: 004c41d0 (UNCONDITIONAL_CALL)
// 004c7b01: CALL core_fire.cpp_FUN_004c4d50
//   XREF to: 004c4d50 (UNCONDITIONAL_CALL)
// 004c7b06: CALL core_fire.cpp_GunFlashModel_FUN_004c1be0
//   XREF to: 004c1be0 (UNCONDITIONAL_CALL)
// 004c7b0b: CALL core_fire.cpp_FUN_004c5600
//   XREF to: 004c5600 (UNCONDITIONAL_CALL)
// 004c7b10: CALL core_fire.cpp_Debris_FUN_004c38d0
//   XREF to: 004c38d0 (UNCONDITIONAL_CALL)
// 004c7b15: POP EBX
// 004c7b16: RET
