// Name: core_dcamera.cpp_CDemonCamera_restoreZBufferRectArray_FUN_00449430
// Address: 00449430
// Address Range: [[00449430, 0044974b]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_restoreZBufferRectArray_FUN_00449430(CDemonCamera *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_restoreZBufferRectArray_FUN_00449430(CDemonCamera *this_ptr)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  CRect *pCVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  CRect local_34;
  CRect *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (_DAT_01c6cee8 != 0) {
    engine_special_cpp_restoreZBuffer_FUN_00566370(0,0,0,DAT_005fba18 + -1,DAT_005fba1c + -1);
    return;
  }
  if (0x100 < this_ptr->rect_array_count) {
    local_34.x_min = _DAT_01c6cee8;
    local_34.y_min = _DAT_01c6cee8;
    local_34.x_max = this_ptr->framebuffer_width + -1;
    local_34.y_max = this_ptr->framebuffer_height + -1;
    core_dcamera_cpp_CDemonCamera_restoreZBufferRect_FUN_00449350(this_ptr,&local_34);
    return;
  }
  iVar8 = 0;
  if (0 < this_ptr->rect_array_count) {
    pCVar6 = this_ptr->rect_array;
    do {
      if (pCVar6->x_min < 0) {
        pCVar6->x_min = 0;
      }
      if (this_ptr->framebuffer_width <= pCVar6->x_max) {
        pCVar6->x_max = this_ptr->framebuffer_width + -1;
      }
      if (pCVar6->y_min < 0) {
        pCVar6->y_min = 0;
      }
      if (this_ptr->framebuffer_height <= pCVar6->y_max) {
        pCVar6->y_max = this_ptr->framebuffer_height + -1;
      }
      iVar8 = iVar8 + 1;
      pCVar6 = pCVar6 + 1;
    } while (iVar8 < this_ptr->rect_array_count);
  }
  iVar8 = 0;
  local_1c = 0;
  local_14 = this_ptr->framebuffer_height;
  if (0 < this_ptr->rect_array_count) {
    pCVar6 = this_ptr->rect_array;
    do {
      if (pCVar6->y_min < local_14) {
        local_14 = pCVar6->y_min;
      }
      if (local_1c < pCVar6->y_max) {
        local_1c = pCVar6->y_max;
      }
      iVar8 = iVar8 + 1;
      pCVar6 = pCVar6 + 1;
    } while (iVar8 < this_ptr->rect_array_count);
  }
  if (local_14 <= local_1c) {
    local_20 = local_14 << 2;
    local_24 = this_ptr->rect_array;
    do {
      iVar8 = local_20;
      local_18 = 0;
      _DAT_0149e704 = 0;
      if (0 < this_ptr->rect_array_count) {
        iVar9 = 0;
        pCVar6 = local_24;
        do {
          if ((pCVar6->y_min <= local_14) && (local_14 <= pCVar6->y_max)) {
            bVar5 = false;
            if (0 < _DAT_0149e704) {
              iVar10 = _DAT_0149e704 * 4;
              iVar7 = 0;
              do {
                if ((*(int *)(iVar7 + 0x149e708) <= pCVar6->x_max) &&
                   (pCVar6->x_min <= *(int *)(iVar7 + 0x149eb08))) {
                  if ((*(int *)(iVar7 + 0x149e708) <= pCVar6->x_min) &&
                     (pCVar6->x_max <= *(int *)(iVar7 + 0x149eb08))) goto LAB_004495b6;
                  if (pCVar6->x_min < *(int *)(iVar7 + 0x149e708)) {
                    bVar5 = true;
                    *(int *)(iVar7 + 0x149e708) = pCVar6->x_min;
                  }
                  if (*(int *)(iVar7 + 0x149eb08) < pCVar6->x_max) {
                    *(int *)(iVar7 + 0x149eb08) = pCVar6->x_max;
                    goto LAB_004495b6;
                  }
                  if (bVar5) break;
                }
                iVar7 = iVar7 + 4;
              } while (iVar7 < iVar10);
            }
            if (!bVar5) {
              *(int *)(iVar9 + 0x149e708) = pCVar6->x_min;
              _DAT_0149e704 = _DAT_0149e704 + 1;
              *(int *)(iVar9 + 0x149eb08) = pCVar6->x_max;
              iVar9 = iVar9 + 4;
            }
          }
LAB_004495b6:
          pCVar6 = pCVar6 + 1;
          local_18 = local_18 + 1;
        } while (local_18 < this_ptr->rect_array_count);
      }
      iVar9 = 0;
      if (0 < _DAT_0149e704) {
        iVar10 = 0;
        do {
          piVar1 = (int *)(iVar10 + 0x149e708);
          piVar2 = (int *)(iVar10 + 0x149e708);
          piVar3 = (int *)(iVar10 + 0x149e708);
          piVar4 = (int *)(iVar10 + 0x149eb08);
          iVar10 = iVar10 + 4;
          iVar9 = iVar9 + 1;
          core_dstrendr_cpp_memcpyMMX_FUN_00471271
                    ((void *)(*(int *)(&DAT_01c60dac + iVar8) + *piVar1 * 4),
                     (void *)((local_14 * this_ptr->framebuffer_width + *piVar2) * 4 +
                             (int)this_ptr->zbuffer_aligned),(*piVar4 - *piVar3) * 4 + 4);
        } while (iVar9 < _DAT_0149e704);
      }
      local_20 = local_20 + 4;
      local_14 = local_14 + 1;
    } while (local_14 <= local_1c);
  }
  return;
}
