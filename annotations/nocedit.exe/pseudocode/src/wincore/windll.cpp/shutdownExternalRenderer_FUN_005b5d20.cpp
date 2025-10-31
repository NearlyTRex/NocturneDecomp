// Name: wincore_windll.cpp_shutdownExternalRenderer_FUN_005b5d20
// Address: 005b5d20
// Address Range: [[005b5d20, 005b5eb0]]
// Convention: __cdecl
// Signature: void wincore_windll.cpp_shutdownExternalRenderer_FUN_005b5d20(void)
// Cross-references:
//   wincore_windll.cpp_initializeExternalRenderer_FUN_005b5ec0 (005b5ec0) at 005b66f3 [UNCONDITIONAL_CALL]
//   wincore_windll.cpp_kill_FUN_005b71e0 (005b71e0) at 005b71f5 [UNCONDITIONAL_CALL]
//   wincore_windll.cpp_loadExternalRenderer_FUN_005b6750 (005b6750) at 005b6fa1 [UNCONDITIONAL_CALL]
// Globals:
//   int g_UseExternalRenderer
//   APIDLL_init* g_APIDLL_init
//   APIDLL_kill* g_APIDLL_kill
//   APIDLL_toggle* g_APIDLL_toggle
//   void* g_APIDLL_setVideoMode
//   APIDLL_setVideoMode2* g_APIDLL_setVideoMode2
//   APIDLL_restoreVideoMode* g_APIDLL_restoreVideoMode
//   APIDLL_beginScene* g_APIDLL_beginScene
//   APIDLL_endScene* g_APIDLL_endScene
//   APIDLL_lockFrame* g_APIDLL_lockFrame
//   APIDLL_unlockFrame* g_APIDLL_unlockFrame
//   APIDLL_selectTexture* g_APIDLL_selectTexture
//   APIDLL_updateTexture* g_APIDLL_updateTexture
//   APIDLL_setMipMapLevel* g_APIDLL_setMipMapLevel
//   APIDLL_drawPolygon* g_APIDLL_drawPolygon
//   APIDLL_drawPolygon2* g_APIDLL_drawPolygon2
//   APIDLL_drawPolyList* g_APIDLL_drawPolyList
//   APIDLL_drawPolyList2* g_APIDLL_drawPolyList2
//   APIDLL_drawPolyList3* g_APIDLL_drawPolyList3
//   APIDLL_addParticle* g_APIDLL_addParticle
//   APIDLL_flushParticleList* g_APIDLL_flushParticleList
//   APIDLL_add3dLine* g_APIDLL_add3dLine
//   APIDLL_flushLineList* g_APIDLL_flushLineList
//   APIDLL_clear* g_APIDLL_clear
//   APIDLL_setFogColor* g_APIDLL_setFogColor
//   APIDLL_sync* g_APIDLL_sync
//   APIDLL_clearZBuffer* g_APIDLL_clearZBuffer
//   APIDLL_clearZBox* g_APIDLL_clearZBox
//   APIDLL_setColorTable16* g_APIDLL_setColorTable16
//   void* g_APIDLL_GetDisplayContext
//   void* g_APIDLL_ReleaseDisplayContext
//   APIDLL_masterZBuffer* g_APIDLL_masterZBuffer
//   APIDLL_restoreZBuffer* g_APIDLL_restoreZBuffer
//   APIDLL_getVideoMemory* g_APIDLL_getVideoMemory
//   APIDLL_selectCard* g_APIDLL_selectCard
//   APIDLL_buildCardList* g_APIDLL_buildCardList
//   APIDLL_lockHoldBuffer* g_APIDLL_lockHoldBuffer
//   APIDLL_unlockHoldBuffer* g_APIDLL_unlockHoldBuffer
//   APIDLL_lockTexture* g_APIDLL_lockTexture
//   APIDLL_unlockTexture* g_APIDLL_unlockTexture
//   APIDLL_getTextureInfo* g_APIDLL_getTextureInfo
//   APIDLL_setVideoModeX* g_APIDLL_setVideoModeX
//   APIDLL_restoreVideoModeX* g_APIDLL_restoreVideoModeX
//   APIDLL_lockFrameX* g_APIDLL_lockFrameX
//   APIDLL_unlockFrameX* g_APIDLL_unlockFrameX
//   APIDLL_toggleX* g_APIDLL_toggleX
//   void* g_APIDLL_setViewport
//   void* g_APIDLL_setLightConstants
//   void* g_APIDLL_setLightVector
//   void* g_APIDLL_setAmbientLight
//   void* g_APIDLL_setTransform
//   void* g_APIDLL_polyList
//   void* g_APIDLL_getTextureHandle
//   void* g_APIDLL_selectTextureByHandle
//   void* g_APIDLL_enableCulling
//   void* g_APIDLL_enableClipping
//   void* g_APIDLL_setTextureClamp
//   void* g_APIDLL_setFog
//   int g_ExternalRendererActive
//   HMODULE g_RendererDLLHandle
// Function calls:
//   wincore_wddvmem.cpp_freeLibrary_FUN_005ede00

