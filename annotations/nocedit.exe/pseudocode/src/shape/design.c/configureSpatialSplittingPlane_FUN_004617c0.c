// Name: shape_design.c_configureSpatialSplittingPlane_FUN_004617c0
// Address: 004617c0
// Address Range: [[004617c0, 00461a99]]
// Convention: __cdecl
// Signature: void shape_design.c_configureSpatialSplittingPlane_FUN_004617c0(STreeNode * node)
// Globals:
//   TerminatedCString s_Connecting_part_0061bf06
//   TerminatedCString s_Separation_Method_P_oint_0061bf19
//   TerminatedCString s_Enter_in_3_points_0061bf46
//   TerminatedCString s_d_d_d_0061bf5b
//   TerminatedCString s_Enter_in_point_number_0061bf64
//   SVertexData[20000] g_LoadedVertices
//   undefined4 DAT_01626410
//   undefined4 g_LoadedVertices[0].vertex.z
//   SModelPartName[500] g_ModelPartNames
//   int g_PartsCount
// Function calls:
//   crt_ctype.c_toupper_FUN_005ff9e0
//   crt_stdio.c_sscanf_FUN_0060013c
//   crt_stdlib.c_atoi_FUN_005ffef0
//   crt_string.c_strcmp_FUN_005fef20
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_2d.c_getInputWithPrompt_FUN_004032c0
//   shape_design.c_allocateSpatialTreeNode_FUN_00457ed0
//   shape_design.c_calculatePolygonNormal_FUN_0045caa0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90

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
          crt_stdio_c_sscanf_FUN_0060013c((char *)local_90,"%d,%d,%d");
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


