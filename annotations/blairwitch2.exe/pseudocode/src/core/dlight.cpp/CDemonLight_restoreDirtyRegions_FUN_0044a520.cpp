// Name: core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_0044a520
// Address: 0044a520
// Address Range: [[0044a520, 0044a80c]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_0044a520(CDemonLight *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_0044a520(CDemonLight *this_ptr)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  CRect *pCVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  CRect local_34;
  CRect *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if ((this_ptr->base).skip_clear_buffer_flag != 0) {
    if (0x100 < (this_ptr->base).rect_array_count) {
      local_34.x_min = 0;
      local_34.y_min = 0;
      local_34.x_max = this_ptr->shadow_map_width + -1;
      local_34.y_max = this_ptr->shadow_map_height + -1;
      core_dlight_cpp_CDemonLight_blitZBuffer_FUN_0044a210(this_ptr,&local_34);
      (this_ptr->base).rect_array_count = 0;
      return;
    }
    if (this_ptr->master_zbuffer == (void *)0x0) {
      _DAT_01d046a0 = "..\\core\\dlight.cpp";
      _DAT_01d046a4 = 0x203;
      core_main_c_FUN_004e4500("CDemonLight::blitZBuffer - No master Z buffer");
    }
    iVar6 = 0;
    if (0 < (this_ptr->base).rect_array_count) {
      pCVar4 = (this_ptr->base).rect_array;
      do {
        if (pCVar4->x_min < 0) {
          pCVar4->x_min = 0;
        }
        iVar7 = this_ptr->shadow_map_width + -1;
        if (iVar7 < pCVar4->x_max) {
          pCVar4->x_max = iVar7;
        }
        if (pCVar4->y_min < 0) {
          pCVar4->y_min = 0;
        }
        iVar7 = this_ptr->shadow_map_height + -1;
        if (iVar7 < pCVar4->y_max) {
          pCVar4->y_max = iVar7;
        }
        iVar6 = iVar6 + 1;
        pCVar4 = pCVar4 + 1;
      } while (iVar6 < (this_ptr->base).rect_array_count);
    }
    local_18 = this_ptr->shadow_map_height;
    iVar6 = 0;
    local_20 = 0;
    if (0 < (this_ptr->base).rect_array_count) {
      pCVar4 = (this_ptr->base).rect_array;
      do {
        if (pCVar4->y_min < local_18) {
          local_18 = pCVar4->y_min;
        }
        if (local_20 < pCVar4->y_max) {
          local_20 = pCVar4->y_max;
        }
        iVar6 = iVar6 + 1;
        pCVar4 = pCVar4 + 1;
      } while (iVar6 < (this_ptr->base).rect_array_count);
    }
    if (local_18 <= local_20) {
      local_24 = (this_ptr->base).rect_array;
      do {
        local_1c = 0;
        _DAT_01b13078 = 0;
        if (0 < (this_ptr->base).rect_array_count) {
          local_14 = 0;
          pCVar4 = local_24;
          do {
            if ((pCVar4->y_min <= local_18) && (local_18 <= pCVar4->y_max)) {
              bVar3 = false;
              if (0 < _DAT_01b13078) {
                iVar6 = _DAT_01b13078 * 4;
                iVar7 = 0;
                do {
                  if ((*(int *)(iVar7 + 0x1b1307c) <= pCVar4->x_max) &&
                     (pCVar4->x_min <= *(int *)(iVar7 + 0x1b1347c))) {
                    if ((*(int *)(iVar7 + 0x1b1307c) <= pCVar4->x_min) &&
                       (pCVar4->x_max <= *(int *)(iVar7 + 0x1b1347c))) goto LAB_0044a699;
                    if (pCVar4->x_min < *(int *)(iVar7 + 0x1b1307c)) {
                      bVar3 = true;
                      *(int *)(iVar7 + 0x1b1307c) = pCVar4->x_min;
                    }
                    if (*(int *)(iVar7 + 0x1b1347c) < pCVar4->x_max) {
                      *(int *)(iVar7 + 0x1b1347c) = pCVar4->x_max;
                      goto LAB_0044a699;
                    }
                    if (bVar3) break;
                  }
                  iVar7 = iVar7 + 4;
                } while (iVar7 < iVar6);
              }
              if (!bVar3) {
                *(int *)(local_14 + 0x1b1307c) = pCVar4->x_min;
                *(int *)(local_14 + 0x1b1347c) = pCVar4->x_max;
                _DAT_01b13078 = _DAT_01b13078 + 1;
                local_14 = local_14 + 4;
              }
            }
LAB_0044a699:
            pCVar4 = pCVar4 + 1;
            local_1c = local_1c + 1;
          } while (local_1c < (this_ptr->base).rect_array_count);
        }
        iVar6 = 0;
        if (0 < _DAT_01b13078) {
          iVar7 = 0;
          do {
            piVar1 = (int *)(iVar7 + 0x1b1307c);
            iVar5 = local_18 * this_ptr->shadow_map_width + *(int *)(iVar7 + 0x1b1307c);
            piVar2 = (int *)(iVar7 + 0x1b1347c);
            iVar7 = iVar7 + 4;
            iVar6 = iVar6 + 1;
            core_dstrendr_cpp_memcpyMMX_FUN_00470201
                      (this_ptr->shadow_depth_buffer + iVar5,
                       (void *)((int)this_ptr->master_zbuffer + iVar5 * 2),
                       (*piVar2 - *piVar1) * 2 + 2);
          } while (iVar6 < _DAT_01b13078);
        }
        local_18 = local_18 + 1;
      } while (local_18 <= local_20);
    }
  }
  (this_ptr->base).rect_array_count = 0;
  return;
}
