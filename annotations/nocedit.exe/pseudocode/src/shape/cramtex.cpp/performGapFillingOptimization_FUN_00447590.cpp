// Name: shape_cramtex.cpp_performGapFillingOptimization_FUN_00447590
// Address: 00447590
// Address Range: [[00447590, 004478b1]]
// Convention: __cdecl
// Signature: uint __cdecl shape_cramtex_cpp_performGapFillingOptimization_FUN_00447590(void)

#include "nocturne.h"

uint __cdecl shape_cramtex_cpp_performGapFillingOptimization_FUN_00447590(void)

{
  bool bVar1;
  uint in_EAX;
  int iVar1;
  int iVar3;
  int iVar2;
  int iVar6;
  int iVar7;
  CCramTex *pCVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int iVar8;
  CCramTex *pCVar9;
  int local_1c;
  uint local_18;
  CCramTex *local_14;
  
  __STK();
  if (g_CramFillGaps != 0) {
    do {
      iVar4 = 0;
      bVar6 = false;
      if (0 < g_CramTextureCount) {
        local_14 = g_CramSortedTextureEntries;
        do {
          while( true ) {
            iVar5 = 0;
            if ((local_14->final_bottom < g_CramCurrentAcceptableSize) &&
               (iVar8 = shape_cramtex_cpp_CCramTex_findLowestOverlappingY_FUN_00447930(local_14),
               g_CramCurrentAcceptableSize <= iVar8)) {
              iVar5 = iVar8 - local_14->final_bottom;
              local_14->final_bottom = local_14->final_bottom + iVar5;
              local_14->final_top = local_14->final_top + iVar5;
            }
            if ((local_14->final_right < g_CramCurrentAcceptableSize) &&
               (iVar1 = shape_cramtex_cpp_CCramTex_findLeftmostOverlappingX_FUN_00447a10(local_14),
               g_CramCurrentAcceptableSize <= iVar1)) {
              iVar5 = iVar1 - local_14->final_right;
              local_14->final_left = local_14->final_left + iVar5;
              local_14->final_right = local_14->final_right + iVar5;
            }
            if (iVar5 < 1) break;
            bVar6 = true;
          }
          local_14 = local_14 + 1;
          iVar4 = iVar4 + 1;
        } while (iVar4 < g_CramTextureCount);
      }
    } while (bVar6);
    local_1c = 0;
    do {
      iVar8 = 0;
      bVar1 = false;
      if (0 < g_CramTextureCount) {
        pCVar3 = g_CramSortedTextureEntries;
        do {
          iVar3 = shape_cramtex_cpp_CCramTex_findRightmostOverlappingX_FUN_004479a0(pCVar3);
          iVar6 = pCVar3->final_left;
          iVar2 = shape_cramtex_cpp_CCramTex_findLeftmostOverlappingX_FUN_00447a10(pCVar3);
          iVar6 = ((iVar3 - iVar6) + (iVar2 - pCVar3->final_right)) / 2;
          if (iVar6 != 0) {
            pCVar3->final_left = pCVar3->final_left + iVar6;
            bVar1 = true;
            pCVar3->final_right = pCVar3->final_right + iVar6;
          }
          iVar3 = shape_cramtex_cpp_CCramTex_findHighestOverlappingY_FUN_004478c0(pCVar3);
          iVar6 = pCVar3->final_top;
          iVar7 = shape_cramtex_cpp_CCramTex_findLowestOverlappingY_FUN_00447930(pCVar3);
          iVar6 = ((iVar3 - iVar6) + (iVar7 - pCVar3->final_bottom)) / 2;
          if (iVar6 != 0) {
            pCVar3->final_top = pCVar3->final_top + iVar6;
            bVar1 = true;
            pCVar3->final_bottom = pCVar3->final_bottom + iVar6;
          }
          iVar8 = iVar8 + 1;
          pCVar3 = pCVar3 + 1;
        } while (iVar8 < g_CramTextureCount);
      }
    } while ((bVar1) && (local_1c = local_1c + 1, local_1c < 10));
    local_18 = 0;
    do {
      if ((local_18 & 1) == 0) {
        iVar3 = 1;
        iVar8 = 0;
        iVar6 = g_CramTextureCount;
      }
      else {
        iVar3 = -1;
        iVar8 = g_CramTextureCount + -1;
        iVar6 = -1;
      }
      for (; iVar8 != iVar6; iVar8 = iVar8 + iVar3) {
        pCVar9 = g_CramSortedTextureEntries + iVar8;
        iVar7 = shape_cramtex_cpp_CCramTex_findRightmostOverlappingX_FUN_004479a0(pCVar9);
        g_CramSortedTextureEntries[iVar8].final_left =
             (g_CramSortedTextureEntries[iVar8].final_left + iVar7) / 2;
        iVar7 = shape_cramtex_cpp_CCramTex_findHighestOverlappingY_FUN_004478c0(pCVar9);
        g_CramSortedTextureEntries[iVar8].final_top =
             (g_CramSortedTextureEntries[iVar8].final_top + iVar7) / 2;
        iVar7 = shape_cramtex_cpp_CCramTex_findLeftmostOverlappingX_FUN_00447a10(pCVar9);
        g_CramSortedTextureEntries[iVar8].final_right =
             (iVar7 + g_CramSortedTextureEntries[iVar8].final_right + 1) / 2;
        iVar7 = shape_cramtex_cpp_CCramTex_findLowestOverlappingY_FUN_00447930(pCVar9);
        g_CramSortedTextureEntries[iVar8].final_bottom =
             (iVar7 + g_CramSortedTextureEntries[iVar8].final_bottom + 1) / 2;
      }
      local_18 = local_18 + 1;
    } while ((int)local_18 < 10);
    iVar8 = 0;
    if (0 < g_CramTextureCount) {
      pCVar9 = g_CramSortedTextureEntries;
      do {
        do {
          iVar6 = shape_cramtex_cpp_CCramTex_findHighestOverlappingY_FUN_004478c0(pCVar9);
          iVar6 = pCVar9->final_top - iVar6;
          pCVar9->final_top = pCVar9->final_top - iVar6;
          pCVar9->final_bottom = pCVar9->final_bottom - iVar6;
          iVar6 = shape_cramtex_cpp_CCramTex_findRightmostOverlappingX_FUN_004479a0(pCVar9);
          iVar6 = pCVar9->final_left - iVar6;
          pCVar9->final_right = pCVar9->final_right - iVar6;
          pCVar9->final_left = pCVar9->final_left - iVar6;
        } while (0 < iVar6);
        iVar8 = iVar8 + 1;
        pCVar9 = pCVar9 + 1;
      } while (iVar8 < g_CramTextureCount);
    }
    iVar8 = 0;
    in_EAX = g_CramTextureCount;
    if (0 < g_CramTextureCount) {
      pCVar9 = g_CramSortedTextureEntries;
      do {
        iVar6 = shape_cramtex_cpp_CCramTex_findLeftmostOverlappingX_FUN_00447a10(pCVar9);
        iVar8 = iVar8 + 1;
        pCVar9->final_right = iVar6;
        in_EAX = shape_cramtex_cpp_CCramTex_findLowestOverlappingY_FUN_00447930(pCVar9);
        iVar6 = g_CramTextureCount;
        pCVar9->final_bottom = in_EAX;
        pCVar9 = pCVar9 + 1;
      } while (iVar8 < iVar6);
    }
  }
  return in_EAX;
}
