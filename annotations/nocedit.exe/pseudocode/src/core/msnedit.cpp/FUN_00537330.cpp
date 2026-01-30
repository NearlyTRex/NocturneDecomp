// Name: core_msnedit.cpp_FUN_00537330
// Address: 00537330
// Address Range: [[00537330, 0053740f]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_FUN_00537330(CStrList *param_1,int param_2,int param_3)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_FUN_00537330(CStrList *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar8;
  char local_80 [100];
  char *local_1c;
  int local_18;
  int local_14;
  char *pcVar7;
  
  bVar8 = 0;
  local_14 = 0;
  if (0 < g_NumActorClassTypes) {
    local_18 = param_3 + 1;
    local_1c = local_80 + param_3 * 2;
    iVar4 = 0;
    do {
      iVar2 = *(int *)((int)g_ActorClassRegistrations + iVar4);
      if (param_2 == *(int *)(iVar2 + 0x28)) {
        memset(local_80,0x20,100);
        sprintf
                  (local_1c,"%s\t%d",iVar2,*(uint *)(iVar2 + 0x34));
        if (*(int *)(iVar2 + 0x2c) == 0) {
          pcVar5 = "\t(abstract)";
          iVar3 = -1;
          pcVar7 = local_80;
          do {
            pcVar6 = pcVar7;
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            pcVar6 = pcVar7 + (uint)bVar8 * -2 + 1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar6;
          } while (cVar1 != '\0');
          pcVar6 = pcVar6 + -1;
          do {
            cVar1 = *pcVar5;
            *pcVar6 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar5[1];
            pcVar5 = pcVar5 + 2;
            pcVar6[1] = cVar1;
            pcVar6 = pcVar6 + 2;
          } while (cVar1 != '\0');
        }
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(param_1,local_80);
        core_msnedit_cpp_FUN_00537330(param_1,iVar2,local_18);
      }
      local_14 = local_14 + 1;
      iVar4 = iVar4 + 4;
    } while (local_14 < g_NumActorClassTypes);
  }
  return;
}
