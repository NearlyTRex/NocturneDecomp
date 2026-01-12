// Name: shape_design.c_configureSpatialSplittingPlane_FUN_004617c0
// Address: 004617c0
// Address Range: [[004617c0, 00461a99]]
// Convention: __cdecl
// Signature: void shape_design.c_configureSpatialSplittingPlane_FUN_004617c0(STreeNode * node)

#include "nocturne.h"

void __cdecl shape_design_c_configureSpatialSplittingPlane_FUN_004617c0(STreeNode *node)

{
  byte bVar1;
  int iVar2;
  STreeNode *pSVar3;
  uint uVar4;
  BADSPACEBASE *in_ESP;
  byte *pbVar5;
  byte bVar6;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  byte local_90 [80];
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  STreeNode *local_30;
  float local_28;
  byte local_24 [4];
  byte local_20 [4];
  byte local_1c [4];
  float local_18;
  int local_14;
  
  bVar6 = 0;
  engine_2d_c_getInputWithPrompt_FUN_004032c0((char *)local_90,0x13,0,0,"Connecting part : ");
  local_28 = 0.0;
  do {
    uVar4 = 0xffffffff;
    pbVar5 = local_90;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      bVar1 = *pbVar5;
      pbVar5 = pbVar5 + (uint)bVar6 * -2 + 1;
    } while (bVar1 != 0);
    if (~uVar4 - 1 <= (uint)local_28) break;
    iVar2 = crt_ctype_c_toupper_FUN_005ff9e0((uint)local_90[(int)local_28]);
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
        uVar4 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
        local_28 = (float)crt_ctype_c_toupper_FUN_005ff9e0(uVar4 & 0xff);
        if (local_28 == 1.12104e-43) {
          engine_2d_c_getInputWithPrompt_FUN_004032c0
                    ((char *)local_90,0x46,0,0x16,"Enter in 3 points : ");
          crt_stdio_c_sscanf_FUN_0060013c
                    ((char *)local_90,"%d,%d,%d",local_24,local_20,local_1c);
          shape_design_c_calculatePolygonNormal_FUN_0045caa0
                    ((SShapeEditorPolygon *)&stack0xfffffdec);
          local_40 = local_16c;
          local_3c = local_168;
          local_38 = local_164;
          local_34 = local_160;
        }
        else {
          engine_2d_c_getInputWithPrompt_FUN_004032c0
                    ((char *)local_90,0x28,0,0x16,"Enter in point number : ");
          local_14 = crt_stdlib_c_atoi_FUN_005ffef0((char *)local_90);
          local_34 = 0.0;
          local_38 = 0.0;
          local_3c = 0.0;
          local_40 = 0.0;
          if ((uint)local_28 < 0x59) {
            if (local_28 == 1.23314e-43) {
              local_40 = 1.0;
              local_34 = g_LoadedVertices[local_14].vertex.x;
            }
          }
          else if ((uint)local_28 < 0x5a) {
            local_3c = 1.0;
            local_34 = g_LoadedVertices[local_14].vertex.y;
          }
          else if (local_28 == 1.26117e-43) {
            local_38 = 1.0;
            local_34 = g_LoadedVertices[local_14].vertex.z;
          }
        }
        local_30 = shape_design_c_allocateSpatialTreeNode_FUN_00457ed0();
        local_30->left_child = (STreeNode *)0x0;
        local_30->right_child = (STreeNode *)0x0;
        local_30->node_type = 0;
        local_30->data1 = node->data1;
        pSVar3 = shape_design_c_allocateSpatialTreeNode_FUN_00457ed0();
        pSVar3->left_child = (STreeNode *)0x0;
        pSVar3->right_child = (STreeNode *)0x0;
        pSVar3->node_type = 0;
        pSVar3->data1 = local_18;
        node->left_child = local_30;
        node->right_child = pSVar3;
        node->node_type = 1;
        node->data1 = local_40;
        node->data2 = local_3c;
        node->data3 = local_38;
        node->data4 = local_34;
      }
      return;
    }
    iVar2 = crt_string_c_strcmp_FUN_005fef20((char *)local_90,g_ModelPartNames[(int)local_28].name);
    if (iVar2 == 0) {
      local_18 = local_28;
      goto LAB_0046186a;
    }
    local_28 = (float)((int)local_28 + 1);
  } while( true );
}
