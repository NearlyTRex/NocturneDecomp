// Name: engine_special.cpp_initializeExternalRenderer_FUN_00530e60
// Address: 00530e60
// Address Range: [[00530e60, 0053177c]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_initializeExternalRenderer_FUN_00530e60(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_initializeExternalRenderer_FUN_00530e60(void)

{
  FARPROC pFVar1;
  int iVar2;
  CExternalRenderer CStack_3b98;
  CExternalRenderer CStack_1dd0;
  
  g_RendererDLLHandle = wincore_wddvmem_cpp_FUN_00553d30("trid3d.dll");
  if (g_RendererDLLHandle == (HMODULE)0x0) {
    g_UseDirect3D = (int)g_RendererDLLHandle;
    return 0;
  }
  pFVar1 = wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (g_RendererDLLHandle,"APIDLLInformation");
  if (pFVar1 != (FARPROC)0x0) {
    (*pFVar1)(g_RendererDLLHandle,&CStack_3b98);
    engine_special_cpp_CExternalRenderer_ctor_FUN_00532da0(&CStack_1dd0);
    iVar2 = engine_special_cpp_CExternalRenderer_validate_FUN_00532df0(&CStack_3b98,&CStack_1dd0);
    if (iVar2 != 0) {
      g_APIDLL_init =
           (APIDLL_init *)
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (g_RendererDLLHandle,"APIDLLinit");
      if (g_APIDLL_init == (APIDLL_init *)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      g_APIDLL_kill =
           (APIDLL_kill *)
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (g_RendererDLLHandle,"APIDLLkill");
      if (g_APIDLL_kill == (APIDLL_kill *)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      g_APIDLL_toggle =
           (APIDLL_toggle *)
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (g_RendererDLLHandle,"APIDLLtoggle");
      if (g_APIDLL_toggle == (APIDLL_toggle *)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      g_APIDLL_setVideoMode =
           (APIDLL_setVideoMode *)
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (g_RendererDLLHandle,"APIDLLsetVideoMode");
      if (g_APIDLL_setVideoMode == (APIDLL_setVideoMode *)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      g_APIDLL_setVideoMode2 =
           (APIDLL_setVideoMode2 *)
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (g_RendererDLLHandle,"APIDLLsetVideoMode2");
      if (g_APIDLL_setVideoMode2 == (APIDLL_setVideoMode2 *)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      g_APIDLL_restoreVideoMode =
           (APIDLL_restoreVideoMode *)
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (g_RendererDLLHandle,"APIDLLrestoreVideoMode");
      if (g_APIDLL_restoreVideoMode == (APIDLL_restoreVideoMode *)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      g_APIDLL_beginScene =
           (APIDLL_beginScene *)
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (g_RendererDLLHandle,"APIDLLbeginScene");
      if (g_APIDLL_beginScene == (APIDLL_beginScene *)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      g_APIDLL_endScene =
           (APIDLL_endScene *)
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (g_RendererDLLHandle,"APIDLLendScene");
      if (g_APIDLL_endScene == (APIDLL_endScene *)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      g_APIDLL_lockFrame =
           (APIDLL_lockFrame *)
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (g_RendererDLLHandle,"APIDLLlockFrame");
      if (g_APIDLL_lockFrame == (APIDLL_lockFrame *)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      g_APIDLL_unlockFrame =
           (APIDLL_unlockFrame *)
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (g_RendererDLLHandle,"APIDLLunlockFrame");
      if (g_APIDLL_unlockFrame == (APIDLL_unlockFrame *)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      g_APIDLL_selectTexture =
           (APIDLL_selectTexture *)
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (g_RendererDLLHandle,"APIDLLselectTexture");
      if (g_APIDLL_selectTexture == (APIDLL_selectTexture *)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      g_APIDLL_updateTexture =
           (APIDLL_updateTexture *)
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (g_RendererDLLHandle,"APIDLLupdateTexture");
      if (g_APIDLL_updateTexture == (APIDLL_updateTexture *)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      g_APIDLL_setMipMapLevel =
           (APIDLL_setMipMapLevel *)
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (g_RendererDLLHandle,"APIDLLsetMipMapLevel");
      if (g_APIDLL_setMipMapLevel == (APIDLL_setMipMapLevel *)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      g_APIDLL_drawPolygon =
           (APIDLL_drawPolygon *)
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (g_RendererDLLHandle,"APIDLLdrawPolygon");
      if (g_APIDLL_drawPolygon == (APIDLL_drawPolygon *)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      g_APIDLL_drawPolygon2 =
           (APIDLL_drawPolygon2 *)
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (g_RendererDLLHandle,"APIDLLdrawPolygon2");
      if (g_APIDLL_drawPolygon2 == (APIDLL_drawPolygon2 *)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      g_APIDLL_drawPolyList =
           (APIDLL_drawPolyList *)
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (g_RendererDLLHandle,"APIDLLdrawPolyList");
      g_APIDLL_drawPolyList2 =
           (APIDLL_drawPolyList2 *)
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (g_RendererDLLHandle,"APIDLLdrawPolyList2");
      g_APIDLL_addParticle =
           (APIDLL_addParticle *)
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (g_RendererDLLHandle,"APIDLLaddParticle");
      if (g_APIDLL_addParticle == (APIDLL_addParticle *)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      g_APIDLL_flushParticleList =
           (APIDLL_flushParticleList *)
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (g_RendererDLLHandle,"APIDLLflushParticleList");
      if (g_APIDLL_flushParticleList == (APIDLL_flushParticleList *)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      g_APIDLL_add3dLine =
           (APIDLL_add3dLine *)
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (g_RendererDLLHandle,"APIDLLadd3dLine");
      if (g_APIDLL_add3dLine == (APIDLL_add3dLine *)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      g_APIDLL_flushLineList =
           (APIDLL_flushLineList *)
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (g_RendererDLLHandle,"APIDLLflushLineList");
      if (g_APIDLL_flushLineList == (APIDLL_flushLineList *)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      g_APIDLL_clear =
           (APIDLL_clear *)
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (g_RendererDLLHandle,"APIDLLclear");
      if (g_APIDLL_clear == (APIDLL_clear *)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      g_APIDLL_setFogColor =
           (APIDLL_setFogColor *)
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (g_RendererDLLHandle,"APIDLLsetFogColor");
      if (g_APIDLL_setFogColor == (APIDLL_setFogColor *)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      g_APIDLL_sync =
           (APIDLL_sync *)
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (g_RendererDLLHandle,"APIDLLsync");
      if (g_APIDLL_sync == (APIDLL_sync *)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      g_APIDLL_clearZBuffer =
           (APIDLL_clearZBuffer *)
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (g_RendererDLLHandle,"APIDLLclearZBuffer");
      if (g_APIDLL_clearZBuffer == (APIDLL_clearZBuffer *)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      g_APIDLL_clearZBox =
           (APIDLL_clearZBox *)
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (g_RendererDLLHandle,"APIDLLclearZBox");
      if (g_APIDLL_clearZBox == (APIDLL_clearZBox *)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      g_APIDLL_setColorTable16 =
           (APIDLL_setColorTable16 *)
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (g_RendererDLLHandle,"APIDLLsetColorTable16");
      if (g_APIDLL_setColorTable16 == (APIDLL_setColorTable16 *)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      g_APIDLL_getDisplayContext =
           (APIDLL_getDisplayContext *)
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (g_RendererDLLHandle,"APIDLLGetDisplayContext");
      if (g_APIDLL_getDisplayContext == (APIDLL_getDisplayContext *)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      g_APIDLL_releaseDisplayContext =
           (APIDLL_releaseDisplayContext *)
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (g_RendererDLLHandle,"APIDLLReleaseDisplayContext");
      if (g_APIDLL_releaseDisplayContext == (APIDLL_releaseDisplayContext *)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      g_APIDLL_masterZBuffer =
           (APIDLL_masterZBuffer *)
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (g_RendererDLLHandle,"APIDLLmasterZBuffer");
      if (g_APIDLL_masterZBuffer == (APIDLL_masterZBuffer *)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      g_APIDLL_restoreZBuffer =
           (APIDLL_restoreZBuffer *)
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (g_RendererDLLHandle,"APIDLLrestoreZBuffer");
      if (g_APIDLL_restoreZBuffer == (APIDLL_restoreZBuffer *)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      g_APIDLL_getVideoMemory =
           (APIDLL_getVideoMemory *)
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (g_RendererDLLHandle,"APIDLLgetVideoMemory");
      if (g_APIDLL_getVideoMemory == (APIDLL_getVideoMemory *)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      g_APIDLL_selectCard =
           (APIDLL_selectCard *)
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (g_RendererDLLHandle,"APIDLLselectCard");
      if (g_APIDLL_selectCard == (APIDLL_selectCard *)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      g_APIDLL_buildCardList =
           (APIDLL_buildCardList *)
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (g_RendererDLLHandle,"APIDLLbuildCardList");
      if (g_APIDLL_buildCardList == (APIDLL_buildCardList *)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      g_APIDLL_lockHoldBuffer =
           (APIDLL_lockHoldBuffer *)
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (g_RendererDLLHandle,"APIDLLlockHoldBuffer");
      g_APIDLL_unlockHoldBuffer =
           (APIDLL_unlockHoldBuffer *)
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (g_RendererDLLHandle,"APIDLLunlockHoldBuffer");
      g_LoadedExternalDLLRenderer = 1;
      return 1;
    }
    engine_special_cpp_shutdownExternalRenderer_FUN_00530d40();
    g_UseDirect3D = 0;
    return 0;
  }
  engine_special_cpp_shutdownExternalRenderer_FUN_00530d40();
  g_UseDirect3D = 0;
  return 0;
}
