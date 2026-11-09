// Name: core_fldnotes.cpp_FUN_004a3bb0
// Address: 004a3bb0
// Address Range: [[004a3bb0, 004a3c93]]
// Convention: unknown
// Signature: void core_fldnotes_cpp_FUN_004a3bb0(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

void core_fldnotes_cpp_FUN_004a3bb0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint local_14;
  uint local_10;
  
  if ((param_2 != *(int *)(param_1 + 0x964)) || (param_3 != *(int *)(param_1 + 0x968))) {
    local_10 = -param_4;
    if (local_10 <= param_4) {
      local_14 = local_10 + param_3;
      do {
        iVar2 = -param_4;
        if (-param_4 == param_4 || SBORROW4(iVar2,param_4) != param_4 * -2 < 0) {
          iVar3 = param_2 + iVar2;
          do {
            iVar1 = iVar2 * iVar2 + local_10 * local_10;
            if (iVar1 <= param_4 * param_4) {
              core_fldnotes_cpp_FUN_004a3ca0
                        (param_1,iVar3,local_14,0xff - (iVar1 * 0xff) / (param_4 * param_4));
            }
            iVar2 = iVar2 + 1;
            iVar3 = iVar3 + 1;
          } while (iVar2 <= param_4);
        }
        local_14 = local_14 + 1;
        local_10 = local_10 + 1;
      } while (local_10 <= param_4);
    }
    *(int *)(param_1 + 0x964) = param_2;
    *(int *)(param_1 + 0x968) = param_3;
  }
  return;
}
