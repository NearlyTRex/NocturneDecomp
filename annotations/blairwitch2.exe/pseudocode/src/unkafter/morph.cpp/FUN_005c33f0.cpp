// Name: unkafter_morph.cpp_FUN_005c33f0
// Address: 005c33f0
// Address Range: [[005c33f0, 005c349b]]
// Convention: unknown
// Signature: uint unkafter_morph_cpp_FUN_005c33f0(WCHAR *param_1,byte *param_2,uint param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint unkafter_morph_cpp_FUN_005c33f0(WCHAR *param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  WCHAR local_14 [2];
  
  if (param_2 == (byte *)0x0) {
    uVar1 = 0;
  }
  else {
    if (param_3 != 0) {
      if (*param_2 == 0) {
        if (param_1 != (WCHAR *)0x0) {
          *param_1 = L'\0';
        }
        return 0;
      }
      if (((_DAT_026807f0 == 0) || ((*(byte *)(*param_2 + 0x2680801) & 1) == 0)) ||
         (param_2[1] != 0)) {
        uVar2 = FUN_005c0e50(param_2);
        uVar1 = uVar2;
        if (param_3 < uVar2) {
          uVar1 = param_3;
        }
        iVar3 = MultiByteToWideChar(DAT_0061f758,8,(LPCSTR)param_2,uVar1,local_14,1);
        if (iVar3 != 0) {
          if (param_1 != (WCHAR *)0x0) {
            *param_1 = local_14[0];
          }
          return uVar2;
        }
      }
    }
    uVar1 = 0xffffffff;
  }
  return uVar1;
}
