// Name: FUN_0057fd50
// Address: 0057fd50
// Address Range: [[0057fd50, 0057fe0f]]
// Convention: unknown
// Signature: int FUN_0057fd50(undefined4 param_1,LPCSTR param_2,int param_3,undefined4 param_4,undefined4 param_5 )

#include "nocturne.h"

int FUN_0057fd50(uint param_1,LPCSTR param_2,int param_3,uint param_4,uint param_5 )

{
  int iVar1;
  HFONT pHVar2;
  
  iVar1 = FUN_00509b90(param_1);
  *(byte ***)(iVar1 + 0x6a44) = &PTR_FUN_005e6534;
  *(uint *)(iVar1 + 0x6a48) = 0;
  *(uint *)(iVar1 + 0x6a50) = 0;
  *(uint *)(iVar1 + 0x6a54) = 0;
  *(uint *)(iVar1 + 0x6a58) = 0;
  *(uint *)(iVar1 + 0x6b64) = 0;
  *(uint *)(iVar1 + 0x6b68) = 0;
  *(uint *)(iVar1 + 0x6b6c) = 0;
  *(uint *)(iVar1 + 0x6b70) = 0;
  *(uint *)(iVar1 + 0x6b74) = 0;
  pHVar2 = CreateFontA(-param_3,0,0,0,400,0,0,0,1,0,0,0,0,param_2);
  *(HFONT *)(iVar1 + 0x6a50) = pHVar2;
  *(uint *)(iVar1 + 0x6b78) = param_4;
  *(uint *)(iVar1 + 0x6b7c) = param_5;
  return iVar1;
}
