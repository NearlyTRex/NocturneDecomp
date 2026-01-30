// Name: core_script.cpp_FUN_00559660
// Address: 00559660
// Address Range: [[00559660, 0055972d]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_FUN_00559660(int param_1,char *param_2)

#include "nocturne.h"

int __cdecl core_script_cpp_FUN_00559660(int param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = stricmp(param_2,"walk");
  if (iVar1 == 0) {
    return param_1;
  }
  iVar1 = stricmp(param_2,"backup");
  if (iVar1 == 0) {
    return param_1 + 4;
  }
  iVar1 = stricmp(param_2,"run");
  if (iVar1 == 0) {
    return param_1 + 8;
  }
  iVar1 = stricmp(param_2,"fire");
  if (iVar1 == 0) {
    return param_1 + 0xc;
  }
  iVar1 = stricmp(param_2,"useItem");
  if (iVar1 == 0) {
    return param_1 + 0x10;
  }
  iVar1 = stricmp(param_2,"light");
  if (iVar1 == 0) {
    return param_1 + 0x14;
  }
  iVar1 = stricmp(param_2,"draw");
  if (iVar1 == 0) {
    return param_1 + 0x18;
  }
  iVar1 = stricmp(param_2,"jump");
  if (iVar1 == 0) {
    return param_1 + 0x1c;
  }
  return 0;
}
