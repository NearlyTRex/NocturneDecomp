// Name: core_dcamera.cpp_CDemonCamera_restoreZBufferRect_FUN_00449350
// Address: 00449350
// Address Range: [[00449350, 00449425]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_restoreZBufferRect_FUN_00449350(CDemonCamera *this_ptr,CRect *rect_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_restoreZBufferRect_FUN_00449350(CDemonCamera *this_ptr,CRect *rect_ptr)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((((*(int *)&this_ptr->field_0x11d4 < *(int *)(rect_ptr + 4)) &&
       (*(int *)&this_ptr->field_0x11d8 < *(int *)(rect_ptr + 0xc))) &&
      (*(int *)rect_ptr < *(int *)&this_ptr->field_0x11dc)) &&
     (*(int *)(rect_ptr + 8) < *(int *)&this_ptr->field_0x11e0)) {
    if (_DAT_01c6cee8 != 0) {
      engine_special_cpp_FUN_00566370(0,0,0,DAT_005fba18 + -1,DAT_005fba1c + -1);
      return;
    }
    iVar4 = *(int *)(rect_ptr + 8);
    if (iVar4 <= *(int *)(rect_ptr + 0xc)) {
      iVar3 = iVar4 * 4;
      do {
        piVar1 = (int *)(&DAT_01c60dac + iVar3);
        iVar2 = *(int *)&this_ptr->field_0x144 * iVar4;
        iVar3 = iVar3 + 4;
        iVar4 = iVar4 + 1;
        core_dstrendr_cpp_memcpyMMX_FUN_00471271
                  ((void *)(*(int *)rect_ptr * 4 + *piVar1),
                   (void *)(*(int *)&this_ptr->field_0x15c + (iVar2 + *(int *)rect_ptr) * 4),
                   (*(int *)(rect_ptr + 4) - *(int *)rect_ptr) * 4 + 4);
      } while (iVar4 <= *(int *)(rect_ptr + 0xc));
    }
  }
  return;
}
