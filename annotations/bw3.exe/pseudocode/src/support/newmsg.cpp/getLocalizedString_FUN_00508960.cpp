// Name: support_newmsg.cpp_getLocalizedString_FUN_00508960
// Address: 00508960
// Address Range: [[00508960, 005089df]]
// Convention: __cdecl
// Signature: char * __cdecl support_newmsg_cpp_getLocalizedString_FUN_00508960(char *key)

#include "nocturne.h"

char * __cdecl support_newmsg_cpp_getLocalizedString_FUN_00508960(char *key)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int upper_bound;
  
  if (g_LocalizationLoaded == 0) {
    return key;
  }
  upper_bound = g_INT_01dd4898 + -1;
  if (upper_bound < 0) {
    return key;
  }
  iVar1 = upper_bound / 2;
  iVar2 = _strcmp(key,g_CHAR_PTR_ARRAY_01dd489c[iVar1]);
  if (iVar2 < 0) {
    pcVar3 = support_newmsg_cpp_findLocalizedString_FUN_005088e0(key,0,iVar1 + -1);
    return pcVar3;
  }
  if (iVar2 < 1) {
    return g_CHAR_PTR_ARRAY_01dd506c[iVar1];
  }
  pcVar3 = support_newmsg_cpp_findLocalizedString_FUN_005088e0(key,iVar1 + 1,upper_bound);
  return pcVar3;
}
