// Name: cockpit_drawsurf.cpp_FUN_0045ca50
// Address: 0045ca50
// Address Range: [[0045ca50, 0045cb09]]
// Convention: unknown
// Signature: void cockpit_drawsurf_cpp_FUN_0045ca50(int param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cockpit_drawsurf_cpp_FUN_0045ca50(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = _DAT_01c00c64;
  uVar3 = _DAT_01c00c60;
  uVar2 = _DAT_01c00c5c;
  uVar1 = _DAT_01c00c58;
  _DAT_01c00c58 = *(uint *)(param_1 + 0x10);
  _DAT_01c00c60 = *(uint *)(param_1 + 0x18);
  _DAT_01c00c5c = *(uint *)(param_1 + 0x14);
  _DAT_01c00c64 = *(uint *)(param_1 + 0x1c);
  cockpit_ckptutil_c_FUN_004301e0();
  cockpit_ckptutil_c_FUN_00430200();
  cockpit_ckptutil_c_drawLineAA_FUN_0042f600
            (param_2 + *(int *)(param_1 + 8),param_3 + *(int *)(param_1 + 0xc),
             param_4 + *(int *)(param_1 + 8),param_5 + *(int *)(param_1 + 0xc),_DAT_01b4d714);
  cockpit_ckptutil_c_FUN_00430200();
  _DAT_01c00c58 = uVar1;
  _DAT_01c00c5c = uVar2;
  _DAT_01c00c60 = uVar3;
  _DAT_01c00c64 = uVar4;
  return;
}
