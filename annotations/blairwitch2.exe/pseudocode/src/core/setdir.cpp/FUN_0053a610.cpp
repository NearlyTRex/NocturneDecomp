// Name: core_setdir.cpp_FUN_0053a610
// Address: 0053a610
// Address Range: [[0053a610, 0053a71d]]
// Convention: unknown
// Signature: undefined8 core_setdir_cpp_FUN_0053a610(CDemonSet *param_1)

#include "nocturne.h"

ulonglong core_setdir_cpp_FUN_0053a610(CDemonSet *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CDemonSet *pCVar5;
  SVDBox *obb_b;
  int local_28;
  int local_24;
  
  iVar2 = *(int *)&param_1->field_0x15b424;
  iVar1 = 0;
  pCVar5 = param_1;
  if (0 < iVar2) {
    do {
      *(uint *)&pCVar5->field_0x15b468 = 0xffffffff;
      iVar1 = iVar1 + 1;
      pCVar5 = (CDemonSet *)&pCVar5->field_0x44;
    } while (iVar1 < *(int *)&param_1->field_0x15b424);
  }
  local_24 = 0;
  if (0 < *(int *)&param_1->field_0x15b424) {
    local_28 = 0;
    do {
      iVar2 = core_setdir_cpp_FUN_0053a720(param_1,local_24);
      iVar1 = local_24 + 1;
      if (iVar1 < *(int *)&param_1->field_0x15b424) {
        obb_b = (SVDBox *)(&param_1->field_0x15b46c + local_24 * 0x44);
        do {
          iVar3 = core_setdir_cpp_FUN_0053a720(param_1,iVar1);
          if (iVar3 != iVar2) {
            iVar4 = core_setdir_cpp_FUN_0053a1b0
                              ((SVDBox *)(&param_1->field_0x15b428 + local_28),obb_b);
            if ((iVar4 != 0) ||
               (iVar4 = core_setdir_cpp_FUN_0053a1b0
                                  (obb_b,(SVDBox *)(&param_1->field_0x15b428 + local_28)),
               iVar4 != 0)) {
              *(int *)(&param_1->field_0x15b468 + iVar3 * 0x44) = iVar2;
            }
          }
          iVar1 = iVar1 + 1;
          obb_b = obb_b + 1;
        } while (iVar1 < *(int *)&param_1->field_0x15b424);
      }
      iVar2 = *(int *)&param_1->field_0x15b424;
      local_28 = local_28 + 0x44;
      iVar1 = local_24 + 1;
      local_24 = iVar1;
    } while (iVar1 < iVar2);
  }
  return CONCAT44(iVar2,iVar1);
}
