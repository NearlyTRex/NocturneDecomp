// Name: FUN_00483c00
// Address: 00483c00
// Address Range: [[00483c00, 004843c3]]
// Convention: unknown
// Signature: void FUN_00483c00(int *param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00483c00(int *param_1,uint param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  char local_160 [300];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  int local_14;
  
  if (_DAT_01c5b0e0 == 0) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0xa7;
    FUN_004e4330("gEdFont must be set by the application.");
  }
  _DAT_01c5bae0 = *(uint *)(_DAT_01c5b0e0 + 0x41e8);
  _DAT_01c5bae4 = FUN_004b30f0(_DAT_01c5b0e0,0x6a);
  param_1[99] = _DAT_01c5bae4 + 1;
  param_1[100] = 8;
  param_1[0x14] = 1;
  FUN_005a28f0(param_1 + 4,0,0x40);
  local_14 = 0;
  if (0 < *param_1) {
    do {
      iVar12 = 0;
      pcVar3 = (char *)FUN_00482440(param_1,local_14);
      piVar8 = param_1;
      while( true ) {
        cVar1 = *pcVar3;
        pcVar2 = pcVar3;
        pcVar7 = local_160;
        while ((pcVar3 = pcVar2, cVar1 != '\0' && (pcVar3 = pcVar2 + 1, *pcVar2 != '\t'))) {
          *pcVar7 = *pcVar2;
          pcVar7 = pcVar7 + 1;
          cVar1 = *pcVar3;
          pcVar2 = pcVar3;
        }
        *pcVar7 = '\0';
        iVar4 = FUN_004b2a80(_DAT_01c5b0e0,local_160);
        if (piVar8[4] < iVar4) {
          piVar8[4] = iVar4;
        }
        iVar12 = iVar12 + 1;
        piVar8 = piVar8 + 1;
        if (*pcVar3 == '\0') break;
        if (0xf < iVar12) {
          _DAT_01d71de0 = "..\\shape\\edittool.cpp";
          _DAT_01d71de4 = 0x101e;
          FUN_004e4330("Too many picklist columns!");
        }
      }
      if (param_1[0x14] < iVar12) {
        param_1[0x14] = iVar12;
      }
      local_14 = local_14 + 1;
    } while (local_14 < *param_1);
  }
  piVar8 = param_1;
  for (iVar12 = 0; iVar12 < param_1[0x14] + -1; iVar12 = iVar12 + 1) {
    piVar8[4] = piVar8[4] + DAT_005fba18 / 0x28;
    piVar8 = piVar8 + 1;
  }
  param_1[0x69] = 0;
  iVar12 = 0;
  piVar8 = param_1;
  if (0 < param_1[0x14]) {
    do {
      iVar12 = iVar12 + 1;
      param_1[0x69] = param_1[0x69] + piVar8[4];
      piVar8 = piVar8 + 1;
    } while (iVar12 < param_1[0x14]);
  }
  param_1[0x69] = param_1[0x69] + param_1[100] * 2;
  iVar12 = (DAT_005fba1c + _DAT_01c5bae4 * -4) / param_1[99];
  param_1[0x68] = iVar12;
  if (iVar12 < 1) {
    param_1[0x68] = 1;
  }
  if (*param_1 < param_1[0x68]) {
    param_1[0x68] = *param_1;
  }
  iVar12 = DAT_005fba18 * 7 >> 0x1f;
  iVar12 = ((int)((DAT_005fba18 * 7 + iVar12 * -8) - (uint)(iVar12 << 2 < 0)) >> 3) / param_1[0x69];
  param_1[0x6a] = iVar12;
  if (iVar12 < 1) {
    param_1[0x6a] = 1;
  }
  iVar12 = (*param_1 + param_1[0x68] + -1) / param_1[0x68];
  if (iVar12 < param_1[0x6a]) {
    param_1[0x6a] = iVar12;
  }
  if (0 < param_1[0x15]) {
    param_1[0x6a] = param_1[0x15];
  }
  param_1[0x7c] = 0;
  if (param_1[0x68] * param_1[0x6a] < *param_1) {
    if (param_1[0x6a] < 2) {
      param_1[0x7c] = 1;
    }
    else {
      param_1[0x7c] = 2;
    }
  }
  iVar12 = param_1[0x69] * param_1[0x6a] + 8;
  iVar4 = param_1[0x68] * param_1[99] + 6;
  iVar5 = FUN_00485fd0();
  local_30 = iVar5;
  local_2c = FUN_00485ff0();
  if (param_1[0x7c] == 1) {
    iVar12 = iVar12 + iVar5;
  }
  else if (param_1[0x7c] == 2) {
    iVar4 = iVar4 + local_2c;
  }
  local_34 = (int)((DAT_005fba18 + (DAT_005fba18 >> 0x1f) * -0x80) -
                  (uint)((DAT_005fba18 >> 0x1f) << 6 < 0)) >> 7;
  local_28 = DAT_005fba1c / 0x60;
  iVar11 = 0;
  iVar5 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  bVar13 = (char)param_1[0x17] != '\0';
  if (bVar13) {
    iVar5 = FUN_004864f0(param_1 + 0x17);
  }
  local_18 = (uint)bVar13;
  if ((char)param_1[0x30] != '\0') {
    iVar6 = FUN_004864f0(param_1 + 0x30);
    if (iVar5 < iVar6) {
      iVar5 = iVar6;
    }
    local_18 = local_18 + 1;
  }
  if (0 < (int)local_18) {
    iVar11 = FUN_004864f0("Cancel");
    if (iVar5 < iVar11) {
      iVar5 = iVar11;
    }
    local_1c = FUN_00486580(0);
    iVar11 = local_28 + local_1c;
    local_20 = local_18 * iVar5 + (local_18 - 1) * local_34;
    if (param_1[0x7c] == 2) {
      iVar11 = iVar11 + local_28;
    }
    if (iVar12 < local_20) {
      iVar12 = local_20;
    }
    iVar4 = iVar4 + iVar11;
  }
  FUN_0047f3e0(0x01C5B0E4,iVar12,iVar4,param_2,param_3);
  iVar12 = (_DAT_01c6b5b0 - _DAT_01c6b5a8) + 1;
  iVar4 = (_DAT_01c6b5b4 - _DAT_01c6b5ac) + 1;
  if (param_1[0x7c] == 1) {
    iVar12 = iVar12 - local_30;
    iVar9 = (_DAT_01c6b5b4 - local_1c) - local_28;
    iVar6 = (_DAT_01c6b5b0 - local_30) + 1;
    iVar10 = _DAT_01c6b5ac;
  }
  else {
    if (param_1[0x7c] != 2) goto LAB_0048418c;
    iVar4 = iVar4 - local_2c;
    iVar9 = _DAT_01c6b5b4 - iVar11;
    iVar10 = ((_DAT_01c6b5b4 - local_2c) - iVar11) + 1;
    iVar6 = _DAT_01c6b5a8;
  }
  FUN_00485590(param_1 + 0x6f,iVar6,iVar10,_DAT_01c6b5b0,iVar9);
