// Name: shape_design.c_createPolygonFromVertexList_FUN_0045cc80
// Address: 0045cc80
// Address Range: [[0045cc80, 0045cdf6]]
// Convention: unknown
// Signature: undefined shape_design.c_createPolygonFromVertexList_FUN_0045cc80()
// Globals:
//   TerminatedCString s_Enter_in_point_list_goin_0061b391
//   TerminatedCString s_d_d_d_d_d_d_d_d_d_d_d_d__0061b3b8
//   int g_EditorColorIndex
//   int g_PolygonCount
//   SShapeEditorPolygon[20000] g_ModelPolygonData
//   undefined4 DAT_016e9914
//   undefined4 DAT_016e99b4
//   undefined4 DAT_016e99c8
//   undefined4 DAT_016e9a88
//   undefined4 DAT_016e9a8c
//   undefined4 DAT_016e9a90
//   int g_CurrentPartIndex
// Function calls:
//   crt_stdio.c_sscanf_FUN_0060013c
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_2d.c_getInputWithPrompt_FUN_004032c0
//   shape_design.c_calculatePolygonNormal_FUN_0045caa0

#include "nocturne.h"

void shape_design_c_createPolygonFromVertexList_FUN_0045cc80(void)

{
  BADSPACEBASE *in_ESP;
  uint local_58;
  undefined1 local_54 [4];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined1 local_24 [12];
  uint local_18;
  int local_14;
  
  engine_2d_c_drawText_FUN_00401fd0("Enter in point list going CW, ie 1,2,3",0,0);
  engine_2d_c_getInputWithPrompt_FUN_004032c0(&stack0xffffff58,0x3c,0,0xb,(char *)0x0);
  local_18 = crt_stdio_c_sscanf_FUN_0060013c
                       (&stack0xffffff58,"%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",&local_58,local_54,
                        local_50,local_4c,local_48,local_44,local_40,local_3c,local_38,local_34,
                        local_30,local_2c,local_28,local_24);
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


// Assembly code:
// 0045cc80: PUSH EBX
//   Label: shape_design.c_createPolygonFromVertexList_FUN_0045cc80
// 0045cc81: PUSH ESI
// 0045cc82: PUSH EDI
// 0045cc83: PUSH EBP
// 0045cc84: MOV EBP,ESP
// 0045cc86: SUB ESP,0x98
// 0045cc8c: PUSH 0x0
// 0045cc8e: PUSH 0x0
// 0045cc90: MOV EAX,0x61b391
//   XREF to: 0061b391 (DATA)
// 0045cc95: PUSH EAX
//   XREF to: 0061b391 (DATA)
// 0045cc96: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0045cc9b: ADD ESP,0xc
// 0045cc9e: PUSH 0x0
// 0045cca0: PUSH 0xb
// 0045cca2: PUSH 0x0
// 0045cca4: PUSH 0x3c
// 0045cca6: LEA EAX,[EBP + 0xffffff68]
//   XREF to: Stack[-0xa8] (DATA)
// 0045ccac: PUSH EAX
// 0045ccad: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 0045ccb2: ADD ESP,0x14
// 0045ccb5: LEA EAX,[EBP + -0xc]
//   XREF to: Stack[-0x1c] (DATA)
// 0045ccb8: PUSH EAX
// 0045ccb9: LEA EAX,[EBP + -0x10]
//   XREF to: Stack[-0x20] (DATA)
// 0045ccbc: PUSH EAX
// 0045ccbd: LEA EAX,[EBP + -0x14]
//   XREF to: Stack[-0x24] (DATA)
// 0045ccc0: PUSH EAX
// 0045ccc1: LEA EAX,[EBP + -0x18]
//   XREF to: Stack[-0x28] (DATA)
// 0045ccc4: PUSH EAX
// 0045ccc5: LEA EAX,[EBP + -0x1c]
//   XREF to: Stack[-0x2c] (DATA)
// 0045ccc8: PUSH EAX
// 0045ccc9: LEA EAX,[EBP + -0x20]
//   XREF to: Stack[-0x30] (DATA)
// 0045cccc: PUSH EAX
// 0045cccd: LEA EAX,[EBP + -0x24]
//   XREF to: Stack[-0x34] (DATA)
// 0045ccd0: PUSH EAX
// 0045ccd1: LEA EAX,[EBP + -0x28]
//   XREF to: Stack[-0x38] (DATA)
// 0045ccd4: PUSH EAX
// 0045ccd5: LEA EAX,[EBP + -0x2c]
//   XREF to: Stack[-0x3c] (DATA)
// 0045ccd8: PUSH EAX
// 0045ccd9: LEA EAX,[EBP + -0x30]
//   XREF to: Stack[-0x40] (DATA)
// 0045ccdc: PUSH EAX
// 0045ccdd: LEA EAX,[EBP + -0x34]
//   XREF to: Stack[-0x44] (DATA)
// 0045cce0: PUSH EAX
// 0045cce1: LEA EAX,[EBP + -0x38]
//   XREF to: Stack[-0x48] (DATA)
// 0045cce4: PUSH EAX
// 0045cce5: LEA EAX,[EBP + -0x3c]
//   XREF to: Stack[-0x4c] (DATA)
// 0045cce8: PUSH EAX
// 0045cce9: LEA EAX,[EBP + -0x40]
//   XREF to: Stack[-0x50] (DATA)
// 0045ccec: PUSH EAX
// 0045cced: LEA EAX,[EBP + -0x44]
//   XREF to: Stack[-0x54] (DATA)
// 0045ccf0: PUSH EAX
// 0045ccf1: LEA EAX,[EBP + -0x48]
//   XREF to: Stack[-0x58] (DATA)
// 0045ccf4: PUSH EAX
// 0045ccf5: MOV EAX,0x61b3b8
//   XREF to: 0061b3b8 (DATA)
// 0045ccfa: PUSH EAX
//   XREF to: 0061b3b8 (DATA)
// 0045ccfb: LEA EAX,[EBP + 0xffffff68]
//   XREF to: Stack[-0xa8] (DATA)
// 0045cd01: PUSH EAX
// 0045cd02: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 0045cd07: ADD ESP,0x48
// 0045cd0a: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0045cd0d: CMP dword ptr [EBP + -0x8],0x2
//   XREF to: Stack[-0x18] (READ)
// 0045cd11: JLE 0x0045cd19
//   XREF to: 0045cd19 (CONDITIONAL_JUMP)
// 0045cd13: CMP dword ptr [EBP + -0x8],0x10
//   XREF to: Stack[-0x18] (READ)
// 0045cd17: JL 0x0045cd1e
//   XREF to: 0045cd1e (CONDITIONAL_JUMP)
// 0045cd19: JMP 0x0045cdf0
//   Label: LAB_0045cd19
//   XREF to: 0045cdf0 (UNCONDITIONAL_JUMP)
// 0045cd1e: IMUL EDX,dword ptr [0x016e990c],0x184
//   Label: LAB_0045cd1e
//   XREF to: 016e990c (READ)
// 0045cd28: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045cd2b: MOV dword ptr [EDX + 0x16e99b4],EAX
//   XREF to: 016e99b4 (DATA)
// 0045cd31: IMUL EAX,dword ptr [0x016e990c],0x184
//   XREF to: 016e990c (READ)
// 0045cd3b: MOV dword ptr [EAX + 0x16e9910],0x1
//   XREF to: 016e9910 (DATA)
// 0045cd45: IMUL EAX,dword ptr [0x016e990c],0x184
//   XREF to: 016e990c (READ)
// 0045cd4f: MOV byte ptr [EAX + 0x16e9914],0x0
//   XREF to: 016e9914 (DATA)
// 0045cd56: IMUL EDX,dword ptr [0x016e990c],0x184
//   XREF to: 016e990c (READ)
// 0045cd60: MOV EAX,[0x01e6614c]
//   XREF to: 01e6614c (READ)
// 0045cd65: MOV dword ptr [EDX + 0x16e9a88],EAX
//   XREF to: 016e9a88 (DATA)
// 0045cd6b: IMUL EDX,dword ptr [0x016e990c],0x184
//   XREF to: 016e990c (READ)
// 0045cd75: MOV EAX,[0x01626368]
//   XREF to: 01626368 (READ)
// 0045cd7a: MOV dword ptr [EDX + 0x16e9a8c],EAX
//   XREF to: 016e9a8c (DATA)
// 0045cd80: IMUL EDX,dword ptr [0x016e990c],0x184
//   XREF to: 016e990c (READ)
// 0045cd8a: MOV EAX,[0x01626368]
//   XREF to: 01626368 (READ)
// 0045cd8f: MOV dword ptr [EDX + 0x16e9a90],EAX
//   XREF to: 016e9a90 (DATA)
// 0045cd95: MOV dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (WRITE)
// 0045cd9c: JMP 0x0045cda4
//   XREF to: 0045cda4 (UNCONDITIONAL_JUMP)
// 0045cd9e: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0045cd9e
//   XREF to: Stack[-0x14] (READ)
// 0045cda1: INC dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ_WRITE)
// 0045cda4: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0045cda4
//   XREF to: Stack[-0x14] (READ)
// 0045cda7: CMP EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045cdaa: JGE 0x0045cdd0
//   XREF to: 0045cdd0 (CONDITIONAL_JUMP)
// 0045cdac: MOV ECX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045cdaf: SHL ECX,0x2
// 0045cdb2: IMUL EDX,dword ptr [0x016e990c],0x184
//   XREF to: 016e990c (READ)
// 0045cdbc: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045cdbf: SHL EAX,0x2
// 0045cdc2: ADD EDX,EAX
// 0045cdc4: MOV EAX,dword ptr [ECX + EBP*0x1 + -0x48]
// 0045cdc8: MOV dword ptr [EDX + 0x16e99c8],EAX
//   XREF to: 016e99c8 (DATA)
// 0045cdce: JMP 0x0045cd9e
//   XREF to: 0045cd9e (UNCONDITIONAL_JUMP)
// 0045cdd0: IMUL EAX,dword ptr [0x016e990c],0x184
//   Label: LAB_0045cdd0
//   XREF to: 016e990c (READ)
// 0045cdda: MOV EDX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 0045cddf: ADD EAX,EDX
// 0045cde1: PUSH EAX
// 0045cde2: CALL shape_design.c_calculatePolygonNormal_FUN_0045caa0
//   XREF to: 0045caa0 (UNCONDITIONAL_CALL)
// 0045cde7: ADD ESP,0x4
// 0045cdea: INC dword ptr [0x016e990c]
//   XREF to: 016e990c (READ_WRITE)
// 0045cdf0: MOV ESP,EBP
//   Label: LAB_0045cdf0
// 0045cdf2: POP EBP
// 0045cdf3: POP EDI
// 0045cdf4: POP ESI
// 0045cdf5: POP EBX
// 0045cdf6: RET
