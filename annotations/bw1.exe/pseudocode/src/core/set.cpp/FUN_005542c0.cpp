// Name: core_set.cpp_FUN_005542c0
// Address: 005542c0
// Address Range: [[005542c0, 00554433]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_FUN_005542c0(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_FUN_005542c0(CDemonSet *this_ptr)

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
        iVar1 = *(int *)(&DAT_01fe4cb8 + local_14);
        if (iVar1 == 0) {
          return;
        }
        local_18 = 0;
        if (0 < _DAT_01fe4e38) {
          iVar2 = 0;
          do {
            if (iVar1 == *(int *)(&DAT_01fe4e3c + iVar2)) {
              local_18 = 1;
              break;
            }
            iVar2 = iVar2 + 4;
          } while (iVar2 < _DAT_01fe4e38 * 4);
        }
        core_setutil_cpp_C3DSLight_process_FUN_0055d1a0(piVar4,iVar1,local_18);
        FUN_005bfb40(local_118,&DAT_005f0b5a,piVar4 + 1);
        iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30(0x01C51D80,local_118);
        if (iVar2 != 0) {
          *(uint *)(iVar1 + 0x1cb4) = 1;
        }
        FUN_005bfb40(local_118,"%soff",piVar4 + 1);
        iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30(0x01C51D80,local_118);
        if (iVar2 != 0) {
          *(uint *)(iVar1 + 0x1cb4) = 0;
        }
        iVar2 = _strnicmp((char *)(piVar4 + 1),&DAT_005f0b65,4);
        if (iVar2 == 0) {
          if (*(int *)&this_ptr->field_0x15ae5c == 0) {
            *(uint *)(iVar1 + 0x1cb4) = 0;
            local_14 = local_14 + 4;
            goto LAB_005542f2;
          }
          *(uint *)(iVar1 + 0x1cb4) = 1;
        }
        local_14 = local_14 + 4;
      }
LAB_005542f2:
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 0x626;
    } while (iVar3 < *(int *)&this_ptr->field_0x19a2c);
  }
  return;
}
