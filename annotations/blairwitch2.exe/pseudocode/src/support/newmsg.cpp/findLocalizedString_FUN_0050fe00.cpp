// Name: support_newmsg.cpp_findLocalizedString_FUN_0050fe00
// Address: 0050fe00
// Address Range: [[0050fe00, 0050fe75]]
// Convention: __cdecl
// Signature: char * __cdecl support_newmsg_cpp_findLocalizedString_FUN_0050fe00(char *key,int lower_bound,int upper_bound)

#include "nocturne.h"

char * __cdecl support_newmsg_cpp_findLocalizedString_FUN_0050fe00(char *key,int lower_bound,int upper_bound)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  if (upper_bound < lower_bound) {
    return key;
  }
  iVar1 = (upper_bound + lower_bound) / 2;
  iVar2 = _strcmp(key,*(char **)(iVar1 * 4 + 0x1d6325c));
  if (-1 < iVar2) {
    if (iVar2 < 1) {
      return *(char **)(iVar1 * 4 + 0x1d63a2c);
    }
    pcVar3 = support_newmsg_cpp_findLocalizedString_FUN_0050fe00(key,iVar1 + 1,upper_bound);
    return pcVar3;
  }
  pcVar3 = support_newmsg_cpp_findLocalizedString_FUN_0050fe00(key,lower_bound,iVar1 + -1);
  return pcVar3;
}