LAB_0048418c:
  if (0 < (int)local_18) {
    local_24 = (_DAT_01c6b5b4 - local_1c) + 1;
    if ((char)param_1[0x17] != '\0') {
      iVar6 = (_DAT_01c6b5b0 + 1) - local_20;
      FUN_004860d0(param_1 + 0x7d,iVar6,local_24,iVar6 + -1 + iVar5,local_24 + local_1c + -1,
                   param_1 + 0x17);
    }
    if ((char)param_1[0x30] != '\0') {
      iVar6 = (_DAT_01c6b5b0 + 1) - iVar5;
      FUN_004860d0(param_1 + 0xb6,iVar6,local_24,iVar6 + -1 + iVar5,local_24 + local_1c + -1,
                   param_1 + 0x30);
    }
    iVar4 = iVar4 - iVar11;
  }
  param_1[0x68] = iVar4 / param_1[99];
  param_1[0x6a] = iVar12 / param_1[0x69];
  iVar4 = (*param_1 + param_1[0x68] + -1) / param_1[0x68];
  if (iVar4 < param_1[0x6a]) {
    param_1[0x6a] = iVar4;
  }
  if (param_1[0x6a] < 1) {
    param_1[0x6a] = 1;
  }
  param_1[0x67] = param_1[0x68] * param_1[0x6a];
  param_1[0x66] = 0;
  param_1[0x69] = iVar12 / param_1[0x6a];
  FUN_004032b0();
  *(byte *)(param_1 + 0x49) = 0;
  _DAT_01c5bb74 = 0xffffffff;
  param_1[0x62] = 0;
  return;
}
