// Name: shape_cramtex.cpp_printAtlasLayoutReport_FUN_004481d0
// Address: 004481d0
// Address Range: [[004481d0, 00448251]]
// Convention: __cdecl
// Signature: void __cdecl shape_cramtex_cpp_printAtlasLayoutReport_FUN_004481d0(_FILE *output_file)

#include "nocturne.h"

void __cdecl shape_cramtex_cpp_printAtlasLayoutReport_FUN_004481d0(_FILE *output_file)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  CCramTex *pCVar9;
  int iVar10;
  int iVar11;
  
  if (0 < g_CramTextureCount) {
    pCVar9 = g_CramSortedTextureEntries;
    iVar10 = 0;
    do {
      piVar1 = &pCVar9->rotation_applied;
      piVar2 = &pCVar9->final_bottom;
      piVar3 = &pCVar9->final_right;
      piVar4 = &pCVar9->final_top;
      piVar5 = &pCVar9->final_left;
      piVar6 = &pCVar9->working_map_id;
      piVar7 = &pCVar9->height;
      piVar8 = &pCVar9->width;
      pCVar9 = pCVar9 + 1;
      iVar11 = iVar10 + 1;
      _fprintf(output_file,"%2d: %5dx%-5d  Page %d (%5d,%-5d)-(%5d,%-5d)    Rotated: %d\n",iVar10,*piVar8,*piVar7,*piVar6,
                 *piVar5,*piVar4,*piVar3,*piVar2,*piVar1);
      iVar10 = iVar11;
    } while (iVar11 < g_CramTextureCount);
  }
  _fprintf(output_file,"%ux%u square found using %u padding.\n",g_CramCurrentAcceptableSize,
             g_CramCurrentAcceptableSize,g_CramPaddingCalculation);
  return;
}
