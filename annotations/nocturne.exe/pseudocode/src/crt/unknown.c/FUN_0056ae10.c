// Name: crt_unknown.c_FUN_0056ae10
// Address: 0056ae10
// Address Range: [[0056ae10, 0056aeed]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_0056ae10(_FILE *param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint FUN_0056ae10(_FILE *param_1,uint param_2,uint param_3)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  char *unaff_EBP;
  SIZE_T unaff_ESI;
  int unaff_EDI;
  bool bVar5;
  
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac0)(param_1->_handle);
  pcVar1 = param_1->_link->__get_base;
  if (pcVar1 != (char *)0x1) {
    if (pcVar1 != (char *)0x0) {
      (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(param_1->_handle);
      return 0;
    }
    param_1->_link->__get_base = (char *)0x1;
  }
  uVar2 = param_1->_flag;
  *(byte *)&param_1->_flag = (byte)param_1->_flag & 0xcf;
  if (param_1->_link->__reserve_end == (char *)0x0) {
    _setvbuf(param_1,unaff_EBP,unaff_EDI,unaff_ESI);
  }
  bVar4 = *(byte *)((int)&param_1->_flag + 1);
  bVar5 = (bVar4 & 4) != 0;
  if (bVar5) {
    bVar4 = bVar4 & 0xfa;
    *(byte *)((int)&param_1->_flag + 1) = bVar4;
    *(byte *)((int)&param_1->_flag + 1) = bVar4 | 1;
  }
  uVar3 = FUN_00569040(param_1,param_2,param_3,FUN_0056adf0);
  if (bVar5) {
    bVar4 = *(byte *)((int)&param_1->_flag + 1) & 0xfa;
    *(byte *)((int)&param_1->_flag + 1) = bVar4;
    *(byte *)((int)&param_1->_flag + 1) = bVar4 | 4;
    FUN_00568890(param_1);
  }
  if ((param_1->_flag & 0x20) != 0) {
    uVar3 = 0xffffffff;
  }
  param_1->_flag = param_1->_flag | uVar2 & 0x30;
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(param_1->_handle);
  return uVar3;
}
