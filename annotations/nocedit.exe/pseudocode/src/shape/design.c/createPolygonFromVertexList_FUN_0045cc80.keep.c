// Name: shape_design.c_createPolygonFromVertexList_FUN_0045cc80
// Address: 0045cc80
// MANUAL RECONSTRUCTION
// Address Range: [[0045cc80, 0045cdf6]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_createPolygonFromVertexList_FUN_0045cc80(void)

#include "nocturne.h"

void __cdecl shape_design_c_createPolygonFromVertexList_FUN_0045cc80(void)

{
  char local_a8 [80];
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  
  engine_2d_c_drawText_FUN_00401fd0("Enter in point list going CW, ie 1,2,3",0,0);
  engine_2d_c_getInputWithPrompt_FUN_004032c0(local_a8,0x3c,0,0xb,(char *)0x0);
  local_18 = sscanf
                       (local_a8,"%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",&local_58,&local_54,&local_50,
                        &local_4c,&local_48,&local_44,&local_40,&local_3c,&local_38,&local_34,&local_30,
                        &local_2c,&local_28,&local_24,&local_20,&local_1c);
  if ((2 < (int)local_18) && ((int)local_18 < 0x10)) {
    g_ModelPolygonData[g_PolygonCount].vertex_indices_count = local_18;
    g_ModelPolygonData[g_PolygonCount].polygon_type = 1;
    g_ModelPolygonData[g_PolygonCount].texture_name[0] = '\0';
    g_ModelPolygonData[g_PolygonCount].part_assignment = g_CurrentPartIndex;
    g_ModelPolygonData[g_PolygonCount].material_id = g_EditorColorIndex;
    g_ModelPolygonData[g_PolygonCount].material_id_backup = g_EditorColorIndex;
    for (local_14 = 0; local_14 < (int)local_18; local_14 = local_14 + 1) {
      g_ModelPolygonData[g_PolygonCount].vertex_indices[local_14] =
           *(&local_58 + local_14);
    }
    shape_design_c_calculatePolygonNormal_FUN_0045caa0(g_ModelPolygonData + g_PolygonCount);
    g_PolygonCount = g_PolygonCount + 1;
  }
  return;
}
