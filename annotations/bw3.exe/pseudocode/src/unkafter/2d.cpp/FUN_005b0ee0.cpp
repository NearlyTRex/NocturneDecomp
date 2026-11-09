// Name: unkafter_2d.cpp_FUN_005b0ee0
// Address: 005b0ee0
// Address Range: [[005b0ee0, 005b0f92]]
// Convention: unknown
// Signature: int unkafter_2d_cpp_FUN_005b0ee0(char *param_1,int param_2)

#include "nocturne.h"

int unkafter_2d_cpp_FUN_005b0ee0(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  char *pcVar4;
  int iVar5;
  bool bVar6;
  
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079a4)(*(uint *)(param_2 + 0x10));
  if (*(int *)(*(int *)(param_2 + 8) + 8) == 0) {
    FUN_005a9310(param_2);
  }
  bVar6 = (*(byte *)(param_2 + 0xd) & 4) != 0;
  if (bVar6) {
    bVar3 = *(byte *)(param_2 + 0xd) & 0xf9;
    *(byte *)(param_2 + 0xd) = bVar3;
    *(byte *)(param_2 + 0xd) = bVar3 | 2;
  }
  iVar5 = 0;
  pcVar4 = param_1;
  do {
    cVar1 = *pcVar4;
    if (cVar1 == '\0') goto LAB_005b0f4d;
    pcVar4 = pcVar4 + 1;
    iVar2 = _fputc(cVar1,param_2);
  } while (iVar2 != -1);
  iVar5 = -1;
LAB_005b0f4d:
  if (bVar6) {
    bVar3 = *(byte *)(param_2 + 0xd) & 0xf9;
    *(byte *)(param_2 + 0xd) = bVar3;
    *(byte *)(param_2 + 0xd) = bVar3 | 4;
    if (iVar5 == 0) {
      iVar5 = FUN_005a9bc0(param_2);
    }
  }
  if (iVar5 == 0) {
    iVar5 = (int)pcVar4 - (int)param_1;
  }
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079a8)(*(uint *)(param_2 + 0x10));
  return iVar5;
}
