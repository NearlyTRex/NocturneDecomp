// Name: core_mission.cpp_FUN_004f6f80
// Address: 004f6f80
// Address Range: [[004f6f80, 004f7094]]
// Convention: unknown
// Signature: void core_mission_cpp_FUN_004f6f80(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_mission_cpp_FUN_004f6f80(int *param_1)

{
  int iVar1;
  CDemonSet *pCVar2;
  int iVar3;
  
  *(uint *)&g_CDemonSetPtr->field_0x14d164 = 0;
  iVar1 = param_1[0x50f];
  do {
    if (iVar1 == 0) {
      core_setcolid_cpp_FUN_0053eda0(g_CDemonSetPtr);
      core_set_cpp_FUN_0053b460(g_CDemonSetPtr);
      return;
    }
    if (*param_1 == *(int *)(iVar1 + 0x2c)) {
      if (*(int *)(iVar1 + 0x70) == 0) {
        if (*(char *)(iVar1 + 0x78) != '\0') {
          iVar3 = _stricmp((char *)(iVar1 + 0x78),&DAT_005c8b57);
          if ((iVar3 != 0) &&
             (iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                                (0x01C6E360,(char *)(iVar1 + 0x78)), iVar3 == 0))
          goto LAB_004f707a;
        }
        iVar3 = core_actor_cpp_FUN_0040cf40(*(float *)(iVar1 + 0x74));
        if (iVar3 == 0) {
          *(uint *)(iVar1 + 0x70) = 2;
        }
        else {
          *(uint *)(iVar1 + 0x70) = 1;
LAB_004f6ffc:
          if (1999 < *(int *)&g_CDemonSetPtr->field_0x14d164) {
            _DAT_01d71de0 = "..\\core\\mission.cpp";
            _DAT_01d71de4 = 0x497;
            core_main_c_FUN_004e4330("CDemonMission::buildActiveSetActorList - Too many actors in current set!");
          }
          pCVar2 = g_CDemonSetPtr;
          *(int *)(&g_CDemonSetPtr->field_0x14d168 + *(int *)&g_CDemonSetPtr->field_0x14d164 * 4) =
               iVar1;
          *(int *)&pCVar2->field_0x14d164 = *(int *)&pCVar2->field_0x14d164 + 1;
        }
      }
      else {
LAB_004f707a:
        if (*(int *)(iVar1 + 0x70) == 1) goto LAB_004f6ffc;
      }
    }
    iVar1 = *(int *)(iVar1 + 0x14c);
  } while( true );
}
