// Name: wincore_windll.cpp_restoreVideoModeX_FUN_005b7ede
// Address: 005b7ede
// Address Range: [[005b7ede, 005b7f0a]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_restoreVideoModeX_FUN_005b7ede(void)

#include "nocturne.h"

int __cdecl wincore_windll_cpp_restoreVideoModeX_FUN_005b7ede(void)

{
  if ((g_APIDLL_restoreVideoModeX != (APIDLL_restoreVideoModeX *)0x0) && (g_VideoModeXBPP != 0)) {
    (*g_APIDLL_restoreVideoModeX)();
    g_VideoModeXBPP = 0;
    return 1;
  }
  return 0;
}
