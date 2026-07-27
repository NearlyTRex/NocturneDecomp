// Name: cockpit_pkbitmap.cpp_FUN_004f4170
// Address: 004f4170
// Address Range: [[004f4170, 004f4307]]
// Convention: unknown
// Signature: void cockpit_pkbitmap_cpp_FUN_004f4170(int param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,int param_7 )

#include "nocturne.h"

void cockpit_pkbitmap_cpp_FUN_004f4170(int param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,int param_7 )

{
  code *pcVar1;
  int *piVar2;
  ushort *puVar3;
  uint uVar4;
  ushort *puVar5;
  int iVar6;
  uint uVar7;
  ushort *puVar8;
  int iVar9;
  int iVar10;
  int local_24;
  int local_20;
  
  if ((*(int *)(param_1 + 0x20) != 0) && (*(int *)(param_1 + 0x14) != 0)) {
    param_2 = param_2 - param_4;
    if (DAT_005b7624 == 0x10) {
      param_2 = param_2 * 2;
    }
    pcVar1 = (code *)cockpit_ckptutil_c_FUN_0042d130();
    local_24 = param_3 << 2;
    local_20 = param_5 << 2;
    param_7 = param_7 << 2;
    do {
      piVar2 = (int *)(*(int *)(param_1 + 0x20) + local_20);
      puVar3 = (ushort *)(piVar2[1] + *(int *)(param_1 + 0x14));
      puVar8 = (ushort *)(*piVar2 + *(int *)(param_1 + 0x14));
      iVar6 = param_2 + *(int *)(&DAT_01bd2fa0 + local_24);
      do {
        if (puVar3 <= puVar8) goto LAB_004f4239;
        uVar4 = (uint)*puVar8;
        puVar5 = puVar8 + 2;
        if (param_6 < (int)uVar4) goto LAB_004f4239;
        uVar7 = (uint)puVar8[1];
        iVar9 = uVar4 + uVar7 + -1;
        puVar8 = (ushort *)((uVar7 + 3 & 0xfffffffc) + (int)puVar5);
      } while (iVar9 < (int)param_4);
      if ((int)uVar4 < (int)param_4) {
        puVar5 = (ushort *)((int)puVar5 + (param_4 - uVar4));
        uVar7 = uVar7 - (param_4 - uVar4);
        uVar4 = param_4;
      }
      while( true ) {
        iVar10 = iVar6 + uVar4;
        if (DAT_005b7624 == 0x10) {
          iVar10 = iVar10 + uVar4;
        }
        if (param_6 < iVar9) break;
        (*pcVar1)(iVar10,puVar5,uVar7,param_7,param_2,param_3,param_5);
        if (puVar3 <= puVar8) goto LAB_004f4239;
        uVar4 = (uint)*puVar8;
        puVar5 = puVar8 + 2;
        if (param_6 < (int)uVar4) goto LAB_004f4239;
        uVar7 = (uint)puVar8[1];
        iVar9 = uVar4 + uVar7 + -1;
        puVar8 = (ushort *)((uVar7 + 3 & 0xfffffffc) + (int)puVar5);
      }
      (*pcVar1)(iVar10,puVar5,uVar7 - (iVar9 - param_6));
LAB_004f4239:
      param_5 = param_5 + 1;
      local_24 = local_24 + 4;
      param_3 = param_3 + 1;
      local_20 = local_20 + 4;
    } while (local_20 <= param_7);
  }
  return;
}
