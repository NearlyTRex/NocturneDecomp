// Name: FUN_005a14f0
// Address: 005a14f0
// Address Range: [[005a14f0, 005a17c8]]
// Convention: unknown
// Signature: int FUN_005a14f0(int *param_1,byte *param_2,int *param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int FUN_005a14f0(int *param_1,byte *param_2,int *param_3)

{
  byte bVar1;
  uint *puVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte local_91c [2048];
  byte local_11c;
  byte local_11b [255];
  int local_1c;
  int local_18;
  byte *local_14;
  
  local_1c = 0;
  if (*param_2 != 0) {
    local_14 = local_11b;
    do {
      pbVar7 = param_2 + 1;
      if (*param_2 == 0x25) {
        local_18 = *param_3;
        bVar1 = *pbVar7;
        bVar6 = 0x20;
        bVar3 = false;
        local_11c = 0x25;
        pbVar8 = local_14;
joined_r0x005a155a:
        if (bVar1 != 0) {
LAB_005a155c:
          if (bVar3) goto LAB_005a1564;
          pbVar9 = pbVar8 + 1;
          bVar1 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          *pbVar8 = bVar1;
          pbVar8 = pbVar9;
          if (99 < bVar1) {
            if (bVar1 < 0x65) goto LAB_005a160a;
            if (bVar1 < 0x6e) {
              if ((0x66 < bVar1) && (0x67 < bVar1)) {
                if ((bVar1 < 0x69) || (bVar1 == 0x6c)) goto LAB_005a15fa;
                bVar1 = *pbVar7;
                goto joined_r0x005a1747;
              }
              goto LAB_005a17b0;
            }
            if (bVar1 < 0x6f) {
              puVar2 = (uint *)*param_3;
              *param_3 = (int)(puVar2 + 1);
              pbVar9 = &local_11c;
              *(int *)*puVar2 = local_1c;
              goto LAB_005a1661;
            }
            if (0x72 < bVar1) {
              if (bVar1 < 0x74) goto LAB_005a162d;
              if (bVar1 < 0x75) goto LAB_005a1666;
              if ((0x75 < bVar1) && (bVar1 != 0x78)) {
                bVar1 = *pbVar7;
                goto joined_r0x005a1747;
              }
              goto LAB_005a160a;
            }
            if (bVar1 < 0x70) goto LAB_005a160a;
            if (bVar1 != 0x70) {
              bVar1 = *pbVar7;
              goto joined_r0x005a1747;
            }
            *param_3 = *param_3 + 4;
            bVar1 = *pbVar7;
joined_r0x005a1683:
            bVar3 = true;
            goto joined_r0x005a1747;
          }
          if (bVar1 < 0x46) {
            if (bVar1 < 0x43) {
              if (bVar1 == 0x25) {
LAB_005a1661:
                bVar3 = true;
LAB_005a1666:
                bVar1 = *pbVar7;
                pbVar8 = pbVar9;
              }
              else {
                bVar1 = *pbVar7;
              }
            }
            else {
              if (0x43 < bVar1) {
                if (bVar1 < 0x45) goto LAB_005a160a;
                goto LAB_005a17b0;
              }
LAB_005a162d:
              bVar3 = true;
              *param_3 = *param_3 + 4;
              bVar1 = *pbVar7;
            }
            goto joined_r0x005a1747;
          }
          if (0x46 < bVar1) goto code_r0x005a1754;
          goto LAB_005a17b0;
        }
LAB_005a1564:
        *pbVar8 = 0;
        uVar4 = FUN_005bfb18(local_91c,&local_11c,&local_18);
        iVar5 = (**(code **)(*param_1 + 8))(param_1,local_91c,uVar4);
        if (iVar5 < 0) {
          return iVar5;
        }
        local_1c = local_1c + iVar5;
      }
      else {
        iVar5 = (**(code **)(*param_1 + 4))(param_1,*param_2);
        if (iVar5 != 0) {
          return iVar5;
        }
        local_1c = local_1c + 1;
      }
      param_2 = pbVar7;
    } while (*pbVar7 != 0);
  }
  return local_1c;
code_r0x005a1754:
  if (0x4e < bVar1) {
    if (bVar1 < 0x50) {
LAB_005a160a:
      if (bVar6 == 0x6c) {
        *param_3 = *param_3 + 4;
        goto LAB_005a1661;
      }
      *param_3 = *param_3 + 4;
      bVar1 = *pbVar7;
      goto joined_r0x005a1683;
    }
    if (bVar1 < 0x58) goto LAB_005a1666;
    if (bVar1 < 0x59) goto LAB_005a160a;
    if (bVar1 == 99) goto LAB_005a162d;
    bVar1 = *pbVar7;
    goto joined_r0x005a155a;
  }
  if (bVar1 < 0x48) {
LAB_005a17b0:
    *param_3 = *param_3 + 8;
    bVar3 = true;
    bVar1 = *pbVar7;
joined_r0x005a1747:
    if (bVar1 == 0) goto LAB_005a1564;
    goto LAB_005a155c;
  }
  if (bVar1 == 0x4c) {
LAB_005a15fa:
    bVar6 = *pbVar7;
    bVar1 = *pbVar7;
    goto joined_r0x005a1747;
  }
  bVar1 = *pbVar7;
  goto joined_r0x005a155a;
}
