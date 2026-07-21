// Name: core_event.cpp_parseDamageType_FUN_0047a8f0
// Address: 0047a8f0
// Address Range: [[0047a8f0, 0047a9de]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_event_cpp_parseDamageType_FUN_0047a8f0(undefined4 param_1,undefined4 *param_2)

#include "nocturne.h"

uint __cdecl core_event_cpp_parseDamageType_FUN_0047a8f0(uint param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = _stricmp(param_1,"generic");
  if (iVar1 == 0) {
    *param_2 = 100;
    return 1;
  }
  iVar1 = _stricmp(param_1,"bullet");
  if (iVar1 == 0) {
    *param_2 = 0x65;
    return 1;
  }
  iVar1 = _stricmp(param_1,&DAT_0057f55c);
  if (iVar1 == 0) {
    *param_2 = 0x66;
    return 1;
  }
  iVar1 = _stricmp(param_1,"Blade");
  if (iVar1 == 0) {
    *param_2 = 0x67;
    return 1;
  }
  iVar1 = _stricmp(param_1,"Stake");
  if (iVar1 == 0) {
    *param_2 = 0x68;
    return 1;
  }
  iVar1 = _stricmp(param_1,&DAT_0057f56d);
  if (iVar1 == 0) {
    *param_2 = 0x69;
    return 1;
  }
  iVar1 = _stricmp(param_1,"electrocute");
  if (iVar1 == 0) {
    *param_2 = 0x6a;
    return 1;
  }
  return 0;
}
