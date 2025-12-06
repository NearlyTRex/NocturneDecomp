// Name: core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80
// Address: 00472f80
// Address Range: [[00472f80, 0047326c]]
// Convention: __cdecl
// Signature: void core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80(CDemonLight * this_ptr)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80(CDemonLight *this_ptr)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  CRect *pCVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  BADSPACEBASE *in_ESP;
  int local_1c;
  int local_18;
  int local_14;
  
  if ((this_ptr->base).skip_clear_buffer_flag != 0) {
    if (0x100 < (this_ptr->base).rect_array_count) {
      core_dlight_cpp_CDemonLight_blitZBuffer_FUN_00472c70(this_ptr,(CRect *)&stack0xffffffcc);
      (this_ptr->base).rect_array_count = 0;
      return;
    }
    if (this_ptr->restore_memory_size == 0) {
      g_CurrentFilename = "..\\core\\dlight.cpp";
      g_CurrentLineNumber = 0x202;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonLight::blitZBuffer - No master Z buffer");
    }
    iVar7 = 0;
    if (0 < (this_ptr->base).rect_array_count) {
      pCVar4 = (this_ptr->base).rect_array;
      do {
        if (pCVar4->left < 0) {
          pCVar4->left = 0;
        }
        iVar8 = this_ptr->shadow_map_width + -1;
        if (iVar8 < pCVar4->top) {
          pCVar4->top = iVar8;
        }
        if (pCVar4->right < 0) {
          pCVar4->right = 0;
        }
        iVar8 = this_ptr->shadow_map_height + -1;
        if (iVar8 < pCVar4->bottom) {
          pCVar4->bottom = iVar8;
        }
        iVar7 = iVar7 + 1;
        pCVar4 = pCVar4 + 1;
      } while (iVar7 < (this_ptr->base).rect_array_count);
    }
    local_14 = this_ptr->shadow_map_height;
    iVar7 = 0;
    local_1c = 0;
    if (0 < (this_ptr->base).rect_array_count) {
      pCVar4 = (this_ptr->base).rect_array;
      do {
        if (pCVar4->right < local_14) {
          local_14 = pCVar4->right;
        }
        if (local_1c < pCVar4->bottom) {
          local_1c = pCVar4->bottom;
        }
        iVar7 = iVar7 + 1;
        pCVar4 = pCVar4 + 1;
      } while (iVar7 < (this_ptr->base).rect_array_count);
    }
    if (local_14 <= local_1c) {
      do {
        local_18 = 0;
        g_DirtySpanCount = 0;
        if (0 < (this_ptr->base).rect_array_count) {
          iVar7 = 0;
          pCVar4 = (this_ptr->base).rect_array;
          do {
            iVar8 = g_DirtySpanCount;
            if ((pCVar4->right <= local_14) && (local_14 <= pCVar4->bottom)) {
              bVar3 = false;
              if (0 < g_DirtySpanCount) {
                iVar6 = g_DirtySpanCount * 4;
                iVar5 = 0;
                do {
                  if ((*(int *)((int)g_DirtySpanStarts + iVar5) <= pCVar4->top) &&
                     (pCVar4->left <= *(int *)((int)g_DirtySpanEnds + iVar5))) {
                    if ((*(int *)((int)g_DirtySpanStarts + iVar5) <= pCVar4->left) &&
                       (pCVar4->top <= *(int *)((int)g_DirtySpanEnds + iVar5))) goto LAB_004730f9;
                    if (pCVar4->left < *(int *)((int)g_DirtySpanStarts + iVar5)) {
                      bVar3 = true;
                      *(int *)((int)g_DirtySpanStarts + iVar5) = pCVar4->left;
                    }
                    if (*(int *)((int)g_DirtySpanEnds + iVar5) < pCVar4->top) {
                      *(int *)((int)g_DirtySpanEnds + iVar5) = pCVar4->top;
                      goto LAB_004730f9;
                    }
                    if (bVar3) break;
                  }
                  iVar5 = iVar5 + 4;
                } while (SBORROW /* signed borrow */4(iVar5,iVar6) != iVar5 + iVar8 * -4 < 0);
              }
              if (!bVar3) {
                *(int *)((int)g_DirtySpanStarts + iVar7) = pCVar4->left;
                *(int *)((int)g_DirtySpanEnds + iVar7) = pCVar4->top;
                g_DirtySpanCount = g_DirtySpanCount + 1;
                iVar7 = iVar7 + 4;
              }
            }
LAB_004730f9:
            pCVar4 = pCVar4 + 1;
            local_18 = local_18 + 1;
          } while (local_18 < (this_ptr->base).rect_array_count);
        }
        iVar7 = 0;
        if (0 < g_DirtySpanCount) {
          iVar8 = 0;
          do {
            piVar1 = (int *)((int)g_DirtySpanStarts + iVar8);
            iVar6 = local_14 * this_ptr->shadow_map_width + *(int *)((int)g_DirtySpanStarts + iVar8)
            ;
            piVar2 = (int *)((int)g_DirtySpanEnds + iVar8);
            iVar8 = iVar8 + 4;
            iVar7 = iVar7 + 1;
            core_dstrender_cpp_memcpyMMX_FUN_00492001
                      (this_ptr->shadow_depth_buffer + iVar6,
                       (void *)(this_ptr->restore_memory_size + iVar6 * 2),
                       (*piVar2 - *piVar1) * 2 + 2);
          } while (iVar7 < g_DirtySpanCount);
        }
        local_14 = local_14 + 1;
      } while (local_14 <= local_1c);
    }
  }
  (this_ptr->base).rect_array_count = 0;
  return;
}
