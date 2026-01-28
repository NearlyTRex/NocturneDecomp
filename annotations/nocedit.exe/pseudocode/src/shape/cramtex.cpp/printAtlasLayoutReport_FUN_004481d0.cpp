// Name: shape_cramtex.cpp_printAtlasLayoutReport_FUN_004481d0
// Address: 004481d0
// Address Range: [[004481d0, 00448251]]
// Convention: __cdecl
// Signature: void __cdecl shape_cramtex_cpp_printAtlasLayoutReport_FUN_004481d0(FILE *output_file)

#include "nocturne.h"

void __cdecl shape_cramtex_cpp_printAtlasLayoutReport_FUN_004481d0(FILE *output_file)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  SCramWorkingEntry *pSVar9;
  int iVar10;
  int iVar11;
  FILE *in_stack_00000004;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x40);
  if (0 < (int)g_CramTextureCount) {
    pSVar9 = g_CramSortedTextureEntries;
    iVar10 = 0;
    do {
      piVar1 = &pSVar9->rotation_applied;
      piVar2 = &pSVar9->final_bottom;
      piVar3 = &pSVar9->final_right;
      piVar4 = &pSVar9->final_top;
      piVar5 = &pSVar9->final_left;
      piVar6 = &pSVar9->working_map_id;
      piVar7 = &pSVar9->height;
      piVar8 = &pSVar9->width;
      pSVar9 = pSVar9 + 1;
      iVar11 = iVar10 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0
                (in_stack_00000004,"%2d: %5dx%-5d  Page %d (%5d,%-5d)-(%5d,%-5d)    Rotated: %d\n",iVar10,*piVar8,*piVar7,
                 *piVar6,*piVar5,*piVar4,*piVar3,*piVar2,*piVar1);
      iVar10 = iVar11;
    } while (iVar11 < (int)g_CramTextureCount);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0
            (in_stack_00000004,"%ux%u square found using %u padding.\n",g_CramCurrentAcceptableSize,
             g_CramCurrentAcceptableSize,g_CramPaddingCalculation);
  return;
}
