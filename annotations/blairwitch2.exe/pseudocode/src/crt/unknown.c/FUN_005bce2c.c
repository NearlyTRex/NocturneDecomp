// Name: crt_unknown.c_FUN_005bce2c
// Address: 005bce2c
// Address Range: [[005bce2c, 005bd075]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005bce2c(int param_1,undefined4 param_2,HMODULE param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005bce2c(int param_1,uint param_2,HMODULE param_3)

{
  char cVar1;
  short sVar2;
  DWORD DVar3;
  LPSTR pCVar4;
  char *pcVar5;
  LPWSTR pWVar6;
  short *psVar7;
  uint uVar8;
  
  _DAT_02680170 = param_1;
  _DAT_0268017c = unkafter_morph_cpp_FUN_005c293c(param_2);
  if (_DAT_0268017c == 0) {
    uVar8 = 0;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      ExitProcess(1);
    }
  }
  else {
    FUN_005c0a90();
    _DAT_0061f281 = GetEnvironmentStrings();
    _DAT_026807e4 = 0;
    DVar3 = GetVersion();
    DAT_0061f287 = (byte)DVar3;
    DAT_0061f289 = (ushort)(DVar3 >> 0x10);
    _DAT_0061f28b = (uint)DAT_0061f289;
    DAT_0061f288 = (byte)(DVar3 >> 8);
    DAT_0061f28f = DVar3 & 0xff;
    DAT_0061f293 = (uint)DAT_0061f288;
    _DAT_0061f297 = DAT_0061f28f << 8 | DAT_0061f293;
    GetModuleFileNameA((HMODULE)0x0,&DAT_02680180,0x104);
    _DAT_0061f248 = &DAT_02680180;
    unkafter_morph_cpp_FUN_005c2c60(0,0x2680284,0x208);
    _DAT_0061f254 = 0x2680284;
    pCVar4 = GetCommandLineA();
    _DAT_02680174 = (char *)unkafter_morph_cpp_FUN_005c2d10(pCVar4);
    DAT_0061f244 = _DAT_02680174;
    if (*_DAT_02680174 == '\"') {
      cVar1 = _DAT_02680174[1];
      pcVar5 = _DAT_02680174;
      while ((DAT_0061f244 = pcVar5 + 1, cVar1 != '\"' && (*DAT_0061f244 != '\0'))) {
        cVar1 = pcVar5[2];
        pcVar5 = DAT_0061f244;
      }
      if (*DAT_0061f244 != '\0') {
        DAT_0061f244 = pcVar5 + 2;
      }
    }
    else {
      for (; (((&DAT_0061ed94)[(byte)(*DAT_0061f244 + 1)] & 2) == 0 && (*DAT_0061f244 != '\0'));
          DAT_0061f244 = DAT_0061f244 + 1) {
      }
    }
    while (((&DAT_0061ed94)[(byte)(*DAT_0061f244 + 1)] & 2) != 0) {
      DAT_0061f244 = DAT_0061f244 + 1;
    }
    pWVar6 = GetCommandLineW();
    if (pWVar6 == (LPWSTR)0x0) {
      _DAT_0061f250 = (short *)&DAT_005f19e4;
    }
    else {
      _DAT_02680178 = (short *)unkafter_morph_cpp_FUN_005c2d60(pWVar6);
      _DAT_0061f250 = _DAT_02680178;
      if (*_DAT_02680178 == 0x22) {
        sVar2 = _DAT_02680178[1];
        psVar7 = _DAT_02680178;
        while ((_DAT_0061f250 = psVar7 + 1, sVar2 != 0x22 && (*_DAT_0061f250 != 0))) {
          sVar2 = psVar7[2];
          psVar7 = _DAT_0061f250;
        }
        if (*_DAT_0061f250 != 0) {
          _DAT_0061f250 = psVar7 + 2;
        }
      }
      else {
        for (; (((&DAT_0061ed94)[(byte)((char)*_DAT_0061f250 + 1)] & 2) == 0 &&
               (*_DAT_0061f250 != 0)); _DAT_0061f250 = _DAT_0061f250 + 1) {
        }
      }
      while (((&DAT_0061ed94)[(byte)((char)*_DAT_0061f250 + 1)] & 2) != 0) {
        _DAT_0061f250 = _DAT_0061f250 + 1;
      }
    }
    if (param_1 != 0) {
      GetModuleFileNameA(param_3,&DAT_0268048c,0x104);
      _DAT_0061f24c = &DAT_0268048c;
      unkafter_morph_cpp_FUN_005c2c60(param_3,0x2680590,0x208);
      _DAT_0061f258 = 0x2680590;
    }
    uVar8 = 1;
  }
  return uVar8;
}
