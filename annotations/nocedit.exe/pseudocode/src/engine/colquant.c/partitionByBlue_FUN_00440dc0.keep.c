// Name: engine_colquant.c_partitionByBlue_FUN_00440dc0
// Address: 00440dc0
// MANUAL RECONSTRUCTION
// Address Range: [[00440dc0, 00440ef3]]
// Convention: __cdecl
// Signature: void __cdecl engine_colquant_c_partitionByBlue_FUN_00440dc0(SColorQuantMapper *workspace,int box_index,int new_box_index)

#include "nocturne.h"

void __cdecl engine_colquant_c_partitionByBlue_FUN_00440dc0(SColorQuantMapper *workspace,int box_index,int new_box_index)

{
  int iVar3;
  char *pcVar4;
  int iVar5;
  int local_18;
  int local_14;
  int iVar2;
  uint uVar1;
  int avg_blue;

  local_14 = workspace->boxes[box_index].start_index;
  avg_blue = (int)workspace->boxes[box_index].avg_blue;
  iVar5 = local_14 + workspace->boxes[box_index].count + -1;
  if (local_14 < iVar5) {
    local_18 = local_14 << 2;
    do {
      if (avg_blue < (int)(uint)(byte)workspace->color_data[local_18 + 2]) {
        iVar3 = iVar5 * 4;
        while ((local_14 * 4 < iVar3 &&
               (avg_blue < (int)(uint)(byte)workspace->color_data[iVar3 + 2]))) {
          iVar5 = iVar5 + -1;
          iVar3 = iVar3 + -4;
        }
        pcVar4 = workspace->color_data + local_18;
        uVar1 = *(uint *)pcVar4;
        *(uint *)pcVar4 = *(uint *)(workspace->color_data + iVar5 * 4);
        *(uint *)(workspace->color_data + iVar5 * 4) = uVar1;
      }
      local_18 = local_18 + 4;
      local_14 = local_14 + 1;
    } while (local_14 < iVar5);
  }
  workspace->boxes[new_box_index].start_index = iVar5;
  iVar2 = workspace->boxes[box_index].count;
  workspace->boxes[new_box_index].count = iVar2 - (iVar5 - workspace->boxes[box_index].start_index);
  workspace->boxes[box_index].count = iVar5 - workspace->boxes[box_index].start_index;
  engine_colquant_c_computeBoxStatistics_FUN_00441260(workspace,box_index);
  engine_colquant_c_computeBoxStatistics_FUN_00441260(workspace,new_box_index);
  workspace->boxes[box_index].count = iVar2;
  engine_colquant_c_refinePartitionByDistance_FUN_00441110(workspace,box_index,new_box_index);
  return;
}
