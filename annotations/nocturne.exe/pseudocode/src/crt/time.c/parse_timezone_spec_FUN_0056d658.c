// Name: crt_time.c_parse_timezone_spec_FUN_0056d658
// Address: 0056d658
// Address Range: [[0056d658, 0056d772]]
// Convention: unknown
// Signature: byte * crt_time_c_parse_timezone_spec_FUN_0056d658(byte *param_1,byte *param_2,int *param_3)

#include "nocturne.h"

byte * parse_timezone_spec(byte *param_1,byte *param_2,int *param_3)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  int local_1c;
  int local_18;
  int local_14;
  
  pbVar5 = param_1;
  if (*param_1 == 0x3a) {
    param_1 = param_1 + 1;
    pbVar5 = param_1;
  }
  for (; ((((bVar1 = *param_1, bVar1 != 0 && (bVar1 != 0x2c)) && (bVar1 != 0x2d)) && (bVar1 != 0x2b)
          ) && ((bVar1 < 0x30 || (0x39 < bVar1)))); param_1 = param_1 + 1) {
  }
  uVar4 = (int)param_1 - (int)pbVar5;
  if (0x80 < (int)uVar4) {
    uVar4 = 0x80;
  }
  pbVar6 = param_2;
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(uint *)pbVar6 = *(uint *)pbVar5;
    pbVar5 = pbVar5 + 4;
    pbVar6 = pbVar6 + 4;
  }
  for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pbVar6 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    pbVar6 = pbVar6 + 1;
  }
  bVar2 = false;
  param_2[uVar4] = 0;
  if (bVar1 == 0x2d) {
    bVar2 = true;
  }
  else if (bVar1 != 0x2b) goto LAB_0056d6d8;
  param_1 = param_1 + 1;
LAB_0056d6d8:
  if ((0x2f < *param_1) && (*param_1 < 0x3a)) {
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    param_1 = (byte *)parse_uint((char *)param_1,&local_14);
    if (*param_1 == 0x3a) {
      param_1 = (byte *)parse_uint((char *)(param_1 + 1),&local_18);
      if (*param_1 == 0x3a) {
        param_1 = (byte *)parse_uint((char *)(param_1 + 1),&local_1c);
      }
    }
    local_1c = local_1c + (local_18 + local_14 * 0x3c) * 0x3c;
    *param_3 = local_1c;
    if (bVar2) {
      *param_3 = -local_1c;
    }
  }
  return param_1;
}
