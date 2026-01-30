// Name: shape_design.c_createPolygonFromVertexList_FUN_0045cc80
// Address: 0045cc80
// Address Range: [[0045cc80, 0045cdf6]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_createPolygonFromVertexList_FUN_0045cc80(void)

#include "nocturne.h"

void __cdecl shape_design_c_createPolygonFromVertexList_FUN_0045cc80(void)

{
  char local_a8 [80];
  uint local_58;
  byte local_54 [4];
  byte local_50 [4];
  byte local_4c [4];
  byte local_48 [4];
  byte local_44 [4];
  byte local_40 [4];
  byte local_3c [4];
  byte local_38 [4];
  byte local_34 [4];
  byte local_30 [4];
  byte local_2c [4];
  byte local_28 [4];
  byte local_24 [4];
  byte local_20 [4];
  byte local_1c [4];
  uint local_18;
  int local_14;
  
  engine_2d_c_drawText_FUN_00401fd0("Enter in point list going CW, ie 1,2,3",0,0);
  engine_2d_c_getInputWithPrompt_FUN_004032c0(local_a8,0x3c,0,0xb,(char *)0x0);
  local_18 = sscanf
                       (local_a8,"%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",&local_58,local_54,local_50,
                        local_4c,local_48,local_44,local_40,local_3c,local_38,local_34,local_30,
                        local_2c,local_28,local_24,local_20,local_1c);
  if ((2 < (int)local_18) && ((int)local_18 < 0x10)) {
    g_ModelPolygonData[g_PolygonCount].vertex_indices_count = local_18;
    g_ModelPolygonData[g_PolygonCount].polygon_type = 1;
    g_ModelPolygonData[g_PolygonCount].texture_name[0] = '\0';
    g_ModelPolygonData[g_PolygonCount].part_assignment = g_CurrentPartIndex;
    g_ModelPolygonData[g_PolygonCount].material_id = g_EditorColorIndex;
    g_ModelPolygonData[g_PolygonCount].material_id_backup = g_EditorColorIndex;
    for (local_14 = 0; local_14 < (int)local_18; local_14 = local_14 + 1) {
      g_ModelPolygonData[g_PolygonCount].vertex_indices[local_14] =
           *(uint *)(local_54 + local_14 * 4 + -4);
    }
    shape_design_c_calculatePolygonNormal_FUN_0045caa0(g_ModelPolygonData + g_PolygonCount);
    g_PolygonCount = g_PolygonCount + 1;
  }
  return;
}
