// Name: support_newmsg.cpp_findLocalizedString_FUN_005088e0
// Address: 005088e0
// Address Range: [[005088e0, 00508955]]
// Convention: __cdecl
// Signature: char * __cdecl support_newmsg_cpp_findLocalizedString_FUN_005088e0(char *key,int lower_bound,int upper_bound)

#include "nocturne.h"

char * __cdecl support_newmsg_cpp_findLocalizedString_FUN_005088e0(char *key,int lower_bound,int upper_bound)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  if (upper_bound < lower_bound) {
    return key;
  }
  iVar1 = (upper_bound + lower_bound) / 2;
  iVar2 = _strcmp(key,*(char **)(iVar1 * 4 + 0x1dd489c));
  if (-1 < iVar2) {
    if (iVar2 < 1) {
      return *(char **)(iVar1 * 4 + 0x1dd506c);
    }
    pcVar3 = support_newmsg_cpp_findLocalizedString_FUN_005088e0(key,iVar1 + 1,upper_bound);
    return pcVar3;
  }
  pcVar3 = support_newmsg_cpp_findLocalizedString_FUN_005088e0(key,lower_bound,iVar1 + -1);
  return pcVar3;
}
