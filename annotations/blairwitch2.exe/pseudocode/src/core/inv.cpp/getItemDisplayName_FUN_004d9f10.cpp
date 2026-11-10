// Name: core_inv.cpp_getItemDisplayName_FUN_004d9f10
// Address: 004d9f10
// Address Range: [[004d9f10, 004d9f7b]]
// Convention: __cdecl
// Signature: char * __cdecl core_inv_cpp_getItemDisplayName_FUN_004d9f10(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * __cdecl core_inv_cpp_getItemDisplayName_FUN_004d9f10(CDemonActor *param_1)

{
  CKeyFramedModelInstance *pCVar1;
  int iVar2;
  char *str2;
  int iVar3;
  
  str2 = (char *)0x1cf0208;
  iVar3 = 0;
  pCVar1 = core_inv_cpp_getItemModel_FUN_004d9db0(param_1);
  if (0 < _DAT_01cf0200) {
    do {
      iVar2 = _stricmp(pCVar1->model_name,str2);
      if (iVar2 == 0) {
        return str2 + 0x100;
      }
      iVar3 = iVar3 + 1;
      str2 = str2 + 0x300;
    } while (iVar3 < _DAT_01cf0200);
  }
  _sprintf((char *)0x1cee1b0,"Add to dict: %s");
  return (char *)0x1cee1b0;
}
