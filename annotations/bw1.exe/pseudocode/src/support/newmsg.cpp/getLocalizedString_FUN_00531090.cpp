// Name: support_newmsg.cpp_getLocalizedString_FUN_00531090
// Address: 00531090
// Address Range: [[00531090, 0053110f]]
// Convention: __cdecl
// Signature: char * __cdecl support_newmsg_cpp_getLocalizedString_FUN_00531090(char *key)

#include "nocturne.h"

char * __cdecl support_newmsg_cpp_getLocalizedString_FUN_00531090(char *key)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int upper_bound;
  
  if (g_LocalizationLoaded == 0) {
    return key;
  }
  upper_bound = g_INT_01d7f1c0 + -1;
  if (upper_bound < 0) {
    return key;
  }
  iVar1 = upper_bound / 2;
  iVar2 = _strcmp(key,g_CHAR_PTR_ARRAY_01d7f1c4[iVar1]);
  if (iVar2 < 0) {
    pcVar3 = support_newmsg_cpp_findLocalizedString_FUN_00531010(key,0,iVar1 + -1);
    return pcVar3;
  }
  if (iVar2 < 1) {
    return g_CHAR_PTR_ARRAY_01d7f994[iVar1];
  }
  pcVar3 = support_newmsg_cpp_findLocalizedString_FUN_00531010(key,iVar1 + 1,upper_bound);
  return pcVar3;
}