#include "nocturne.h"

void __cdecl wincore_windll_cpp_shutdownExternalRenderer_FUN_005b5d20(void)

{
  g_UseExternalRenderer = 0;
  g_ExternalRendererActive = 0;
  if (g_RendererDLLHandle != (HMODULE)0x0) {
    wincore_wddvmem_cpp_freeLibrary_FUN_005ede00(g_RendererDLLHandle);
    g_RendererDLLHandle = (HMODULE)0x0;
  }
  g_APIDLL_kill = (APIDLL_kill *)0x0;
  g_APIDLL_toggle = (APIDLL_toggle *)0x0;
  g_APIDLL_setVideoMode = (void *)0x0;
  g_APIDLL_setVideoMode2 = (APIDLL_setVideoMode2 *)0x0;
  g_APIDLL_restoreVideoMode = (APIDLL_restoreVideoMode *)0x0;
  g_APIDLL_beginScene = (APIDLL_beginScene *)0x0;
  g_APIDLL_endScene = (APIDLL_endScene *)0x0;
  g_APIDLL_lockFrame = (APIDLL_lockFrame *)0x0;
  g_APIDLL_unlockFrame = (APIDLL_unlockFrame *)0x0;
  g_APIDLL_selectTexture = (APIDLL_selectTexture *)0x0;
  g_APIDLL_updateTexture = (APIDLL_updateTexture *)0x0;
  g_APIDLL_setMipMapLevel = (APIDLL_setMipMapLevel *)0x0;
  g_APIDLL_drawPolygon = (APIDLL_drawPolygon *)0x0;
  g_APIDLL_drawPolygon2 = (APIDLL_drawPolygon2 *)0x0;
  g_APIDLL_drawPolyList = (APIDLL_drawPolyList *)0x0;
  g_APIDLL_drawPolyList2 = (APIDLL_drawPolyList2 *)0x0;
  g_APIDLL_drawPolyList3 = (APIDLL_drawPolyList3 *)0x0;
  g_APIDLL_addParticle = (APIDLL_addParticle *)0x0;
  g_APIDLL_flushParticleList = (APIDLL_flushParticleList *)0x0;
  g_APIDLL_add3dLine = (APIDLL_add3dLine *)0x0;
  g_APIDLL_flushLineList = (APIDLL_flushLineList *)0x0;
  g_APIDLL_clear = (APIDLL_clear *)0x0;
  g_APIDLL_setFogColor = (APIDLL_setFogColor *)0x0;
  g_APIDLL_sync = (APIDLL_sync *)0x0;
  g_APIDLL_clearZBuffer = (APIDLL_clearZBuffer *)0x0;
  g_APIDLL_clearZBox = (APIDLL_clearZBox *)0x0;
  g_APIDLL_setColorTable16 = (APIDLL_setColorTable16 *)0x0;
  g_APIDLL_GetDisplayContext = (void *)0x0;
  g_APIDLL_ReleaseDisplayContext = (void *)0x0;
  g_APIDLL_masterZBuffer = (APIDLL_masterZBuffer *)0x0;
  g_APIDLL_restoreZBuffer = (APIDLL_restoreZBuffer *)0x0;
  g_APIDLL_getVideoMemory = (APIDLL_getVideoMemory *)0x0;
  g_APIDLL_selectCard = (APIDLL_selectCard *)0x0;
  g_APIDLL_buildCardList = (APIDLL_buildCardList *)0x0;
  g_APIDLL_lockHoldBuffer = (APIDLL_lockHoldBuffer *)0x0;
  g_APIDLL_unlockHoldBuffer = (APIDLL_unlockHoldBuffer *)0x0;
  g_APIDLL_lockTexture = (APIDLL_lockTexture *)0x0;
  g_APIDLL_unlockTexture = (APIDLL_unlockTexture *)0x0;
  g_APIDLL_getTextureInfo = (APIDLL_getTextureInfo *)0x0;
  g_APIDLL_setVideoModeX = (APIDLL_setVideoModeX *)0x0;
  g_APIDLL_restoreVideoModeX = (APIDLL_restoreVideoModeX *)0x0;
  g_APIDLL_lockFrameX = (APIDLL_lockFrameX *)0x0;
  g_APIDLL_unlockFrameX = (APIDLL_unlockFrameX *)0x0;
  g_APIDLL_toggleX = (APIDLL_toggleX *)0x0;
  g_APIDLL_setViewport = (void *)0x0;
  g_APIDLL_setLightConstants = (void *)0x0;
  g_APIDLL_setLightVector = (void *)0x0;
  g_APIDLL_setAmbientLight = (void *)0x0;
  g_APIDLL_setTransform = (void *)0x0;
  g_APIDLL_polyList = (void *)0x0;
  g_APIDLL_getTextureHandle = (void *)0x0;
  g_APIDLL_selectTextureByHandle = (void *)0x0;
  g_APIDLL_enableCulling = (void *)0x0;
  g_APIDLL_enableClipping = (void *)0x0;
  g_APIDLL_setTextureClamp = (void *)0x0;
  g_APIDLL_setFog = (void *)0x0;
  g_APIDLL_init = (APIDLL_init *)0x0;
  return;
}


