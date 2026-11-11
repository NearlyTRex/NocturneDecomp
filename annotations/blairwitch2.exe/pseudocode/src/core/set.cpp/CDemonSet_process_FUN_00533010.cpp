// Name: core_set.cpp_CDemonSet_process_FUN_00533010
// Address: 00533010
// Address Range: [[00533010, 00533183]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_process_FUN_00533010(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_process_FUN_00533010(CDemonSet *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  C3DSLight *pCVar4;
  char local_118 [256];
  uint local_18;
  int local_14;
  
  iVar3 = 0;
  if (0 < this_ptr->light_count) {
    local_14 = 0;
    pCVar4 = this_ptr->lights;
    do {
      if (pCVar4->light_type == 0) {
        iVar1 = *(int *)(&DAT_01fc8d04 + local_14);
        if (iVar1 == 0) {
          return;
        }
        local_18 = 0;
        if (0 < _DAT_01fc8e84) {
          iVar2 = 0;
          do {
            if (iVar1 == *(int *)(&DAT_01fc8e88 + iVar2)) {
              local_18 = 1;
              break;
            }
            iVar2 = iVar2 + 4;
          } while (iVar2 < _DAT_01fc8e84 * 4);
        }
        core_setutil_cpp_C3DSLight_process_FUN_0053b8d0(pCVar4,iVar1,local_18);
        _sprintf(local_118,&DAT_005e5b36);
        iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340(0x01C38BC0,local_118);
        if (iVar2 != 0) {
          *(uint *)(iVar1 + 0x1cb4) = 1;
        }
        _sprintf(local_118,"%soff");
        iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340(0x01C38BC0,local_118);
        if (iVar2 != 0) {
          *(uint *)(iVar1 + 0x1cb4) = 0;
        }
        iVar2 = _strnicmp(pCVar4->name,&DAT_005e5b41,4);
        if (iVar2 == 0) {
          if (this_ptr->last_switch_area_invalid == 0) {
            *(uint *)(iVar1 + 0x1cb4) = 0;
            local_14 = local_14 + 4;
            goto LAB_00533042;
          }
          *(uint *)(iVar1 + 0x1cb4) = 1;
        }
        local_14 = local_14 + 4;
      }
LAB_00533042:
      iVar3 = iVar3 + 1;
      pCVar4 = pCVar4 + 1;
    } while (iVar3 < this_ptr->light_count);
  }
  return;
}
