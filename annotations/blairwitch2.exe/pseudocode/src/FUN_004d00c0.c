// Name: FUN_004d00c0
// Address: 004d00c0
// Address Range: [[004d00c0, 004d02a5]]
// Convention: unknown
// Signature: int FUN_004d00c0(int param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004d00c0(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  float afStackY_1030 [985];
  byte auStack_c0 [120];
  float fStack_48;
  float afStack_44 [4];
  float fStack_34;
  int local_28;
  float fStack_24;
  int local_20;
  float *local_1c;
  int local_18;
  
  bVar3 = 0;
  local_20 = 0;
  *param_2 = 9999.9;
  local_18 = 0;
  local_1c = (float *)(param_1 + 0x20);
  local_28 = 0;
  for (; local_20 < *(int *)(0x01E661B8 + 0x150fec); local_20 = local_20 + 1) {
    iVar1 = *(int *)(0x01E661B8 + local_18 + 0x150ff0);
    iVar2 = FUN_0040c8f0(iVar1,_DAT_02653750);
    if (iVar2 == 0) {
      iVar2 = FUN_0040c8f0(iVar1,_DAT_01d1c778);
      if ((iVar2 == 0) || (*(int *)(iVar2 + 0x10b1c) == 0)) {
        iVar2 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x114))(iVar1);
        if (iVar2 == 0) {
          iVar2 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x78))(iVar1);
          if (iVar2 == 0) {
            FUN_005b7f5f(auStack_c0,10,&DAT_005f22b0);
            iVar2 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x5c))(iVar1,auStack_c0);
            if (0 < iVar2) {
              fStack_48 = *local_1c - *(float *)(iVar1 + 0x20);
              afStack_44[0] = local_1c[1] - *(float *)(iVar1 + 0x24);
              afStack_44[1] = local_1c[2] - *(float *)(iVar1 + 0x28);
              afStack_44[2] = fStack_48;
              afStack_44[(uint)bVar3 * -2 + 3] = afStack_44[(uint)bVar3 * -2];
              afStack_44[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
                   afStack_44[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
              afStack_44[3] = afStack_44[3] * (float)_DAT_005d9ddc;
              fStack_24 = fStack_34 * fStack_34 +
                          afStack_44[2] * afStack_44[2] + afStack_44[3] * afStack_44[3];
              if (fStack_24 < *param_2) {
                *param_2 = fStack_24;
                local_28 = iVar1;
              }
            }
          }
        }
      }
    }
    local_18 = local_18 + 4;
  }
  if (local_28 == 0) {
    return 0;
  }
  *param_2 = SQRT(*param_2);
  return local_28;
}
