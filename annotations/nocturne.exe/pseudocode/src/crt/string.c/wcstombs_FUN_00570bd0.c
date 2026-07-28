// Name: crt_string.c_wcstombs_FUN_00570bd0
// Address: 00570bd0
// Address Range: [[00570bd0, 00570c90]]
// Convention: __cdecl
// Signature: int __cdecl crt_string_c_wcstombs_FUN_00570bd0(char *dest,wchar_t *src,SIZE_T dest_size)

#include "nocturne.h"

int __cdecl wcstombs(char *dest,wchar_t *src,SIZE_T dest_size)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  char local_14 [4];
  
  bVar7 = 0;
  iVar4 = 0;
  if (dest == (char *)0x0) {
    while ((iVar2 = iVar4, *src != L'\0' &&
           (iVar2 = WideCharToSingleByte
                              ((wchar_t)local_14,(char *)(uint)(ushort)*src), iVar2 != -1))) {
      src = src + 1;
      iVar4 = iVar4 + iVar2;
    }
  }
  else {
    for (; iVar2 = iVar4, dest_size != 0; dest_size = dest_size - uVar1) {
      if (*src == L'\0') {
        *dest = '\0';
        return iVar4;
      }
      uVar1 = WideCharToSingleByte
                        ((wchar_t)local_14,(char *)(uint)(ushort)*src);
      if (uVar1 == 0xffffffff) {
        return -1;
      }
      if (dest_size < uVar1) {
        return iVar4;
      }
      pcVar5 = local_14;
      pcVar6 = dest;
      for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(uint *)pcVar6 = *(uint *)pcVar5;
        pcVar5 = pcVar5 + (uint)bVar7 * -8 + 4;
        pcVar6 = pcVar6 + (uint)bVar7 * -8 + 4;
      }
      for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar6 = *pcVar5;
        pcVar5 = pcVar5 + (uint)bVar7 * -2 + 1;
        pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
      }
      src = src + 1;
      iVar4 = iVar4 + uVar1;
      dest = dest + uVar1;
    }
  }
  return iVar2;
}
