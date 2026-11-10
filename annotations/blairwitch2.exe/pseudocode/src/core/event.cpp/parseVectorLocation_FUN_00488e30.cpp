// Name: core_event.cpp_parseVectorLocation_FUN_00488e30
// Address: 00488e30
// Address Range: [[00488e30, 00488f43]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_event_cpp_parseVectorLocation_FUN_00488e30(int param_1,int *param_2,undefined4 *param_3)

#include "nocturne.h"

uint __cdecl core_event_cpp_parseVectorLocation_FUN_00488e30(int param_1,int *param_2,uint *param_3)

{
  int iVar1;
  byte local_78 [100];
  int local_14;
  
  local_14 = -1;
  sscanf((char *)(param_1 + *param_2)," { %f, %f, %f }%n");
  if (6 < local_14) {
    *param_2 = *param_2 + local_14;
    return 1;
  }
  sscanf((char *)(param_1 + *param_2)," %[^ ,(){}]%n");
  if (local_14 < 0) {
    _sprintf(&DAT_01c3dd10,"Error parsing vector location");
    return 0xffffffff;
  }
  iVar1 = core_event_cpp_resolveActorByName_FUN_00488d00
                    (local_78,g_CDemonActorClassInfo.name_hash,&g_CDemonActorClassInfo);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  *param_2 = *param_2 + local_14;
  if (iVar1 != 0x0FFFFFFF) {
    if (param_3 != (uint *)(iVar1 + 0x20)) {
      *param_3 = *(uint *)(iVar1 + 0x20);
      param_3[1] = *(uint *)(iVar1 + 0x24);
      param_3[2] = *(uint *)(iVar1 + 0x28);
    }
    return 1;
  }
  return 0;
}
