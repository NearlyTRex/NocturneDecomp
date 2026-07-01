// Name: core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80
// Address: 00472f80
// MANUAL RECONSTRUCTION
// Address Range: [[00472f80, 0047326c]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80(CDemonLight *this_ptr)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80(CDemonLight *this_ptr)

{
  CRect *pCVar4;
  int iVar1;
  int iVar5;
  int iVar6;
  CRect *pCVar2;
  int iVar7;
  int iVar3;
  CRect local_34;
  int local_20;
  int local_1c;
  int local_18;
  bool bVar3;
  
  if ((this_ptr->base).skip_clear_buffer_flag != 0) {
    if (0x100 < (this_ptr->base).rect_array_count) {
      local_34.x_min = 0;
      local_34.y_min = 0;
      local_34.x_max = this_ptr->shadow_map_width + -1;
      local_34.y_max = this_ptr->shadow_map_height + -1;
      core_dlight_cpp_CDemonLight_blitZBuffer_FUN_00472c70(this_ptr,&local_34);
      (this_ptr->base).rect_array_count = 0;
      return;
    }
    if (this_ptr->master_zbuffer == (void *)0x0) {
      g_CurrentFilename = "..\\core\\dlight.cpp";
      g_CurrentLineNumber = 514;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonLight::blitZBuffer - No master Z buffer");
    }
    iVar6 = 0;
    if (0 < (this_ptr->base).rect_array_count) {
      pCVar2 = (this_ptr->base).rect_array;
      do {
        if (pCVar2->x_min < 0) {
          pCVar2->x_min = 0;
        }
        iVar7 = this_ptr->shadow_map_width + -1;
        if (iVar7 < pCVar2->x_max) {
          pCVar2->x_max = iVar7;
        }
        if (pCVar2->y_min < 0) {
          pCVar2->y_min = 0;
        }
        iVar3 = this_ptr->shadow_map_height + -1;
        if (iVar3 < pCVar2->y_max) {
          pCVar2->y_max = iVar3;
        }
        iVar6 = iVar6 + 1;
        pCVar2 = pCVar2 + 1;
      } while (iVar6 < (this_ptr->base).rect_array_count);
    }
    local_18 = this_ptr->shadow_map_height;
    iVar3 = 0;
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
        iVar3 = iVar3 + 1;
        pCVar4 = pCVar4 + 1;
      } while (iVar3 < (this_ptr->base).rect_array_count);
    }
    if (local_18 <= local_20) {
      do {
        local_1c = 0;
        g_DirtySpanCount = 0;
        if (0 < (this_ptr->base).rect_array_count) {
          pCVar2 = (this_ptr->base).rect_array;
          do {
            if ((pCVar2->y_min <= local_18) && (local_18 <= pCVar2->y_max)) {
              bVar3 = false;
              if (0 < g_DirtySpanCount) {
                iVar3 = g_DirtySpanCount;
                iVar1 = 0;
                do {
                  if ((g_DirtySpanStarts[iVar1] <= pCVar2->x_max) &&
                     (pCVar2->x_min <= g_DirtySpanEnds[iVar1])) {
                    if ((g_DirtySpanStarts[iVar1] <= pCVar2->x_min) &&
                       (pCVar2->x_max <= g_DirtySpanEnds[iVar1])) goto LAB_004730f9;
                    if (pCVar2->x_min < g_DirtySpanStarts[iVar1]) {
                      bVar3 = true;
                      g_DirtySpanStarts[iVar1] = pCVar2->x_min;
                    }
                    if (g_DirtySpanEnds[iVar1] < pCVar2->x_max) {
                      g_DirtySpanEnds[iVar1] = pCVar2->x_max;
                      goto LAB_004730f9;
                    }
                    if (bVar3) break;
                  }
                  iVar1 = iVar1 + 1;
                } while (iVar1 < iVar3);
              }
              if (!bVar3) {
                g_DirtySpanStarts[g_DirtySpanCount] = pCVar2->x_min;
                g_DirtySpanEnds[g_DirtySpanCount] = pCVar2->x_max;
                g_DirtySpanCount = g_DirtySpanCount + 1;
              }
            }
LAB_004730f9:
            pCVar2 = pCVar2 + 1;
            local_1c = local_1c + 1;
          } while (local_1c < (this_ptr->base).rect_array_count);
        }
        if (0 < g_DirtySpanCount) {
          iVar1 = 0;
          do {
            iVar5 = local_18 * this_ptr->shadow_map_width + g_DirtySpanStarts[iVar1];
            core_dstrender_cpp_memcpyMMX_FUN_00492001
                      (this_ptr->shadow_depth_buffer + iVar5,
                       (char *)this_ptr->master_zbuffer + iVar5 * 2,
                       (g_DirtySpanEnds[iVar1] - g_DirtySpanStarts[iVar1]) * 2 + 2);
            iVar1 = iVar1 + 1;
          } while (iVar1 < g_DirtySpanCount);
        }
        local_18 = local_18 + 1;
      } while (local_18 <= local_20);
    }
  }
  (this_ptr->base).rect_array_count = 0;
  return;
}
