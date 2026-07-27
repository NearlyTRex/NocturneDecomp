// Name: cockpit_pkbmpset.cpp_FUN_004f5a50
// Address: 004f5a50
// Address Range: [[004f5a50, 004f5b19]]
// Convention: unknown
// Signature: void cockpit_pkbmpset_cpp_FUN_004f5a50(int *param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

void cockpit_pkbmpset_cpp_FUN_004f5a50(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if ((char)param_1[2] == '\0') {
    if (-1 < param_3) {
      cockpit_pkbitmap_cpp_CPackedBitmap_loadByFileExtension_FUN_004f4ac0
                (param_1[1] + param_3 * 0x24,param_2);
      return;
    }
    iVar1 = 0;
    if (0 < *param_1) {
      iVar2 = 0;
      do {
        iVar1 = iVar1 + 1;
        cockpit_pkbitmap_cpp_CPackedBitmap_loadByFileExtension_FUN_004f4ac0
                  (param_1[1] + iVar2,param_2);
        iVar2 = iVar2 + 0x24;
      } while (iVar1 < *param_1);
    }
  }
  else {
    piVar4 = param_1 + 2;
    do {
      piVar3 = piVar4;
      if ((char)*piVar4 == '.') goto LAB_004f5ad2;
      if ((char)*piVar4 == '\0') break;
      piVar3 = (int *)((int)piVar4 + 1);
      if (*(char *)piVar3 == '.') goto LAB_004f5ad2;
      piVar4 = (int *)((int)piVar4 + 2);
    } while (*(char *)piVar3 != '\0');
    piVar3 = (int *)0x0;
LAB_004f5ad2:
    if (piVar3 != (int *)0x0) {
      iVar1 = _stricmp(piVar3,".raw");
      if (iVar1 == 0) {
        cockpit_pkbmpset_cpp_FUN_004f5740(param_1,param_2,param_3);
        return;
      }
      iVar1 = _stricmp(piVar3,".pbg");
      if (iVar1 == 0) {
        cockpit_pkbmpset_cpp_FUN_004f5a20(param_1,param_2,param_3);
        return;
      }
    }
  }
  return;
}
