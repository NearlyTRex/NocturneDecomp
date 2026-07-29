// Name: engine_special.cpp_FUN_00530e60
// Address: 00530e60
// Address Range: [[00530e60, 0053177c]]
// Convention: unknown
// Signature: undefined4 engine_special_cpp_FUN_00530e60(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint engine_special_cpp_FUN_00530e60(void)

{
  FARPROC pFVar1;
  int iVar2;
  CExternalRenderer CStack_3b98;
  CExternalRenderer CStack_1dd0;
  
  _DAT_02dc9e08 = wincore_wddvmem_cpp_FUN_00553d30(&DAT_005c0e80);
  if (_DAT_02dc9e08 == (HMODULE)0x0) {
    INT_02dc9d60 = (int)_DAT_02dc9e08;
    return 0;
  }
  pFVar1 = wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLInformation");
  if (pFVar1 != (FARPROC)0x0) {
    (*pFVar1)(_DAT_02dc9e08,&CStack_3b98);
    engine_special_cpp_CExternalRenderer_ctor_FUN_00532da0(&CStack_1dd0);
    iVar2 = engine_special_cpp_CExternalRenderer_validate_FUN_00532df0(&CStack_3b98,&CStack_1dd0);
    if (iVar2 != 0) {
      _DAT_02dc9d74 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40(_DAT_02dc9e08,"APIDLLinit");
      if (_DAT_02dc9d74 == (FARPROC)0x0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9d78 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40(_DAT_02dc9e08,"APIDLLkill");
      if (_DAT_02dc9d78 == (FARPROC)0x0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9d7c =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40(_DAT_02dc9e08,"APIDLLtoggle");
      if (_DAT_02dc9d7c == (FARPROC)0x0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9d80 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLsetVideoMode");
      if (_DAT_02dc9d80 == (FARPROC)0x0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9d84 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLsetVideoMode2");
      if (_DAT_02dc9d84 == (FARPROC)0x0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9d88 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLrestoreVideoMode");
      if (_DAT_02dc9d88 == (FARPROC)0x0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9d8c =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLbeginScene");
      if (_DAT_02dc9d8c == (FARPROC)0x0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9d90 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40(_DAT_02dc9e08,"APIDLLendScene");
      if (_DAT_02dc9d90 == (FARPROC)0x0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9d94 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40(_DAT_02dc9e08,"APIDLLlockFrame")
      ;
      if (_DAT_02dc9d94 == (FARPROC)0x0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9d98 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLunlockFrame");
      if (_DAT_02dc9d98 == (FARPROC)0x0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9d9c =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLselectTexture");
      if (_DAT_02dc9d9c == (FARPROC)0x0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9da0 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLupdateTexture");
      if (_DAT_02dc9da0 == (FARPROC)0x0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9da4 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLsetMipMapLevel");
      if (_DAT_02dc9da4 == (FARPROC)0x0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9da8 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLdrawPolygon");
      if (_DAT_02dc9da8 == (FARPROC)0x0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9dac =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLdrawPolygon2");
      if (_DAT_02dc9dac == (FARPROC)0x0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
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
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9dbc =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLflushParticleList");
      if (_DAT_02dc9dbc == (FARPROC)0x0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9dc0 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40(_DAT_02dc9e08,"APIDLLadd3dLine")
      ;
      if (_DAT_02dc9dc0 == (FARPROC)0x0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9dc4 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLflushLineList");
      if (_DAT_02dc9dc4 == (FARPROC)0x0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9dc8 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40(_DAT_02dc9e08,"APIDLLclear");
      if (_DAT_02dc9dc8 == (FARPROC)0x0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9dcc =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLsetFogColor");
      if (_DAT_02dc9dcc == (FARPROC)0x0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9dd0 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40(_DAT_02dc9e08,"APIDLLsync");
      if (_DAT_02dc9dd0 == (FARPROC)0x0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9dd4 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLclearZBuffer");
      if (_DAT_02dc9dd4 == (FARPROC)0x0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9dd8 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40(_DAT_02dc9e08,"APIDLLclearZBox")
      ;
      if (_DAT_02dc9dd8 == (FARPROC)0x0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9ddc =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLsetColorTable16");
      if (_DAT_02dc9ddc == (FARPROC)0x0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9de0 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLGetDisplayContext");
      if (_DAT_02dc9de0 == (FARPROC)0x0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9de4 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLReleaseDisplayContext");
      if (_DAT_02dc9de4 == (FARPROC)0x0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9de8 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLmasterZBuffer");
      if (_DAT_02dc9de8 == (FARPROC)0x0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9dec =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLrestoreZBuffer");
      if (_DAT_02dc9dec == (FARPROC)0x0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9df0 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLgetVideoMemory");
      if (_DAT_02dc9df0 == (FARPROC)0x0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9df4 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLselectCard");
      if (_DAT_02dc9df4 == (FARPROC)0x0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9df8 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLbuildCardList");
      if (_DAT_02dc9df8 == (FARPROC)0x0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9dfc =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLlockHoldBuffer");
      _DAT_02dc9e00 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLunlockHoldBuffer");
      INT_02dc9e04 = 1;
      return 1;
    }
    engine_special_cpp_FUN_00530d40();
    INT_02dc9d60 = 0;
    return 0;
  }
  engine_special_cpp_FUN_00530d40();
  INT_02dc9d60 = 0;
  return 0;
}
