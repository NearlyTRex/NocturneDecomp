// Name: shape_design.c_mergeAdjacentPolygons_FUN_00462b70
// Address: 00462b70
// Address Range: [[00462b70, 004635a2]]
// Convention: __cdecl
// Signature: void shape_design.c_mergeAdjacentPolygons_FUN_00462b70(int polygon1_index, int polygon2_index)
// Cross-references:
//   shape_design.c_mergePolygonsWithValidation_FUN_00465b40 (00465b40) at 00465c3b [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_ERROR_Polygons_share_mor_0061bfee
//   TerminatedCString s_ERROR_More_than_3_vertic_0061c01a
//   double g_WindingOrderAngleThreshold = 170
//   int g_PolygonCount
//   SShapeEditorPolygon[20000] g_ModelPolygonData
//   undefined4 DAT_016e9914
//   undefined4 DAT_016e99b4
//   undefined4 DAT_016e99c8
//   undefined4 DAT_016e9a08
//   undefined4 DAT_016e9a48
// Function calls:
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawText_FUN_00401fd0
//   shape_design.c_calculatePolygonNormal_FUN_0045caa0
//   shape_design.c_calculateVertexAngle_FUN_00462050
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90

#include "nocturne.h"

void __cdecl
shape_design_c_mergeAdjacentPolygons_FUN_00462b70(int polygon1_index,int polygon2_index)

