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
  SCramWorkingEntry *pSVar3;
  int unaff_EBP;
  int iVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  SCramWorkingEntry *in_stack_ffffffe8;
  SCramWorkingEntry *pSVar8;
  SCramWorkingEntry *pSVar9;
  SCramWorkingEntry *in_stack_fffffff0;
  SCramWorkingEntry *in_stack_fffffff4;
  
  uVar1 = crt_stack_c_stack_probe_FUN_005ff9f3(0x2c);
  if (g_CramFillGaps != 0) {
    do {
      iVar4 = 0;
      bVar6 = false;
      if (0 < (int)g_CramTextureCount) {
        in_stack_fffffff4 = g_CramSortedTextureEntries;
        pSVar8 = in_stack_fffffff4;
        do {
          while( true ) {
            iVar5 = 0;
            if ((pSVar8->final_bottom < g_CramCurrentAcceptableSize) &&
               (iVar2 = shape_cramtex_cpp_findLowestOverlappingY_FUN_00447930(in_stack_ffffffe8),
               g_CramCurrentAcceptableSize <= iVar2)) {
              iVar5 = iVar2 - pSVar8->final_bottom;
              pSVar8->final_bottom = pSVar8->final_bottom + iVar5;
              pSVar8->final_top = pSVar8->final_top + iVar5;
            }
            if ((pSVar8->final_right < g_CramCurrentAcceptableSize) &&
               (iVar2 = shape_cramtex_cpp_findLeftmostOverlappingX_FUN_00447a10(in_stack_ffffffe8),
               g_CramCurrentAcceptableSize <= iVar2)) {
              iVar5 = iVar2 - pSVar8->final_right;
              pSVar8->final_left = pSVar8->final_left + iVar5;
              pSVar8->final_right = pSVar8->final_right + iVar5;
            }
            if (iVar5 < 1) break;
            bVar6 = true;
          }
          in_stack_fffffff4 = in_stack_fffffff4 + 1;
          iVar4 = iVar4 + 1;
          pSVar8 = in_stack_fffffff4;
        } while (iVar4 < (int)g_CramTextureCount);
      }
    } while (bVar6);
    pSVar8 = (SCramWorkingEntry *)0x0;
    do {
      iVar4 = 0;
      bVar6 = false;
      if (0 < (int)g_CramTextureCount) {
        pSVar3 = g_CramSortedTextureEntries;
        do {
          shape_cramtex_cpp_findRightmostOverlappingX_FUN_004479a0(in_stack_ffffffe8);
          iVar5 = shape_cramtex_cpp_findLeftmostOverlappingX_FUN_00447a10(pSVar8);
          iVar5 = ((int)pSVar8 + (iVar5 - pSVar3->final_right)) / 2;
          if (iVar5 != 0) {
            pSVar3->final_left = pSVar3->final_left + iVar5;
            bVar6 = true;
            pSVar3->final_right = pSVar3->final_right + iVar5;
          }
          iVar5 = shape_cramtex_cpp_findHighestOverlappingY_FUN_004478c0(in_stack_fffffff0);
          in_stack_fffffff4 = (SCramWorkingEntry *)(iVar5 - pSVar3->final_top);
          in_stack_ffffffe8 = (SCramWorkingEntry *)0x4476b9;
          pSVar8 = pSVar3;
          iVar5 = shape_cramtex_cpp_findLowestOverlappingY_FUN_00447930(in_stack_fffffff4);
          iVar5 = (unaff_EBP + (iVar5 - pSVar3->final_bottom)) / 2;
          if (iVar5 != 0) {
            pSVar3->final_top = pSVar3->final_top + iVar5;
            bVar6 = true;
            pSVar3->final_bottom = pSVar3->final_bottom + iVar5;
          }
          iVar4 = iVar4 + 1;
          pSVar3 = pSVar3 + 1;
        } while (iVar4 < (int)g_CramTextureCount);
      }
    } while ((bVar6) && (pSVar8 = (SCramWorkingEntry *)((int)&pSVar8->width + 1), (int)pSVar8 < 10))
    ;
    pSVar3 = (SCramWorkingEntry *)0x0;
    do {
      if (((uint)pSVar3 & 1) == 0) {
        iVar4 = 1;
        uVar1 = 0;
        uVar7 = g_CramTextureCount;
      }
      else {
        iVar4 = -1;
        uVar1 = g_CramTextureCount - 1;
        uVar7 = 0xffffffff;
      }
      for (; uVar1 != uVar7; uVar1 = uVar1 + iVar4) {
        pSVar9 = g_CramSortedTextureEntries + uVar1;
        iVar5 = shape_cramtex_cpp_findRightmostOverlappingX_FUN_004479a0(in_stack_ffffffe8);
        g_CramSortedTextureEntries[uVar1].final_left =
             (g_CramSortedTextureEntries[uVar1].final_left + iVar5) / 2;
        iVar5 = shape_cramtex_cpp_findHighestOverlappingY_FUN_004478c0(pSVar8);
        g_CramSortedTextureEntries[uVar1].final_top =
             (g_CramSortedTextureEntries[uVar1].final_top + iVar5) / 2;
        iVar5 = shape_cramtex_cpp_findLeftmostOverlappingX_FUN_00447a10(pSVar3);
        g_CramSortedTextureEntries[uVar1].final_right =
             (iVar5 + g_CramSortedTextureEntries[uVar1].final_right + 1) / 2;
        in_stack_ffffffe8 = (SCramWorkingEntry *)0x447785;
        iVar5 = shape_cramtex_cpp_findLowestOverlappingY_FUN_00447930(in_stack_fffffff4);
        g_CramSortedTextureEntries[uVar1].final_bottom =
             (iVar5 + g_CramSortedTextureEntries[uVar1].final_bottom + 1) / 2;
        pSVar8 = pSVar9;
      }
      pSVar3 = (SCramWorkingEntry *)((int)&pSVar3->width + 1);
    } while ((int)pSVar3 < 10);
    iVar4 = 0;
    if (0 < (int)g_CramTextureCount) {
      pSVar3 = g_CramSortedTextureEntries;
      do {
        do {
          iVar5 = shape_cramtex_cpp_findHighestOverlappingY_FUN_004478c0(in_stack_ffffffe8);
          iVar5 = pSVar3->final_top - iVar5;
          pSVar3->final_top = pSVar3->final_top - iVar5;
          pSVar3->final_bottom = pSVar3->final_bottom - iVar5;
          iVar5 = shape_cramtex_cpp_findRightmostOverlappingX_FUN_004479a0(pSVar8);
          iVar5 = pSVar3->final_left - iVar5;
          pSVar3->final_right = pSVar3->final_right - iVar5;
          pSVar3->final_left = pSVar3->final_left - iVar5;
        } while (0 < iVar5);
        iVar4 = iVar4 + 1;
        pSVar3 = pSVar3 + 1;
      } while (iVar4 < (int)g_CramTextureCount);
    }
    iVar4 = 0;
    uVar1 = g_CramTextureCount;
    if (0 < (int)g_CramTextureCount) {
      pSVar3 = g_CramSortedTextureEntries;
      do {
        iVar5 = shape_cramtex_cpp_findLeftmostOverlappingX_FUN_00447a10(in_stack_ffffffe8);
        iVar4 = iVar4 + 1;
        pSVar3->final_right = iVar5;
        uVar1 = shape_cramtex_cpp_findLowestOverlappingY_FUN_00447930(pSVar8);
        uVar7 = g_CramTextureCount;
        pSVar3->final_bottom = uVar1;
        pSVar3 = pSVar3 + 1;
      } while (iVar4 < (int)uVar7);
    }
  }
  return uVar1;
}
