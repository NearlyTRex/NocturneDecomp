// Name: core_set.cpp_FUN_00539c50
// Address: 00539c50
// Address Range: [[00539c50, 00539dc3]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_FUN_00539c50(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_FUN_00539c50(CDemonSet *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char local_118 [256];
  uint local_18;
  int local_14;
  
  iVar3 = 0;
  if (0 < *(int *)&this_ptr->field_0x19a2c) {
    local_14 = 0;
    piVar4 = (int *)&this_ptr->field_0x19a30;
    do {
      if (*piVar4 == 0) {
        iVar1 = *(int *)(&DAT_0203a418 + local_14);
        if (iVar1 == 0) {
          return;
        }
        local_18 = 0;
        if (0 < _DAT_0203a598) {
          iVar2 = 0;
          do {
            if (iVar1 == *(int *)(&DAT_0203a59c + iVar2)) {
              local_18 = 1;
              break;
            }
            iVar2 = iVar2 + 4;
          } while (iVar2 < _DAT_0203a598 * 4);
        }
        core_setutil_cpp_C3DSLight_process_FUN_00542b60(piVar4,iVar1,local_18);
        FUN_005a28c0(local_118,&DAT_005d0803,piVar4 + 1);
        iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0(0x01C6E360,local_118);
        if (iVar2 != 0) {
          *(uint *)(iVar1 + 0x1cb4) = 1;
        }
        FUN_005a28c0(local_118,"%soff",piVar4 + 1);
        iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0(0x01C6E360,local_118);
        if (iVar2 != 0) {
          *(uint *)(iVar1 + 0x1cb4) = 0;
        }
        iVar2 = _strnicmp((char *)(piVar4 + 1),&DAT_005d080e,4);
        if (iVar2 == 0) {
          if (*(int *)&this_ptr->field_0x15ae5c == 0) {
            *(uint *)(iVar1 + 0x1cb4) = 0;
            local_14 = local_14 + 4;
            goto LAB_00539c82;
          }
          *(uint *)(iVar1 + 0x1cb4) = 1;
        }
        local_14 = local_14 + 4;
      }
LAB_00539c82:
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 0x626;
    } while (iVar3 < *(int *)&this_ptr->field_0x19a2c);
  }
  return;
}
