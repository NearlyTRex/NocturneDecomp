// Name: core_script.cpp_getActionState_FUN_004fe300
// Address: 004fe300
// Address Range: [[004fe300, 004fe3cd]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_getActionState_FUN_004fe300(int param_1,undefined4 param_2)

#include "nocturne.h"

int __cdecl core_script_cpp_getActionState_FUN_004fe300(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = _stricmp(param_2,"walk");
  if (iVar1 == 0) {
    return param_1;
  }
  iVar1 = _stricmp(param_2,"backup");
  if (iVar1 == 0) {
    return param_1 + 4;
  }
  iVar1 = _stricmp(param_2,"run");
  if (iVar1 == 0) {
    return param_1 + 8;
  }
  iVar1 = _stricmp(param_2,"fire");
  if (iVar1 == 0) {
    return param_1 + 0xc;
  }
  iVar1 = _stricmp(param_2,"useItem");
  if (iVar1 == 0) {
    return param_1 + 0x10;
  }
  iVar1 = _stricmp(param_2,"light");
  if (iVar1 == 0) {
    return param_1 + 0x14;
  }
  iVar1 = _stricmp(param_2,"draw");
  if (iVar1 == 0) {
    return param_1 + 0x18;
  }
  iVar1 = _stricmp(param_2,"jump");
  if (iVar1 == 0) {
    return param_1 + 0x1c;
  }
  return 0;
}
