// Name: engine_colquant.c_partitionByRed_FUN_00440b40
// Address: 00440b40
// Address Range: [[00440b40, 00440c71]]
// Convention: __cdecl
// Signature: void __cdecl engine_colquant_c_partitionByRed_FUN_00440b40(SColorQuantMapper *workspace,int box_index,int new_box_index)

#include "nocturne.h"

void __cdecl engine_colquant_c_partitionByRed_FUN_00440b40(SColorQuantMapper *workspace,int box_index,int new_box_index)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int local_18;
  int local_14;
  uint uVar1;
  
  local_14 = workspace->boxes[box_index].start_index;
  iVar4 = local_14 + workspace->boxes[box_index].count + -1;
  iVar5 = *(int *)((int)&workspace->boxes[box_index + -1].count + 2) >> 0x10;
  if (local_14 < iVar4) {
    local_18 = local_14 << 2;
    do {
      if (iVar5 < (int)(uint)(byte)workspace->color_data[local_18]) {
        for (iVar2 = iVar4 * 4;
            (local_14 * 4 < iVar2 && (iVar5 < (int)(uint)(byte)workspace->color_data[iVar2]));
            iVar2 = iVar2 + -4) {
          iVar4 = iVar4 + -1;
        }
        pcVar3 = workspace->color_data + local_18;
        uVar1 = *(uint *)pcVar3;
        *(uint *)pcVar3 = *(uint *)(workspace->color_data + iVar4 * 4);
        *(uint *)(workspace->color_data + iVar4 * 4) = uVar1;
      }
      local_18 = local_18 + 4;
      local_14 = local_14 + 1;
    } while (local_14 < iVar4);
  }
  workspace->boxes[new_box_index].start_index = iVar4;
  iVar1 = workspace->boxes[box_index].count;
  workspace->boxes[new_box_index].count = iVar1 - (iVar4 - workspace->boxes[box_index].start_index);
  workspace->boxes[box_index].count = iVar4 - workspace->boxes[box_index].start_index;
  engine_colquant_c_computeBoxStatistics_FUN_00441260(workspace,box_index);
  engine_colquant_c_computeBoxStatistics_FUN_00441260(workspace,new_box_index);
  workspace->boxes[box_index].count = iVar1;
  engine_colquant_c_refinePartitionByDistance_FUN_00441110(workspace,box_index,new_box_index);
  return;
}
