// Name: crt_unknown.c_FUN_005c5e50
// Address: 005c5e50
// Address Range: [[005c5e50, 005c5f02]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005c5e50(byte *param_1,_FILE *param_2)

#include "nocturne.h"

int FUN_005c5e50(byte *param_1,_FILE *param_2)

{
  int iVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  bool bVar5;
  
  (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2a8)(param_2->_handle);
  if (param_2->_link->__reserve_end == (char *)0x0) {
    FUN_005be1d0(param_2);
  }
  bVar2 = *(byte *)((int)&param_2->_flag + 1);
  bVar5 = (bVar2 & 4) != 0;
  if (bVar5) {
    bVar2 = bVar2 & 0xf9;
    *(byte *)((int)&param_2->_flag + 1) = bVar2;
    *(byte *)((int)&param_2->_flag + 1) = bVar2 | 2;
  }
  iVar4 = 0;
  pbVar3 = param_1;
  do {
    bVar2 = *pbVar3;
    if (bVar2 == 0) goto LAB_005c5ebd;
    pbVar3 = pbVar3 + 1;
    iVar1 = _fputc((uint)bVar2,param_2);
  } while (iVar1 != -1);
  iVar4 = -1;
LAB_005c5ebd:
  if (bVar5) {
    bVar2 = *(byte *)((int)&param_2->_flag + 1) & 0xf9;
    *(byte *)((int)&param_2->_flag + 1) = bVar2;
    *(byte *)((int)&param_2->_flag + 1) = bVar2 | 4;
    if (iVar4 == 0) {
      iVar4 = FUN_005bea80(param_2);
    }
  }
  if (iVar4 == 0) {
    iVar4 = (int)pbVar3 - (int)param_1;
  }
  (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2ac)(param_2->_handle);
  return iVar4;
}
