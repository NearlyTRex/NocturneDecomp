// Name: FUN_00547c20
// Address: 00547c20
// Address Range: [[00547c20, 00547ca0]]
// Convention: unknown
// Signature: void FUN_00547c20(int param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00547c20(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = FUN_004659c0(&DAT_005d166f,param_2,&DAT_005d166c);
  if (iVar2 == 0) {
    _DAT_01d71de0 = "..\\core\\skeleton.cpp";
    _DAT_01d71de4 = 0x101;
    FUN_004e4330("CSkeleton::load - Can't open %s",param_2);
  }
  FUN_00547cb0(param_1,iVar2);
  pcVar3 = (char *)(param_1 + 0x1de28);
  do {
    cVar1 = *param_2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  FUN_005a3a90(iVar2);
  return;
}
