// Name: cockpit_ckptutil.c_FUN_0043b090
// Address: 0043b090
// Address Range: [[0043b090, 0043b2de]]
// Convention: unknown
// Signature: void cockpit_ckptutil_c_FUN_0043b090(byte *param_1,undefined4 param_2,int *param_3,int param_4,int param_5,uint param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cockpit_ckptutil_c_FUN_0043b090(byte *param_1,uint param_2,int *param_3,int param_4,int param_5,uint param_6)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  char acStack_130 [256];
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  byte *pbStack_24;
  int iStack_20;
  int *piStack_1c;
  int iStack_18;
  int iStack_14;
  
  if (0xff < param_6) {
    _sprintf(acStack_130,"Invalid transparent color index: %d");
    _DAT_01d1d400 = "..\\cockpit\\ckptutil.c";
    _DAT_01d1d404 = 0x939;
    core_main_c_FUN_005030e0(acStack_130);
  }
  iStack_20 = 0;
  if (0 < param_5) {
    iStack_30 = param_4 + -1;
    iStack_2c = param_4;
    pbStack_24 = param_1;
    iStack_28 = 0;
    piStack_1c = param_3;
    do {
      bVar1 = false;
      iVar3 = 0;
      iStack_14 = 0;
      if (0 < param_4) {
        iVar5 = -1;
        iVar6 = 0;
        iStack_18 = iStack_28;
        pbVar4 = pbStack_24;
        do {
          iVar2 = iVar6 + iStack_28;
          if (bVar1) {
            if (*pbVar4 == param_6) {
              *(int *)((int)param_3 + iVar2 + 0x44) =
                   (iVar5 - *(int *)((int)param_3 + iVar2 + 4)) + 1;
              iVar6 = iVar6 + 4;
              iStack_14 = iStack_14 + 1;
              bVar1 = false;
            }
          }
          else if (*pbVar4 != param_6) {
            bVar1 = true;
            *(int *)((int)param_3 + iVar2 + 4) = iVar3;
          }
          pbVar4 = pbVar4 + 1;
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + 1;
        } while (iVar3 < param_4);
      }
      if (0xf < iStack_14) {
        _sprintf(acStack_130,"Too many spans: bitmap %s, spans %d, scanline %d");
        _DAT_01d1d400 = "..\\cockpit\\ckptutil.c";
        _DAT_01d1d404 = 0x969;
        core_main_c_FUN_005030e0(acStack_130);
      }
      if (bVar1) {
        piStack_1c[iStack_14 + 0x11] = (iStack_30 - piStack_1c[iStack_14 + 1]) + 1;
        iStack_14 = iStack_14 + 1;
      }
      iStack_28 = iStack_28 + 0x84;
      iStack_20 = iStack_20 + 1;
      *piStack_1c = iStack_14;
      pbStack_24 = pbStack_24 + iStack_2c;
      piStack_1c = piStack_1c + 0x21;
    } while (iStack_20 < param_5);
  }
  return;
}
