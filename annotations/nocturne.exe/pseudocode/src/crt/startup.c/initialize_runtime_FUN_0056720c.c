// Name: crt_startup.c_initialize_runtime_FUN_0056720c
// Address: 0056720c
// Address Range: [[0056720c, 00567455]]
// Convention: __cdecl
// Signature: void __cdecl crt_startup_c_initialize_runtime_FUN_0056720c(HMODULE hModule,void *pThreadParam,int unused)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl initialize_runtime(HMODULE hModule,void *pThreadParam,int unused)

{
  char cVar1;
  short sVar2;
  DWORD DVar3;
  LPSTR pCVar4;
  char *pcVar5;
  LPWSTR pWVar6;
  short *psVar7;
  
  _DAT_02de4e30 = hModule;
  _DAT_02de4e3c = FUN_0056e56c(pThreadParam);
  if (_DAT_02de4e3c == 0) {
    if (hModule == (HMODULE)0x0) {
                    /* WARNING: Subroutine does not return */
      ExitProcess(1);
    }
  }
  else {
    FUN_0056e1a0();
    _DAT_005c1d09 = GetEnvironmentStrings();
    _DAT_02de54a4 = 0;
    DVar3 = GetVersion();
    DAT_005c1d0f = (byte)DVar3;
    DAT_005c1d11 = (ushort)(DVar3 >> 0x10);
    _DAT_005c1d13 = (uint)DAT_005c1d11;
    DAT_005c1d10 = (byte)(DVar3 >> 8);
    DAT_005c1d17 = DVar3 & 0xff;
    DAT_005c1d1b = (uint)DAT_005c1d10;
    _DAT_005c1d1f = DAT_005c1d17 << 8 | DAT_005c1d1b;
    GetModuleFileNameA((HMODULE)0x0,&DAT_02de4e40,0x104);
    _DAT_005c1cd0 = &DAT_02de4e40;
    FUN_0056e890(0,0x2de4f44,0x208);
    _DAT_005c1cdc = 0x2de4f44;
    pCVar4 = GetCommandLineA();
    _DAT_02de4e34 = (char *)FUN_0056e940(pCVar4);
    DAT_005c1ccc = _DAT_02de4e34;
    if (*_DAT_02de4e34 == '\"') {
      cVar1 = _DAT_02de4e34[1];
      pcVar5 = _DAT_02de4e34;
      while ((DAT_005c1ccc = pcVar5 + 1, cVar1 != '\"' && (*DAT_005c1ccc != '\0'))) {
        cVar1 = pcVar5[2];
        pcVar5 = DAT_005c1ccc;
      }
      if (*DAT_005c1ccc != '\0') {
        DAT_005c1ccc = pcVar5 + 2;
      }
    }
    else {
      for (; (((&DAT_005c168c)[(byte)(*DAT_005c1ccc + 1)] & 2) == 0 && (*DAT_005c1ccc != '\0'));
          DAT_005c1ccc = DAT_005c1ccc + 1) {
      }
    }
    while (((&DAT_005c168c)[(byte)(*DAT_005c1ccc + 1)] & 2) != 0) {
      DAT_005c1ccc = DAT_005c1ccc + 1;
    }
    pWVar6 = GetCommandLineW();
    if (pWVar6 == (LPWSTR)0x0) {
      _DAT_005c1cd8 = (short *)&DAT_00598b2c;
    }
    else {
      _DAT_02de4e38 = (short *)FUN_0056e990(pWVar6);
      _DAT_005c1cd8 = _DAT_02de4e38;
      if (*_DAT_02de4e38 == 0x22) {
        sVar2 = _DAT_02de4e38[1];
        psVar7 = _DAT_02de4e38;
        while ((_DAT_005c1cd8 = psVar7 + 1, sVar2 != 0x22 && (*_DAT_005c1cd8 != 0))) {
          sVar2 = psVar7[2];
          psVar7 = _DAT_005c1cd8;
        }
        if (*_DAT_005c1cd8 != 0) {
          _DAT_005c1cd8 = psVar7 + 2;
        }
      }
      else {
        for (; (((&DAT_005c168c)[(byte)((char)*_DAT_005c1cd8 + 1)] & 2) == 0 &&
               (*_DAT_005c1cd8 != 0)); _DAT_005c1cd8 = _DAT_005c1cd8 + 1) {
        }
      }
      while (((&DAT_005c168c)[(byte)((char)*_DAT_005c1cd8 + 1)] & 2) != 0) {
        _DAT_005c1cd8 = _DAT_005c1cd8 + 1;
      }
    }
    if (hModule != (HMODULE)0x0) {
      GetModuleFileNameA((HMODULE)unused,&DAT_02de514c,0x104);
      _DAT_005c1cd4 = &DAT_02de514c;
      FUN_0056e890(unused,0x2de5250,0x208);
      _DAT_005c1ce0 = 0x2de5250;
    }
  }
  return;
}
