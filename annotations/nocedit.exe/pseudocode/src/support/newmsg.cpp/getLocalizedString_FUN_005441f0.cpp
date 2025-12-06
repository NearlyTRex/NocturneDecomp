// Name: support_newmsg.cpp_getLocalizedString_FUN_005441f0
// Address: 005441f0
// Address Range: [[005441f0, 0054426f]]
// Convention: __cdecl
// Signature: char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)

#include "nocturne.h"

char * __cdecl support_newmsg_cpp_getLocalizedString_FUN_005441f0(char *key)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int upper_bound;
  
  if (g_LocalizationLoaded == 0) {
    return key;
  }
  upper_bound = g_LocalizedStringCount + -1;
  if (upper_bound < 0) {
    return key;
  }
  iVar1 = upper_bound / 2;
  iVar2 = crt_string_c_strcmp_FUN_005fef20(key,g_MessageKeys[iVar1]);
  if (iVar2 < 0) {
    pcVar3 = support_newmsg_cpp_findLocalizedString_FUN_00544170(key,0,iVar1 + -1);
    return pcVar3;
  }
  if (iVar2 < 1) {
    return g_MessageTexts[iVar1];
  }
  pcVar3 = support_newmsg_cpp_findLocalizedString_FUN_00544170(key,iVar1 + 1,upper_bound);
  return pcVar3;
}
