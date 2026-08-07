// Name: engine_special.cpp_loadExternalRenderer_FUN_00531780
// Address: 00531780
// Address Range: [[00531780, 005322a5]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_loadExternalRenderer_FUN_00531780(HWND window_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_loadExternalRenderer_FUN_00531780(HWND window_handle)

{
  HWND HVar1;
  FARPROC pFVar2;
  int iVar3;
  CExternalRenderer CStack_3c2c;
  CExternalRenderer local_1e64;
  _BIT_INTEGER32 *p_Stack_9c;
  int *piStack_98;
  _BIT_INTEGER32 *p_Stack_94;
  _BIT_INTEGER32 *p_Stack_90;
  int *piStack_8c;
  _BIT_INTEGER32 *p_Stack_88;
  _BIT_INTEGER32 *p_Stack_84;
  int *piStack_80;
  _BIT_INTEGER32 *p_Stack_7c;
  byte *puStack_78;
  int *piStack_74;
  uint *puStack_70;
  int *piStack_6c;
  int *piStack_68;
  int *piStack_64;
  int *piStack_60;
  int *piStack_5c;
  byte *puStack_58;
  uint *puStack_54;
  byte *puStack_50;
  byte *puStack_4c;
  byte *puStack_48;
  byte *puStack_44;
  uint uStack_40;
  byte *puStack_3c;
  byte *puStack_38;
  byte *puStack_34;
  byte *puStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  HVar1 = window_handle;
  if (window_handle == 0) {
    HVar1 = _DAT_02dc9e18;
  }
  _DAT_02dc9e18 = HVar1;
  HVar1 = _DAT_02dc9e18;
  if (INT_02dc9d60 == 0) {
    return 0;
  }
  _DAT_02dc9e08 = wincore_wddvmem_cpp_FUN_00553d30(&DAT_005c0e80);
  if (_DAT_02dc9e08 == (HMODULE)0x0) {
    INT_02dc9d60 = (int)_DAT_02dc9e08;
    return 0;
  }
  pFVar2 = wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLInformation");
  if (pFVar2 != (FARPROC)0x0) {
    (*pFVar2)(_DAT_02dc9e08,&local_1e64);
    engine_special_cpp_CExternalRenderer_ctor_FUN_00532da0(&CStack_3c2c);
    iVar3 = engine_special_cpp_CExternalRenderer_validate_FUN_00532df0(&local_1e64,&CStack_3c2c);
    if (iVar3 != 0) {
      _DAT_02dc9d74 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40(_DAT_02dc9e08,"APIDLLinit");
      if (_DAT_02dc9d74 == (FARPROC)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9d78 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40(_DAT_02dc9e08,"APIDLLkill");
      if (_DAT_02dc9d78 == (FARPROC)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9d7c =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40(_DAT_02dc9e08,"APIDLLtoggle");
      if (_DAT_02dc9d7c == (FARPROC)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9d80 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLsetVideoMode");
      if (_DAT_02dc9d80 == (FARPROC)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9d84 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLsetVideoMode2");
      if (_DAT_02dc9d84 == (FARPROC)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9d88 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLrestoreVideoMode");
      if (_DAT_02dc9d88 == (FARPROC)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9d8c =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLbeginScene");
      if (_DAT_02dc9d8c == (FARPROC)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9d90 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40(_DAT_02dc9e08,"APIDLLendScene");
      if (_DAT_02dc9d90 == (FARPROC)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9d94 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40(_DAT_02dc9e08,"APIDLLlockFrame")
      ;
      if (_DAT_02dc9d94 == (FARPROC)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9d98 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLunlockFrame");
      if (_DAT_02dc9d98 == (FARPROC)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9d9c =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLselectTexture");
      if (_DAT_02dc9d9c == (FARPROC)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9da0 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLupdateTexture");
      if (_DAT_02dc9da0 == (FARPROC)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9da4 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLsetMipMapLevel");
      if (_DAT_02dc9da4 == (FARPROC)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9da8 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLdrawPolygon");
      if (_DAT_02dc9da8 == (FARPROC)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9dac =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLdrawPolygon2");
      if (_DAT_02dc9dac == (FARPROC)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9db0 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLdrawPolyList");
      _DAT_02dc9db4 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLdrawPolyList2");
      _DAT_02dc9db8 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLaddParticle");
      if (_DAT_02dc9db8 == (FARPROC)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9dbc =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLflushParticleList");
      if (_DAT_02dc9dbc == (FARPROC)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9dc0 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40(_DAT_02dc9e08,"APIDLLadd3dLine")
      ;
      if (_DAT_02dc9dc0 == (FARPROC)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9dc4 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLflushLineList");
      if (_DAT_02dc9dc4 == (FARPROC)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9dc8 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40(_DAT_02dc9e08,"APIDLLclear");
      if (_DAT_02dc9dc8 == (FARPROC)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9dcc =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLsetFogColor");
      if (_DAT_02dc9dcc == (FARPROC)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9dd0 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40(_DAT_02dc9e08,"APIDLLsync");
      if (_DAT_02dc9dd0 == (FARPROC)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9dd4 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLclearZBuffer");
      if (_DAT_02dc9dd4 == (FARPROC)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9dd8 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40(_DAT_02dc9e08,"APIDLLclearZBox")
      ;
      if (_DAT_02dc9dd8 == (FARPROC)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9ddc =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLsetColorTable16");
      if (_DAT_02dc9ddc == (FARPROC)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9de0 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLGetDisplayContext");
      if (_DAT_02dc9de0 == (FARPROC)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9de4 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLReleaseDisplayContext");
      if (_DAT_02dc9de4 == (FARPROC)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9de8 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLmasterZBuffer");
      if (_DAT_02dc9de8 == (FARPROC)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9dec =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLrestoreZBuffer");
      if (_DAT_02dc9dec == (FARPROC)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9df0 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLgetVideoMemory");
      if (_DAT_02dc9df0 == (FARPROC)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9df4 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLselectCard");
      if (_DAT_02dc9df4 == (FARPROC)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9df8 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLbuildCardList");
      if (_DAT_02dc9df8 == (FARPROC)0x0) {
        g_CurrentFilename = "..\\engine\\special.c";
        g_CurrentLineNumber = 134;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9dfc =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLlockHoldBuffer");
      _DAT_02dc9e00 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLunlockHoldBuffer");
      INT_02dc9e04 = 1;
      memset(&p_Stack_9c,0,0x8c);
      p_Stack_9c = &g_RedBitPosition;
      piStack_98 = &g_RedScaleFactor;
      p_Stack_94 = &g_RedDitherShift;
      p_Stack_90 = &g_GreenBitPosition;
      piStack_8c = &g_GreenScaleFactor;
      p_Stack_88 = &g_GreenDitherShift;
      p_Stack_84 = &g_BlueBitPosition;
      piStack_80 = &g_BlueScaleFactor;
      p_Stack_7c = &g_BlueDitherShift;
      puStack_78 = &DAT_01c03998;
      piStack_74 = &g_CurrentLightingValue;
      puStack_70 = &DAT_005b763c;
      piStack_6c = &g_ActiveRenderColor;
      piStack_68 = &g_ClipLeft;
      piStack_64 = &g_ClipTop;
      piStack_60 = &g_ClipRight;
      piStack_5c = &g_ClipBottom;
      puStack_58 = &DAT_005b7628;
      puStack_54 = &DAT_005b762c;
      puStack_50 = &DAT_01c02590;
      puStack_4c = &DAT_005c0f8c;
      puStack_48 = &DAT_005c0f84;
      puStack_44 = &DAT_005c0f88;
      uStack_40 = 0x2dc9d68;
      puStack_3c = &DAT_005c0f80;
      puStack_38 = &DAT_02dc9d6c;
      puStack_34 = &DAT_01c0399c;
      puStack_30 = &DAT_005b7640;
      uStack_2c = 0x30;
      uStack_28 = 0x2c;
      uStack_14 = 0x2c;
      uStack_24 = 0xc;
      uStack_20 = 0x20;
      uStack_18 = 0x24;
      uStack_1c = 0x28;
      iVar3 = (*_DAT_02dc9d74)(HVar1,&p_Stack_9c);
      if (iVar3 != 0) {
        engine_special_cpp_selectCard_FUN_00532d00(_DAT_02dc9d64);
        return 1;
      }
      INT_02dc9d60 = iVar3;
      return 0;
    }
  }
  engine_special_cpp_FUN_00530d40();
  INT_02dc9d60 = 0;
  return 0;
}