{
  uint uVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  SShapeEditorPolygon *pSVar3;
  SShapeEditorPolygon *pSVar4;
  bool bVar5;
  byte bVar6;
  double dVar7;
  double in_stack_fffffde4;
  int in_stack_fffffdec;
  float local_90 [6];
  float local_78;
  uint local_74 [6];
  uint local_5c [7];
  uint local_40;
  uint local_3c [7];
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  bVar6 = 0;
  local_3c[3] = 0;
  for (local_3c[4] = 0;
      (int)local_3c[4] < (int)g_ModelPolygonData[polygon1_index].vertex_indices_count;
      local_3c[4] = local_3c[4] + 1) {
    for (local_3c[5] = 0;
        (int)local_3c[5] < (int)g_ModelPolygonData[polygon2_index].vertex_indices_count;
        local_3c[5] = local_3c[5] + 1) {
      if (g_ModelPolygonData[polygon1_index].vertex_indices[local_3c[4]] ==
          g_ModelPolygonData[polygon2_index].vertex_indices[local_3c[5]]) {
        local_3c[local_3c[3]] = g_ModelPolygonData[polygon1_index].vertex_indices[local_3c[4]];
        local_3c[3] = local_3c[3] + 1;
        if (2 < (int)local_3c[3]) {
          wincore_windll_cpp_clearScreen_FUN_005b3e70();
          engine_2d_c_drawText_FUN_00401fd0("ERROR: Polygons share more than 2 vertices!",0,0);
          wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
          engine_2d_c_clearInputAndWait_FUN_00403260();
          wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
          engine_2d_c_clearInputAndWait_FUN_00403260();
          return;
        }
      }
    }
  }
  local_3c[4] = 0;
  local_3c[5] = 0;
  while (((int)local_3c[4] < (int)g_ModelPolygonData[polygon1_index].vertex_indices_count &&
         (((g_ModelPolygonData[polygon1_index].vertex_indices[local_3c[4]] != local_3c[0] &&
           (g_ModelPolygonData[polygon1_index].vertex_indices[local_3c[4]] != local_3c[1])) ||
          (local_3c[5] = local_3c[5] + 1, local_3c[5] != 2))))) {
    local_3c[4] = local_3c[4] + 1;
  }
  if ((int)local_3c[4] < (int)(g_ModelPolygonData[polygon1_index].vertex_indices_count - 1)) {
    local_1c = local_3c[4] + 1;
  }
  else if ((g_ModelPolygonData[polygon1_index].vertex_indices[0] == local_3c[0]) ||
          (g_ModelPolygonData[polygon1_index].vertex_indices[0] == local_3c[1])) {
    local_1c = 1;
  }
  else {
    local_1c = 0;
  }
  local_3c[4] = 0;
  local_3c[5] = 0;
  while (((int)local_3c[4] < (int)g_ModelPolygonData[polygon2_index].vertex_indices_count &&
         (((g_ModelPolygonData[polygon2_index].vertex_indices[local_3c[4]] != local_3c[0] &&
           (g_ModelPolygonData[polygon2_index].vertex_indices[local_3c[4]] != local_3c[1])) ||
          (local_3c[5] = local_3c[5] + 1, local_3c[5] != 2))))) {
    local_3c[4] = local_3c[4] + 1;
  }
  local_3c[5] = g_ModelPolygonData[polygon2_index].vertex_indices[0];
  if ((int)local_3c[4] < (int)(g_ModelPolygonData[polygon2_index].vertex_indices_count - 1)) {
    local_18 = local_3c[4] + 1;
  }
  else if ((local_3c[5] == local_3c[0]) || (local_3c[5] == local_3c[1])) {
    local_18 = 1;
  }
  else {
    local_18 = 0;
  }
  local_3c[4] = local_1c;
  do {
    if ((int)(local_1c + g_ModelPolygonData[polygon1_index].vertex_indices_count) <=
        (int)local_3c[4]) {
LAB_00462e72:
      local_5c[1] = g_ModelPolygonData[polygon1_index].vertex_indices[local_1c];
      local_74[0] = g_ModelPolygonData[polygon1_index].vertex_indices[local_1c + 0x10];
      local_90[0] = g_ModelPolygonData[polygon1_index].uv_coordinates[local_1c];
      bVar5 = g_ModelPolygonData[polygon1_index].vertex_indices_count == 4;
      if (bVar5) {
        local_5c[2] = g_ModelPolygonData[polygon1_index].vertex_indices[(local_1c + 1) % 4];
        local_74[1] = g_ModelPolygonData[polygon1_index].vertex_indices[(local_1c + 1) % 4 + 0x10];
        local_90[1] = g_ModelPolygonData[polygon1_index].uv_coordinates[(local_1c + 1) % 4];
      }
      local_3c[4] = (uint)bVar5;
      local_5c[local_3c[4] + 2] = g_ModelPolygonData[polygon1_index].vertex_indices[local_20];
      local_74[local_3c[4] + 1] = g_ModelPolygonData[polygon1_index].vertex_indices[local_20 + 0x10]
      ;
      local_90[local_3c[4] + 1] = g_ModelPolygonData[polygon1_index].uv_coordinates[local_20];
      uVar1 = local_3c[4] + 2;
      local_5c[local_3c[4] + 3] = g_ModelPolygonData[polygon2_index].vertex_indices[local_18];
      local_74[uVar1] = g_ModelPolygonData[polygon2_index].vertex_indices[local_18 + 0x10];
      local_90[uVar1] = g_ModelPolygonData[polygon2_index].uv_coordinates[local_18];
      if (g_ModelPolygonData[polygon2_index].vertex_indices_count == 4) {
        uVar1 = local_3c[4] + 3;
        local_5c[local_3c[4] + 4] =
             g_ModelPolygonData[polygon2_index].vertex_indices[(local_18 + 1) % 4];
        local_74[uVar1] =
             g_ModelPolygonData[polygon2_index].vertex_indices[(local_18 + 1) % 4 + 0x10];
        local_90[uVar1] = g_ModelPolygonData[polygon2_index].uv_coordinates[(local_18 + 1) % 4];
      }
      local_3c[4] = uVar1;
      local_5c[local_3c[4] + 2] =
           g_ModelPolygonData[polygon1_index].vertex_indices
           [(local_20 + 1) % (int)g_ModelPolygonData[polygon1_index].vertex_indices_count];
      local_74[local_3c[4] + 1] =
           g_ModelPolygonData[polygon1_index].vertex_indices
           [(local_20 + 1) % (int)g_ModelPolygonData[polygon1_index].vertex_indices_count + 0x10];
      local_90[local_3c[4] + 1] =
           g_ModelPolygonData[polygon1_index].uv_coordinates
           [(local_20 + 1) % (int)g_ModelPolygonData[polygon1_index].vertex_indices_count];
      local_14 = 179.98;
      local_3c[3] = 0;
      local_3c[6] = local_3c[4] + 2;
      for (local_3c[4] = 0; (int)local_3c[4] < (int)(local_3c[6] - 2); local_3c[4] = local_3c[4] + 1
          ) {
        in_stack_fffffde4 =
             shape_design_c_calculateVertexAngle_FUN_00462050
                       (local_5c[local_3c[4] + 2],local_5c[local_3c[4] + 3],
                        SUB84(in_stack_fffffde4,0));
        if ((double)local_14 < in_stack_fffffde4) {
          local_3c[local_3c[3]] = local_3c[4] + 1;
          local_3c[3] = local_3c[3] + 1;
        }
      }
      dVar7 = shape_design_c_calculateVertexAngle_FUN_00462050
                        (local_5c[local_3c[6]],local_5c[1],SUB84(in_stack_fffffde4,0));
      if ((double)local_14 < dVar7) {
        local_3c[local_3c[3]] = local_3c[6] - 1;
        local_3c[3] = local_3c[3] + 1;
      }
      dVar7 = shape_design_c_calculateVertexAngle_FUN_00462050
                        (local_5c[1],local_5c[2],(int)((ulonglong)dVar7 >> 0x20));
      if ((double)local_14 < dVar7) {
        local_3c[local_3c[3]] = 0;
        local_3c[3] = local_3c[3] + 1;
      }
      if ((int)local_3c[3] < 4) {
        for (local_3c[4] = 0; (int)local_3c[4] < (int)local_3c[3]; local_3c[4] = local_3c[4] + 1) {
          for (local_3c[5] = local_3c[local_3c[4]] - local_3c[4];
              (int)local_3c[5] < (int)(local_3c[6] - 1); local_3c[5] = local_3c[5] + 1) {
            local_5c[local_3c[5] + 1] = local_5c[local_3c[5] + 2];
            local_74[local_3c[5]] = local_74[local_3c[5] + 1];
            local_90[local_3c[5]] = local_90[local_3c[5] + 1];
          }
          local_3c[6] = local_3c[6] - 1;
        }
        dVar7 = shape_design_c_calculateVertexAngle_FUN_00462050
                          (local_5c[2],local_5c[3],in_stack_fffffdec);
        if (g_WindingOrderAngleThreshold < dVar7) {
          local_40 = local_5c[1];
          local_5c[0] = local_74[0];
          local_78 = local_90[0];
          for (local_3c[4] = 0; (int)local_3c[4] < (int)(local_3c[6] - 1);
              local_3c[4] = local_3c[4] + 1) {
            local_5c[local_3c[4] + 1] = local_5c[local_3c[4] + 2];
            local_74[local_3c[4]] = local_74[local_3c[4] + 1];
            local_90[local_3c[4]] = local_90[local_3c[4] + 1];
          }
          local_5c[local_3c[4] + 1] = local_40;
          local_74[local_3c[4]] = local_5c[0];
          local_90[local_3c[4]] = local_78;
        }
        if ((g_ModelPolygonData[polygon1_index].vertex_indices_count == 3) &&
           (g_ModelPolygonData[polygon2_index].vertex_indices_count == 3)) {
          if (local_3c[6] != 3) {
            return;
          }
        }
        else if ((local_3c[6] != 3) && (local_3c[6] != 4)) {
          return;
        }
        g_ModelPolygonData[polygon1_index].vertex_indices_count = local_3c[6];
        for (local_3c[4] = 0; (int)local_3c[4] < (int)local_3c[6]; local_3c[4] = local_3c[4] + 1) {
          g_ModelPolygonData[polygon1_index].vertex_indices[local_3c[4]] = local_5c[local_3c[4] + 1]
          ;
          g_ModelPolygonData[polygon1_index].vertex_indices[local_3c[4] + 0x10] =
               local_74[local_3c[4]];
          g_ModelPolygonData[polygon1_index].uv_coordinates[local_3c[4]] = local_90[local_3c[4]];
        }
        shape_design_c_calculatePolygonNormal_FUN_0045caa0(g_ModelPolygonData + polygon1_index);
        for (local_3c[4] = polygon2_index; (int)local_3c[4] < g_PolygonCount + -1;
            local_3c[4] = local_3c[4] + 1) {
          pSVar3 = g_ModelPolygonData + local_3c[4] + 1;
          pSVar4 = g_ModelPolygonData + local_3c[4];
          for (iVar2 = 0x61; iVar2 != 0; iVar2 = iVar2 + -1) {
            pSVar4->polygon_type = pSVar3->polygon_type;
            pSVar3 = (SShapeEditorPolygon *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
            pSVar4 = (SShapeEditorPolygon *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
          }
        }
        g_PolygonCount = g_PolygonCount + -1;
      }
      else {
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        engine_2d_c_drawText_FUN_00401fd0("ERROR: More than 3 vertices to delete!",0,0);
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        engine_2d_c_clearInputAndWait_FUN_00403260();
        wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
        engine_2d_c_clearInputAndWait_FUN_00403260();
      }
      return;
    }
    if ((g_ModelPolygonData[polygon1_index].vertex_indices
         [(int)local_3c[4] % (int)g_ModelPolygonData[polygon1_index].vertex_indices_count] ==
         local_3c[0]) ||
       (g_ModelPolygonData[polygon1_index].vertex_indices
        [(int)local_3c[4] % (int)g_ModelPolygonData[polygon1_index].vertex_indices_count] ==
        local_3c[1])) {
      local_20 = (int)local_3c[4] % (int)g_ModelPolygonData[polygon1_index].vertex_indices_count;
      goto LAB_00462e72;
    }
    local_3c[4] = local_3c[4] + 1;
  } while( true );
}


// Assembly code:
// 00462b70: PUSH EBX
//   Label: shape_design.c_mergeAdjacentPolygons_FUN_00462b70
// 00462b71: PUSH ESI
// 00462b72: PUSH EDI
// 00462b73: PUSH EBP
// 00462b74: MOV EBP,ESP
// 00462b76: SUB ESP,0x20c
// 00462b7c: MOV dword ptr [EBP + -0x20],0x0
//   XREF to: Stack[-0x30] (WRITE)
// 00462b83: MOV dword ptr [EBP + -0x1c],0x0
//   XREF to: Stack[-0x2c] (WRITE)
// 00462b8a: JMP 0x00462b92
//   XREF to: 00462b92 (UNCONDITIONAL_JUMP)
// 00462b8c: MOV EAX,dword ptr [EBP + -0x1c]
//   Label: LAB_00462b8c
//   XREF to: Stack[-0x2c] (READ)
// 00462b8f: INC dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ_WRITE)
// 00462b92: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   Label: LAB_00462b92
//   XREF to: Stack[0x4] (READ)
// 00462b99: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00462b9c: CMP EAX,dword ptr [EDX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 00462ba2: JGE 0x00462c5f
//   XREF to: 00462c5f (CONDITIONAL_JUMP)
// 00462ba8: MOV dword ptr [EBP + -0x18],0x0
//   XREF to: Stack[-0x28] (WRITE)
// 00462baf: JMP 0x00462bb7
//   XREF to: 00462bb7 (UNCONDITIONAL_JUMP)
// 00462bb1: MOV EAX,dword ptr [EBP + -0x18]
//   Label: LAB_00462bb1
//   XREF to: Stack[-0x28] (READ)
// 00462bb4: INC dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ_WRITE)
// 00462bb7: IMUL EDX,dword ptr [EBP + 0x18],0x184
//   Label: LAB_00462bb7
//   XREF to: Stack[0x8] (READ)
// 00462bbe: MOV EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 00462bc1: CMP EAX,dword ptr [EDX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 00462bc7: JGE 0x00462c5a
//   XREF to: 00462c5a (CONDITIONAL_JUMP)
// 00462bcd: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462bd4: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00462bd7: SHL EAX,0x2
// 00462bda: LEA ECX,[EDX + EAX*0x1]
// 00462bdd: IMUL EDX,dword ptr [EBP + 0x18],0x184
//   XREF to: Stack[0x8] (READ)
// 00462be4: MOV EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 00462be7: SHL EAX,0x2
// 00462bea: ADD EDX,EAX
// 00462bec: MOV EAX,dword ptr [ECX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 00462bf2: CMP EAX,dword ptr [EDX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 00462bf8: JNZ 0x00462c55
//   XREF to: 00462c55 (CONDITIONAL_JUMP)
// 00462bfa: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462c01: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00462c04: SHL EAX,0x2
// 00462c07: ADD EAX,EDX
// 00462c09: MOV EDX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 00462c0c: SHL EDX,0x2
// 00462c0f: MOV EAX,dword ptr [EAX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 00462c15: MOV dword ptr [EDX + EBP*0x1 + -0x2c],EAX
// 00462c19: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 00462c1c: INC dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ_WRITE)
// 00462c1f: CMP dword ptr [EBP + -0x20],0x2
//   XREF to: Stack[-0x30] (READ)
// 00462c23: JLE 0x00462c55
//   XREF to: 00462c55 (CONDITIONAL_JUMP)
// 00462c25: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00462c2a: PUSH 0x0
// 00462c2c: PUSH 0x0
// 00462c2e: MOV EAX,0x61bfee
//   XREF to: 0061bfee (PARAM)
// 00462c33: PUSH EAX
//   XREF to: 0061bfee (DATA)
// 00462c34: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00462c39: ADD ESP,0xc
// 00462c3c: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00462c41: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00462c46: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 00462c4b: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00462c50: JMP 0x0046359c
//   XREF to: 0046359c (UNCONDITIONAL_JUMP)
// 00462c55: JMP 0x00462bb1
//   Label: LAB_00462c55
//   XREF to: 00462bb1 (UNCONDITIONAL_JUMP)
// 00462c5a: JMP 0x00462b8c
//   Label: LAB_00462c5a
//   XREF to: 00462b8c (UNCONDITIONAL_JUMP)
// 00462c5f: MOV dword ptr [EBP + -0x1c],0x0
//   Label: LAB_00462c5f
//   XREF to: Stack[-0x2c] (WRITE)
// 00462c66: MOV dword ptr [EBP + -0x18],0x0
//   XREF to: Stack[-0x28] (WRITE)
// 00462c6d: JMP 0x00462c75
//   XREF to: 00462c75 (UNCONDITIONAL_JUMP)
// 00462c6f: MOV EAX,dword ptr [EBP + -0x1c]
//   Label: LAB_00462c6f
//   XREF to: Stack[-0x2c] (READ)
// 00462c72: INC dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ_WRITE)
// 00462c75: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   Label: LAB_00462c75
//   XREF to: Stack[0x4] (READ)
// 00462c7c: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00462c7f: CMP EAX,dword ptr [EDX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 00462c85: JGE 0x00462ccb
//   XREF to: 00462ccb (CONDITIONAL_JUMP)
// 00462c87: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462c8e: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00462c91: SHL EAX,0x2
// 00462c94: ADD EAX,EDX
// 00462c96: MOV EAX,dword ptr [EAX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 00462c9c: CMP EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 00462c9f: JZ 0x00462cbb
//   XREF to: 00462cbb (CONDITIONAL_JUMP)
// 00462ca1: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462ca8: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00462cab: SHL EAX,0x2
// 00462cae: ADD EAX,EDX
// 00462cb0: MOV EAX,dword ptr [EAX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 00462cb6: CMP EAX,dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 00462cb9: JNZ 0x00462cc9
//   XREF to: 00462cc9 (CONDITIONAL_JUMP)
// 00462cbb: MOV EAX,dword ptr [EBP + -0x18]
//   Label: LAB_00462cbb
//   XREF to: Stack[-0x28] (READ)
// 00462cbe: INC dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ_WRITE)
// 00462cc1: CMP dword ptr [EBP + -0x18],0x2
//   XREF to: Stack[-0x28] (READ)
// 00462cc5: JNZ 0x00462cc9
//   XREF to: 00462cc9 (CONDITIONAL_JUMP)
// 00462cc7: JMP 0x00462ccb
//   XREF to: 00462ccb (UNCONDITIONAL_JUMP)
// 00462cc9: JMP 0x00462c6f
//   Label: LAB_00462cc9
//   XREF to: 00462c6f (UNCONDITIONAL_JUMP)
// 00462ccb: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   Label: LAB_00462ccb
//   XREF to: Stack[0x4] (READ)
// 00462cd2: MOV EAX,dword ptr [EAX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 00462cd8: MOV dword ptr [EBP + -0x18],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00462cdb: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462ce2: MOV EAX,dword ptr [EAX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 00462ce8: DEC EAX
// 00462ce9: CMP EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00462cec: JLE 0x00462cf7
//   XREF to: 00462cf7 (CONDITIONAL_JUMP)
// 00462cee: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00462cf1: INC EAX
// 00462cf2: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00462cf5: JMP 0x00462d17
//   XREF to: 00462d17 (UNCONDITIONAL_JUMP)
// 00462cf7: MOV EAX,dword ptr [EBP + -0x18]
//   Label: LAB_00462cf7
//   XREF to: Stack[-0x28] (READ)
// 00462cfa: CMP EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 00462cfd: JZ 0x00462d07
//   XREF to: 00462d07 (CONDITIONAL_JUMP)
// 00462cff: MOV EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 00462d02: CMP EAX,dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 00462d05: JNZ 0x00462d10
//   XREF to: 00462d10 (CONDITIONAL_JUMP)
// 00462d07: MOV dword ptr [EBP + -0xc],0x1
//   Label: LAB_00462d07
//   XREF to: Stack[-0x1c] (WRITE)
// 00462d0e: JMP 0x00462d17
//   XREF to: 00462d17 (UNCONDITIONAL_JUMP)
// 00462d10: MOV dword ptr [EBP + -0xc],0x0
//   Label: LAB_00462d10
//   XREF to: Stack[-0x1c] (WRITE)
// 00462d17: MOV dword ptr [EBP + -0x1c],0x0
//   Label: LAB_00462d17
//   XREF to: Stack[-0x2c] (WRITE)
// 00462d1e: MOV dword ptr [EBP + -0x18],0x0
//   XREF to: Stack[-0x28] (WRITE)
// 00462d25: JMP 0x00462d2d
//   XREF to: 00462d2d (UNCONDITIONAL_JUMP)
// 00462d27: MOV EAX,dword ptr [EBP + -0x1c]
//   Label: LAB_00462d27
//   XREF to: Stack[-0x2c] (READ)
// 00462d2a: INC dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ_WRITE)
// 00462d2d: IMUL EDX,dword ptr [EBP + 0x18],0x184
//   Label: LAB_00462d2d
//   XREF to: Stack[0x8] (READ)
// 00462d34: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00462d37: CMP EAX,dword ptr [EDX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 00462d3d: JGE 0x00462d83
//   XREF to: 00462d83 (CONDITIONAL_JUMP)
// 00462d3f: IMUL EDX,dword ptr [EBP + 0x18],0x184
//   XREF to: Stack[0x8] (READ)
// 00462d46: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00462d49: SHL EAX,0x2
// 00462d4c: ADD EAX,EDX
// 00462d4e: MOV EAX,dword ptr [EAX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 00462d54: CMP EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 00462d57: JZ 0x00462d73
//   XREF to: 00462d73 (CONDITIONAL_JUMP)
// 00462d59: IMUL EDX,dword ptr [EBP + 0x18],0x184
//   XREF to: Stack[0x8] (READ)
// 00462d60: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00462d63: SHL EAX,0x2
// 00462d66: ADD EAX,EDX
// 00462d68: MOV EAX,dword ptr [EAX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 00462d6e: CMP EAX,dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 00462d71: JNZ 0x00462d81
//   XREF to: 00462d81 (CONDITIONAL_JUMP)
// 00462d73: MOV EAX,dword ptr [EBP + -0x18]
//   Label: LAB_00462d73
//   XREF to: Stack[-0x28] (READ)
// 00462d76: INC dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ_WRITE)
// 00462d79: CMP dword ptr [EBP + -0x18],0x2
//   XREF to: Stack[-0x28] (READ)
// 00462d7d: JNZ 0x00462d81
//   XREF to: 00462d81 (CONDITIONAL_JUMP)
// 00462d7f: JMP 0x00462d83
//   XREF to: 00462d83 (UNCONDITIONAL_JUMP)
// 00462d81: JMP 0x00462d27
//   Label: LAB_00462d81
//   XREF to: 00462d27 (UNCONDITIONAL_JUMP)
// 00462d83: IMUL EAX,dword ptr [EBP + 0x18],0x184
//   Label: LAB_00462d83
//   XREF to: Stack[0x8] (READ)
// 00462d8a: MOV EAX,dword ptr [EAX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 00462d90: MOV dword ptr [EBP + -0x18],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00462d93: IMUL EAX,dword ptr [EBP + 0x18],0x184
//   XREF to: Stack[0x8] (READ)
// 00462d9a: MOV EAX,dword ptr [EAX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 00462da0: DEC EAX
// 00462da1: CMP EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00462da4: JLE 0x00462daf
//   XREF to: 00462daf (CONDITIONAL_JUMP)
// 00462da6: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00462da9: INC EAX
// 00462daa: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00462dad: JMP 0x00462dcf
//   XREF to: 00462dcf (UNCONDITIONAL_JUMP)
// 00462daf: MOV EAX,dword ptr [EBP + -0x18]
//   Label: LAB_00462daf
//   XREF to: Stack[-0x28] (READ)
// 00462db2: CMP EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 00462db5: JZ 0x00462dbf
//   XREF to: 00462dbf (CONDITIONAL_JUMP)
// 00462db7: MOV EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 00462dba: CMP EAX,dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 00462dbd: JNZ 0x00462dc8
//   XREF to: 00462dc8 (CONDITIONAL_JUMP)
// 00462dbf: MOV dword ptr [EBP + -0x8],0x1
//   Label: LAB_00462dbf
//   XREF to: Stack[-0x18] (WRITE)
// 00462dc6: JMP 0x00462dcf
//   XREF to: 00462dcf (UNCONDITIONAL_JUMP)
// 00462dc8: MOV dword ptr [EBP + -0x8],0x0
//   Label: LAB_00462dc8
//   XREF to: Stack[-0x18] (WRITE)
// 00462dcf: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_00462dcf
//   XREF to: Stack[-0x1c] (READ)
// 00462dd2: MOV dword ptr [EBP + -0x1c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00462dd5: JMP 0x00462ddd
//   XREF to: 00462ddd (UNCONDITIONAL_JUMP)
// 00462dd7: MOV EAX,dword ptr [EBP + -0x1c]
//   Label: LAB_00462dd7
//   XREF to: Stack[-0x2c] (READ)
// 00462dda: INC dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ_WRITE)
// 00462ddd: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   Label: LAB_00462ddd
//   XREF to: Stack[0x4] (READ)
// 00462de4: MOV EDX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00462de7: ADD EDX,dword ptr [EAX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 00462ded: MOV EAX,EDX
// 00462def: CMP EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00462df2: JLE 0x00462e72
//   XREF to: 00462e72 (CONDITIONAL_JUMP)
// 00462df8: IMUL ECX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462dff: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00462e02: MOV EDX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00462e05: SAR EDX,0x1f
// 00462e08: IDIV dword ptr [ECX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 00462e0e: SHL EDX,0x2
// 00462e11: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462e18: ADD EAX,EDX
// 00462e1a: MOV EAX,dword ptr [EAX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 00462e20: CMP EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 00462e23: JZ 0x00462e52
//   XREF to: 00462e52 (CONDITIONAL_JUMP)
// 00462e25: IMUL ECX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462e2c: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00462e2f: MOV EDX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00462e32: SAR EDX,0x1f
// 00462e35: IDIV dword ptr [ECX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 00462e3b: SHL EDX,0x2
// 00462e3e: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462e45: ADD EAX,EDX
// 00462e47: MOV EAX,dword ptr [EAX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 00462e4d: CMP EAX,dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 00462e50: JNZ 0x00462e6d
//   XREF to: 00462e6d (CONDITIONAL_JUMP)
// 00462e52: IMUL ECX,dword ptr [EBP + 0x14],0x184
//   Label: LAB_00462e52
//   XREF to: Stack[0x4] (READ)
// 00462e59: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00462e5c: MOV EDX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00462e5f: SAR EDX,0x1f
// 00462e62: IDIV dword ptr [ECX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 00462e68: MOV dword ptr [EBP + -0x10],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 00462e6b: JMP 0x00462e72
//   XREF to: 00462e72 (UNCONDITIONAL_JUMP)
// 00462e6d: JMP 0x00462dd7
//   Label: LAB_00462e6d
//   XREF to: 00462dd7 (UNCONDITIONAL_JUMP)
// 00462e72: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   Label: LAB_00462e72
//   XREF to: Stack[0x4] (READ)
// 00462e79: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00462e7c: SHL EAX,0x2
// 00462e7f: ADD EAX,EDX
// 00462e81: MOV dword ptr [EBP + -0x1c],0x0
//   XREF to: Stack[-0x2c] (WRITE)
// 00462e88: MOV EDX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00462e8b: SHL EDX,0x2
// 00462e8e: MOV EAX,dword ptr [EAX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 00462e94: MOV dword ptr [EDX + EBP*0x1 + -0x48],EAX
// 00462e98: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462e9f: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00462ea2: SHL EAX,0x2
// 00462ea5: ADD EAX,EDX
// 00462ea7: MOV EDX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00462eaa: SHL EDX,0x2
// 00462ead: FLD float ptr [EAX + 0x16e9a08]
//   XREF to: 016e9a08 (DATA)
// 00462eb3: FSTP float ptr [EDX + EBP*0x1 + -0x64]
// 00462eb7: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462ebe: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00462ec1: SHL EAX,0x2
// 00462ec4: ADD EAX,EDX
// 00462ec6: MOV EDX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00462ec9: SHL EDX,0x2
// 00462ecc: FLD float ptr [EAX + 0x16e9a48]
//   XREF to: 016e9a48 (DATA)
// 00462ed2: FSTP float ptr [EDX + EBP*0x1 + -0x80]
// 00462ed6: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462edd: CMP dword ptr [EAX + 0x16e99b4],0x4
//   XREF to: 016e99b4 (DATA)
// 00462ee4: JNZ 0x00462f71
//   XREF to: 00462f71 (CONDITIONAL_JUMP)
// 00462eea: IMUL EBX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462ef1: MOV EDX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00462ef4: INC EDX
// 00462ef5: MOV ECX,0x4
// 00462efa: MOV EAX,EDX
// 00462efc: SAR EDX,0x1f
// 00462eff: IDIV ECX
// 00462f01: SHL EDX,0x2
// 00462f04: ADD EDX,EBX
// 00462f06: INC dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ_WRITE)
// 00462f09: MOV ECX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00462f0c: SHL ECX,0x2
// 00462f0f: MOV EDX,dword ptr [EDX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 00462f15: MOV dword ptr [ECX + EBP*0x1 + -0x48],EDX
// 00462f19: IMUL EBX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462f20: MOV EDX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00462f23: INC EDX
// 00462f24: MOV ECX,0x4
// 00462f29: MOV EAX,EDX
// 00462f2b: SAR EDX,0x1f
// 00462f2e: IDIV ECX
// 00462f30: SHL EDX,0x2
// 00462f33: ADD EDX,EBX
// 00462f35: MOV ECX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00462f38: SHL ECX,0x2
// 00462f3b: FLD float ptr [EDX + 0x16e9a08]
//   XREF to: 016e9a08 (DATA)
// 00462f41: FSTP float ptr [ECX + EBP*0x1 + -0x64]
// 00462f45: IMUL EBX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462f4c: MOV EDX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00462f4f: INC EDX
// 00462f50: MOV ECX,0x4
// 00462f55: MOV EAX,EDX
// 00462f57: SAR EDX,0x1f
// 00462f5a: IDIV ECX
// 00462f5c: SHL EDX,0x2
// 00462f5f: ADD EDX,EBX
// 00462f61: MOV ECX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00462f64: SHL ECX,0x2
// 00462f67: FLD float ptr [EDX + 0x16e9a48]
//   XREF to: 016e9a48 (DATA)
// 00462f6d: FSTP float ptr [ECX + EBP*0x1 + -0x80]
// 00462f71: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   Label: LAB_00462f71
//   XREF to: Stack[0x4] (READ)
// 00462f78: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00462f7b: SHL EAX,0x2
// 00462f7e: ADD EAX,EDX
// 00462f80: INC dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ_WRITE)
// 00462f83: MOV EDX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00462f86: SHL EDX,0x2
// 00462f89: MOV EAX,dword ptr [EAX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 00462f8f: MOV dword ptr [EDX + EBP*0x1 + -0x48],EAX
// 00462f93: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462f9a: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00462f9d: SHL EAX,0x2
// 00462fa0: ADD EAX,EDX
// 00462fa2: MOV EDX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00462fa5: SHL EDX,0x2
// 00462fa8: FLD float ptr [EAX + 0x16e9a08]
//   XREF to: 016e9a08 (DATA)
// 00462fae: FSTP float ptr [EDX + EBP*0x1 + -0x64]
// 00462fb2: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00462fb9: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00462fbc: SHL EAX,0x2
// 00462fbf: ADD EAX,EDX
// 00462fc1: MOV EDX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00462fc4: SHL EDX,0x2
// 00462fc7: FLD float ptr [EAX + 0x16e9a48]
//   XREF to: 016e9a48 (DATA)
// 00462fcd: FSTP float ptr [EDX + EBP*0x1 + -0x80]
// 00462fd1: IMUL EDX,dword ptr [EBP + 0x18],0x184
//   XREF to: Stack[0x8] (READ)
// 00462fd8: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00462fdb: SHL EAX,0x2
// 00462fde: ADD EAX,EDX
// 00462fe0: INC dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ_WRITE)
// 00462fe3: MOV EDX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00462fe6: SHL EDX,0x2
// 00462fe9: MOV EAX,dword ptr [EAX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 00462fef: MOV dword ptr [EDX + EBP*0x1 + -0x48],EAX
// 00462ff3: IMUL EDX,dword ptr [EBP + 0x18],0x184
//   XREF to: Stack[0x8] (READ)
// 00462ffa: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00462ffd: SHL EAX,0x2
// 00463000: ADD EAX,EDX
// 00463002: MOV EDX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00463005: SHL EDX,0x2
// 00463008: FLD float ptr [EAX + 0x16e9a08]
//   XREF to: 016e9a08 (DATA)
// 0046300e: FSTP float ptr [EDX + EBP*0x1 + -0x64]
// 00463012: IMUL EDX,dword ptr [EBP + 0x18],0x184
//   XREF to: Stack[0x8] (READ)
// 00463019: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0046301c: SHL EAX,0x2
// 0046301f: ADD EAX,EDX
// 00463021: MOV EDX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00463024: SHL EDX,0x2
// 00463027: FLD float ptr [EAX + 0x16e9a48]
//   XREF to: 016e9a48 (DATA)
// 0046302d: FSTP float ptr [EDX + EBP*0x1 + -0x80]
// 00463031: IMUL EAX,dword ptr [EBP + 0x18],0x184
//   XREF to: Stack[0x8] (READ)
// 00463038: CMP dword ptr [EAX + 0x16e99b4],0x4
//   XREF to: 016e99b4 (DATA)
// 0046303f: JNZ 0x004630cc
//   XREF to: 004630cc (CONDITIONAL_JUMP)
// 00463045: IMUL EBX,dword ptr [EBP + 0x18],0x184
//   XREF to: Stack[0x8] (READ)
// 0046304c: MOV EDX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0046304f: INC EDX
// 00463050: MOV ECX,0x4
// 00463055: MOV EAX,EDX
// 00463057: SAR EDX,0x1f
// 0046305a: IDIV ECX
// 0046305c: SHL EDX,0x2
// 0046305f: ADD EDX,EBX
// 00463061: INC dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ_WRITE)
// 00463064: MOV ECX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00463067: SHL ECX,0x2
// 0046306a: MOV EDX,dword ptr [EDX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 00463070: MOV dword ptr [ECX + EBP*0x1 + -0x48],EDX
// 00463074: IMUL EBX,dword ptr [EBP + 0x18],0x184
//   XREF to: Stack[0x8] (READ)
// 0046307b: MOV EDX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0046307e: INC EDX
// 0046307f: MOV ECX,0x4
// 00463084: MOV EAX,EDX
// 00463086: SAR EDX,0x1f
// 00463089: IDIV ECX
// 0046308b: SHL EDX,0x2
// 0046308e: ADD EDX,EBX
// 00463090: MOV ECX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00463093: SHL ECX,0x2
// 00463096: FLD float ptr [EDX + 0x16e9a08]
//   XREF to: 016e9a08 (DATA)
// 0046309c: FSTP float ptr [ECX + EBP*0x1 + -0x64]
// 004630a0: IMUL EBX,dword ptr [EBP + 0x18],0x184
//   XREF to: Stack[0x8] (READ)
// 004630a7: MOV EDX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 004630aa: INC EDX
// 004630ab: MOV ECX,0x4
// 004630b0: MOV EAX,EDX
// 004630b2: SAR EDX,0x1f
// 004630b5: IDIV ECX
// 004630b7: SHL EDX,0x2
// 004630ba: ADD EDX,EBX
// 004630bc: MOV ECX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 004630bf: SHL ECX,0x2
// 004630c2: FLD float ptr [EDX + 0x16e9a48]
//   XREF to: 016e9a48 (DATA)
// 004630c8: FSTP float ptr [ECX + EBP*0x1 + -0x80]
// 004630cc: IMUL ECX,dword ptr [EBP + 0x14],0x184
//   Label: LAB_004630cc
//   XREF to: Stack[0x4] (READ)
// 004630d3: MOV EDX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 004630d6: INC EDX
// 004630d7: MOV EAX,EDX
// 004630d9: SAR EDX,0x1f
// 004630dc: IDIV dword ptr [ECX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 004630e2: SHL EDX,0x2
// 004630e5: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 004630ec: ADD EDX,EAX
// 004630ee: INC dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ_WRITE)
// 004630f1: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 004630f4: SHL EAX,0x2
// 004630f7: MOV EDX,dword ptr [EDX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 004630fd: MOV dword ptr [EAX + EBP*0x1 + -0x48],EDX
// 00463101: IMUL ECX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00463108: MOV EDX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0046310b: INC EDX
// 0046310c: MOV EAX,EDX
// 0046310e: SAR EDX,0x1f
// 00463111: IDIV dword ptr [ECX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 00463117: SHL EDX,0x2
// 0046311a: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00463121: ADD EAX,EDX
// 00463123: MOV EDX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00463126: SHL EDX,0x2
// 00463129: FLD float ptr [EAX + 0x16e9a08]
//   XREF to: 016e9a08 (DATA)
// 0046312f: FSTP float ptr [EDX + EBP*0x1 + -0x64]
// 00463133: IMUL ECX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 0046313a: MOV EDX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0046313d: INC EDX
// 0046313e: MOV EAX,EDX
// 00463140: SAR EDX,0x1f
// 00463143: IDIV dword ptr [ECX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 00463149: SHL EDX,0x2
// 0046314c: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00463153: ADD EAX,EDX
// 00463155: MOV EDX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00463158: SHL EDX,0x2
// 0046315b: FLD float ptr [EAX + 0x16e9a48]
//   XREF to: 016e9a48 (DATA)
// 00463161: FSTP float ptr [EDX + EBP*0x1 + -0x80]
// 00463165: MOV dword ptr [EBP + -0x4],0x4333fae1
//   XREF to: Stack[-0x14] (WRITE)
// 0046316c: MOV dword ptr [EBP + -0x20],0x0
//   XREF to: Stack[-0x30] (WRITE)
// 00463173: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00463176: INC EAX
// 00463177: MOV dword ptr [EBP + -0x14],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0046317a: MOV dword ptr [EBP + -0x1c],0x0
//   XREF to: Stack[-0x2c] (WRITE)
// 00463181: JMP 0x00463189
//   XREF to: 00463189 (UNCONDITIONAL_JUMP)
// 00463183: MOV EAX,dword ptr [EBP + -0x1c]
//   Label: LAB_00463183
//   XREF to: Stack[-0x2c] (READ)
// 00463186: INC dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ_WRITE)
// 00463189: MOV EAX,dword ptr [EBP + -0x14]
//   Label: LAB_00463189
//   XREF to: Stack[-0x24] (READ)
// 0046318c: SUB EAX,0x2
// 0046318f: CMP EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00463192: JLE 0x0046321a
//   XREF to: 0046321a (CONDITIONAL_JUMP)
// 00463198: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0046319b: SHL EAX,0x2
// 0046319e: MOV EAX,dword ptr [EAX + EBP*0x1 + -0x48]
// 004631a2: MOV dword ptr [EBP + 0xfffffeb4],EAX
//   XREF to: Stack[-0x15c] (WRITE)
// 004631a8: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 004631ab: SHL EAX,0x2
// 004631ae: MOV EAX,dword ptr [EAX + EBP*0x1 + -0x44]
// 004631b2: MOV dword ptr [EBP + 0xfffffeb8],EAX
//   XREF to: Stack[-0x158] (WRITE)
// 004631b8: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 004631bb: SHL EAX,0x2
// 004631be: MOV EAX,dword ptr [EAX + EBP*0x1 + -0x40]
// 004631c2: MOV dword ptr [EBP + 0xfffffebc],EAX
//   XREF to: Stack[-0x154] (WRITE)
// 004631c8: MOV EAX,dword ptr [EBP + 0xfffffebc]
//   XREF to: Stack[-0x154] (READ)
// 004631ce: PUSH EAX
// 004631cf: MOV EAX,dword ptr [EBP + 0xfffffeb8]
//   XREF to: Stack[-0x158] (READ)
// 004631d5: PUSH EAX
// 004631d6: MOV EAX,dword ptr [EBP + 0xfffffeb4]
//   XREF to: Stack[-0x15c] (READ)
// 004631dc: PUSH EAX
// 004631dd: CALL shape_design.c_calculateVertexAngle_FUN_00462050
//   XREF to: 00462050 (UNCONDITIONAL_CALL)
// 004631e2: MOV dword ptr [EBP + 0xfffffdf4],EAX
//   XREF to: Stack[-0x21c] (WRITE)
// 004631e8: MOV dword ptr [EBP + 0xfffffdf8],EDX
//   XREF to: Stack[-0x218] (WRITE)
// 004631ee: FLD double ptr [EBP + 0xfffffdf4]
//   XREF to: Stack[-0x21c] (READ)
// 004631f4: ADD ESP,0xc
// 004631f7: FLD float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004631fa: FCOMPP
// 004631fc: FNSTSW AX
// 004631fe: SAHF
// 004631ff: JNC 0x00463215
//   XREF to: 00463215 (CONDITIONAL_JUMP)
// 00463201: MOV EDX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 00463204: SHL EDX,0x2
// 00463207: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0046320a: INC EAX
// 0046320b: MOV dword ptr [EDX + EBP*0x1 + -0x2c],EAX
// 0046320f: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 00463212: INC dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ_WRITE)
// 00463215: JMP 0x00463183
//   Label: LAB_00463215
//   XREF to: 00463183 (UNCONDITIONAL_JUMP)
// 0046321a: MOV EAX,dword ptr [EBP + -0x14]
//   Label: LAB_0046321a
//   XREF to: Stack[-0x24] (READ)
// 0046321d: SHL EAX,0x2
// 00463220: MOV EAX,dword ptr [EAX + EBP*0x1 + -0x50]
// 00463224: MOV dword ptr [EBP + 0xfffffeb4],EAX
//   XREF to: Stack[-0x15c] (WRITE)
// 0046322a: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0046322d: SHL EAX,0x2
// 00463230: MOV EAX,dword ptr [EAX + EBP*0x1 + -0x4c]
// 00463234: MOV dword ptr [EBP + 0xfffffeb8],EAX
//   XREF to: Stack[-0x158] (WRITE)
// 0046323a: MOV EAX,dword ptr [EBP + -0x48]
//   XREF to: Stack[-0x58] (READ)
// 0046323d: MOV dword ptr [EBP + 0xfffffebc],EAX
//   XREF to: Stack[-0x154] (WRITE)
// 00463243: MOV EAX,dword ptr [EBP + 0xfffffebc]
//   XREF to: Stack[-0x154] (READ)
// 00463249: PUSH EAX
// 0046324a: MOV EAX,dword ptr [EBP + 0xfffffeb8]
//   XREF to: Stack[-0x158] (READ)
// 00463250: PUSH EAX
// 00463251: MOV EAX,dword ptr [EBP + 0xfffffeb4]
//   XREF to: Stack[-0x15c] (READ)
// 00463257: PUSH EAX
// 00463258: CALL shape_design.c_calculateVertexAngle_FUN_00462050
//   XREF to: 00462050 (UNCONDITIONAL_CALL)
// 0046325d: MOV dword ptr [EBP + 0xfffffdf4],EAX
//   XREF to: Stack[-0x21c] (WRITE)
// 00463263: MOV dword ptr [EBP + 0xfffffdf8],EDX
//   XREF to: Stack[-0x218] (WRITE)
// 00463269: FLD double ptr [EBP + 0xfffffdf4]
//   XREF to: Stack[-0x21c] (READ)
// 0046326f: ADD ESP,0xc
// 00463272: FLD float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00463275: FCOMPP
// 00463277: FNSTSW AX
// 00463279: SAHF
// 0046327a: JNC 0x00463290
//   XREF to: 00463290 (CONDITIONAL_JUMP)
// 0046327c: MOV EDX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 0046327f: SHL EDX,0x2
// 00463282: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 00463285: DEC EAX
// 00463286: MOV dword ptr [EDX + EBP*0x1 + -0x2c],EAX
// 0046328a: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 0046328d: INC dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ_WRITE)
// 00463290: MOV EAX,dword ptr [EBP + -0x14]
//   Label: LAB_00463290
//   XREF to: Stack[-0x24] (READ)
// 00463293: SHL EAX,0x2
// 00463296: MOV EAX,dword ptr [EAX + EBP*0x1 + -0x4c]
// 0046329a: MOV dword ptr [EBP + 0xfffffeb4],EAX
//   XREF to: Stack[-0x15c] (WRITE)
// 004632a0: MOV EAX,dword ptr [EBP + -0x48]
//   XREF to: Stack[-0x58] (READ)
// 004632a3: MOV dword ptr [EBP + 0xfffffeb8],EAX
//   XREF to: Stack[-0x158] (WRITE)
// 004632a9: MOV EAX,dword ptr [EBP + -0x44]
//   XREF to: Stack[-0x54] (READ)
// 004632ac: MOV dword ptr [EBP + 0xfffffebc],EAX
//   XREF to: Stack[-0x154] (WRITE)
// 004632b2: MOV EAX,dword ptr [EBP + 0xfffffebc]
//   XREF to: Stack[-0x154] (READ)
// 004632b8: PUSH EAX
// 004632b9: MOV EAX,dword ptr [EBP + 0xfffffeb8]
//   XREF to: Stack[-0x158] (READ)
// 004632bf: PUSH EAX
// 004632c0: MOV EAX,dword ptr [EBP + 0xfffffeb4]
//   XREF to: Stack[-0x15c] (READ)
// 004632c6: PUSH EAX
// 004632c7: CALL shape_design.c_calculateVertexAngle_FUN_00462050
//   XREF to: 00462050 (UNCONDITIONAL_CALL)
// 004632cc: MOV dword ptr [EBP + 0xfffffdf4],EAX
//   XREF to: Stack[-0x21c] (WRITE)
// 004632d2: MOV dword ptr [EBP + 0xfffffdf8],EDX
//   XREF to: Stack[-0x218] (WRITE)
// 004632d8: FLD double ptr [EBP + 0xfffffdf4]
//   XREF to: Stack[-0x21c] (READ)
// 004632de: ADD ESP,0xc
// 004632e1: FLD float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004632e4: FCOMPP
// 004632e6: FNSTSW AX
// 004632e8: SAHF
// 004632e9: JNC 0x004632ff
//   XREF to: 004632ff (CONDITIONAL_JUMP)
// 004632eb: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 004632ee: SHL EAX,0x2
// 004632f1: MOV dword ptr [EAX + EBP*0x1 + -0x2c],0x0
// 004632f9: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 004632fc: INC dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ_WRITE)
// 004632ff: CMP dword ptr [EBP + -0x20],0x3
//   Label: LAB_004632ff
//   XREF to: Stack[-0x30] (READ)
// 00463303: JLE 0x00463335
//   XREF to: 00463335 (CONDITIONAL_JUMP)
// 00463305: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0046330a: PUSH 0x0
// 0046330c: PUSH 0x0
// 0046330e: MOV EAX,0x61c01a
//   XREF to: 0061c01a (PARAM)
// 00463313: PUSH EAX
//   XREF to: 0061c01a (DATA)
// 00463314: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00463319: ADD ESP,0xc
// 0046331c: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00463321: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00463326: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 0046332b: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00463330: JMP 0x0046359c
//   XREF to: 0046359c (UNCONDITIONAL_JUMP)
// 00463335: MOV dword ptr [EBP + -0x1c],0x0
//   Label: LAB_00463335
//   XREF to: Stack[-0x2c] (WRITE)
// 0046333c: JMP 0x00463344
//   XREF to: 00463344 (UNCONDITIONAL_JUMP)
// 0046333e: MOV EAX,dword ptr [EBP + -0x1c]
//   Label: LAB_0046333e
//   XREF to: Stack[-0x2c] (READ)
// 00463341: INC dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ_WRITE)
// 00463344: MOV EAX,dword ptr [EBP + -0x1c]
//   Label: LAB_00463344
//   XREF to: Stack[-0x2c] (READ)
// 00463347: CMP EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 0046334a: JGE 0x004633b4
//   XREF to: 004633b4 (CONDITIONAL_JUMP)
// 0046334c: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0046334f: SHL EAX,0x2
// 00463352: MOV EAX,dword ptr [EAX + EBP*0x1 + -0x2c]
// 00463356: SUB EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00463359: MOV dword ptr [EBP + -0x18],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0046335c: JMP 0x00463364
//   XREF to: 00463364 (UNCONDITIONAL_JUMP)
// 0046335e: MOV EAX,dword ptr [EBP + -0x18]
//   Label: LAB_0046335e
//   XREF to: Stack[-0x28] (READ)
// 00463361: INC dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ_WRITE)
// 00463364: MOV EAX,dword ptr [EBP + -0x14]
//   Label: LAB_00463364
//   XREF to: Stack[-0x24] (READ)
// 00463367: DEC EAX
// 00463368: CMP EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0046336b: JLE 0x004633ab
//   XREF to: 004633ab (CONDITIONAL_JUMP)
// 0046336d: MOV EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 00463370: SHL EAX,0x2
// 00463373: MOV EDX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 00463376: SHL EDX,0x2
// 00463379: MOV EAX,dword ptr [EAX + EBP*0x1 + -0x44]
// 0046337d: MOV dword ptr [EDX + EBP*0x1 + -0x48],EAX
// 00463381: MOV EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 00463384: SHL EAX,0x2
// 00463387: MOV EDX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0046338a: SHL EDX,0x2
// 0046338d: FLD float ptr [EAX + EBP*0x1 + -0x60]
// 00463391: FSTP float ptr [EDX + EBP*0x1 + -0x64]
// 00463395: MOV EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 00463398: SHL EAX,0x2
// 0046339b: MOV EDX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0046339e: SHL EDX,0x2
// 004633a1: FLD float ptr [EAX + EBP*0x1 + -0x7c]
// 004633a5: FSTP float ptr [EDX + EBP*0x1 + -0x80]
// 004633a9: JMP 0x0046335e
//   XREF to: 0046335e (UNCONDITIONAL_JUMP)
// 004633ab: MOV EAX,dword ptr [EBP + -0x14]
//   Label: LAB_004633ab
//   XREF to: Stack[-0x24] (READ)
// 004633ae: ADD dword ptr [EBP + -0x14],-0x1
//   XREF to: Stack[-0x24] (READ_WRITE)
// 004633b2: JMP 0x0046333e
//   XREF to: 0046333e (UNCONDITIONAL_JUMP)
// 004633b4: MOV EAX,dword ptr [EBP + -0x40]
//   Label: LAB_004633b4
//   XREF to: Stack[-0x50] (READ)
// 004633b7: PUSH EAX
// 004633b8: MOV EAX,dword ptr [EBP + -0x44]
//   XREF to: Stack[-0x54] (READ)
// 004633bb: PUSH EAX
// 004633bc: MOV EAX,dword ptr [EBP + -0x48]
//   XREF to: Stack[-0x58] (READ)
// 004633bf: PUSH EAX
// 004633c0: CALL shape_design.c_calculateVertexAngle_FUN_00462050
//   XREF to: 00462050 (UNCONDITIONAL_CALL)
// 004633c5: MOV dword ptr [EBP + 0xfffffdf4],EAX
//   XREF to: Stack[-0x21c] (WRITE)
// 004633cb: MOV dword ptr [EBP + 0xfffffdf8],EDX
//   XREF to: Stack[-0x218] (WRITE)
// 004633d1: FLD double ptr [EBP + 0xfffffdf4]
//   XREF to: Stack[-0x21c] (READ)
// 004633d7: ADD ESP,0xc
// 004633da: FCOMP double ptr [0x0061c046]
//   XREF to: 0061c046 (READ)
// 004633e0: FNSTSW AX
// 004633e2: SAHF
// 004633e3: JBE 0x00463478
//   XREF to: 00463478 (CONDITIONAL_JUMP)
// 004633e9: MOV EAX,dword ptr [EBP + -0x48]
//   XREF to: Stack[-0x58] (READ)
// 004633ec: MOV dword ptr [EBP + -0x30],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 004633ef: MOV EAX,dword ptr [EBP + -0x64]
//   XREF to: Stack[-0x74] (READ)
// 004633f2: MOV dword ptr [EBP + -0x4c],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 004633f5: MOV EAX,dword ptr [EBP + -0x80]
//   XREF to: Stack[-0x90] (READ)
// 004633f8: MOV dword ptr [EBP + -0x68],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 004633fb: MOV dword ptr [EBP + -0x1c],0x0
//   XREF to: Stack[-0x2c] (WRITE)
// 00463402: JMP 0x0046340a
//   XREF to: 0046340a (UNCONDITIONAL_JUMP)
// 00463404: MOV EAX,dword ptr [EBP + -0x1c]
//   Label: LAB_00463404
//   XREF to: Stack[-0x2c] (READ)
// 00463407: INC dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ_WRITE)
// 0046340a: MOV EAX,dword ptr [EBP + -0x14]
//   Label: LAB_0046340a
//   XREF to: Stack[-0x24] (READ)
// 0046340d: DEC EAX
// 0046340e: CMP EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00463411: JLE 0x00463451
//   XREF to: 00463451 (CONDITIONAL_JUMP)
// 00463413: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00463416: SHL EAX,0x2
// 00463419: MOV EDX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0046341c: SHL EDX,0x2
// 0046341f: MOV EAX,dword ptr [EAX + EBP*0x1 + -0x44]
// 00463423: MOV dword ptr [EDX + EBP*0x1 + -0x48],EAX
// 00463427: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0046342a: SHL EAX,0x2
// 0046342d: MOV EDX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00463430: SHL EDX,0x2
// 00463433: FLD float ptr [EAX + EBP*0x1 + -0x60]
// 00463437: FSTP float ptr [EDX + EBP*0x1 + -0x64]
// 0046343b: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0046343e: SHL EAX,0x2
// 00463441: MOV EDX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00463444: SHL EDX,0x2
// 00463447: FLD float ptr [EAX + EBP*0x1 + -0x7c]
// 0046344b: FSTP float ptr [EDX + EBP*0x1 + -0x80]
// 0046344f: JMP 0x00463404
//   XREF to: 00463404 (UNCONDITIONAL_JUMP)
// 00463451: MOV EDX,dword ptr [EBP + -0x1c]
//   Label: LAB_00463451
//   XREF to: Stack[-0x2c] (READ)
// 00463454: SHL EDX,0x2
// 00463457: MOV EAX,dword ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 0046345a: MOV dword ptr [EDX + EBP*0x1 + -0x48],EAX
// 0046345e: MOV EDX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00463461: SHL EDX,0x2
// 00463464: MOV EAX,dword ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 00463467: MOV dword ptr [EDX + EBP*0x1 + -0x64],EAX
// 0046346b: MOV EDX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0046346e: SHL EDX,0x2
// 00463471: MOV EAX,dword ptr [EBP + -0x68]
//   XREF to: Stack[-0x78] (READ)
// 00463474: MOV dword ptr [EDX + EBP*0x1 + -0x80],EAX
// 00463478: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   Label: LAB_00463478
//   XREF to: Stack[0x4] (READ)
// 0046347f: CMP dword ptr [EAX + 0x16e99b4],0x3
//   XREF to: 016e99b4 (DATA)
// 00463486: JNZ 0x00463498
//   XREF to: 00463498 (CONDITIONAL_JUMP)
// 00463488: IMUL EAX,dword ptr [EBP + 0x18],0x184
//   XREF to: Stack[0x8] (READ)
// 0046348f: CMP dword ptr [EAX + 0x16e99b4],0x3
//   XREF to: 016e99b4 (DATA)
// 00463496: JZ 0x0046349a
//   XREF to: 0046349a (CONDITIONAL_JUMP)
// 00463498: JMP 0x004634a7
//   Label: LAB_00463498
//   XREF to: 004634a7 (UNCONDITIONAL_JUMP)
// 0046349a: CMP dword ptr [EBP + -0x14],0x3
//   Label: LAB_0046349a
//   XREF to: Stack[-0x24] (READ)
// 0046349e: JZ 0x004634a5
//   XREF to: 004634a5 (CONDITIONAL_JUMP)
// 004634a0: JMP 0x0046359c
//   XREF to: 0046359c (UNCONDITIONAL_JUMP)
// 004634a5: JMP 0x004634ba
//   Label: LAB_004634a5
//   XREF to: 004634ba (UNCONDITIONAL_JUMP)
// 004634a7: CMP dword ptr [EBP + -0x14],0x3
//   Label: LAB_004634a7
//   XREF to: Stack[-0x24] (READ)
// 004634ab: JZ 0x004634b3
//   XREF to: 004634b3 (CONDITIONAL_JUMP)
// 004634ad: CMP dword ptr [EBP + -0x14],0x4
//   XREF to: Stack[-0x24] (READ)
// 004634b1: JNZ 0x004634b5
//   XREF to: 004634b5 (CONDITIONAL_JUMP)
// 004634b3: JMP 0x004634ba
//   Label: LAB_004634b3
//   XREF to: 004634ba (UNCONDITIONAL_JUMP)
// 004634b5: JMP 0x0046359c
//   Label: LAB_004634b5
//   XREF to: 0046359c (UNCONDITIONAL_JUMP)
// 004634ba: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   Label: LAB_004634ba
//   XREF to: Stack[0x4] (READ)
// 004634c1: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 004634c4: MOV dword ptr [EDX + 0x16e99b4],EAX
//   XREF to: 016e99b4 (DATA)
// 004634ca: MOV dword ptr [EBP + -0x1c],0x0
//   XREF to: Stack[-0x2c] (WRITE)
// 004634d1: JMP 0x004634d9
//   XREF to: 004634d9 (UNCONDITIONAL_JUMP)
// 004634d3: MOV EAX,dword ptr [EBP + -0x1c]
//   Label: LAB_004634d3
//   XREF to: Stack[-0x2c] (READ)
// 004634d6: INC dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ_WRITE)
// 004634d9: MOV EAX,dword ptr [EBP + -0x1c]
//   Label: LAB_004634d9
//   XREF to: Stack[-0x2c] (READ)
// 004634dc: CMP EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 004634df: JGE 0x00463540
//   XREF to: 00463540 (CONDITIONAL_JUMP)
// 004634e1: MOV ECX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 004634e4: SHL ECX,0x2
// 004634e7: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 004634ee: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 004634f1: SHL EAX,0x2
// 004634f4: ADD EDX,EAX
// 004634f6: MOV EAX,dword ptr [ECX + EBP*0x1 + -0x48]
// 004634fa: MOV dword ptr [EDX + 0x16e99c8],EAX
//   XREF to: 016e99c8 (DATA)
// 00463500: MOV ECX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00463503: SHL ECX,0x2
// 00463506: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 0046350d: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00463510: SHL EAX,0x2
// 00463513: ADD EAX,EDX
// 00463515: FLD float ptr [ECX + EBP*0x1 + -0x64]
// 00463519: FSTP float ptr [EAX + 0x16e9a08]
//   XREF to: 016e9a08 (DATA)
// 0046351f: MOV ECX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00463522: SHL ECX,0x2
// 00463525: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 0046352c: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0046352f: SHL EAX,0x2
// 00463532: ADD EAX,EDX
// 00463534: FLD float ptr [ECX + EBP*0x1 + -0x80]
// 00463538: FSTP float ptr [EAX + 0x16e9a48]
//   XREF to: 016e9a48 (DATA)
// 0046353e: JMP 0x004634d3
//   XREF to: 004634d3 (UNCONDITIONAL_JUMP)
// 00463540: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   Label: LAB_00463540
//   XREF to: Stack[0x4] (READ)
// 00463547: MOV EDX,0x16e9910
//   XREF to: 016e9910 (PARAM)
// 0046354c: ADD EAX,EDX
// 0046354e: PUSH EAX
// 0046354f: CALL shape_design.c_calculatePolygonNormal_FUN_0045caa0
//   XREF to: 0045caa0 (UNCONDITIONAL_CALL)
// 00463554: ADD ESP,0x4
// 00463557: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0046355a: MOV dword ptr [EBP + -0x1c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0046355d: JMP 0x00463565
//   XREF to: 00463565 (UNCONDITIONAL_JUMP)
// 0046355f: MOV EAX,dword ptr [EBP + -0x1c]
//   Label: LAB_0046355f
//   XREF to: Stack[-0x2c] (READ)
// 00463562: INC dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ_WRITE)
// 00463565: MOV EAX,[0x016e990c]
//   Label: LAB_00463565
//   XREF to: 016e990c (READ)
// 0046356a: DEC EAX
// 0046356b: CMP EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0046356e: JLE 0x00463596
//   XREF to: 00463596 (CONDITIONAL_JUMP)
// 00463570: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00463573: INC EAX
// 00463574: IMUL EAX,EAX,0x184
// 0046357a: IMUL ESI,dword ptr [EBP + -0x1c],0x184
//   XREF to: Stack[-0x2c] (READ)
// 00463581: MOV ECX,0x61
// 00463586: LEA EDI,[ESI + 0x16e9910]
//   XREF to: 016e9910 (DATA)
// 0046358c: LEA ESI,[EAX + 0x16e9910]
//   XREF to: 016e9910 (DATA)
// 00463592: MOVSD.REP ES:EDI,ESI
//   XREF to: 016e9910 (DATA)
//   XREF to: 016e9914 (DATA)
// 00463594: JMP 0x0046355f
//   XREF to: 0046355f (UNCONDITIONAL_JUMP)
// 00463596: DEC dword ptr [0x016e990c]
//   Label: LAB_00463596
//   XREF to: 016e990c (READ_WRITE)
// 0046359c: MOV ESP,EBP
//   Label: LAB_0046359c
// 0046359e: POP EBP
// 0046359f: POP EDI
// 004635a0: POP ESI
// 004635a1: POP EBX
// 004635a2: RET
