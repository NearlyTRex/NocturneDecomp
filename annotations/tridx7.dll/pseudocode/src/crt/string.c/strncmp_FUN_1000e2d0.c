// Name: crt_string.c_strncmp_FUN_1000e2d0
// Address: 1000e2d0
// Address Range: [[1000e2d0, 1000e307]]
// Convention: __cdecl
// Signature: int __cdecl crt_string_c_strncmp_FUN_1000e2d0(char *str1,char *str2,size_t count)

#include "nocturne.h"

int __cdecl strncmp(char *str1,char *str2,size_t count)

{
  char cVar1;
  char cVar2;
  size_t sVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  uVar5 = 0;
  sVar3 = count;
  pcVar6 = str1;
  if (count != 0) {
    do {
      if (sVar3 == 0) break;
      sVar3 = sVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar4 = count - sVar3;
    do {
      pcVar6 = str2;
      pcVar7 = str1;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar7 = str1 + 1;
      pcVar6 = str2 + 1;
      cVar2 = *str1;
      cVar1 = *str2;
      str2 = pcVar6;
      str1 = pcVar7;
    } while (cVar1 == cVar2);
    uVar5 = 0;
    if ((byte)pcVar6[-1] <= (byte)pcVar7[-1]) {
      if (pcVar6[-1] == pcVar7[-1]) {
        return 0;
      }
      uVar5 = 0xfffffffe;
    }
    uVar5 = ~uVar5;
  }
  return uVar5;
}
