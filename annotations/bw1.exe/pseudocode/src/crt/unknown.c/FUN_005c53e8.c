// Name: crt_unknown.c_FUN_005c53e8
// Address: 005c53e8
// Address Range: [[005c53e8, 005c5422]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c53e8(void)

#include "nocturne.h"

void FUN_005c53e8(void)

{
  if (g_CHAR_PTR_02c9f064 != (char *)0x0) {
    debugFree(g_CHAR_PTR_02c9f064);
    g_CHAR_PTR_02c9f064 = (char *)0x0;
  }
  if (g_WCHAR_PTR_02c9f068 != (WCHAR *)0x0) {
    debugFree(g_WCHAR_PTR_02c9f068);
    g_WCHAR_PTR_02c9f068 = (WCHAR *)0x0;
  }
  return;
}
