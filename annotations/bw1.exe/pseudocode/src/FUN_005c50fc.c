// Name: FUN_005c50fc
// Address: 005c50fc
// Address Range: [[005c50fc, 005c5345]]
// Convention: unknown
// Signature: undefined4 FUN_005c50fc(int param_1,undefined4 param_2,HMODULE param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005c50fc(int param_1,uint param_2,HMODULE param_3)

{
  char cVar1;
  short sVar2;
  DWORD DVar3;
  LPSTR pCVar4;
  char *pcVar5;
  LPWSTR pWVar6;
  short *psVar7;
  uint uVar8;
  
  _DAT_02c9f060 = param_1;
  _DAT_02c9f06c = FUN_005cac3c(param_2);
  if (_DAT_02c9f06c == 0) {
    uVar8 = 0;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      ExitProcess(1);
    }
  }
  else {
    FUN_005c8d50();
    _DAT_006265d9 = GetEnvironmentStrings();
    _DAT_02c9f6d4 = 0;
    DVar3 = GetVersion();
    DAT_006265df = (byte)DVar3;
    DAT_006265e1 = (ushort)(DVar3 >> 0x10);
    _DAT_006265e3 = (uint)DAT_006265e1;
    DAT_006265e0 = (byte)(DVar3 >> 8);
    DAT_006265e7 = DVar3 & 0xff;
    DAT_006265eb = (uint)DAT_006265e0;
    _DAT_006265ef = DAT_006265e7 << 8 | DAT_006265eb;
    GetModuleFileNameA((HMODULE)0x0,&DAT_02c9f070,0x104);
    _DAT_006265a0 = &DAT_02c9f070;
    FUN_005caf60(0,0x2c9f174,0x208);
    _DAT_006265ac = 0x2c9f174;
    pCVar4 = GetCommandLineA();
    _DAT_02c9f064 = (char *)FUN_005cb010(pCVar4);
    DAT_0062659c = _DAT_02c9f064;
    if (*_DAT_02c9f064 == '\"') {
      cVar1 = _DAT_02c9f064[1];
      pcVar5 = _DAT_02c9f064;
      while ((DAT_0062659c = pcVar5 + 1, cVar1 != '\"' && (*DAT_0062659c != '\0'))) {
        cVar1 = pcVar5[2];
        pcVar5 = DAT_0062659c;
      }
      if (*DAT_0062659c != '\0') {
        DAT_0062659c = pcVar5 + 2;
      }
    }
    else {
      for (; (((&DAT_00626114)[(byte)(*DAT_0062659c + 1)] & 2) == 0 && (*DAT_0062659c != '\0'));
          DAT_0062659c = DAT_0062659c + 1) {
      }
    }
    while (((&DAT_00626114)[(byte)(*DAT_0062659c + 1)] & 2) != 0) {
      DAT_0062659c = DAT_0062659c + 1;
    }
    pWVar6 = GetCommandLineW();
    if (pWVar6 == (LPWSTR)0x0) {
      _DAT_006265a8 = (short *)&DAT_005fab8c;
    }
    else {
      _DAT_02c9f068 = (short *)FUN_005cb060(pWVar6);
      _DAT_006265a8 = _DAT_02c9f068;
      if (*_DAT_02c9f068 == 0x22) {
        sVar2 = _DAT_02c9f068[1];
        psVar7 = _DAT_02c9f068;
        while ((_DAT_006265a8 = psVar7 + 1, sVar2 != 0x22 && (*_DAT_006265a8 != 0))) {
          sVar2 = psVar7[2];
          psVar7 = _DAT_006265a8;
        }
        if (*_DAT_006265a8 != 0) {
          _DAT_006265a8 = psVar7 + 2;
        }
      }
      else {
        for (; (((&DAT_00626114)[(byte)((char)*_DAT_006265a8 + 1)] & 2) == 0 &&
               (*_DAT_006265a8 != 0)); _DAT_006265a8 = _DAT_006265a8 + 1) {
        }
      }
      while (((&DAT_00626114)[(byte)((char)*_DAT_006265a8 + 1)] & 2) != 0) {
        _DAT_006265a8 = _DAT_006265a8 + 1;
      }
    }
    if (param_1 != 0) {
      GetModuleFileNameA(param_3,&DAT_02c9f37c,0x104);
      _DAT_006265a4 = &DAT_02c9f37c;
      FUN_005caf60(param_3,0x2c9f480,0x208);
      _DAT_006265b0 = 0x2c9f480;
    }
    uVar8 = 1;
  }
  return uVar8;
}
