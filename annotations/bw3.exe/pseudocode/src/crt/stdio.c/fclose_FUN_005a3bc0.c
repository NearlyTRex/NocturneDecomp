// Name: crt_stdio.c_fclose_FUN_005a3bc0
// Address: 005a3bc0
// Address Range: [[005a3bc0, 005a3cb1]]
// Convention: __cdecl
// Signature: uint __cdecl crt_stdio_c_fclose_FUN_005a3bc0(_FILE *param_1,int param_2)

#include "nocturne.h"

uint __cdecl _fclose(_FILE *param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  char acStack_124 [276];
  
  if (param_1->_flag == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
    if ((param_1->_flag & 0x1000) != 0) {
      uVar1 = FUN_005a9bc0(param_1);
    }
    (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079a4)(param_1->_handle);
    lVar2 = _ftell(param_1);
    if (lVar2 != -1) {
      FUN_005a9cf0(param_1->_handle,lVar2,0);
    }
    if (param_2 != 0) {
      uVar3 = FUN_005a9d80(param_1->_handle);
      uVar1 = uVar1 | uVar3;
    }
    if ((param_1->_flag & 8) != 0) {
      FUN_005a3770(param_1->_link->__reserve_end);
      param_1->_link->__reserve_end = (char *)0x0;
    }
    if ((param_1->_flag & 0x800) != 0) {
      FUN_005a3b0c(acStack_124,*(byte *)&param_1->_link->__get_ptr);
      FUN_005a54b0(acStack_124);
    }
    (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079a8)(param_1->_handle);
    if (param_2 != 0) {
      (*(code *)PTR_crt_unknown_c_FUN_005a7f58_006079b0)(param_1->_handle);
    }
  }
  return uVar1;
}
