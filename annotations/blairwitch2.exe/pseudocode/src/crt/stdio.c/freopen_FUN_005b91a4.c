// Name: crt_stdio.c_freopen_FUN_005b91a4
// Address: 005b91a4
// Address Range: [[005b91a4, 005b9235]]
// Convention: __cdecl
// Signature: undefined4 __cdecl crt_stdio_c_freopen_FUN_005b91a4(undefined4 param_1,undefined1 *param_2,int param_3)

#include "nocturne.h"

uint __cdecl _freopen(uint param_1,byte *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uStack_14;
  
  iVar2 = FUN_005b8e60(param_2,&uStack_14);
  uVar4 = 0;
  if (iVar2 != 0) {
    uVar1 = *(uint *)(param_3 + 0x10);
    (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2a8)(uVar1);
    if (DAT_0061f418 != (code *)0x0) {
      (*DAT_0061f418)(uVar1);
    }
    iVar3 = FUN_005b9124(param_3);
    uVar4 = 0;
    if (iVar3 != 0) {
      *(uint *)(iVar3 + 0xc) = *(uint *)(iVar3 + 0xc) & 0x4000;
      uVar4 = FUN_005b8f9c(param_1,*param_2,iVar2,uStack_14,0,iVar3);
    }
    (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2ac)(uVar1);
  }
  return uVar4;
}
