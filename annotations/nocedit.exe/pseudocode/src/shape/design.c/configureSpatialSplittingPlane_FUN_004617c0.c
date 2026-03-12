// Name: shape_design.c_configureSpatialSplittingPlane_FUN_004617c0
// Address: 004617c0
// Address Range: [[004617c0, 00461a99]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_configureSpatialSplittingPlane_FUN_004617c0(STreeNode *node)

#include "nocturne.h"

void __cdecl shape_design_c_configureSpatialSplittingPlane_FUN_004617c0(STreeNode *node)

{
  int iVar2;
  int iVar1;
  uint uVar2;
  STreeNode *pSVar4;
  STreeNode *pSVar3;
  uint uVar4;
  byte *pbVar5;
  byte bVar6;
  SShapeEditorPolygon local_214;
  byte local_90 [80];
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  STreeNode *local_30;
  float local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  float local_18;
  int local_14;
  byte bVar1;
  
  bVar6 = 0;
  engine_2d_c_getInputWithPrompt_FUN_004032c0((char *)local_90,0x13,0,0,"Connecting part : ");
  local_28 = 0.0;
  do {
    uVar4 = 0xffffffff;
    pbVar5 = local_90;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pbVar5 = pbVar5 + (uint)bVar6 * -2 + 1;
      bVar1 = *pbVar5;
      pbVar5 = pbVar5;
    } while (bVar1 != 0);
    if (~uVar4 - 1 <= (uint)local_28) break;
    iVar2 = toupper((uint)local_90[(int)local_28]);
    local_90[(int)local_28] = (byte)iVar2;
    local_28 = (float)((int)local_28 + 1);
  } while( true );
  local_18 = -NAN;
  local_28 = 0.0;
  do {
    if (g_PartsCount <= (int)local_28) {
LAB_0046186a:
      if (local_18 != -NAN) {
        engine_2d_c_drawText_FUN_00401fd0("Separation Method : (P)oint list (X) (Y) (Z)",0,0xb);
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        uVar2 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
        uVar2 = toupper(uVar2 & 0xff);
        if (uVar2 == 0x50) {
          engine_2d_c_getInputWithPrompt_FUN_004032c0
                    ((char *)local_90,0x46,0,0x16,"Enter in 3 points : ");
          sscanf
                    ((char *)local_90,"%d,%d,%d",&local_24,&local_20,&local_1c);
          local_214.vertex_indices_count = 3;
          local_214.vertex_indices[0] = local_24;
          local_214.vertex_indices[1] = local_20;
          local_214.vertex_indices[2] = local_1c;
          shape_design_c_calculatePolygonNormal_FUN_0045caa0(&local_214);
          local_40 = local_214.normal.x;
          local_3c = local_214.normal.y;
          local_38 = local_214.normal.z;
          local_34 = local_214.plane_distance;
        }
        else {
          engine_2d_c_getInputWithPrompt_FUN_004032c0
                    ((char *)local_90,0x28,0,0x16,"Enter in point number : ");
          local_14 = atoi((char *)local_90);
          local_34 = 0.0;
          local_38 = 0.0;
          local_3c = 0.0;
          local_40 = 0.0;
          if (uVar2 < 0x59) {
            if (uVar2 == 0x58) {
              local_40 = 1.0;
              local_34 = g_LoadedVertices[local_14].vertex.x;
            }
          }
          else if (uVar2 < 0x5a) {
            local_3c = 1.0;
            local_34 = g_LoadedVertices[local_14].vertex.y;
          }
          else if (uVar2 == 0x5a) {
            local_38 = 1.0;
            local_34 = g_LoadedVertices[local_14].vertex.z;
          }
        }
        pSVar4 = shape_design_c_allocateSpatialTreeNode_FUN_00457ed0();
        pSVar4->left_child = (STreeNode *)0x0;
        pSVar4->right_child = (STreeNode *)0x0;
        pSVar4->node_type = 0;
        pSVar4->data1 = node->data1;
        pSVar3 = shape_design_c_allocateSpatialTreeNode_FUN_00457ed0();
        pSVar3->left_child = (STreeNode *)0x0;
        pSVar3->right_child = (STreeNode *)0x0;
        pSVar3->node_type = 0;
        pSVar3->data1 = local_18;
        node->left_child = pSVar4;
        node->right_child = pSVar3;
        node->node_type = 1;
        node->data1 = local_40;
        node->data2 = local_3c;
        node->data3 = local_38;
        node->data4 = local_34;
      }
      return;
    }
    iVar1 = _strcmp((char *)local_90,g_ModelPartNames[(int)local_28].name)
    ;
    if (iVar1 == 0) {
      local_18 = local_28;
      goto LAB_0046186a;
    }
    local_28 = (float)((int)local_28 + 1);
  } while( true );
}
