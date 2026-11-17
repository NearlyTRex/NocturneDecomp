// Name: crt_unknown.c_FUN_005674f8
// Address: 005674f8
// Address Range: [[005674f8, 00567532]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005674f8(void)

#include "nocturne.h"

void FUN_005674f8(void)

{
  if (g_CHAR_PTR_02de4e34 != (char *)0x0) {
    free(g_CHAR_PTR_02de4e34);
    g_CHAR_PTR_02de4e34 = (char *)0x0;
  }
  if (g_WCHAR_PTR_02de4e38 != (WCHAR *)0x0) {
    free(g_WCHAR_PTR_02de4e38);
    g_WCHAR_PTR_02de4e38 = (WCHAR *)0x0;
  }
  return;
}
