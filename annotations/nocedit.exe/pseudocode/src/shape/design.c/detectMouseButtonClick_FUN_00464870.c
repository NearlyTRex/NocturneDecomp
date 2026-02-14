// Name: shape_design.c_detectMouseButtonClick_FUN_00464870
// Address: 00464870
// Address Range: [[00464870, 004648d6]]
// Convention: __cdecl
// Signature: int __cdecl shape_design_c_detectMouseButtonClick_FUN_00464870(int mouse_button_mask)

#include "nocturne.h"

int __cdecl shape_design_c_detectMouseButtonClick_FUN_00464870(int mouse_button_mask)

{
  uint local_1c;
  
  if ((g_MouseButtonFlags.dword & mouse_button_mask) != 0) {
    g_MouseButtonClickCounter = g_MouseButtonClickCounter + 1;
  }
  if ((g_MouseButtonClickCounter != 0) && ((g_MouseButtonFlags.dword & mouse_button_mask) == 0)) {
    g_MouseButtonClickCounter = 0;
  }
  local_1c = (uint)(g_MouseButtonClickCounter == 1);
  return local_1c;
}
