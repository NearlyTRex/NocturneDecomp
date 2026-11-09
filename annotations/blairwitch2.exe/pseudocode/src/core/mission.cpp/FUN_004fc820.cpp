// Name: core_mission.cpp_FUN_004fc820
// Address: 004fc820
// Address Range: [[004fc820, 004fc934]]
// Convention: unknown
// Signature: void core_mission_cpp_FUN_004fc820(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_mission_cpp_FUN_004fc820(int *param_1)

{
  int iVar1;
  CDemonSet *pCVar2;
  int iVar3;
  
  *(uint *)&g_CDemonSetPtr->field_0x14d164 = 0;
  iVar1 = param_1[0x445];
  do {
    if (iVar1 == 0) {
      core_setcolid_cpp_FUN_00537fc0(g_CDemonSetPtr);
      core_set_cpp_FUN_00534820(g_CDemonSetPtr);
      return;
    }
    if (*param_1 == *(int *)(iVar1 + 0x2c)) {
      if (*(int *)(iVar1 + 0x70) == 0) {
        if (*(char *)(iVar1 + 0x78) != '\0') {
          iVar3 = _stricmp((char *)(iVar1 + 0x78),&DAT_005de812);
          if ((iVar3 != 0) &&
             (iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                                (0x01C38BC0,(char *)(iVar1 + 0x78)), iVar3 == 0))
          goto LAB_004fc91a;
        }
        iVar3 = core_actor_cpp_FUN_0040d060(*(float *)(iVar1 + 0x74));
        if (iVar3 == 0) {
          *(uint *)(iVar1 + 0x70) = 2;
        }
        else {
          *(uint *)(iVar1 + 0x70) = 1;
LAB_004fc89c:
          if (1999 < *(int *)&g_CDemonSetPtr->field_0x14d164) {
            _DAT_01d046a0 = "..\\core\\mission.cpp";
            _DAT_01d046a4 = 0x48a;
            core_main_c_FUN_004e4500("CDemonMission::buildActiveSetActorList - Too many actors in current set!");
          }
          pCVar2 = g_CDemonSetPtr;
          *(int *)(&g_CDemonSetPtr->field_0x14d168 + *(int *)&g_CDemonSetPtr->field_0x14d164 * 4) =
               iVar1;
          *(int *)&pCVar2->field_0x14d164 = *(int *)&pCVar2->field_0x14d164 + 1;
        }
      }
      else {
LAB_004fc91a:
        if (*(int *)(iVar1 + 0x70) == 1) goto LAB_004fc89c;
      }
    }
    iVar1 = *(int *)(iVar1 + 0x14c);
  } while( true );
}
