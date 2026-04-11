// Name: engine_colquant.c_computeWeightedColorDistance_FUN_00441040
// Address: 00441040
// MANUAL RECONSTRUCTION
// Address Range: [[00441040, 00441105]]
// Convention: __cdecl
// Signature: double __cdecl engine_colquant_c_computeWeightedColorDistance_FUN_00441040(SColorQuantMapper *workspace,int box_index,int color_index)

#include "nocturne.h"

double __cdecl engine_colquant_c_computeWeightedColorDistance_FUN_00441040(SColorQuantMapper *workspace,int box_index,int color_index)

{
  byte *pbVar8;
  double dVar4;
  double dVar7;
  double dVar6;
  double dVar5;

  pbVar8 = (byte *)(workspace->color_data + color_index * 4);
  dVar7 = (double)(int)((uint)*pbVar8 - (uint)workspace->boxes[box_index].avg_red);
  dVar6 = (double)(int)((uint)pbVar8[1] - (uint)workspace->boxes[box_index].avg_green);
  dVar5 = (double)(int)((uint)pbVar8[2] - (uint)workspace->boxes[box_index].avg_blue);
  dVar4 = (double)(int)((uint)pbVar8[3] - (uint)workspace->boxes[box_index].avg_intensity);
  return dVar4 * dVar4 * 0.69999999999999996 +
         dVar5 * dVar5 * 0.11 +
         dVar6 * dVar6 * 0.58999999999999997 + dVar7 * dVar7 * 0.29999999999999999;
}
