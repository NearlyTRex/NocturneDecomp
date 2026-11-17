// Name: crt_unknown.c_FUN_005a8258
// Address: 005a8258
// Address Range: [[005a8258, 005a8292]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005a8258(void)

#include "nocturne.h"

void FUN_005a8258(void)

{
  if (g_CHAR_PTR_02d252b4 != (char *)0x0) {
    debugFree(g_CHAR_PTR_02d252b4);
    g_CHAR_PTR_02d252b4 = (char *)0x0;
  }
  if (g_WCHAR_PTR_02d252b8 != (WCHAR *)0x0) {
    debugFree(g_WCHAR_PTR_02d252b8);
    g_WCHAR_PTR_02d252b8 = (WCHAR *)0x0;
  }
  return;
}
