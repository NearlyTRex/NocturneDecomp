// Name: core_event.cpp_parseVectorLocation_FUN_0047a4c0
// Address: 0047a4c0
// Address Range: [[0047a4c0, 0047a5d3]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_event_cpp_parseVectorLocation_FUN_0047a4c0(int param_1,int *param_2,undefined4 *param_3)

#include "nocturne.h"

uint __cdecl core_event_cpp_parseVectorLocation_FUN_0047a4c0(int param_1,int *param_2,uint *param_3)

{
  int iVar1;
  byte local_78 [100];
  int local_14;
  
  local_14 = -1;
  sscanf
            (param_1 + *param_2," { %f, %f, %f }%n",param_3,param_3 + 1,param_3 + 2,&local_14);
  if (6 < local_14) {
    *param_2 = *param_2 + local_14;
    return 1;
  }
  sscanf(param_1 + *param_2," %[^ ,(){}]%n",local_78,&local_14);
  if (local_14 < 0) {
    _sprintf(&DAT_01c08b60,"Error parsing vector location");
    return 0xffffffff;
  }
  iVar1 = core_event_cpp_resolveActorByName_FUN_0047a390
                    (local_78,g_CDemonActorActorType_00763e48.name_hash,
                     &g_CDemonActorActorType_00763e48);
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
