// Name: crt_unknown.c_FUN_005a7f6c
// Address: 005a7f6c
// Address Range: [[005a7f6c, 005a81b5]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005a7f6c(int param_1,undefined4 param_2,HMODULE param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005a7f6c(int param_1,uint param_2,HMODULE param_3)

{
  char cVar1;
  short sVar2;
  DWORD DVar3;
  LPSTR pCVar4;
  char *pcVar5;
  LPWSTR pWVar6;
  short *psVar7;
  uint uVar8;
  
  _DAT_02d252b0 = param_1;
  _DAT_02d252bc = FUN_005adaac(param_2);
  if (_DAT_02d252bc == 0) {
    uVar8 = 0;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      ExitProcess(1);
    }
  }
  else {
    FUN_005abb90();
    _DAT_0060797d = GetEnvironmentStrings();
    _DAT_02d25924 = 0;
    DVar3 = GetVersion();
    DAT_00607983 = (byte)DVar3;
    DAT_00607985 = (ushort)(DVar3 >> 0x10);
    _DAT_00607987 = (uint)DAT_00607985;
    DAT_00607984 = (byte)(DVar3 >> 8);
    DAT_0060798b = DVar3 & 0xff;
    DAT_0060798f = (uint)DAT_00607984;
    _DAT_00607993 = DAT_0060798b << 8 | DAT_0060798f;
    GetModuleFileNameA((HMODULE)0x0,&DAT_02d252c0,0x104);
    _DAT_00607944 = &DAT_02d252c0;
    FUN_005addd0(0,0x2d253c4,0x208);
    _DAT_00607950 = 0x2d253c4;
    pCVar4 = GetCommandLineA();
    _DAT_02d252b4 = (char *)FUN_005ade80(pCVar4);
    DAT_00607940 = _DAT_02d252b4;
    if (*_DAT_02d252b4 == '\"') {
      cVar1 = _DAT_02d252b4[1];
      pcVar5 = _DAT_02d252b4;
      while ((DAT_00607940 = pcVar5 + 1, cVar1 != '\"' && (*DAT_00607940 != '\0'))) {
        cVar1 = pcVar5[2];
        pcVar5 = DAT_00607940;
      }
      if (*DAT_00607940 != '\0') {
        DAT_00607940 = pcVar5 + 2;
      }
    }
    else {
      for (; (((&DAT_006074b8)[(byte)(*DAT_00607940 + 1)] & 2) == 0 && (*DAT_00607940 != '\0'));
          DAT_00607940 = DAT_00607940 + 1) {
      }
    }
    while (((&DAT_006074b8)[(byte)(*DAT_00607940 + 1)] & 2) != 0) {
      DAT_00607940 = DAT_00607940 + 1;
    }
    pWVar6 = GetCommandLineW();
    if (pWVar6 == (LPWSTR)0x0) {
      _DAT_0060794c = (short *)&DAT_005da848;
    }
    else {
      _DAT_02d252b8 = (short *)FUN_005aded0(pWVar6);
      _DAT_0060794c = _DAT_02d252b8;
      if (*_DAT_02d252b8 == 0x22) {
        sVar2 = _DAT_02d252b8[1];
        psVar7 = _DAT_02d252b8;
        while ((_DAT_0060794c = psVar7 + 1, sVar2 != 0x22 && (*_DAT_0060794c != 0))) {
          sVar2 = psVar7[2];
          psVar7 = _DAT_0060794c;
        }
        if (*_DAT_0060794c != 0) {
          _DAT_0060794c = psVar7 + 2;
        }
      }
      else {
        for (; (((&DAT_006074b8)[(byte)((char)*_DAT_0060794c + 1)] & 2) == 0 &&
               (*_DAT_0060794c != 0)); _DAT_0060794c = _DAT_0060794c + 1) {
        }
      }
      while (((&DAT_006074b8)[(byte)((char)*_DAT_0060794c + 1)] & 2) != 0) {
        _DAT_0060794c = _DAT_0060794c + 1;
      }
    }
    if (param_1 != 0) {
      GetModuleFileNameA(param_3,&DAT_02d255cc,0x104);
      _DAT_00607948 = &DAT_02d255cc;
      FUN_005addd0(param_3,0x2d256d0,0x208);
      _DAT_00607954 = 0x2d256d0;
    }
    uVar8 = 1;
  }
  return uVar8;
}
