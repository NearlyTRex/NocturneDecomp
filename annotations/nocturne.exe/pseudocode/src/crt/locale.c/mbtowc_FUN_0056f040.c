// Name: crt_locale.c_mbtowc_FUN_0056f040
// Address: 0056f040
// Address Range: [[0056f040, 0056f0eb]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_locale_c_mbtowc_FUN_0056f040(wchar_t *wide_char,char *mb_string,SIZE_T max_bytes)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __watcallStack mbtowc(wchar_t *wide_char,char *mb_string,SIZE_T max_bytes)

{
  int iVar1;
  uint uVar2;
  uint cbMultiByte;
  wchar_t local_14 [2];
  
  if (mb_string == (char *)0x0) {
    iVar1 = 0;
  }
  else {
    if (max_bytes != 0) {
      if (*mb_string == '\0') {
        if (wide_char != (wchar_t *)0x0) {
          *wide_char = L'\0';
        }
        return 0;
      }
      if (((_DAT_02de5c30 == 0) || ((*(byte *)((byte)*mb_string + 0x2de5c41) & 1) == 0)) ||
         (mb_string[1] != '\0')) {
        uVar2 = mblen(mb_string);
        cbMultiByte = uVar2;
        if (max_bytes < uVar2) {
          cbMultiByte = max_bytes;
        }
        iVar1 = MultiByteToWideChar(DAT_005c2144,8,mb_string,cbMultiByte,local_14,1);
        if (iVar1 != 0) {
          if (wide_char != (wchar_t *)0x0) {
            *wide_char = local_14[0];
          }
          return uVar2;
        }
      }
    }
    iVar1 = -1;
  }
  return iVar1;
}
