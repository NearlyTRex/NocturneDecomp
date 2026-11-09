// Name: crt_stdio.c_fclose_FUN_005c0e40
// Address: 005c0e40
// Address Range: [[005c0e40, 005c0f31]]
// Convention: __cdecl
// Signature: uint __cdecl crt_stdio_c_fclose_FUN_005c0e40(int param_1,int param_2)

#include "nocturne.h"

uint __cdecl _fclose(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  char acStack_124 [276];
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
    if ((*(byte *)(param_1 + 0xd) & 0x10) != 0) {
      uVar1 = FUN_005c6d50(param_1);
    }
    (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626600)(*(uint *)(param_1 + 0x10));
    iVar2 = _ftell(param_1);
    if (iVar2 != -1) {
      FUN_005c6e80(*(uint *)(param_1 + 0x10),iVar2,0);
    }
    if (param_2 != 0) {
      uVar3 = FUN_005c6f10(*(uint *)(param_1 + 0x10));
      uVar1 = uVar1 | uVar3;
    }
    if ((*(byte *)(param_1 + 0xc) & 8) != 0) {
      FUN_005c09f0(*(uint *)(*(int *)(param_1 + 8) + 8));
      *(uint *)(*(int *)(param_1 + 8) + 8) = 0;
    }
    if ((*(byte *)(param_1 + 0xd) & 8) != 0) {
      FUN_005c0d8c(acStack_124,*(byte *)(*(int *)(param_1 + 8) + 0x14));
      FUN_005c25c0(acStack_124);
    }
    (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626604)(*(uint *)(param_1 + 0x10));
    if (param_2 != 0) {
      (*(code *)PTR_crt_unknown_c_FUN_005c50e8_0062660c)(*(uint *)(param_1 + 0x10));
    }
  }
  return uVar1;
}
