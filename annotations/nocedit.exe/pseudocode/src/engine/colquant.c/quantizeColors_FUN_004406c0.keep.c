// Name: engine_colquant.c_quantizeColors_FUN_004406c0
// Address: 004406c0
// MANUAL RECONSTRUCTION
// Address Range: [[004406c0, 00440b32]]
// Convention: __cdecl
// Signature: char * __cdecl engine_colquant_c_quantizeColors_FUN_004406c0(SColorQuantMapper *workspace,char *color_data,int color_count,int num_palette_entries)

#include "nocturne.h"

char * __cdecl engine_colquant_c_quantizeColors_FUN_004406c0(SColorQuantMapper *workspace,char *color_data,int color_count,int num_palette_entries)

{
  double dVar1;
  double dVar4;
  double dVar8;
  int iVar9;
  int iVar11;
  uint uVar12;
  int iVar13;
  double dMaxError;
  double dMaxSpread;
  char local_150 [256];
  uint local_50 [11];
  int local_24;
  int local_20;
  short sVar1;
  double dVar2;
  double dVar5;
  double dVar6;
  double dVar3;
  char *pcVar4;
  double dVar7;
  uint local_1c;
  uint local_18;

  memset(workspace->sort_keys,0,0x2000);
  memset(workspace->centroids,0,0x2000);
  memset(workspace->boxes,0,0x4000);
  memset(workspace->output_palette,0,0x300);
  workspace->color_data = color_data;
  workspace->num_palette_entries = num_palette_entries;
  dVar7 = 0.57735027000000005;
  if (0 < color_count) {
    iVar9 = 0;
    do {
      pcVar4 = workspace->color_data;
      local_1c = (uint)(byte)pcVar4[iVar9 + 1];
      dVar5 = (double)(byte)pcVar4[iVar9 + 1];
      local_18 = (uint)(byte)pcVar4[iVar9 + 2];
      dVar6 = (double)(byte)pcVar4[iVar9 + 2];
      local_20 = (int)ROUND(ROUND(SQRT(dVar6 * dVar6 +
                                       (double)(byte)pcVar4[iVar9] * (double)(byte)pcVar4[iVar9] +
                                       dVar5 * dVar5) * dVar7));
      iVar11 = iVar9 + 4;
      pcVar4[iVar9 + 3] = (char)local_20;
      iVar9 = iVar11;
    } while (iVar11 < color_count * 4);
  }
  workspace->boxes[0].start_index = 0;
  workspace->boxes[0].count = color_count;
  engine_colquant_c_computeBoxStatistics_FUN_00441260(workspace,0);
  _sprintf(local_150,"Subdividing histogram array for %d palette entries...\n\n",color_count);
  uVar12 = 0;
  engine_2d_c_drawText_FUN_00401fd0(local_150,0,0x16);
  do {
    while( true ) {
      dVar8 = 0.11;
      dVar4 = 0.29999999999999999;
      dVar1 = 0.58999999999999997;
      if (workspace->num_palette_entries + -1 <= (int)uVar12) {
        if (0 < workspace->num_palette_entries) {
          iVar9 = 0;
          do {
            workspace->centroids[iVar9].red = (double)workspace->boxes[iVar9].avg_red;
            workspace->centroids[iVar9].green = (double)workspace->boxes[iVar9].avg_green;
            sVar1 = workspace->boxes[iVar9].avg_blue;
            memset(workspace->sort_keys[iVar9], 0, sizeof(workspace->sort_keys[iVar9]));
            dVar2 = workspace->centroids[iVar9].green;
            dVar3 = workspace->centroids[iVar9].red;
            workspace->centroids[iVar9].blue = (double)sVar1;
            workspace->centroids[iVar9].weighted_intensity =
                 (double)sVar1 * dVar8 + dVar3 * dVar4 + dVar2 * dVar1;
            iVar9 = iVar9 + 1;
          } while (iVar9 < workspace->num_palette_entries);
        }
        local_24 = 0;
        if (0 < workspace->num_palette_entries) {
          do {
            iVar9 = 0;
            while (iVar9 < workspace->num_palette_entries + -1) {
              if (workspace->centroids[iVar9 + 1].weighted_intensity <
                  workspace->centroids[iVar9].weighted_intensity) {
                memcpy(local_50, &workspace->centroids[iVar9], sizeof(SColorQuantCentroid));
                memcpy(&workspace->centroids[iVar9], &workspace->centroids[iVar9 + 1], sizeof(SColorQuantCentroid));
                memcpy(&workspace->centroids[iVar9 + 1], local_50, sizeof(SColorQuantCentroid));
              }
              iVar9 = iVar9 + 1;
            }
            local_24 = local_24 + 1;
          } while (local_24 < workspace->num_palette_entries);
        }
        for (iVar9 = 0; iVar9 < 256; iVar9 = iVar9 + 1) {
          workspace->output_palette[iVar9 * 3 + 0] = (char)(int)ROUND(ROUND(workspace->centroids[iVar9].red));
          workspace->output_palette[iVar9 * 3 + 1] = (char)(int)ROUND(ROUND(workspace->centroids[iVar9].green));
          workspace->output_palette[iVar9 * 3 + 2] = (char)(int)ROUND(ROUND(workspace->centroids[iVar9].blue));
        }
        return workspace->output_palette;
      }
      _sprintf(local_150,"%6.6d",uVar12);
      engine_2d_c_drawText_FUN_00401fd0(local_150,0,0x21);
      if ((uVar12 & 7) == 0) {
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      }
      dMaxError = workspace->boxes[0].total_weighted_error;
      dMaxSpread = workspace->boxes[0].max_spread;
      iVar13 = 0;
      if (0 < (int)uVar12) {
        iVar9 = 1;
        do {
          if (dMaxError < workspace->boxes[iVar9].total_weighted_error) {
            dMaxError = workspace->boxes[iVar9].total_weighted_error;
            dMaxSpread = workspace->boxes[iVar9].max_spread;
            iVar13 = iVar9;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 <= (int)uVar12);
      }
      iVar9 = uVar12 + 1;
      if (dMaxSpread != workspace->boxes[iVar13].spread_red) break;
      engine_colquant_c_partitionByRed_FUN_00440b40(workspace,iVar13,iVar9);
LAB_0044091a:
      uVar12 = uVar12 + 1;
    }
    if (dMaxSpread == workspace->boxes[iVar13].spread_green) {
      engine_colquant_c_partitionByGreen_FUN_00440c80(workspace,iVar13,iVar9);
      goto LAB_0044091a;
    }
    if (dMaxSpread == workspace->boxes[iVar13].spread_blue) {
      engine_colquant_c_partitionByBlue_FUN_00440dc0(workspace,iVar13,iVar9);
      goto LAB_0044091a;
    }
    if (dMaxSpread != workspace->boxes[iVar13].spread_intensity)
    goto LAB_0044091a;
    engine_colquant_c_partitionByIntensity_FUN_00440f00(workspace,iVar13,iVar9);
    uVar12 = uVar12 + 1;
  } while( true );
}