// Assembly code:
// 004617c0: PUSH EBX
//   Label: shape_design.c_configureSpatialSplittingPlane_FUN_004617c0
// 004617c1: PUSH ESI
// 004617c2: PUSH EDI
// 004617c3: PUSH EBP
// 004617c4: MOV EBP,ESP
// 004617c6: SUB ESP,0x208
// 004617cc: MOV EAX,0x61bf06
//   XREF to: 0061bf06 (DATA)
// 004617d1: PUSH EAX
//   XREF to: 0061bf06 (DATA)
// 004617d2: PUSH 0x0
// 004617d4: PUSH 0x0
// 004617d6: PUSH 0x13
// 004617d8: LEA EAX,[EBP + -0x80]
//   XREF to: Stack[-0x90] (DATA)
// 004617db: PUSH EAX
// 004617dc: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 004617e1: ADD ESP,0x14
// 004617e4: MOV dword ptr [EBP + -0x18],0x0
//   XREF to: Stack[-0x28] (WRITE)
// 004617eb: JMP 0x004617f3
//   XREF to: 004617f3 (UNCONDITIONAL_JUMP)
// 004617ed: MOV EAX,dword ptr [EBP + -0x18]
//   Label: LAB_004617ed
//   XREF to: Stack[-0x28] (READ)
// 004617f0: INC dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ_WRITE)
// 004617f3: LEA EDI,[EBP + -0x80]
//   Label: LAB_004617f3
//   XREF to: Stack[-0x90] (DATA)
// 004617f6: SUB ECX,ECX
// 004617f8: DEC ECX
// 004617f9: XOR EAX,EAX
// 004617fb: SCASB.REPNE ES:EDI
// 004617fd: NOT ECX
// 004617ff: DEC ECX
// 00461800: CMP ECX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 00461803: JBE 0x00461823
//   XREF to: 00461823 (CONDITIONAL_JUMP)
// 00461805: MOV EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 00461808: MOV AL,byte ptr [EAX + EBP*0x1 + -0x80]
// 0046180c: AND EAX,0xff
// 00461811: PUSH EAX
// 00461812: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 00461817: ADD ESP,0x4
// 0046181a: MOV EDX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0046181d: MOV byte ptr [EDX + EBP*0x1 + -0x80],AL
// 00461821: JMP 0x004617ed
//   XREF to: 004617ed (UNCONDITIONAL_JUMP)
// 00461823: MOV dword ptr [EBP + -0x8],0xffffffff
//   Label: LAB_00461823
//   XREF to: Stack[-0x18] (WRITE)
// 0046182a: MOV dword ptr [EBP + -0x18],0x0
//   XREF to: Stack[-0x28] (WRITE)
// 00461831: JMP 0x00461839
//   XREF to: 00461839 (UNCONDITIONAL_JUMP)
// 00461833: MOV EAX,dword ptr [EBP + -0x18]
//   Label: LAB_00461833
//   XREF to: Stack[-0x28] (READ)
// 00461836: INC dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ_WRITE)
// 00461839: MOV EAX,dword ptr [EBP + -0x18]
//   Label: LAB_00461839
//   XREF to: Stack[-0x28] (READ)
// 0046183c: CMP EAX,dword ptr [0x01e528a0]
//   XREF to: 01e528a0 (READ)
// 00461842: JGE 0x0046186a
//   XREF to: 0046186a (CONDITIONAL_JUMP)
// 00461844: IMUL EDX,dword ptr [EBP + -0x18],0x14
//   XREF to: Stack[-0x28] (READ)
// 00461848: MOV EAX,0x1e50190
//   XREF to: 01e50190 (DATA)
// 0046184d: ADD EAX,EDX
// 0046184f: PUSH EAX
// 00461850: LEA EAX,[EBP + -0x80]
//   XREF to: Stack[-0x90] (DATA)
// 00461853: PUSH EAX
// 00461854: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 00461859: ADD ESP,0x8
// 0046185c: TEST EAX,EAX
// 0046185e: JNZ 0x00461868
//   XREF to: 00461868 (CONDITIONAL_JUMP)
// 00461860: MOV EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 00461863: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00461866: JMP 0x0046186a
//   XREF to: 0046186a (UNCONDITIONAL_JUMP)
// 00461868: JMP 0x00461833
//   Label: LAB_00461868
//   XREF to: 00461833 (UNCONDITIONAL_JUMP)
// 0046186a: CMP dword ptr [EBP + -0x8],-0x1
//   Label: LAB_0046186a
//   XREF to: Stack[-0x18] (READ)
// 0046186e: JZ 0x00461a93
//   XREF to: 00461a93 (CONDITIONAL_JUMP)
// 00461874: PUSH 0xb
// 00461876: PUSH 0x0
// 00461878: MOV EAX,0x61bf19
//   XREF to: 0061bf19 (DATA)
// 0046187d: PUSH EAX
//   XREF to: 0061bf19 (DATA)
// 0046187e: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00461883: ADD ESP,0xc
// 00461886: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0046188b: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 00461890: AND EAX,0xff
// 00461895: PUSH EAX
// 00461896: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 0046189b: ADD ESP,0x4
// 0046189e: MOV dword ptr [EBP + -0x18],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 004618a1: CMP dword ptr [EBP + -0x18],0x50
//   XREF to: Stack[-0x28] (READ)
// 004618a5: JNZ 0x0046193e
//   XREF to: 0046193e (CONDITIONAL_JUMP)
// 004618ab: MOV EAX,0x61bf46
//   XREF to: 0061bf46 (DATA)
// 004618b0: PUSH EAX
//   XREF to: 0061bf46 (DATA)
// 004618b1: PUSH 0x16
// 004618b3: PUSH 0x0
// 004618b5: PUSH 0x46
// 004618b7: LEA EAX,[EBP + -0x80]
//   XREF to: Stack[-0x90] (DATA)
// 004618ba: PUSH EAX
// 004618bb: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 004618c0: ADD ESP,0x14
// 004618c3: LEA EAX,[EBP + -0xc]
//   XREF to: Stack[-0x1c] (DATA)
// 004618c6: PUSH EAX
// 004618c7: LEA EAX,[EBP + -0x10]
//   XREF to: Stack[-0x20] (DATA)
// 004618ca: PUSH EAX
// 004618cb: LEA EAX,[EBP + -0x14]
//   XREF to: Stack[-0x24] (DATA)
// 004618ce: PUSH EAX
// 004618cf: MOV EAX,0x61bf5b
//   XREF to: 0061bf5b (DATA)
// 004618d4: PUSH EAX
//   XREF to: 0061bf5b (DATA)
// 004618d5: LEA EAX,[EBP + -0x80]
//   XREF to: Stack[-0x90] (DATA)
// 004618d8: PUSH EAX
// 004618d9: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 004618de: ADD ESP,0x14
// 004618e1: MOV dword ptr [EBP + 0xfffffea0],0x3
//   XREF to: Stack[-0x170] (WRITE)
// 004618eb: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 004618ee: MOV dword ptr [EBP + 0xfffffeb4],EAX
//   XREF to: Stack[-0x15c] (WRITE)
// 004618f4: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 004618f7: MOV dword ptr [EBP + 0xfffffeb8],EAX
//   XREF to: Stack[-0x158] (WRITE)
// 004618fd: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00461900: MOV dword ptr [EBP + 0xfffffebc],EAX
//   XREF to: Stack[-0x154] (WRITE)
// 00461906: LEA EAX,[EBP + 0xfffffdfc]
//   XREF to: Stack[-0x214] (DATA)
// 0046190c: PUSH EAX
// 0046190d: CALL shape_design.c_calculatePolygonNormal_FUN_0045caa0
//   XREF to: 0045caa0 (UNCONDITIONAL_CALL)
// 00461912: ADD ESP,0x4
// 00461915: MOV EAX,dword ptr [EBP + 0xfffffea4]
//   XREF to: Stack[-0x16c] (READ)
// 0046191b: MOV dword ptr [EBP + -0x30],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0046191e: MOV EAX,dword ptr [EBP + 0xfffffea8]
//   XREF to: Stack[-0x168] (READ)
// 00461924: MOV dword ptr [EBP + -0x2c],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 00461927: MOV EAX,dword ptr [EBP + 0xfffffeac]
//   XREF to: Stack[-0x164] (READ)
// 0046192d: MOV dword ptr [EBP + -0x28],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 00461930: MOV EAX,dword ptr [EBP + 0xfffffeb0]
//   XREF to: Stack[-0x160] (READ)
// 00461936: MOV dword ptr [EBP + -0x24],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 00461939: JMP 0x004619f5
//   XREF to: 004619f5 (UNCONDITIONAL_JUMP)
// 0046193e: MOV EAX,0x61bf64
//   Label: LAB_0046193e
//   XREF to: 0061bf64 (DATA)
// 00461943: PUSH EAX
//   XREF to: 0061bf64 (DATA)
// 00461944: PUSH 0x16
// 00461946: PUSH 0x0
// 00461948: PUSH 0x28
// 0046194a: LEA EAX,[EBP + -0x80]
//   XREF to: Stack[-0x90] (DATA)
// 0046194d: PUSH EAX
// 0046194e: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 00461953: ADD ESP,0x14
// 00461956: LEA EAX,[EBP + -0x80]
//   XREF to: Stack[-0x90] (DATA)
// 00461959: PUSH EAX
// 0046195a: CALL crt_stdlib.c_atoi_FUN_005ffef0
//   XREF to: 005ffef0 (UNCONDITIONAL_CALL)
// 0046195f: ADD ESP,0x4
// 00461962: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00461965: MOV dword ptr [EBP + -0x24],0x0
//   XREF to: Stack[-0x34] (WRITE)
// 0046196c: MOV EAX,dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 0046196f: MOV dword ptr [EBP + -0x28],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 00461972: MOV EAX,dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 00461975: MOV dword ptr [EBP + -0x2c],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 00461978: MOV EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0046197b: MOV dword ptr [EBP + -0x30],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0046197e: MOV EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 00461981: MOV dword ptr [EBP + 0xfffffdf8],EAX
//   XREF to: Stack[-0x218] (WRITE)
// 00461987: JMP 0x004619cd
//   XREF to: 004619cd (UNCONDITIONAL_JUMP)
// 00461989: MOV dword ptr [EBP + -0x30],0x3f800000
//   Label: LAB_00461989
//   XREF to: Stack[-0x40] (WRITE)
// 00461990: IMUL EAX,dword ptr [EBP + -0x4],0x14
//   XREF to: Stack[-0x14] (READ)
// 00461994: MOV EAX,dword ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0046199a: MOV dword ptr [EBP + -0x24],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0046199d: JMP 0x004619f5
//   XREF to: 004619f5 (UNCONDITIONAL_JUMP)
// 0046199f: MOV dword ptr [EBP + -0x2c],0x3f800000
//   Label: LAB_0046199f
//   XREF to: Stack[-0x3c] (WRITE)
// 004619a6: IMUL EAX,dword ptr [EBP + -0x4],0x14
//   XREF to: Stack[-0x14] (READ)
// 004619aa: MOV EAX,dword ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 004619b0: MOV dword ptr [EBP + -0x24],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 004619b3: JMP 0x004619f5
//   XREF to: 004619f5 (UNCONDITIONAL_JUMP)
// 004619b5: MOV dword ptr [EBP + -0x28],0x3f800000
//   Label: LAB_004619b5
//   XREF to: Stack[-0x38] (WRITE)
// 004619bc: IMUL EAX,dword ptr [EBP + -0x4],0x14
//   XREF to: Stack[-0x14] (READ)
// 004619c0: MOV EAX,dword ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 004619c6: MOV dword ptr [EBP + -0x24],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 004619c9: JMP 0x004619f5
//   XREF to: 004619f5 (UNCONDITIONAL_JUMP)
// 004619cb: JMP 0x004619f5
//   Label: LAB_004619cb
//   XREF to: 004619f5 (UNCONDITIONAL_JUMP)
// 004619cd: CMP dword ptr [EBP + 0xfffffdf8],0x59
//   Label: LAB_004619cd
//   XREF to: Stack[-0x218] (READ)
// 004619d4: JC 0x004619ea
//   XREF to: 004619ea (CONDITIONAL_JUMP)
// 004619d6: CMP dword ptr [EBP + 0xfffffdf8],0x59
//   XREF to: Stack[-0x218] (READ)
// 004619dd: JBE 0x0046199f
//   XREF to: 0046199f (CONDITIONAL_JUMP)
// 004619df: CMP dword ptr [EBP + 0xfffffdf8],0x5a
//   XREF to: Stack[-0x218] (READ)
// 004619e6: JZ 0x004619b5
//   XREF to: 004619b5 (CONDITIONAL_JUMP)
// 004619e8: JMP 0x004619cb
//   XREF to: 004619cb (UNCONDITIONAL_JUMP)
// 004619ea: CMP dword ptr [EBP + 0xfffffdf8],0x58
//   Label: LAB_004619ea
//   XREF to: Stack[-0x218] (READ)
// 004619f1: JZ 0x00461989
//   XREF to: 00461989 (CONDITIONAL_JUMP)
// 004619f3: JMP 0x004619cb
//   XREF to: 004619cb (UNCONDITIONAL_JUMP)
// 004619f5: CALL shape_design.c_allocateSpatialTreeNode_FUN_00457ed0
//   Label: LAB_004619f5
//   XREF to: 00457ed0 (UNCONDITIONAL_CALL)
// 004619fa: MOV dword ptr [EBP + -0x20],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 004619fd: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 00461a00: MOV dword ptr [EAX],0x0
// 00461a06: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 00461a09: MOV dword ptr [EAX + 0x4],0x0
// 00461a10: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 00461a13: MOV dword ptr [EAX + 0x8],0x0
// 00461a1a: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00461a1d: MOV EDX,dword ptr [EAX + 0xc]
// 00461a20: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 00461a23: MOV dword ptr [EAX + 0xc],EDX
// 00461a26: CALL shape_design.c_allocateSpatialTreeNode_FUN_00457ed0
//   XREF to: 00457ed0 (UNCONDITIONAL_CALL)
// 00461a2b: MOV dword ptr [EBP + -0x1c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00461a2e: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00461a31: MOV dword ptr [EAX],0x0
// 00461a37: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00461a3a: MOV dword ptr [EAX + 0x4],0x0
// 00461a41: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00461a44: MOV dword ptr [EAX + 0x8],0x0
// 00461a4b: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00461a4e: MOV EDX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00461a51: MOV dword ptr [EDX + 0xc],EAX
// 00461a54: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 00461a57: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00461a5a: MOV dword ptr [EDX],EAX
// 00461a5c: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00461a5f: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00461a62: MOV dword ptr [EDX + 0x4],EAX
// 00461a65: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00461a68: MOV dword ptr [EAX + 0x8],0x1
// 00461a6f: MOV EAX,dword ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 00461a72: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00461a75: MOV dword ptr [EDX + 0xc],EAX
// 00461a78: MOV EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 00461a7b: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00461a7e: MOV dword ptr [EDX + 0x10],EAX
// 00461a81: MOV EAX,dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 00461a84: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00461a87: MOV dword ptr [EDX + 0x14],EAX
// 00461a8a: MOV EAX,dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 00461a8d: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00461a90: MOV dword ptr [EDX + 0x18],EAX
// 00461a93: MOV ESP,EBP
//   Label: LAB_00461a93
// 00461a95: POP EBP
// 00461a96: POP EDI
// 00461a97: POP ESI
// 00461a98: POP EBX
// 00461a99: RET
