// Name: core_event.cpp_parseDeathType_FUN_0047a760
// Address: 0047a760
// Address Range: [[0047a760, 0047a8ea]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_event_cpp_parseDeathType_FUN_0047a760(undefined4 param_1,undefined4 *param_2)

#include "nocturne.h"

uint __cdecl core_event_cpp_parseDeathType_FUN_0047a760(uint param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = _stricmp(param_1,"generic");
  if (iVar1 == 0) {
    *param_2 = 0;
    return 1;
  }
  iVar1 = _stricmp(param_1,"drown");
  if (iVar1 == 0) {
    *param_2 = 1;
    return 1;
  }
  iVar1 = _stricmp(param_1,&DAT_0057f502);
  if (iVar1 == 0) {
    *param_2 = 2;
    return 1;
  }
  iVar1 = _stricmp(param_1,"explode");
  if (iVar1 == 0) {
    *param_2 = 3;
    return 1;
  }
  iVar1 = _stricmp(param_1,"fallApart");
  if (iVar1 == 0) {
    *param_2 = 4;
    return 1;
  }
  iVar1 = _stricmp(param_1,"shatter");
  if (iVar1 == 0) {
    *param_2 = 5;
    return 1;
  }
  iVar1 = _stricmp(param_1,"electrocute");
  if (iVar1 == 0) {
    *param_2 = 6;
    return 1;
  }
  iVar1 = _stricmp(param_1,&DAT_0057f52d);
  if (iVar1 == 0) {
    *param_2 = 0x69;
    return 1;
  }
  iVar1 = _stricmp(param_1,"Chopped");
  if (iVar1 == 0) {
    *param_2 = 7;
    return 1;
  }
  iVar1 = _stricmp(param_1,"Crushed");
  if (iVar1 == 0) {
    *param_2 = 8;
    return 1;
  }
  iVar1 = _stricmp(param_1,"Impale");
  if (iVar1 == 0) {
    *param_2 = 9;
    return 1;
  }
  iVar1 = _stricmp(param_1,&DAT_0057f548);
  if (iVar1 == 0) {
    *param_2 = 10;
    return 1;
  }
  return 0;
}
