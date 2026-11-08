// Name: FUN_004d3e20
// Address: 004d3e20
// Address Range: [[004d3e20, 004d408a]]
// Convention: unknown
// Signature: bool FUN_004d3e20(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_004d3e20(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  byte auStack_128 [256];
  int local_28;
  int local_24;
  int iStack_20;
  int iStack_1c;
  int local_18;
  
  local_24 = 0;
  local_28 = 0x7149f2ca;
  local_18 = 0;
  do {
    if (*(int *)(0x01ED78C8 + 0x14d164) <= local_18) {
LAB_004d3fd9:
      return *(int *)(param_1 + 0x20b68) == 4;
    }
    iVar1 = *(int *)(0x01ED78C8 + local_24 + 0x14d168);
    if ((((ABS(*(float *)(iVar1 + 0x20) - *(float *)(param_1 + 0x20)) <= (float)_DAT_005c4e75) &&
         (ABS(*(float *)(iVar1 + 0x24) - *(float *)(param_1 + 0x24)) <= (float)_DAT_005c4e75)) &&
        (ABS(*(float *)(iVar1 + 0x28) - *(float *)(param_1 + 0x28)) <= (float)_DAT_005c4e75)) &&
       ((iVar1 != param_1 &&
        (iVar2 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x94))(iVar1), iVar2 == 0)))) {
      iVar2 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x84))(iVar1,param_1);
      iStack_1c = iVar2;
      if (iVar2 != 0) {
        iVar3 = FUN_0040c790(iVar1,param_2);
        if (iVar3 != 0) {
          iVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x154))(param_1,iVar1,iVar2,&local_28);
          if (iVar3 != 0) {
            if ((iVar2 == 5) && (local_28 < 0x40400000)) {
              iVar2 = FUN_0040c840(iVar1,DAT_007dfd24);
              iStack_20 = iVar2;
              iVar3 = FUN_0040c840(iVar1,_DAT_01d5b9b4);
              if (iVar2 == 0) {
                if (((iVar3 != 0) && (*(int *)(iVar3 + 0x2e0) != 0)) &&
                   (*(int *)(param_1 + 0x2538) == 0x42c80000)) {
                  pcVar4 = "Already have max health!";
                  goto LAB_004d3f97;
                }
code_r0x004d400c:
                FUN_004da880(param_1 + 0x206e8,iVar1,1);
              }
              else {
                if ((*(int *)(iVar2 + 0x318) == 0xb) && (*(int *)(param_1 + 0x20b84) == 0x32)) {
                  pcVar4 = "Already have max bullets!";
                }
                else {
                  if ((*(int *)(iStack_20 + 0x318) != 10) || (*(int *)(param_1 + 0x20b80) != 100))
                  goto code_r0x004d400c;
                  pcVar4 = "Already have max mana!";
                }
LAB_004d3f97:
                FUN_005a28c0(auStack_128,pcVar4);
                FUN_004b46b0(0x01D2130C,auStack_128,0x40000000);
              }
              *(uint *)(param_1 + 0x20b6c) = 0;
              *(uint *)(param_1 + 0x20b70) = 0;
              *(uint *)(param_1 + 0x20b68) = 5;
              goto LAB_004d3fd9;
            }
            iVar2 = (**(code **)(*(int *)(param_1 + 0x154) + 0x148))(param_1);
            if ((iVar2 == 0) && (iStack_1c != 5)) {
              *(uint *)(param_1 + 0x20b68) = 4;
              *(int *)(param_1 + 0x20b6c) = iVar1;
              *(int *)(param_1 + 0x20b70) = iVar1;
            }
          }
        }
      }
    }
    local_18 = local_18 + 1;
    local_24 = local_24 + 4;
  } while( true );
}
