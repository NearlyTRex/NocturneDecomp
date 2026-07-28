// Name: support_newmsg.cpp_getLocalizedString_FUN_004ee370
// Address: 004ee370
// Address Range: [[004ee370, 004ee3ef]]
// Convention: __cdecl
// Signature: char * __cdecl support_newmsg_cpp_getLocalizedString_FUN_004ee370(char *key)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * __cdecl support_newmsg_cpp_getLocalizedString_FUN_004ee370(char *key)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int upper_bound;
  
  if (_DAT_01d16814 == 0) {
    return key;
  }
  upper_bound = _DAT_01d16818 + -1;
  if (upper_bound < 0) {
    return key;
  }
  iVar1 = upper_bound / 2;
  iVar2 = _strcmp(key,*(char **)(iVar1 * 4 + 0x1d1681c));
  if (iVar2 < 0) {
    pcVar3 = support_newmsg_cpp_findLocalizedString_FUN_004ee2f0(key,0,iVar1 + -1);
    return pcVar3;
  }
  if (iVar2 < 1) {
    return *(char **)(iVar1 * 4 + 0x1d16fec);
  }
  pcVar3 = support_newmsg_cpp_findLocalizedString_FUN_004ee2f0(key,iVar1 + 1,upper_bound);
  return pcVar3;
}
