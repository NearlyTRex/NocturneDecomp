// Name: crt_locale.c_mbtowc_FUN_0060b1c0
// Address: 0060b1c0
// Address Range: [[0060b1c0, 0060b26b]]
// Convention: __watcallStack
// Signature: int crt_locale.c_mbtowc_FUN_0060b1c0(wchar_t * wide_char, char * mb_string, SIZE_T max_bytes)

#include "nocturne.h"

int __watcallStack
crt_locale_c_mbtowc_FUN_0060b1c0(wchar_t *wide_char,char *mb_string,SIZE_T max_bytes)

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
      if (((g_MultibyteLocaleActive == 0) || ((g_LeadByteTable[(byte)*mb_string] & 1U) == 0)) ||
         (mb_string[1] != '\0')) {
        uVar2 = crt_locale_c_mblen_FUN_00605a40(mb_string);
        cbMultiByte = uVar2;
        if (max_bytes < uVar2) {
          cbMultiByte = max_bytes;
        }
        iVar1 = (*PTR_MultiByteToWideChar_006115f4)(g_CodePage,8,mb_string,cbMultiByte,local_14,1);
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
