// Name: engine_special.cpp_FUN_00530e60
// Address: 00530e60
// Address Range: [[00530e60, 0053177c]]
// Convention: unknown
// Signature: undefined4 engine_special_cpp_FUN_00530e60(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint engine_special_cpp_FUN_00530e60(void)

{
  code *pcVar1;
  int iVar2;
  byte auStack_3b98 [7624];
  byte auStack_1dd0 [7624];
  
  _DAT_02dc9e08 = wincore_wddvmem_cpp_FUN_00553d30(&DAT_005c0e80);
  if (_DAT_02dc9e08 == 0) {
    INT_02dc9d60 = _DAT_02dc9e08;
    return 0;
  }
  pcVar1 = (code *)wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                             (_DAT_02dc9e08,"APIDLLInformation");
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(_DAT_02dc9e08,auStack_3b98);
    engine_special_cpp_CExternalRenderer_ctor_FUN_00532da0(auStack_1dd0);
    iVar2 = engine_special_cpp_CExternalRenderer_validate_FUN_00532df0(auStack_3b98,auStack_1dd0);
    if (iVar2 != 0) {
      _DAT_02dc9d74 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40(_DAT_02dc9e08,"APIDLLinit");
      if (_DAT_02dc9d74 == 0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9d78 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40(_DAT_02dc9e08,"APIDLLkill");
      if (_DAT_02dc9d78 == 0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9d7c =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40(_DAT_02dc9e08,"APIDLLtoggle");
      if (_DAT_02dc9d7c == 0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9d80 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLsetVideoMode");
      if (_DAT_02dc9d80 == 0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9d84 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLsetVideoMode2");
      if (_DAT_02dc9d84 == 0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9d88 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLrestoreVideoMode");
      if (_DAT_02dc9d88 == 0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9d8c =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLbeginScene");
      if (_DAT_02dc9d8c == 0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9d90 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40(_DAT_02dc9e08,"APIDLLendScene");
      if (_DAT_02dc9d90 == 0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9d94 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40(_DAT_02dc9e08,"APIDLLlockFrame")
      ;
      if (_DAT_02dc9d94 == 0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9d98 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLunlockFrame");
      if (_DAT_02dc9d98 == 0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9d9c =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLselectTexture");
      if (_DAT_02dc9d9c == 0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9da0 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLupdateTexture");
      if (_DAT_02dc9da0 == 0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9da4 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLsetMipMapLevel");
      if (_DAT_02dc9da4 == 0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9da8 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLdrawPolygon");
      if (_DAT_02dc9da8 == 0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9dac =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLdrawPolygon2");
      if (_DAT_02dc9dac == 0) {
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
      if (_DAT_02dc9db8 == 0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9dbc =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLflushParticleList");
      if (_DAT_02dc9dbc == 0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9dc0 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40(_DAT_02dc9e08,"APIDLLadd3dLine")
      ;
      if (_DAT_02dc9dc0 == 0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9dc4 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLflushLineList");
      if (_DAT_02dc9dc4 == 0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9dc8 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40(_DAT_02dc9e08,"APIDLLclear");
      if (_DAT_02dc9dc8 == 0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9dcc =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLsetFogColor");
      if (_DAT_02dc9dcc == 0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9dd0 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40(_DAT_02dc9e08,"APIDLLsync");
      if (_DAT_02dc9dd0 == 0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9dd4 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLclearZBuffer");
      if (_DAT_02dc9dd4 == 0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9dd8 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40(_DAT_02dc9e08,"APIDLLclearZBox")
      ;
      if (_DAT_02dc9dd8 == 0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9ddc =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLsetColorTable16");
      if (_DAT_02dc9ddc == 0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9de0 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLGetDisplayContext");
      if (_DAT_02dc9de0 == 0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9de4 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLReleaseDisplayContext");
      if (_DAT_02dc9de4 == 0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9de8 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLmasterZBuffer");
      if (_DAT_02dc9de8 == 0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9dec =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLrestoreZBuffer");
      if (_DAT_02dc9dec == 0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9df0 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLgetVideoMemory");
      if (_DAT_02dc9df0 == 0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9df4 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLselectCard");
      if (_DAT_02dc9df4 == 0) {
        PTR_01cc4800 = "..\\engine\\special.c";
        INT_01cc4804 = 0x86;
        core_main_c_FUN_004c8440("Unable to find function!");
      }
      _DAT_02dc9df8 =
           wincore_wddvmem_cpp_getProcAddress_FUN_00553d40
                     (_DAT_02dc9e08,"APIDLLbuildCardList");
      if (_DAT_02dc9df8 == 0) {
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
