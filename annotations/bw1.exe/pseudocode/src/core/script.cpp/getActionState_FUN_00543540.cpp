// Name: core_script.cpp_getActionState_FUN_00543540
// Address: 00543540
// Address Range: [[00543540, 0054360d]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_getActionState_FUN_00543540(int param_1,char *param_2)

#include "nocturne.h"

int __cdecl core_script_cpp_getActionState_FUN_00543540(int param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = _stricmp(param_2,&DAT_005ee0da);
  if (iVar1 == 0) {
    return param_1;
  }
  iVar1 = _stricmp(param_2,"backup");
  if (iVar1 == 0) {
    return param_1 + 4;
  }
  iVar1 = _stricmp(param_2,&DAT_005ee0e6);
  if (iVar1 == 0) {
    return param_1 + 8;
  }
  iVar1 = _stricmp(param_2,&DAT_005ee0ea);
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
  iVar1 = _stricmp(param_2,&DAT_005ee0fd);
  if (iVar1 == 0) {
    return param_1 + 0x18;
  }
  iVar1 = _stricmp(param_2,&DAT_005ee102);
  if (iVar1 == 0) {
    return param_1 + 0x1c;
  }
  return 0;
}
