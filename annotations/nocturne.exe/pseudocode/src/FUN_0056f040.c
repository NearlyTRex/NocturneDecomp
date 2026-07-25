// Name: FUN_0056f040
// Address: 0056f040
// Address Range: [[0056f040, 0056f0eb]]
// Convention: unknown
// Signature: uint FUN_0056f040(WCHAR *param_1,byte *param_2,uint param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0056f040(WCHAR *param_1,byte *param_2,uint param_3)

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
      if (((_DAT_02de5c30 == 0) || ((*(byte *)(*param_2 + 0x2de5c41) & 1) == 0)) ||
         (param_2[1] != 0)) {
        uVar2 = FUN_0056da50(param_2);
        uVar1 = uVar2;
        if (param_3 < uVar2) {
          uVar1 = param_3;
        }
        iVar3 = MultiByteToWideChar(DAT_005c2144,8,(LPCSTR)param_2,uVar1,local_14,1);
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
