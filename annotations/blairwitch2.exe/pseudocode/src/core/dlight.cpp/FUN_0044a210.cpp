// Name: core_dlight.cpp_FUN_0044a210
// Address: 0044a210
// Address Range: [[0044a210, 0044a2cc]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_FUN_0044a210(CDemonLight *this_ptr,CRect *source_rect)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dlight_cpp_FUN_0044a210(CDemonLight *this_ptr,CRect *source_rect)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)&this_ptr->field_0x2f9c == 0) {
    _DAT_01d046a0 = "..\\core\\dlight.cpp";
    _DAT_01d046a4 = 0x148;
    core_main_c_FUN_004e4500("CDemonLight::blitZBuffer - No master Z buffer");
  }
  if ((((*(int *)&this_ptr->field_0x11d4 < *(int *)(source_rect + 4)) &&
       (*(int *)&this_ptr->field_0x11d8 < *(int *)(source_rect + 0xc))) &&
      (*(int *)source_rect < *(int *)&this_ptr->field_0x11dc)) &&
     ((iVar2 = *(int *)(source_rect + 8), iVar2 < *(int *)&this_ptr->field_0x11e0 &&
      (iVar2 <= *(int *)(source_rect + 0xc))))) {
    do {
      iVar1 = (*(int *)&this_ptr->field_0x1cc0 * iVar2 + *(int *)source_rect) * 2;
      iVar2 = iVar2 + 1;
      core_dstrendr_cpp_memcpyMMX_FUN_00470201
                ((void *)(*(int *)&this_ptr->field_0x2f94 + iVar1),
                 (void *)(*(int *)&this_ptr->field_0x2f9c + iVar1),
                 (*(int *)(source_rect + 4) - *(int *)source_rect) * 2 + 2);
    } while (iVar2 <= *(int *)(source_rect + 0xc));
  }
  return;
}
