// Name: core_setdir.cpp_FUN_0055bf10
// Address: 0055bf10
// Address Range: [[0055bf10, 0055c01d]]
// Convention: unknown
// Signature: undefined8 core_setdir_cpp_FUN_0055bf10(CDemonSet *param_1)

#include "nocturne.h"

ulonglong core_setdir_cpp_FUN_0055bf10(CDemonSet *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CDemonSet *pCVar5;
  byte *puVar6;
  int local_28;
  int local_24;
  
  iVar2 = *(int *)&param_1->field_0x15b428;
  iVar1 = 0;
  pCVar5 = param_1;
  if (0 < iVar2) {
    do {
      *(uint *)&pCVar5->field_0x15b46c = 0xffffffff;
      iVar1 = iVar1 + 1;
      pCVar5 = (CDemonSet *)&pCVar5->field_0x44;
    } while (iVar1 < *(int *)&param_1->field_0x15b428);
  }
  local_24 = 0;
  if (0 < *(int *)&param_1->field_0x15b428) {
    local_28 = 0;
    do {
      iVar2 = core_setdir_cpp_CDemonSet_findVdirBoxRoot_FUN_0055c020(param_1,local_24);
      iVar1 = local_24 + 1;
      if (iVar1 < *(int *)&param_1->field_0x15b428) {
        puVar6 = &param_1->field_0x15b470 + local_24 * 0x44;
        do {
          iVar3 = core_setdir_cpp_CDemonSet_findVdirBoxRoot_FUN_0055c020(param_1,iVar1);
          if (iVar3 != iVar2) {
            iVar4 = core_setdir_cpp_testOBBIntersection_FUN_0055bab0
                              (&param_1->field_0x15b42c + local_28,puVar6);
            if ((iVar4 != 0) ||
               (iVar4 = core_setdir_cpp_testOBBIntersection_FUN_0055bab0
                                  (puVar6,&param_1->field_0x15b42c + local_28), iVar4 != 0)) {
              *(int *)(&param_1->field_0x15b46c + iVar3 * 0x44) = iVar2;
            }
          }
          iVar1 = iVar1 + 1;
          puVar6 = puVar6 + 0x44;
        } while (iVar1 < *(int *)&param_1->field_0x15b428);
      }
      iVar2 = *(int *)&param_1->field_0x15b428;
      local_28 = local_28 + 0x44;
      iVar1 = local_24 + 1;
      local_24 = iVar1;
    } while (iVar1 < iVar2);
  }
  return CONCAT44(iVar2,iVar1);
}
