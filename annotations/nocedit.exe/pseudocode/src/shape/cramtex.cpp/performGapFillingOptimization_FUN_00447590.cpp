// Name: shape_cramtex.cpp_performGapFillingOptimization_FUN_00447590
// Address: 00447590
// Address Range: [[00447590, 004478b1]]
// Convention: __cdecl
// Signature: uint shape_cramtex.cpp_performGapFillingOptimization_FUN_00447590(void)

#include "nocturne.h"

uint __cdecl shape_cramtex_cpp_performGapFillingOptimization_FUN_00447590(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  SCramWorkingEntry *pSVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  SCramWorkingEntry *in_stack_ffffffe0;
  int local_1c;
  uint local_18;
  SCramWorkingEntry *local_14;
  
  uVar1 = crt_stack_c_stack_probe_FUN_005ff9f3(0x2c);
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
               (iVar2 = shape_cramtex_cpp_findLowestOverlappingY_FUN_00447930(in_stack_ffffffe0),
               g_CramCurrentAcceptableSize <= iVar2)) {
              iVar6 = iVar2 - local_14->final_bottom;
              local_14->final_bottom = local_14->final_bottom + iVar6;
              local_14->final_top = local_14->final_top + iVar6;
            }
            if ((local_14->final_right < g_CramCurrentAcceptableSize) &&
               (iVar2 = shape_cramtex_cpp_findLeftmostOverlappingX_FUN_00447a10(in_stack_ffffffe0),
               g_CramCurrentAcceptableSize <= iVar2)) {
              iVar6 = iVar2 - local_14->final_right;
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
        pSVar4 = g_CramSortedTextureEntries;
        do {
          iVar2 = shape_cramtex_cpp_findRightmostOverlappingX_FUN_004479a0(in_stack_ffffffe0);
          iVar6 = pSVar4->final_left;
          iVar3 = shape_cramtex_cpp_findLeftmostOverlappingX_FUN_00447a10(in_stack_ffffffe0);
          iVar6 = ((iVar2 - iVar6) + (iVar3 - pSVar4->final_right)) / 2;
          if (iVar6 != 0) {
            pSVar4->final_left = pSVar4->final_left + iVar6;
            bVar7 = true;
            pSVar4->final_right = pSVar4->final_right + iVar6;
          }
          iVar6 = shape_cramtex_cpp_findHighestOverlappingY_FUN_004478c0(in_stack_ffffffe0);
          in_stack_ffffffe0 = (SCramWorkingEntry *)(iVar6 - pSVar4->final_top);
          iVar6 = shape_cramtex_cpp_findLowestOverlappingY_FUN_00447930(in_stack_ffffffe0);
          iVar6 = ((int)in_stack_ffffffe0 + (iVar6 - pSVar4->final_bottom)) / 2;
          if (iVar6 != 0) {
            pSVar4->final_top = pSVar4->final_top + iVar6;
            bVar7 = true;
            pSVar4->final_bottom = pSVar4->final_bottom + iVar6;
          }
          iVar5 = iVar5 + 1;
          pSVar4 = pSVar4 + 1;
        } while (iVar5 < (int)g_CramTextureCount);
      }
    } while ((bVar7) && (local_1c = local_1c + 1, local_1c < 10));
    local_18 = 0;
    do {
      if ((local_18 & 1) == 0) {
        iVar5 = 1;
        uVar1 = 0;
        uVar8 = g_CramTextureCount;
      }
      else {
        iVar5 = -1;
        uVar1 = g_CramTextureCount - 1;
        uVar8 = 0xffffffff;
      }
      for (; uVar1 != uVar8; uVar1 = uVar1 + iVar5) {
        iVar6 = shape_cramtex_cpp_findRightmostOverlappingX_FUN_004479a0(in_stack_ffffffe0);
        g_CramSortedTextureEntries[uVar1].final_left =
             (g_CramSortedTextureEntries[uVar1].final_left + iVar6) / 2;
        iVar6 = shape_cramtex_cpp_findHighestOverlappingY_FUN_004478c0(in_stack_ffffffe0);
        g_CramSortedTextureEntries[uVar1].final_top =
             (g_CramSortedTextureEntries[uVar1].final_top + iVar6) / 2;
        iVar6 = shape_cramtex_cpp_findLeftmostOverlappingX_FUN_00447a10(in_stack_ffffffe0);
        g_CramSortedTextureEntries[uVar1].final_right =
             (iVar6 + g_CramSortedTextureEntries[uVar1].final_right + 1) / 2;
        iVar6 = shape_cramtex_cpp_findLowestOverlappingY_FUN_00447930(in_stack_ffffffe0);
        g_CramSortedTextureEntries[uVar1].final_bottom =
             (iVar6 + g_CramSortedTextureEntries[uVar1].final_bottom + 1) / 2;
      }
      local_18 = local_18 + 1;
    } while ((int)local_18 < 10);
    iVar5 = 0;
    if (0 < (int)g_CramTextureCount) {
      pSVar4 = g_CramSortedTextureEntries;
      do {
        do {
          iVar6 = shape_cramtex_cpp_findHighestOverlappingY_FUN_004478c0(in_stack_ffffffe0);
          iVar6 = pSVar4->final_top - iVar6;
          pSVar4->final_top = pSVar4->final_top - iVar6;
          pSVar4->final_bottom = pSVar4->final_bottom - iVar6;
          iVar6 = shape_cramtex_cpp_findRightmostOverlappingX_FUN_004479a0(in_stack_ffffffe0);
          iVar6 = pSVar4->final_left - iVar6;
          pSVar4->final_right = pSVar4->final_right - iVar6;
          pSVar4->final_left = pSVar4->final_left - iVar6;
        } while (0 < iVar6);
        iVar5 = iVar5 + 1;
        pSVar4 = pSVar4 + 1;
      } while (iVar5 < (int)g_CramTextureCount);
    }
    iVar5 = 0;
    uVar1 = g_CramTextureCount;
    if (0 < (int)g_CramTextureCount) {
      pSVar4 = g_CramSortedTextureEntries;
      do {
        iVar6 = shape_cramtex_cpp_findLeftmostOverlappingX_FUN_00447a10(in_stack_ffffffe0);
        iVar5 = iVar5 + 1;
        pSVar4->final_right = iVar6;
        uVar1 = shape_cramtex_cpp_findLowestOverlappingY_FUN_00447930(in_stack_ffffffe0);
        uVar8 = g_CramTextureCount;
        pSVar4->final_bottom = uVar1;
        pSVar4 = pSVar4 + 1;
      } while (iVar5 < (int)uVar8);
    }
  }
  return uVar1;
}
