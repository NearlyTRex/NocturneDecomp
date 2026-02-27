// Name: engine_colquant.c_refinePartitionByDistance_FUN_00441110
// Address: 00441110
// Address Range: [[00441110, 00441257]]
// Convention: __cdecl
// Signature: void __cdecl engine_colquant_c_refinePartitionByDistance_FUN_00441110(SColorQuantWorkspace *workspace,int box_index,int new_box_index)

#include "nocturne.h"

void __cdecl engine_colquant_c_refinePartitionByDistance_FUN_00441110(SColorQuantWorkspace *workspace,int box_index,int new_box_index)

{
  uint uVar1;
  char *pcVar2;
  int color_index;
  int color_index_00;
  double dVar3;
  double dVar4;
  int local_14;
  
  color_index_00 = workspace->boxes[box_index].start_index;
  color_index = workspace->boxes[box_index].count + color_index_00 + -1;
  if (color_index_00 < color_index) {
    local_14 = color_index_00 * 4;
    do {
      dVar3 = engine_colquant_c_computeWeightedColorDistance_FUN_00441040
                        (workspace,box_index,color_index_00);
      dVar4 = engine_colquant_c_computeWeightedColorDistance_FUN_00441040
                        (workspace,new_box_index,color_index_00);
      if (dVar4 < dVar3) {
        for (; color_index_00 < color_index; color_index = color_index + -1) {
          dVar3 = engine_colquant_c_computeWeightedColorDistance_FUN_00441040
                            (workspace,box_index,color_index);
          dVar4 = engine_colquant_c_computeWeightedColorDistance_FUN_00441040
                            (workspace,new_box_index,color_index);
          if (dVar3 <= dVar4) break;
        }
        pcVar2 = workspace->color_data + local_14;
        uVar1 = *(uint *)pcVar2;
        *(uint *)pcVar2 = *(uint *)(workspace->color_data + color_index * 4);
        *(uint *)(workspace->color_data + color_index * 4) = uVar1;
      }
      local_14 = local_14 + 4;
      color_index_00 = color_index_00 + 1;
    } while (color_index_00 < color_index);
  }
  workspace->boxes[new_box_index].start_index = color_index;
  workspace->boxes[new_box_index].count =
       workspace->boxes[box_index].count - (color_index - workspace->boxes[box_index].start_index);
  workspace->boxes[box_index].count = color_index - workspace->boxes[box_index].start_index;
  engine_colquant_c_computeBoxStatistics_FUN_00441260(workspace,box_index);
  engine_colquant_c_computeBoxStatistics_FUN_00441260(workspace,new_box_index);
  return;
}
