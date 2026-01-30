// Name: core_script.cpp_FUN_005627f0
// Address: 005627f0
// Address Range: [[005627f0, 0056285a]]
// Convention: __cdecl
// Signature: CHero * __cdecl core_script_cpp_FUN_005627f0(int param_1,int param_2)

#include "nocturne.h"

CHero * __cdecl core_script_cpp_FUN_005627f0(int param_1,int param_2)

{
  CHero *pCVar1;
  int local_4;
  
  local_4 = -1;
  sscanf((char *)(param_1 + 0x25c),"%d",&local_4);
  if ((-1 < local_4) && (local_4 < *(int *)(param_2 + 0xcc))) {
    pCVar1 = core_script_cpp_GetDemonActor_FUN_005594e0
                       ((char *)(local_4 * 0x328 + param_2 + 0x134),g_CCharacterClassInfo.name_hash,
                        0x823c14);
    return pCVar1;
  }
  return (CHero *)0x0;
}