// Assembly code:
// 005b5d20: PUSH EBX
//   Label: wincore_windll.cpp_shutdownExternalRenderer_FUN_005b5d20
// 005b5d21: PUSH EBP
// 005b5d22: XOR EDX,EDX
// 005b5d24: MOV EBX,dword ptr [0x03f6b97c]
//   XREF to: 03f6b97c (READ)
// 005b5d2a: MOV dword ptr [0x02d03e94],EDX
//   XREF to: 02d03e94 (WRITE)
// 005b5d30: MOV dword ptr [0x03f6b978],EDX
//   XREF to: 03f6b978 (WRITE)
// 005b5d36: TEST EBX,EBX
// 005b5d38: JNZ 0x005b5e99
//   XREF to: 005b5e99 (CONDITIONAL_JUMP)
// 005b5d3e: XOR EBP,EBP
//   Label: LAB_005b5d3e
// 005b5d40: MOV dword ptr [0x03f6b890],EBP
//   XREF to: 03f6b890 (WRITE)
// 005b5d46: MOV dword ptr [0x03f6b894],EBP
//   XREF to: 03f6b894 (WRITE)
// 005b5d4c: MOV dword ptr [0x03f6b898],EBP
//   XREF to: 03f6b898 (WRITE)
// 005b5d52: MOV dword ptr [0x03f6b89c],EBP
//   XREF to: 03f6b89c (WRITE)
// 005b5d58: MOV dword ptr [0x03f6b8a0],EBP
//   XREF to: 03f6b8a0 (WRITE)
// 005b5d5e: MOV dword ptr [0x03f6b8a4],EBP
//   XREF to: 03f6b8a4 (WRITE)
// 005b5d64: MOV dword ptr [0x03f6b8a8],EBP
//   XREF to: 03f6b8a8 (WRITE)
// 005b5d6a: MOV dword ptr [0x03f6b8ac],EBP
//   XREF to: 03f6b8ac (WRITE)
// 005b5d70: MOV dword ptr [0x03f6b8b0],EBP
//   XREF to: 03f6b8b0 (WRITE)
// 005b5d76: MOV dword ptr [0x03f6b8b4],EBP
//   XREF to: 03f6b8b4 (WRITE)
// 005b5d7c: MOV dword ptr [0x03f6b8b8],EBP
//   XREF to: 03f6b8b8 (WRITE)
// 005b5d82: MOV dword ptr [0x03f6b8c4],EBP
//   XREF to: 03f6b8c4 (WRITE)
// 005b5d88: MOV dword ptr [0x03f6b8c8],EBP
//   XREF to: 03f6b8c8 (WRITE)
// 005b5d8e: MOV dword ptr [0x03f6b8cc],EBP
//   XREF to: 03f6b8cc (WRITE)
// 005b5d94: MOV dword ptr [0x03f6b8d0],EBP
//   XREF to: 03f6b8d0 (WRITE)
// 005b5d9a: MOV dword ptr [0x03f6b8d4],EBP
//   XREF to: 03f6b8d4 (WRITE)
// 005b5da0: MOV dword ptr [0x03f6b8d8],EBP
//   XREF to: 03f6b8d8 (WRITE)
// 005b5da6: MOV dword ptr [0x03f6b8dc],EBP
//   XREF to: 03f6b8dc (WRITE)
// 005b5dac: MOV dword ptr [0x03f6b8e0],EBP
//   XREF to: 03f6b8e0 (WRITE)
// 005b5db2: MOV dword ptr [0x03f6b8e4],EBP
//   XREF to: 03f6b8e4 (WRITE)
// 005b5db8: MOV dword ptr [0x03f6b8e8],EBP
//   XREF to: 03f6b8e8 (WRITE)
// 005b5dbe: MOV dword ptr [0x03f6b8ec],EBP
//   XREF to: 03f6b8ec (WRITE)
// 005b5dc4: MOV dword ptr [0x03f6b8f0],EBP
//   XREF to: 03f6b8f0 (WRITE)
// 005b5dca: MOV dword ptr [0x03f6b8f4],EBP
//   XREF to: 03f6b8f4 (WRITE)
// 005b5dd0: MOV dword ptr [0x03f6b8f8],EBP
//   XREF to: 03f6b8f8 (WRITE)
// 005b5dd6: MOV dword ptr [0x03f6b8fc],EBP
//   XREF to: 03f6b8fc (WRITE)
// 005b5ddc: MOV dword ptr [0x03f6b900],EBP
//   XREF to: 03f6b900 (WRITE)
// 005b5de2: MOV dword ptr [0x03f6b904],EBP
//   XREF to: 03f6b904 (WRITE)
// 005b5de8: MOV dword ptr [0x03f6b908],EBP
//   XREF to: 03f6b908 (WRITE)
// 005b5dee: MOV dword ptr [0x03f6b90c],EBP
//   XREF to: 03f6b90c (WRITE)
// 005b5df4: MOV dword ptr [0x03f6b910],EBP
//   XREF to: 03f6b910 (WRITE)
// 005b5dfa: MOV dword ptr [0x03f6b914],EBP
//   XREF to: 03f6b914 (WRITE)
// 005b5e00: MOV dword ptr [0x03f6b918],EBP
//   XREF to: 03f6b918 (WRITE)
// 005b5e06: MOV dword ptr [0x03f6b91c],EBP
//   XREF to: 03f6b91c (WRITE)
// 005b5e0c: MOV dword ptr [0x03f6b920],EBP
//   XREF to: 03f6b920 (WRITE)
// 005b5e12: MOV dword ptr [0x03f6b924],EBP
//   XREF to: 03f6b924 (WRITE)
// 005b5e18: MOV dword ptr [0x03f6b928],EBP
//   XREF to: 03f6b928 (WRITE)
// 005b5e1e: MOV dword ptr [0x03f6b92c],EBP
//   XREF to: 03f6b92c (WRITE)
// 005b5e24: MOV dword ptr [0x03f6b930],EBP
//   XREF to: 03f6b930 (WRITE)
// 005b5e2a: MOV dword ptr [0x03f6b934],EBP
//   XREF to: 03f6b934 (WRITE)
// 005b5e30: MOV dword ptr [0x03f6b938],EBP
//   XREF to: 03f6b938 (WRITE)
// 005b5e36: MOV dword ptr [0x03f6b93c],EBP
//   XREF to: 03f6b93c (WRITE)
// 005b5e3c: MOV dword ptr [0x03f6b940],EBP
//   XREF to: 03f6b940 (WRITE)
// 005b5e42: MOV dword ptr [0x03f6b944],EBP
//   XREF to: 03f6b944 (WRITE)
// 005b5e48: MOV dword ptr [0x03f6b948],EBP
//   XREF to: 03f6b948 (WRITE)
// 005b5e4e: MOV dword ptr [0x03f6b94c],EBP
//   XREF to: 03f6b94c (WRITE)
// 005b5e54: MOV dword ptr [0x03f6b950],EBP
//   XREF to: 03f6b950 (WRITE)
// 005b5e5a: MOV dword ptr [0x03f6b954],EBP
//   XREF to: 03f6b954 (WRITE)
// 005b5e60: MOV dword ptr [0x03f6b958],EBP
//   XREF to: 03f6b958 (WRITE)
// 005b5e66: MOV dword ptr [0x03f6b95c],EBP
//   XREF to: 03f6b95c (WRITE)
// 005b5e6c: MOV dword ptr [0x03f6b960],EBP
//   XREF to: 03f6b960 (WRITE)
// 005b5e72: MOV dword ptr [0x03f6b964],EBP
//   XREF to: 03f6b964 (WRITE)
// 005b5e78: MOV dword ptr [0x03f6b968],EBP
//   XREF to: 03f6b968 (WRITE)
// 005b5e7e: MOV dword ptr [0x03f6b96c],EBP
//   XREF to: 03f6b96c (WRITE)
// 005b5e84: MOV dword ptr [0x03f6b970],EBP
//   XREF to: 03f6b970 (WRITE)
// 005b5e8a: MOV dword ptr [0x03f6b974],EBP
//   XREF to: 03f6b974 (WRITE)
// 005b5e90: MOV dword ptr [0x03f6b88c],EBP
//   XREF to: 03f6b88c (WRITE)
// 005b5e96: POP EBP
// 005b5e97: POP EBX
// 005b5e98: RET
// 005b5e99: PUSH EDI
//   Label: LAB_005b5e99
// 005b5e9a: PUSH EBX
// 005b5e9b: CALL wincore_wddvmem.cpp_freeLibrary_FUN_005ede00
//   XREF to: 005ede00 (UNCONDITIONAL_CALL)
// 005b5ea0: XOR EDI,EDI
// 005b5ea2: ADD ESP,0x4
// 005b5ea5: MOV dword ptr [0x03f6b97c],EDI
//   XREF to: 03f6b97c (WRITE)
// 005b5eab: POP EDI
// 005b5eac: JMP 0x005b5d3e
//   XREF to: 005b5d3e (UNCONDITIONAL_JUMP)
