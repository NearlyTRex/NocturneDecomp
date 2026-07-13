// Name: FUN_100118b0
// Address: 100118b0
// Address Range: [[100118b0, 1001192a]]
// Convention: unknown
// Signature: char * FUN_100118b0(uint *param_1)

#include "nocturne.h"

char * FUN_100118b0(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar2 = param_1;
  do {
    if (((uint)puVar2 & 3) == 0) goto LAB_100118d0;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_10011903:
  return (char *)((int)puVar2 + (-1 - (int)param_1));
LAB_100118d0:
  do {
    do {
      puVar3 = puVar2;
      puVar2 = puVar3 + 1;
    } while (((*puVar3 ^ 0xffffffff ^ *puVar3 + 0x7efefeff) & 0x81010100) == 0);
    uVar1 = *puVar3;
    if ((char)uVar1 == '\0') {
      return (char *)((int)puVar3 - (int)param_1);
    }
    if ((char)(uVar1 >> 8) == '\0') {
      return (char *)((int)puVar3 + (1 - (int)param_1));
    }
    if ((uVar1 & 0xff0000) == 0) {
      return (char *)((int)puVar3 + (2 - (int)param_1));
    }
  } while ((uVar1 & 0xff000000) != 0);
  goto LAB_10011903;
}
