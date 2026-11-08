// Name: FUN_0049a480
// Address: 0049a480
// Address Range: [[0049a480, 0049a621]]
// Convention: unknown
// Signature: void FUN_0049a480(int *param_1)

#include "nocturne.h"

void FUN_0049a480(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  if (*param_1 != 2) {
    return;
  }
  FUN_0046ce90(DAT_005f2afc,param_1 + 1);
  FUN_0046cf30(DAT_005f2afc,param_1 + 4,0);
  local_20 = FUN_0040ce40(0,0x40c90fdb);
  local_28 = 0;
  local_24 = 0;
  local_10 = local_20;
  local_c = local_20;
  FUN_0046cf30(DAT_005f2afc,&local_28,0);
  *(uint *)(0x01ED78C8 + 0x15ac90) = 1;
  FUN_0046d4b0(DAT_005f2afc,1);
  uVar2 = FUN_005a35cc();
  FUN_0046d4c0(DAT_005f2afc,(uVar2 & 0x3fff) + 0x1800);
  FUN_00462540(0x1c74278,0,99);
  local_1c = 0;
  local_18 = 0;
  local_14 = 0x3fc90fdb;
  FUN_0046cf30(DAT_005f2afc,&local_1c,0);
  FUN_00462540(0x1c74278,0,99);
  thunk_FUN_004e5ef0(DAT_005f2afc);
  local_34 = 0;
  local_30 = 0;
  local_2c = 0x3f490fdb;
  FUN_0046cf30(DAT_005f2afc,&local_34,0);
  FUN_00462540(0x1c74278,0,99);
  thunk_FUN_004e5ef0(DAT_005f2afc);
  uVar1 = DAT_005f2afc;
  *(uint *)(0x01ED78C8 + 0x15ac90) = 0;
  thunk_FUN_004e5ef0(uVar1);
  thunk_FUN_004e5ef0(DAT_005f2afc);
  FUN_0046d4b0(DAT_005f2afc,0);
  return;
}
