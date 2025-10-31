// Name: shape_cramtex.cpp_performGapFillingOptimization_FUN_00447590
// Address: 00447590
// Address Range: [[00447590, 004478b1]]
// Convention: __cdecl
// Signature: uint shape_cramtex.cpp_performGapFillingOptimization_FUN_00447590(void)
// Globals:
//   SCramWorkingEntry[1] g_CramSortedTextureEntries
//   undefined4 DAT_0083c20c
//   undefined4 DAT_0083c210
//   undefined4 DAT_0083c214
//   undefined4 DAT_0083c218
//   undefined4 DAT_0083c228
//   undefined4 DAT_0083c260
//   undefined4 DAT_0083c264
//   uint g_CramTextureCount
//   int g_CramCurrentAcceptableSize
//   int g_CramFillGaps
// Function calls:
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   shape_cramtex.cpp_findHighestOverlappingY_FUN_004478c0
//   shape_cramtex.cpp_findLeftmostOverlappingX_FUN_00447a10
//   shape_cramtex.cpp_findLowestOverlappingY_FUN_00447930
//   shape_cramtex.cpp_findRightmostOverlappingX_FUN_004479a0

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


// Assembly code:
// 00447590: PUSH 0x2c
//   Label: shape_cramtex.cpp_performGapFillingOptimization_FUN_00447590
// 00447595: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0044759a: PUSH EBX
// 0044759b: PUSH ESI
// 0044759c: PUSH EDI
// 0044759d: PUSH EBP
// 0044759e: SUB ESP,0x14
// 004475a1: CMP dword ptr [0x0084a898],0x0
//   XREF to: 0084a898 (READ)
// 004475a8: JZ 0x00447850
//   XREF to: 00447850 (CONDITIONAL_JUMP)
// 004475ae: MOV ECX,dword ptr [0x0084a854]
//   Label: LAB_004475ae
//   XREF to: 0084a854 (READ)
// 004475b4: XOR EBP,EBP
// 004475b6: XOR EDI,EDI
// 004475b8: TEST ECX,ECX
// 004475ba: JLE 0x00447635
//   XREF to: 00447635 (CONDITIONAL_JUMP)
// 004475c0: MOV dword ptr [ESP + 0x10],0x83c1dc
//   XREF to: 0083c1dc (DATA)
//   XREF to: Stack[-0x14] (WRITE)
// 004475c8: MOV EBX,dword ptr [ESP + 0x10]
//   Label: LAB_004475c8
//   XREF to: 0083c1dc (PARAM)
//   XREF to: 0083c228 (PARAM)
//   XREF to: Stack[-0x14] (READ)
// 004475cc: MOV EDX,dword ptr [0x0084a884]
//   Label: LAB_004475cc
//   XREF to: 0084a884 (READ)
// 004475d2: MOV EAX,dword ptr [EBX + 0x3c]
//   XREF to: 0083c218 (READ)
//   XREF to: 0083c264 (READ)
// 004475d5: XOR ESI,ESI
// 004475d7: CMP EAX,EDX
// 004475d9: JL 0x00447858
//   XREF to: 00447858 (CONDITIONAL_JUMP)
// 004475df: MOV ECX,dword ptr [0x0084a884]
//   Label: LAB_004475df
//   XREF to: 0084a884 (READ)
// 004475e5: CMP ECX,dword ptr [EBX + 0x38]
//   XREF to: 0083c214 (READ)
//   XREF to: 0083c260 (READ)
// 004475e8: JLE 0x00447614
//   XREF to: 00447614 (CONDITIONAL_JUMP)
// 004475ea: PUSH EBX
//   XREF to: 0083c1dc (DATA)
//   XREF to: 0083c228 (DATA)
// 004475eb: CALL shape_cramtex.cpp_findLeftmostOverlappingX_FUN_00447a10
//   XREF to: 00447a10 (UNCONDITIONAL_CALL)
// 004475f0: MOV EDX,dword ptr [0x0084a884]
//   XREF to: 0084a884 (READ)
// 004475f6: ADD ESP,0x4
// 004475f9: CMP EAX,EDX
// 004475fb: JL 0x00447614
//   XREF to: 00447614 (CONDITIONAL_JUMP)
// 004475fd: MOV ESI,EAX
// 004475ff: MOV ECX,dword ptr [EBX + 0x38]
//   XREF to: 0083c214 (READ)
// 00447602: MOV EAX,dword ptr [EBX + 0x30]
//   XREF to: 0083c20c (READ)
// 00447605: SUB ESI,ECX
// 00447607: MOV EDX,dword ptr [EBX + 0x38]
//   XREF to: 0083c214 (READ)
// 0044760a: ADD EAX,ESI
// 0044760c: ADD EDX,ESI
// 0044760e: MOV dword ptr [EBX + 0x30],EAX
//   XREF to: 0083c20c (WRITE)
// 00447611: MOV dword ptr [EBX + 0x38],EDX
//   XREF to: 0083c214 (WRITE)
// 00447614: TEST ESI,ESI
//   Label: LAB_00447614
// 00447616: JLE 0x0044761f
//   XREF to: 0044761f (CONDITIONAL_JUMP)
// 00447618: MOV EDI,0x1
// 0044761d: JMP 0x004475cc
//   XREF to: 004475cc (UNCONDITIONAL_JUMP)
// 0044761f: MOV EBX,dword ptr [ESP + 0x10]
//   Label: LAB_0044761f
//   XREF to: Stack[-0x14] (READ)
// 00447623: MOV ESI,dword ptr [0x0084a854]
//   XREF to: 0084a854 (READ)
// 00447629: ADD EBX,0x4c
// 0044762c: INC EBP
// 0044762d: MOV dword ptr [ESP + 0x10],EBX
//   XREF to: 0083c228 (DATA)
//   XREF to: Stack[-0x14] (WRITE)
// 00447631: CMP EBP,ESI
// 00447633: JL 0x004475c8
//   XREF to: 004475c8 (CONDITIONAL_JUMP)
// 00447635: TEST EDI,EDI
//   Label: LAB_00447635
// 00447637: JNZ 0x004475ae
//   XREF to: 004475ae (CONDITIONAL_JUMP)
// 0044763d: MOV dword ptr [ESP + 0x8],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 00447641: MOV ECX,dword ptr [0x0084a854]
//   Label: LAB_00447641
//   XREF to: 0084a854 (READ)
// 00447647: XOR EDI,EDI
// 00447649: XOR EBP,EBP
// 0044764b: TEST ECX,ECX
// 0044764d: JLE 0x004476fb
//   XREF to: 004476fb (CONDITIONAL_JUMP)
// 00447653: MOV EBX,0x83c1dc
//   XREF to: 0083c1dc (PARAM)
// 00447658: PUSH EBX
//   Label: LAB_00447658
//   XREF to: 0083c1dc (DATA)
//   XREF to: 0083c228 (DATA)
// 00447659: CALL shape_cramtex.cpp_findRightmostOverlappingX_FUN_004479a0
//   XREF to: 004479a0 (UNCONDITIONAL_CALL)
// 0044765e: MOV EDX,dword ptr [EBX + 0x30]
//   XREF to: 0083c20c (READ)
// 00447661: ADD ESP,0x4
// 00447664: SUB EAX,EDX
// 00447666: PUSH EBX
//   XREF to: 0083c1dc (DATA)
// 00447667: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0044766b: CALL shape_cramtex.cpp_findLeftmostOverlappingX_FUN_00447a10
//   XREF to: 00447a10 (UNCONDITIONAL_CALL)
// 00447670: ADD ESP,0x4
// 00447673: MOV ECX,dword ptr [EBX + 0x38]
//   XREF to: 0083c214 (READ)
// 00447676: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 00447679: SUB EAX,ECX
// 0044767b: ADD EDX,EAX
// 0044767d: MOV EAX,EDX
// 0044767f: SAR EDX,0x1f
// 00447682: SUB EAX,EDX
// 00447684: SAR EAX,0x1
// 00447686: MOV ESI,EBX
// 00447688: TEST EAX,EAX
// 0044768a: JZ 0x004476a1
//   XREF to: 004476a1 (CONDITIONAL_JUMP)
// 0044768c: MOV EDX,dword ptr [EBX + 0x30]
//   XREF to: 0083c20c (READ)
// 0044768f: MOV ECX,dword ptr [EBX + 0x38]
//   XREF to: 0083c214 (READ)
// 00447692: ADD EDX,EAX
// 00447694: ADD ECX,EAX
// 00447696: MOV dword ptr [EBX + 0x30],EDX
//   XREF to: 0083c20c (WRITE)
// 00447699: MOV EBP,0x1
// 0044769e: MOV dword ptr [EBX + 0x38],ECX
//   XREF to: 0083c214 (WRITE)
// 004476a1: PUSH ESI
//   Label: LAB_004476a1
//   XREF to: 0083c1dc (DATA)
// 004476a2: CALL shape_cramtex.cpp_findHighestOverlappingY_FUN_004478c0
//   XREF to: 004478c0 (UNCONDITIONAL_CALL)
// 004476a7: MOV EDX,dword ptr [ESI + 0x34]
//   XREF to: 0083c210 (READ)
// 004476aa: ADD ESP,0x4
// 004476ad: SUB EAX,EDX
// 004476af: PUSH ESI
//   XREF to: 0083c1dc (DATA)
// 004476b0: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004476b4: CALL shape_cramtex.cpp_findLowestOverlappingY_FUN_00447930
//   XREF to: 00447930 (UNCONDITIONAL_CALL)
// 004476b9: ADD ESP,0x4
// 004476bc: MOV ECX,dword ptr [ESI + 0x3c]
//   XREF to: 0083c218 (READ)
// 004476bf: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x20] (READ)
// 004476c3: SUB EAX,ECX
// 004476c5: ADD EDX,EAX
// 004476c7: MOV EAX,EDX
// 004476c9: SAR EDX,0x1f
// 004476cc: SUB EAX,EDX
// 004476ce: SAR EAX,0x1
// 004476d0: TEST EAX,EAX
// 004476d2: JZ 0x004476e9
//   XREF to: 004476e9 (CONDITIONAL_JUMP)
// 004476d4: MOV EDX,dword ptr [ESI + 0x34]
//   XREF to: 0083c210 (READ)
// 004476d7: MOV ECX,dword ptr [ESI + 0x3c]
//   XREF to: 0083c218 (READ)
// 004476da: ADD EDX,EAX
// 004476dc: ADD ECX,EAX
// 004476de: MOV dword ptr [ESI + 0x34],EDX
//   XREF to: 0083c210 (WRITE)
// 004476e1: MOV EBP,0x1
// 004476e6: MOV dword ptr [ESI + 0x3c],ECX
//   XREF to: 0083c218 (WRITE)
// 004476e9: MOV ESI,dword ptr [0x0084a854]
//   Label: LAB_004476e9
//   XREF to: 0084a854 (READ)
// 004476ef: INC EDI
// 004476f0: ADD EBX,0x4c
//   XREF to: 0083c228 (PARAM)
// 004476f3: CMP EDI,ESI
// 004476f5: JL 0x00447658
//   XREF to: 00447658 (CONDITIONAL_JUMP)
// 004476fb: TEST EBP,EBP
//   Label: LAB_004476fb
// 004476fd: JNZ 0x00447889
//   XREF to: 00447889 (CONDITIONAL_JUMP)
// 00447703: XOR EAX,EAX
//   Label: LAB_00447703
// 00447705: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00447709: TEST byte ptr [ESP + 0xc],0x1
//   Label: LAB_00447709
//   XREF to: Stack[-0x18] (READ)
// 0044770e: JZ 0x004478a0
//   XREF to: 004478a0 (CONDITIONAL_JUMP)
// 00447714: MOV EDI,0xffffffff
// 00447719: MOV EAX,[0x0084a854]
//   XREF to: 0084a854 (READ)
// 0044771e: MOV EBP,EDI
// 00447720: DEC EAX
// 00447721: MOV ESI,EAX
//   Label: LAB_00447721
// 00447723: CMP EAX,EDI
// 00447725: JZ 0x004477a0
//   XREF to: 004477a0 (CONDITIONAL_JUMP)
// 00447727: IMUL EBX,ESI,0x4c
//   Label: LAB_00447727
// 0044772a: ADD EBX,0x83c1dc
//   XREF to: 0083c1dc (PARAM)
// 00447730: PUSH EBX
//   XREF to: 0083c1dc (DATA)
// 00447731: CALL shape_cramtex.cpp_findRightmostOverlappingX_FUN_004479a0
//   XREF to: 004479a0 (UNCONDITIONAL_CALL)
// 00447736: MOV EDX,dword ptr [EBX + 0x30]
//   XREF to: 0083c20c (DATA)
// 00447739: ADD EDX,EAX
// 0044773b: MOV EAX,EDX
// 0044773d: SAR EDX,0x1f
// 00447740: SUB EAX,EDX
// 00447742: SAR EAX,0x1
// 00447744: ADD ESP,0x4
// 00447747: PUSH EBX
// 00447748: MOV dword ptr [EBX + 0x30],EAX
//   XREF to: 0083c20c (DATA)
// 0044774b: CALL shape_cramtex.cpp_findHighestOverlappingY_FUN_004478c0
//   XREF to: 004478c0 (UNCONDITIONAL_CALL)
// 00447750: MOV EDX,dword ptr [EBX + 0x34]
//   XREF to: 0083c210 (DATA)
// 00447753: ADD EDX,EAX
// 00447755: MOV EAX,EDX
// 00447757: SAR EDX,0x1f
// 0044775a: SUB EAX,EDX
// 0044775c: SAR EAX,0x1
// 0044775e: ADD ESP,0x4
// 00447761: PUSH EBX
// 00447762: MOV dword ptr [EBX + 0x34],EAX
//   XREF to: 0083c210 (DATA)
// 00447765: CALL shape_cramtex.cpp_findLeftmostOverlappingX_FUN_00447a10
//   XREF to: 00447a10 (UNCONDITIONAL_CALL)
// 0044776a: ADD EAX,dword ptr [EBX + 0x38]
//   XREF to: 0083c214 (DATA)
// 0044776d: LEA EDX,[EAX + 0x1]
// 00447770: MOV EAX,EDX
// 00447772: SAR EDX,0x1f
// 00447775: SUB EAX,EDX
// 00447777: SAR EAX,0x1
// 00447779: ADD ESP,0x4
// 0044777c: PUSH EBX
// 0044777d: MOV dword ptr [EBX + 0x38],EAX
//   XREF to: 0083c214 (DATA)
// 00447780: CALL shape_cramtex.cpp_findLowestOverlappingY_FUN_00447930
//   XREF to: 00447930 (UNCONDITIONAL_CALL)
// 00447785: ADD EAX,dword ptr [EBX + 0x3c]
//   XREF to: 0083c218 (DATA)
// 00447788: LEA EDX,[EAX + 0x1]
// 0044778b: MOV EAX,EDX
// 0044778d: SAR EDX,0x1f
// 00447790: SUB EAX,EDX
// 00447792: SAR EAX,0x1
// 00447794: ADD ESI,EBP
// 00447796: ADD ESP,0x4
// 00447799: MOV dword ptr [EBX + 0x3c],EAX
//   XREF to: 0083c218 (DATA)
// 0044779c: CMP ESI,EDI
// 0044779e: JNZ 0x00447727
//   XREF to: 00447727 (CONDITIONAL_JUMP)
// 004477a0: MOV EBX,dword ptr [ESP + 0xc]
//   Label: LAB_004477a0
//   XREF to: Stack[-0x18] (READ)
// 004477a4: INC EBX
// 004477a5: MOV dword ptr [ESP + 0xc],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 004477a9: CMP EBX,0xa
// 004477ac: JL 0x00447709
//   XREF to: 00447709 (CONDITIONAL_JUMP)
// 004477b2: MOV EDI,dword ptr [0x0084a854]
//   XREF to: 0084a854 (READ)
// 004477b8: XOR ESI,ESI
// 004477ba: TEST EDI,EDI
// 004477bc: JLE 0x00447815
//   XREF to: 00447815 (CONDITIONAL_JUMP)
// 004477be: MOV EDI,0x83c1dc
//   XREF to: 0083c1dc (DATA)
// 004477c3: MOV EBX,EDI
//   Label: LAB_004477c3
//   XREF to: 0083c1dc (PARAM)
//   XREF to: 0083c228 (PARAM)
// 004477c5: PUSH EBX
//   Label: LAB_004477c5
//   XREF to: 0083c1dc (DATA)
//   XREF to: 0083c228 (DATA)
// 004477c6: CALL shape_cramtex.cpp_findHighestOverlappingY_FUN_004478c0
//   XREF to: 004478c0 (UNCONDITIONAL_CALL)
// 004477cb: ADD ESP,0x4
// 004477ce: MOV EDX,dword ptr [EBX + 0x34]
//   XREF to: 0083c210 (READ)
// 004477d1: MOV ECX,dword ptr [EBX + 0x34]
//   XREF to: 0083c210 (READ)
// 004477d4: SUB EDX,EAX
// 004477d6: MOV EBP,dword ptr [EBX + 0x3c]
//   XREF to: 0083c218 (READ)
// 004477d9: SUB ECX,EDX
// 004477db: SUB EBP,EDX
// 004477dd: MOV dword ptr [EBX + 0x34],ECX
//   XREF to: 0083c210 (WRITE)
// 004477e0: PUSH EBX
//   XREF to: 0083c1dc (DATA)
// 004477e1: MOV dword ptr [EBX + 0x3c],EBP
//   XREF to: 0083c218 (WRITE)
// 004477e4: CALL shape_cramtex.cpp_findRightmostOverlappingX_FUN_004479a0
//   XREF to: 004479a0 (UNCONDITIONAL_CALL)
// 004477e9: MOV EDX,dword ptr [EBX + 0x30]
//   XREF to: 0083c20c (READ)
// 004477ec: SUB EDX,EAX
// 004477ee: MOV ECX,dword ptr [EBX + 0x38]
//   XREF to: 0083c214 (READ)
// 004477f1: MOV EAX,EDX
// 004477f3: MOV EDX,dword ptr [EBX + 0x30]
//   XREF to: 0083c20c (READ)
// 004477f6: SUB ECX,EAX
// 004477f8: SUB EDX,EAX
// 004477fa: MOV dword ptr [EBX + 0x38],ECX
//   XREF to: 0083c214 (WRITE)
// 004477fd: ADD ESP,0x4
// 00447800: MOV dword ptr [EBX + 0x30],EDX
//   XREF to: 0083c20c (WRITE)
// 00447803: TEST EAX,EAX
// 00447805: JG 0x004477c5
//   XREF to: 004477c5 (CONDITIONAL_JUMP)
// 00447807: MOV EBP,dword ptr [0x0084a854]
//   XREF to: 0084a854 (READ)
// 0044780d: INC ESI
// 0044780e: ADD EDI,0x4c
// 00447811: CMP ESI,EBP
// 00447813: JL 0x004477c3
//   XREF to: 004477c3 (CONDITIONAL_JUMP)
// 00447815: MOV EAX,[0x0084a854]
//   Label: LAB_00447815
//   XREF to: 0084a854 (READ)
// 0044781a: XOR ESI,ESI
// 0044781c: TEST EAX,EAX
// 0044781e: JLE 0x00447850
//   XREF to: 00447850 (CONDITIONAL_JUMP)
// 00447820: MOV EBX,0x83c1dc
//   XREF to: 0083c1dc (PARAM)
// 00447825: PUSH EBX
//   Label: LAB_00447825
//   XREF to: 0083c1dc (DATA)
//   XREF to: 0083c228 (DATA)
// 00447826: CALL shape_cramtex.cpp_findLeftmostOverlappingX_FUN_00447a10
//   XREF to: 00447a10 (UNCONDITIONAL_CALL)
// 0044782b: ADD ESP,0x4
// 0044782e: PUSH EBX
//   XREF to: 0083c1dc (DATA)
// 0044782f: INC ESI
// 00447830: MOV dword ptr [EBX + 0x38],EAX
//   XREF to: 0083c214 (WRITE)
// 00447833: CALL shape_cramtex.cpp_findLowestOverlappingY_FUN_00447930
//   XREF to: 00447930 (UNCONDITIONAL_CALL)
// 00447838: ADD EBX,0x4c
//   XREF to: 0083c228 (PARAM)
// 0044783b: MOV EDX,dword ptr [0x0084a854]
//   XREF to: 0084a854 (READ)
// 00447841: ADD ESP,0x4
// 00447844: MOV dword ptr [EBX + -0x10],EAX
//   XREF to: 0083c218 (WRITE)
// 00447847: CMP ESI,EDX
// 00447849: JL 0x00447825
//   XREF to: 00447825 (CONDITIONAL_JUMP)
// 0044784b: LEA EAX,[EAX]
// 0044784e: MOV ECX,ECX
// 00447850: ADD ESP,0x14
//   Label: LAB_00447850
// 00447853: POP EBP
// 00447854: POP EDI
// 00447855: POP ESI
// 00447856: POP EBX
// 00447857: RET
// 00447858: PUSH EBX
//   Label: LAB_00447858
//   XREF to: 0083c1dc (DATA)
// 00447859: CALL shape_cramtex.cpp_findLowestOverlappingY_FUN_00447930
//   XREF to: 00447930 (UNCONDITIONAL_CALL)
// 0044785e: MOV ECX,dword ptr [0x0084a884]
//   XREF to: 0084a884 (READ)
// 00447864: ADD ESP,0x4
// 00447867: CMP EAX,ECX
// 00447869: JL 0x004475df
//   XREF to: 004475df (CONDITIONAL_JUMP)
// 0044786f: SUB EAX,dword ptr [EBX + 0x3c]
//   XREF to: 0083c218 (READ)
// 00447872: MOV EDX,dword ptr [EBX + 0x3c]
//   XREF to: 0083c218 (READ)
// 00447875: MOV ESI,EAX
// 00447877: MOV EAX,dword ptr [EBX + 0x34]
//   XREF to: 0083c210 (READ)
// 0044787a: ADD EDX,ESI
// 0044787c: ADD EAX,ESI
// 0044787e: MOV dword ptr [EBX + 0x3c],EDX
//   XREF to: 0083c218 (WRITE)
// 00447881: MOV dword ptr [EBX + 0x34],EAX
//   XREF to: 0083c210 (WRITE)
// 00447884: JMP 0x004475df
//   XREF to: 004475df (UNCONDITIONAL_JUMP)
// 00447889: MOV EDI,dword ptr [ESP + 0x8]
//   Label: LAB_00447889
//   XREF to: Stack[-0x1c] (READ)
// 0044788d: INC EDI
// 0044788e: MOV dword ptr [ESP + 0x8],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 00447892: CMP EDI,0xa
// 00447895: JL 0x00447641
//   XREF to: 00447641 (CONDITIONAL_JUMP)
// 0044789b: JMP 0x00447703
//   XREF to: 00447703 (UNCONDITIONAL_JUMP)
// 004478a0: MOV EBP,0x1
//   Label: LAB_004478a0
// 004478a5: MOV EDI,dword ptr [0x0084a854]
//   XREF to: 0084a854 (READ)
// 004478ab: XOR EAX,EAX
// 004478ad: JMP 0x00447721
//   XREF to: 00447721 (UNCONDITIONAL_JUMP)
