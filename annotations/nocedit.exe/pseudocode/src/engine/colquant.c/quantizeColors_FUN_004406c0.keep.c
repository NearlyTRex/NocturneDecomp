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
  SColorQuantMapper *pSVar8;
  int iVar10;
  SColorQuantMapper *pSVar9;
  SColorQuantMapper *pSVar10;
  SColorQuantMapper *pSVar11;
  int iVar11;
  uint uVar12;
  SColorQuantMapper *pSVar12;
  int iVar13;
  uint local_160;
  uint uStack_15c;
  uint local_158;
  uint uStack_154;
  char local_150 [256];
  uint local_50 [11];
  int local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  short sVar1;
  double dVar2;
  double dVar5;
  double dVar6;
  double dVar3;
  char *pcVar4;
  double dVar7;

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
        iVar9 = 0;
        pSVar8 = workspace;
        pSVar9 = workspace;
        if (0 < workspace->num_palette_entries) {
          do {
            pSVar9->centroids[0].red = (double)pSVar8->boxes[0].avg_red;
            pSVar10 = (SColorQuantMapper *)((int)pSVar9->sort_keys[0] + 0x1c);
            pSVar9->centroids[0].green = (double)pSVar8->boxes[0].avg_green;
            sVar1 = pSVar8->boxes[0].avg_blue;
            *(uint *)pSVar9->sort_keys[0] = 0;
            *(uint *)((int)pSVar9->sort_keys[0] + 4) = 0;
            *(uint *)(pSVar9->sort_keys[0] + 1) = 0;
            *(uint *)((int)pSVar9->sort_keys[0] + 0xc) = 0;
            dVar2 = pSVar9->centroids[0].green;
            *(uint *)(pSVar9->sort_keys[0] + 2) = 0;
            *(uint *)((int)pSVar9->sort_keys[0] + 0x14) = 0;
            dVar3 = pSVar9->centroids[0].red;
            *(uint *)(pSVar9->sort_keys[0] + 3) = 0;
            pSVar9->centroids[0].blue = (double)sVar1;
            pSVar10->num_palette_entries = 0;
            iVar9 = iVar9 + 1;
            pSVar9->centroids[0].weighted_intensity =
                 (double)sVar1 * dVar8 + dVar3 * dVar4 + dVar2 * dVar1;
            pSVar8 = (SColorQuantMapper *)((int)pSVar8->sort_keys[1] + 0x1c);
            pSVar9 = pSVar10;
          } while (iVar9 < workspace->num_palette_entries);
        }
        local_24 = 0;
        if (0 < workspace->num_palette_entries) {
          do {
            iVar9 = 0;
            pSVar11 = workspace;
            while (iVar9 < workspace->num_palette_entries + -1) {
              if (pSVar11->centroids[1].weighted_intensity <
                  pSVar11->centroids[0].weighted_intensity) {
                memcpy(local_50, &pSVar11->centroids[0], sizeof(SColorQuantCentroid));
                memcpy(&pSVar11->centroids[0], &pSVar11->centroids[1], sizeof(SColorQuantCentroid));
                memcpy(&pSVar11->centroids[1], local_50, sizeof(SColorQuantCentroid));
                iVar9 = iVar9 + 1;
                pSVar11 = (SColorQuantMapper *)((int)pSVar11->sort_keys[0] + 0x1c);
              }
              else {
                iVar9 = iVar9 + 1;
                pSVar11 = (SColorQuantMapper *)((int)pSVar11->sort_keys[0] + 0x1c);
              }
            }
            local_24 = local_24 + 1;
          } while (local_24 < workspace->num_palette_entries);
        }
        pSVar11 = workspace;
        pSVar12 = workspace;
        do {
          pSVar12->output_palette[0] = (char)(int)ROUND(ROUND(pSVar11->centroids[0].red));
          pSVar12->output_palette[1] = (char)(int)ROUND(ROUND(pSVar11->centroids[0].green));
          pSVar12->output_palette[2] = (char)(int)ROUND(ROUND(pSVar11->centroids[0].blue));
          pSVar11 = (SColorQuantMapper *)((int)pSVar11->sort_keys[0] + 0x1c);
          pSVar12 = (SColorQuantMapper *)((int)&pSVar12->num_palette_entries + 3);
        } while (pSVar11 != (SColorQuantMapper *)((int)workspace->sort_keys[0xff] + 0x1c));
        return workspace->output_palette;
      }
      _sprintf(local_150,"%6.6d",uVar12);
      engine_2d_c_drawText_FUN_00401fd0(local_150,0,0x21);
      if ((uVar12 & 7) == 0) {
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      }
      local_160 = *(uint *)&workspace->boxes[0].total_weighted_error;
      uStack_15c = *(uint *)((int)&workspace->boxes[0].total_weighted_error + 4);
      local_158 = *(uint *)&workspace->boxes[0].max_spread;
      iVar9 = 1;
      uStack_154 = *(uint *)((int)&workspace->boxes[0].max_spread + 4);
      iVar13 = 0;
      pSVar11 = workspace;
      if (0 < (int)uVar12) {
        do {
          if (__BITCAST_DOUBLE(CONCAT44(uStack_15c,local_160)) < pSVar11->boxes[1].total_weighted_error) {
            local_160 = *(uint *)&pSVar11->boxes[1].total_weighted_error;
            uStack_15c = *(uint *)((int)&pSVar11->boxes[1].total_weighted_error + 4);
            local_158 = *(uint *)&pSVar11->boxes[1].max_spread;
            uStack_154 = *(uint *)((int)&pSVar11->boxes[1].max_spread + 4);
            iVar13 = iVar9;
          }
          iVar9 = iVar9 + 1;
          pSVar11 = (SColorQuantMapper *)((int)pSVar11->sort_keys[1] + 0x1c);
        } while (iVar9 <= (int)uVar12);
      }
      iVar9 = uVar12 + 1;
      if (__BITCAST_DOUBLE(CONCAT44(uStack_154,local_158)) != workspace->boxes[iVar13].spread_red) break;
      engine_colquant_c_partitionByRed_FUN_00440b40(workspace,iVar13,iVar9);
LAB_0044091a:
      uVar12 = uVar12 + 1;
    }
    if (__BITCAST_DOUBLE(CONCAT44(uStack_154,local_158)) == workspace->boxes[iVar13].spread_green) {
      engine_colquant_c_partitionByGreen_FUN_00440c80(workspace,iVar13,iVar9);
      goto LAB_0044091a;
    }
    if (__BITCAST_DOUBLE(CONCAT44(uStack_154,local_158)) == workspace->boxes[iVar13].spread_blue) {
      engine_colquant_c_partitionByBlue_FUN_00440dc0(workspace,iVar13,iVar9);
      goto LAB_0044091a;
    }
    if (__BITCAST_DOUBLE(CONCAT44(uStack_154,local_158)) != workspace->boxes[iVar13].spread_intensity)
    goto LAB_0044091a;
    engine_colquant_c_partitionByIntensity_FUN_00440f00(workspace,iVar13,iVar9);
    uVar12 = uVar12 + 1;
  } while( true );
}
