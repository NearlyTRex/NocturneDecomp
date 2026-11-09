// Name: core_dcamera.cpp_CDemonCamera_restoreZBufferRect_FUN_0044d210
// Address: 0044d210
// Address Range: [[0044d210, 0044d2e5]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_restoreZBufferRect_FUN_0044d210(CDemonCamera *this_ptr,CRect *rect_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_restoreZBufferRect_FUN_0044d210(CDemonCamera *this_ptr,CRect *rect_ptr)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((((*(int *)&this_ptr->field_0x11d4 < *(int *)(rect_ptr + 4)) &&
       (*(int *)&this_ptr->field_0x11d8 < *(int *)(rect_ptr + 0xc))) &&
      (*(int *)rect_ptr < *(int *)&this_ptr->field_0x11dc)) &&
     (*(int *)(rect_ptr + 8) < *(int *)&this_ptr->field_0x11e0)) {
    if (_DAT_01c50948 != 0) {
      engine_special_cpp_FUN_00582aa0(0,0,0,DAT_0061b498 + -1,DAT_0061b49c + -1);
      return;
    }
    iVar4 = *(int *)(rect_ptr + 8);
    if (iVar4 <= *(int *)(rect_ptr + 0xc)) {
      iVar3 = iVar4 * 4;
      do {
        piVar1 = (int *)(&DAT_01c4480c + iVar3);
        iVar2 = *(int *)&this_ptr->field_0x144 * iVar4;
        iVar3 = iVar3 + 4;
        iVar4 = iVar4 + 1;
        core_dstrendr_cpp_memcpyMMX_FUN_004886f1
                  ((void *)(*(int *)rect_ptr * 4 + *piVar1),
                   (void *)(*(int *)&this_ptr->field_0x15c + (iVar2 + *(int *)rect_ptr) * 4),
                   (*(int *)(rect_ptr + 4) - *(int *)rect_ptr) * 4 + 4);
      } while (iVar4 <= *(int *)(rect_ptr + 0xc));
    }
  }
  return;
}
