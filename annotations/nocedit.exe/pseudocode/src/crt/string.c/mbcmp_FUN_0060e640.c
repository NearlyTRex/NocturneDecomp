// Name: crt_string.c_mbcmp_FUN_0060e640
// Address: 0060e640
// Address Range: [[0060e640, 0060e69b]]
// Convention: __cdecl
// Signature: int __cdecl crt_string_c_mbcmp_FUN_0060e640(char *str1,char *str2)

#include "nocturne.h"

int __cdecl crt_string_c_mbcmp_FUN_0060e640(char *str1,char *str2)

{
  if (*str1 != *str2) {
    return (uint)(byte)*str1 - (uint)(byte)*str2;
  }
  if ((g_MultibyteLocaleActive != 0) && ((g_LeadByteTable[(byte)*str1] & 1U) != 0)) {
    if (str1[1] != str2[1]) {
      return (uint)(byte)str1[1] - (uint)(byte)str2[1];
    }
  }
  return 0;
}
