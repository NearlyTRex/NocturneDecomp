// Name: engine_colquant.c_computeBoxStatistics_FUN_00441260
// Address: 00441260
// MANUAL RECONSTRUCTION
// Address Range: [[00441260, 00441780]]
// Convention: __cdecl
// Signature: void __cdecl engine_colquant_c_computeBoxStatistics_FUN_00441260(SColorQuantMapper *workspace,int box_index)

#include "nocturne.h"

void __cdecl engine_colquant_c_computeBoxStatistics_FUN_00441260(SColorQuantMapper *workspace,int box_index)

{
  double dVar2;
  double dVar3;
  double b_02;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar4;
  uint uVar5;
  int iVar11;
  byte *pbVar12;
  int iVar6;
  double dVar13;
  double dVar7;
  double dVar14;
  double local_90;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double dVar6;
  double b_01;
  double dVar1;
  double b;
  double b_00;
  
  local_70 = 0.0;
  local_50 = 0.0;
  local_48 = 0.0;
  local_78 = 0.0;
  iVar11 = workspace->boxes[box_index].start_index;
  iVar8 = workspace->boxes[box_index].start_index + workspace->boxes[box_index].count;
  if (iVar11 < iVar8) {
    local_48 = 0.0;
    local_50 = 0.0;
    local_78 = 0.0;
    pbVar12 = (byte *)(workspace->color_data + iVar11 * 4);
    do {
      iVar11 = iVar11 + 1;
      local_78 = (double)*pbVar12 + local_78;
      local_70 = (double)pbVar12[1] + local_70;
      local_50 = (double)pbVar12[2] + local_50;
      local_48 = (double)pbVar12[3] + local_48;
      pbVar12 = pbVar12 + 4;
    } while (iVar11 < iVar8);
  }
  workspace->boxes[box_index].avg_red = (short)(int)ROUND(ROUND(local_78 / (double)(uint)workspace->boxes[box_index].count));
  workspace->boxes[box_index].avg_green = (short)(int)ROUND(ROUND(local_70 / (double)(uint)workspace->boxes[box_index].count));
  workspace->boxes[box_index].avg_blue = (short)(int)ROUND(ROUND(local_50 / (double)(uint)workspace->boxes[box_index].count));

  *(uint *)&workspace->boxes[box_index].spread_red = 0;
  *(uint *)((int)&workspace->boxes[box_index].spread_red + 4) = 0;
  local_68 = 0.0;
  *(uint *)&workspace->boxes[box_index].spread_green = 0;
  *(uint *)((int)&workspace->boxes[box_index].spread_green + 4) = 0;
  local_58 = 0.0;
  *(uint *)&workspace->boxes[box_index].spread_blue = 0;
  *(uint *)((int)&workspace->boxes[box_index].spread_blue + 4) = 0;
  local_90 = 0.0;
  *(uint *)&workspace->boxes[box_index].spread_intensity = 0;
  *(uint *)((int)&workspace->boxes[box_index].spread_intensity + 4) = 0;
  local_60 = 0.0;
  *(uint *)&workspace->boxes[box_index].total_weighted_error = 0;
  workspace->boxes[box_index].avg_intensity = (short)(int)ROUND(ROUND(local_48 / (double)(uint)workspace->boxes[box_index].count));
  iVar6 = workspace->boxes[box_index].start_index;
  *(uint *)((int)&workspace->boxes[box_index].total_weighted_error + 4) = 0;
  for (iVar6 = iVar6 * 4; iVar6 < iVar8 * 4; iVar6 = iVar6 + 4) {
    uVar9 = (uint)workspace->boxes[box_index].avg_red -
            (uint)(byte)workspace->color_data[iVar6];
    uVar10 = (int)uVar9 >> 0x1f;
    dVar6 = (double)(int)((uVar9 ^ uVar10) - uVar10);
    uVar4 = (uint)workspace->boxes[box_index].avg_green - (uint)(byte)workspace->color_data[iVar6 + 1];
    uVar5 = (int)uVar4 >> 0x1f;
    b = (double)(int)((uVar4 ^ uVar5) - uVar5);
    uVar4 = (uint)workspace->boxes[box_index].avg_blue - (uint)(byte)workspace->color_data[iVar6 + 2];
    uVar5 = (int)uVar4 >> 0x1f;
    b_00 = (double)(int)((uVar4 ^ uVar5) - uVar5);
    uVar4 = (uint)workspace->boxes[box_index].avg_intensity - (uint)(byte)workspace->color_data[iVar6 + 3];
    uVar5 = (int)uVar4 >> 0x1f;
    dVar2 = workspace->boxes[box_index].spread_green;
    dVar7 = workspace->boxes[box_index].spread_blue;
    dVar1 = workspace->boxes[box_index].spread_intensity;
    b_01 = (double)(int)((uVar4 ^ uVar5) - uVar5);
    workspace->boxes[box_index].spread_red = workspace->boxes[box_index].spread_red + dVar6;
    workspace->boxes[box_index].spread_green = dVar2 + b;
    workspace->boxes[box_index].spread_blue = dVar7 + b_00;
    workspace->boxes[box_index].spread_intensity = dVar1 + b_01;
    local_68 = engine_colquant_c_doubleMax_FUN_00441790(local_68,dVar6);
    local_58 = engine_colquant_c_doubleMax_FUN_00441790(local_58,b);
    local_90 = engine_colquant_c_doubleMax_FUN_00441790(local_90,b_00);
    local_60 = engine_colquant_c_doubleMax_FUN_00441790(local_60,b_01);
    workspace->boxes[box_index].total_weighted_error =
         b_00 * b_00 * 0.11 + b * b * 0.58999999999999997 + dVar6 * dVar6 * 0.29999999999999999 +
         b_01 * b_01 * 0.69999999999999996 + workspace->boxes[box_index].total_weighted_error;
  }
  dVar2 = workspace->boxes[box_index].spread_red * 0.33000000000000002;
  dVar7 = workspace->boxes[box_index].spread_blue * 0.11;
  dVar3 = workspace->boxes[box_index].spread_intensity * 0.69999999999999996;
  workspace->boxes[box_index].spread_green =
       workspace->boxes[box_index].spread_green * 0.58999999999999997 * local_58;
  b_02 = workspace->boxes[box_index].spread_green;
  workspace->boxes[box_index].spread_red = dVar2 * local_68;
  dVar2 = workspace->boxes[box_index].spread_red;
  workspace->boxes[box_index].spread_blue = dVar7 * local_90;
  workspace->boxes[box_index].spread_intensity = dVar3 * local_60;
  dVar13 = engine_colquant_c_doubleMax_FUN_00441790(dVar2,b_02);
  dVar2 = workspace->boxes[box_index].spread_blue;
  workspace->boxes[box_index].max_spread = dVar13;
  dVar7 = engine_colquant_c_doubleMax_FUN_00441790(workspace->boxes[box_index].max_spread,dVar2);
  dVar2 = workspace->boxes[box_index].spread_intensity;
  workspace->boxes[box_index].max_spread = dVar7;
  dVar14 = engine_colquant_c_doubleMax_FUN_00441790(workspace->boxes[box_index].max_spread,dVar2);
  workspace->boxes[box_index].max_spread = dVar14;
  return;
}
