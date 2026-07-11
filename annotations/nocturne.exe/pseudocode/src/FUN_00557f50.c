// Name: FUN_00557f50
// Address: 00557f50
// Address Range: [[00557f50, 00557ffc]]
// Convention: unknown
// Signature: undefined4 * FUN_00557f50(undefined4 param_1,LPCSTR param_2,int param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

uint * FUN_00557f50(uint param_1,LPCSTR param_2,int param_3,uint param_4,uint param_5)

{
  uint *puVar1;
  HFONT pHVar2;
  
  puVar1 = (uint *)FUN_004eefb0(param_1);
  *puVar1 = &PTR_LAB_005a4484;
  puVar1[1] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[0x48] = 0;
  puVar1[0x49] = 0;
  puVar1[0x4a] = 0;
  puVar1[0x4b] = 0;
  puVar1[0x4c] = 0;
  pHVar2 = CreateFontA(-param_3,0,0,0,400,0,0,0,1,0,0,0,0,param_2);
  puVar1[3] = pHVar2;
  puVar1[0x4d] = param_4;
  puVar1[0x4e] = param_5;
  return puVar1;
}
