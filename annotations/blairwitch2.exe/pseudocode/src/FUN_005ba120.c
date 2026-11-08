// Name: FUN_005ba120
// Address: 005ba120
// Address Range: [[005ba120, 005ba1df]]
// Convention: unknown
// Signature: LPSTR FUN_005ba120(LPSTR param_1,LPCSTR param_2,uint param_3)

#include "nocturne.h"

LPSTR FUN_005ba120(LPSTR param_1,LPCSTR param_2,uint param_3)

{
  LPSTR pCVar1;
  int iVar2;
  DWORD DVar3;
  LPSTR unaff_EBP;
  LPSTR pCStack_14;
  
  if (param_1 == (LPSTR)0x0) {
    param_3 = 0x104;
    param_1 = (LPSTR)FUN_005b8580(0x104);
    unaff_EBP = param_1;
    if (param_1 == (LPSTR)0x0) {
      FUN_005be180(5);
      return (LPSTR)0x0;
    }
  }
  if ((param_2 != (LPCSTR)0x0) && (*param_2 != '\0')) {
    iVar2 = FUN_005b8130(param_2,&DAT_005f1854);
    if (iVar2 == 0) {
      if (param_3 < 4) {
        FUN_005b86a0(unaff_EBP);
        FUN_005be180(0xe);
        return (LPSTR)0x0;
      }
      *(uint *)param_1 = 0x006E6F63;
    }
    else {
      DVar3 = GetFullPathNameA(param_2,param_3,param_1,&pCStack_14);
      if (DVar3 == 0) {
        FUN_005c036c();
        return (LPSTR)0x0;
      }
    }
    return param_1;
  }
  pCVar1 = (LPSTR)FUN_005c0f10(param_1,param_3);
  return pCVar1;
}
