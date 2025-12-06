// Name: shape_cramtex.cpp_placementCollisionCheck_FUN_00448260
// Address: 00448260
// Address Range: [[00448260, 00448381]]
// Convention: __cdecl
// Signature: void shape_cramtex.cpp_placementCollisionCheck_FUN_00448260(int layer_id, int start_x, int start_y, int width, int height)

#include "nocturne.h"

void __cdecl
shape_cramtex_cpp_placementCollisionCheck_FUN_00448260
          (int layer_id,int start_x,int start_y,int width,int height)

{
  int iVar1;
  SCramWorkingEntry *pSVar2;
  int iVar3;
  int iVar4;
  int local_18;
  SCramRectangle *local_14;
  
  if (0 < g_CramRectangleCount) {
    iVar1 = 0;
    do {
      if (((layer_id == *(int *)((int)&g_CramRectangles[0].left + iVar1)) &&
          (start_x == *(int *)((int)&g_CramRectangles[0].top + iVar1))) &&
         (start_y == *(int *)((int)&g_CramRectangles[0].right + iVar1))) {
        return;
      }
      iVar1 = iVar1 + 0x28;
    } while (iVar1 < g_CramRectangleCount * 0x28);
  }
  local_14 = g_CramRectangles + g_CramRectangleCount;
  local_18 = 0;
  do {
    iVar1 = g_CramMinPlacementY;
    iVar4 = g_CramMinPlacementX;
    if (local_18 != 0) {
      iVar1 = g_CramMinPlacementX;
      iVar4 = g_CramMinPlacementY;
    }
    iVar3 = g_CramPlacedTextureCount + -1;
    if (-1 < iVar3) {
      pSVar2 = g_CramSortedTextureEntries + iVar3;
      do {
        if (((pSVar2->assigned_map_number == layer_id) && (start_x < pSVar2->working_top)) &&
           ((start_y < pSVar2->working_width &&
            ((pSVar2->placement_bottom < iVar4 + start_x &&
             (pSVar2->working_right < iVar1 + start_y)))))) break;
        iVar3 = iVar3 + -1;
        pSVar2 = pSVar2 + -1;
      } while (-1 < iVar3);
    }
    if (iVar3 < 0) {
      local_14->reserved_0x18 = 0;
      local_14->active_flag = 1;
      local_14->left = layer_id;
      local_14->top = start_x;
      local_14->right = start_y;
      local_14->bottom = iVar4 + start_x;
      local_14->orientation = local_18;
      local_14->max_dimension = iVar1 + start_y;
      g_CramRectangleCount = g_CramRectangleCount + 1;
      local_14 = local_14 + 1;
    }
    local_18 = local_18 + 1;
    if (1 < local_18) {
      return;
    }
  } while( true );
}
