// Name: core_dtri.cpp_FUN_0046dc10
// Address: 0046dc10
// Address Range: [[0046dc10, 0046dd60]]
// Convention: unknown
// Signature: void core_dtri_cpp_FUN_0046dc10(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dtri_cpp_FUN_0046dc10(float param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < (int)_DAT_01bc9c7c) {
    puVar4 = (uint *)&DAT_01bc9c80;
    do {
      uVar2 = iVar5 + 1;
      if (uVar2 == _DAT_01bc9c7c) {
        uVar2 = uVar2 ^ _DAT_01bc9c7c;
      }
      bVar1 = (float)puVar4[2] < param_1;
      if (*(float *)(&DAT_01bc9c88 + uVar2 * 0xc) < param_1) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar3 = _DAT_01bc9d40 * 0xc;
        if ((uint *)(&DAT_01bc9d44 + iVar3) != puVar4) {
          *(uint *)(&DAT_01bc9d44 + iVar3) = *puVar4;
          *(uint *)(&DAT_01bc9d48 + iVar3) = puVar4[1];
          *(uint *)(&DAT_01bc9d4c + iVar3) = puVar4[2];
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                  (&DAT_01bc9c80 + uVar2 * 0xc,puVar4,&DAT_01bc9d44 + _DAT_01bc9d40 * 0xc,0,0,0,0,0,
                   0xbff00000,(double)param_1);
        break;
      case 2:
        iVar3 = _DAT_01bc9d40 * 0xc;
        if ((uint *)(&DAT_01bc9d44 + iVar3) != puVar4) {
          *(uint *)(&DAT_01bc9d44 + iVar3) = *puVar4;
          *(uint *)(&DAT_01bc9d48 + iVar3) = puVar4[1];
          *(uint *)(&DAT_01bc9d4c + iVar3) = puVar4[2];
        }
        _DAT_01bc9d40 = _DAT_01bc9d40 + 1;
        core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                  (puVar4,&DAT_01bc9c80 + uVar2 * 0xc,&DAT_01bc9d44 + _DAT_01bc9d40 * 0xc,0,0,0,0,0,
                   0xbff00000,(double)param_1);
        break;
      default:
        goto switchD_0046dc84_caseD_3;
      }
      _DAT_01bc9d40 = _DAT_01bc9d40 + 1;
switchD_0046dc84_caseD_3:
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 3;
    } while (iVar5 < (int)_DAT_01bc9c7c);
  }
  return;
}
