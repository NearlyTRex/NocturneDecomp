// Name: support_newmsg.cpp_findLocalizedString_FUN_00544170
// Address: 00544170
// Address Range: [[00544170, 005441e5]]
// Convention: __cdecl
// Signature: char * support_newmsg.cpp_findLocalizedString_FUN_00544170(char * key, int lower_bound, int upper_bound)

#include "nocturne.h"

char * __cdecl
support_newmsg_cpp_findLocalizedString_FUN_00544170(char *key,int lower_bound,int upper_bound)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  if (upper_bound < lower_bound) {
    return key;
  }
  iVar1 = (upper_bound + lower_bound) / 2;
  iVar2 = crt_string_c_strcmp_FUN_005fef20(key,g_MessageKeys[iVar1]);
  if (-1 < iVar2) {
    if (iVar2 < 1) {
      return g_MessageTexts[iVar1];
    }
    pcVar3 = support_newmsg_cpp_findLocalizedString_FUN_00544170(key,iVar1 + 1,upper_bound);
    return pcVar3;
  }
  pcVar3 = support_newmsg_cpp_findLocalizedString_FUN_00544170(key,lower_bound,iVar1 + -1);
  return pcVar3;
}
