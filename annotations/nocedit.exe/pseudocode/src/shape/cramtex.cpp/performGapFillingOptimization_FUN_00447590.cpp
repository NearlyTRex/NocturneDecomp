// Name: shape_cramtex.cpp_performGapFillingOptimization_FUN_00447590
// Address: 00447590
// Address Range: [[00447590, 004478b1]]
// Convention: __cdecl
// Signature: uint __cdecl shape_cramtex_cpp_performGapFillingOptimization_FUN_00447590(void)

#include "nocturne.h"

uint __cdecl shape_cramtex_cpp_performGapFillingOptimization_FUN_00447590(void)

{
  uint in_EAX;
  int iVar1;
  int iVar2;
  uint uVar3;
  CCramTex *pCVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  CCramTex *in_stack_ffffffe0;
  int local_1c;
  uint local_18;
  CCramTex *local_14;
  
  __STK();
  if (g_CramFillGaps != 0) {
    do {
      iVar5 = 0;
      bVar7 = false;
      if (0 < (int)g_CramTextureCount) {
        local_14 = g_CramSortedTextureEntries;
        do {
          while( true ) {
            iVar6 = 0;
            if ((local_14->final_bottom < g_CramCurrentAcceptableSize) &&
               (iVar1 = shape_cramtex_cpp_CCramTex_findLowestOverlappingY_FUN_00447930
                                  (in_stack_ffffffe0), g_CramCurrentAcceptableSize <= iVar1)) {
              iVar6 = iVar1 - local_14->final_bottom;
              local_14->final_bottom = local_14->final_bottom + iVar6;
              local_14->final_top = local_14->final_top + iVar6;
            }
            if ((local_14->final_right < g_CramCurrentAcceptableSize) &&
               (iVar1 = shape_cramtex_cpp_CCramTex_findLeftmostOverlappingX_FUN_00447a10
                                  (in_stack_ffffffe0), g_CramCurrentAcceptableSize <= iVar1)) {
              iVar6 = iVar1 - local_14->final_right;
              local_14->final_left = local_14->final_left + iVar6;
              local_14->final_right = local_14->final_right + iVar6;
            }
            if (iVar6 < 1) break;
            bVar7 = true;
          }
          local_14 = local_14 + 1;
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)g_CramTextureCount);
      }
    } while (bVar7);
    local_1c = 0;
    do {
      iVar5 = 0;
      bVar7 = false;
      if (0 < (int)g_CramTextureCount) {
        pCVar4 = g_CramSortedTextureEntries;
        do {
          iVar1 = shape_cramtex_cpp_CCramTex_findRightmostOverlappingX_FUN_004479a0
                            (in_stack_ffffffe0);
          iVar6 = pCVar4->final_left;
          iVar2 = shape_cramtex_cpp_CCramTex_findLeftmostOverlappingX_FUN_00447a10
                            (in_stack_ffffffe0);
          iVar6 = ((iVar1 - iVar6) + (iVar2 - pCVar4->final_right)) / 2;
          if (iVar6 != 0) {
            pCVar4->final_left = pCVar4->final_left + iVar6;
            bVar7 = true;
            pCVar4->final_right = pCVar4->final_right + iVar6;
          }
          iVar6 = shape_cramtex_cpp_CCramTex_findHighestOverlappingY_FUN_004478c0(in_stack_ffffffe0)
          ;
          in_stack_ffffffe0 = (CCramTex *)(iVar6 - pCVar4->final_top);
          iVar6 = shape_cramtex_cpp_CCramTex_findLowestOverlappingY_FUN_00447930(in_stack_ffffffe0);
          iVar6 = ((int)in_stack_ffffffe0 + (iVar6 - pCVar4->final_bottom)) / 2;
          if (iVar6 != 0) {
            pCVar4->final_top = pCVar4->final_top + iVar6;
            bVar7 = true;
            pCVar4->final_bottom = pCVar4->final_bottom + iVar6;
          }
          iVar5 = iVar5 + 1;
          pCVar4 = pCVar4 + 1;
        } while (iVar5 < (int)g_CramTextureCount);
      }
    } while ((bVar7) && (local_1c = local_1c + 1, local_1c < 10));
    local_18 = 0;
    do {
      if ((local_18 & 1) == 0) {
        iVar5 = 1;
        uVar3 = 0;
        uVar8 = g_CramTextureCount;
      }
      else {
        iVar5 = -1;
        uVar3 = g_CramTextureCount - 1;
        uVar8 = 0xffffffff;
      }
      for (; uVar3 != uVar8; uVar3 = uVar3 + iVar5) {
        iVar6 = shape_cramtex_cpp_CCramTex_findRightmostOverlappingX_FUN_004479a0(in_stack_ffffffe0)
        ;
        g_CramSortedTextureEntries[uVar3].final_left =
             (g_CramSortedTextureEntries[uVar3].final_left + iVar6) / 2;
        iVar6 = shape_cramtex_cpp_CCramTex_findHighestOverlappingY_FUN_004478c0(in_stack_ffffffe0);
        g_CramSortedTextureEntries[uVar3].final_top =
             (g_CramSortedTextureEntries[uVar3].final_top + iVar6) / 2;
        iVar6 = shape_cramtex_cpp_CCramTex_findLeftmostOverlappingX_FUN_00447a10(in_stack_ffffffe0);
        g_CramSortedTextureEntries[uVar3].final_right =
             (iVar6 + g_CramSortedTextureEntries[uVar3].final_right + 1) / 2;
        iVar6 = shape_cramtex_cpp_CCramTex_findLowestOverlappingY_FUN_00447930(in_stack_ffffffe0);
        g_CramSortedTextureEntries[uVar3].final_bottom =
             (iVar6 + g_CramSortedTextureEntries[uVar3].final_bottom + 1) / 2;
      }
      local_18 = local_18 + 1;
    } while ((int)local_18 < 10);
    iVar5 = 0;
    if (0 < (int)g_CramTextureCount) {
      pCVar4 = g_CramSortedTextureEntries;
      do {
        do {
          iVar6 = shape_cramtex_cpp_CCramTex_findHighestOverlappingY_FUN_004478c0(in_stack_ffffffe0)
          ;
          iVar6 = pCVar4->final_top - iVar6;
          pCVar4->final_top = pCVar4->final_top - iVar6;
          pCVar4->final_bottom = pCVar4->final_bottom - iVar6;
          iVar6 = shape_cramtex_cpp_CCramTex_findRightmostOverlappingX_FUN_004479a0
                            (in_stack_ffffffe0);
          iVar6 = pCVar4->final_left - iVar6;
          pCVar4->final_right = pCVar4->final_right - iVar6;
          pCVar4->final_left = pCVar4->final_left - iVar6;
        } while (0 < iVar6);
        iVar5 = iVar5 + 1;
        pCVar4 = pCVar4 + 1;
      } while (iVar5 < (int)g_CramTextureCount);
    }
    iVar5 = 0;
    in_EAX = g_CramTextureCount;
    if (0 < (int)g_CramTextureCount) {
      pCVar4 = g_CramSortedTextureEntries;
      do {
        iVar6 = shape_cramtex_cpp_CCramTex_findLeftmostOverlappingX_FUN_00447a10(in_stack_ffffffe0);
        iVar5 = iVar5 + 1;
        pCVar4->final_right = iVar6;
        in_EAX = shape_cramtex_cpp_CCramTex_findLowestOverlappingY_FUN_00447930(in_stack_ffffffe0);
        uVar3 = g_CramTextureCount;
        pCVar4->final_bottom = in_EAX;
        pCVar4 = pCVar4 + 1;
      } while (iVar5 < (int)uVar3);
    }
  }
  return in_EAX;
}
