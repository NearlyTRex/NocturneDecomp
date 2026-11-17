// Name: crt_unknown.c_FUN_005bd118
// Address: 005bd118
// Address Range: [[005bd118, 005bd152]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005bd118(void)

#include "nocturne.h"

void FUN_005bd118(void)

{
  if (g_CHAR_PTR_02680174 != (char *)0x0) {
    debugFree(g_CHAR_PTR_02680174);
    g_CHAR_PTR_02680174 = (char *)0x0;
  }
  if (g_WCHAR_PTR_02680178 != (WCHAR *)0x0) {
    debugFree(g_WCHAR_PTR_02680178);
    g_WCHAR_PTR_02680178 = (WCHAR *)0x0;
  }
  return;
}
