// Name: shape_meshlod.cpp_FUN_00517630
// Address: 00517630
// Address Range: [[00517630, 005182f0]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_00517630()
// Cross-references:
//   shape_meshlod.cpp_FUN_00516ba0 (00516ba0) at 00516cda [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_005173f0 (005173f0) at 00517489 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_LodMesh_getLOD_FUN_0051b920 (0051b920) at 0051b995 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_meshlod_cpp_006377e9
//   TerminatedCString s_Tried_to_collapse_edge_t_006377fe
//   TerminatedCString s_shape_meshlod_cpp_00637829
//   TerminatedCString s_Bug_0063783e
//   TerminatedCString s_Was_going_to_change_edge_00637843
//   TerminatedCString s_Linkage_AFTER_collapsing_00637890
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 DAT_02f33334
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_meshlod.cpp_AdjacentEdgesCheck_FUN_00515d90
//   shape_meshlod.cpp_FUN_00515ca0
//   shape_meshlod.cpp_FUN_00515e00
//   shape_meshlod.cpp_FUN_00515e90
//   shape_meshlod.cpp_FUN_00516000
//   shape_meshlod.cpp_FUN_00517530
//   shape_meshlod.cpp_FUN_00518300
//   shape_meshlod.cpp_FUN_005183e0
//   shape_meshlod.cpp_FUN_00519830
//   shape_meshlod.cpp_FUN_0051a980
//   shape_meshlod.cpp_MemoryAdjacentThing_FUN_00515ec0

#include "nocturne.h"

void shape_meshlod_cpp_FUN_00517630(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  BADSPACEBASE *in_ESP;
  int *piVar8;
  int *piVar9;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  float in_stack_00000010;
  float fStack_4e0;
  float fStack_4dc;
  int aiStack_4d8 [2];
  float afStack_4d0 [198];
  float afStack_1b8 [51];
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int *local_9c;
  int local_98;
  int local_94;
  int local_90;
  float local_88;
  int local_84;
  int local_80;
  float local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int *local_40;
  int *local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  float local_24;
  int local_20;
  int *local_1c;
  int local_18;
  int local_14;
  
  local_c0 = 0.0;
  local_b8 = (float)shape_meshlod_cpp_MemoryAdjacentThing_FUN_00515ec0();
  if ((int)local_b8 < 0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x824;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Tried to collapse edge that doesn't exist!");
  }
  iVar2 = in_stack_0000000c * 0x4c4;
  iVar6 = *(int *)(in_stack_00000004 + 4);
  local_ec = *(float *)(iVar6 + iVar2) * in_stack_00000010;
  local_e8 = *(float *)(iVar6 + 4 + iVar2) * in_stack_00000010;
  iVar3 = in_stack_00000008 * 0x4c4;
  local_e4 = *(float *)(iVar6 + 8 + iVar2) * in_stack_00000010;
  in_stack_00000010 = 1.0 - in_stack_00000010;
  iVar6 = *(int *)(in_stack_00000004 + 4);
  local_e0 = *(float *)(iVar6 + iVar3) * in_stack_00000010;
  local_dc = *(float *)(iVar6 + 4 + iVar3) * in_stack_00000010;
  local_d8 = *(float *)(iVar6 + 8 + iVar3) * in_stack_00000010;
  local_c8 = local_e0 + local_ec;
  local_c4 = local_dc + local_e8;
  local_c0 = local_d8 + local_e4;
  local_b0 = *(int *)(in_stack_00000004 + 0x48) + (int)local_b4 * 0xf0;
  shape_meshlod_cpp_FUN_00515e00();
  shape_meshlod_cpp_FUN_00515e00();
  local_a4 = 0;
  local_b4 = 0.0;
  *(undefined4 *)(local_a8 + 0x14) = 1;
  if (0 < *(int *)(local_a8 + 0x24)) {
    local_38 = local_a8;
    do {
      local_a0 = *(int *)(local_38 + 0x28);
      local_9c = (int *)(*(int *)(in_stack_00000004 + 0xc) + *(int *)(local_38 + 0x28) * 0x8c);
      iVar6 = 0;
      if (0 < local_a4) {
        iVar2 = 0;
        do {
          if (*(int *)((int)aiStack_4d8 + iVar2) == *local_9c) break;
          iVar2 = iVar2 + 0x10;
          iVar6 = iVar6 + 1;
        } while (iVar2 < local_a4 * 0x10);
      }
      if (local_a4 <= iVar6) {
        iVar2 = *local_9c;
        aiStack_4d8[iVar6 * 4 + 1] = 0;
        afStack_4d0[iVar6 * 4] = 0.0;
        afStack_4d0[iVar6 * 4 + 1] = 0.0;
        aiStack_4d8[iVar6 * 4] = iVar2;
        local_a4 = local_a4 + 1;
      }
      aiStack_4d8[iVar6 * 4 + 1] = aiStack_4d8[iVar6 * 4 + 1] + 1;
      local_40 = local_9c;
      local_3c = local_9c + 3;
      piVar8 = local_9c;
      do {
        piVar9 = local_40;
        fVar1 = fStack_4dc;
        if ((piVar8[4] == in_stack_00000008) || (fVar1 = fStack_4e0, piVar8[4] == in_stack_0000000c)
           ) {
          afStack_4d0[iVar6 * 4] = (float)local_40[7] * fVar1 + afStack_4d0[iVar6 * 4];
          afStack_4d0[iVar6 * 4 + 1] = fVar1 * (float)piVar9[8] + afStack_4d0[iVar6 * 4 + 1];
        }
        if (piVar8[0xd] != local_ac) {
          shape_meshlod_cpp_FUN_005183e0();
        }
        piVar8 = piVar8 + 1;
        local_40 = local_40 + 2;
      } while (piVar8 != local_3c);
      local_9c[0x10] = 1;
      local_b4 = (float)((int)local_b4 + 1);
      local_38 = local_38 + 4;
    } while ((int)local_b4 < *(int *)(local_a8 + 0x24));
  }
  *(undefined4 *)(local_a8 + 0x24) = 0;
  if (0 < local_a4) {
    iVar2 = local_a4 * 0x10;
    iVar6 = 0;
    do {
      iVar3 = *(int *)((int)aiStack_4d8 + iVar6 + 4);
      fVar1 = *(float *)((int)afStack_4d0 + iVar6);
      iVar5 = *(int *)((int)aiStack_4d8 + iVar6 + 4);
      iVar4 = iVar6 + 0x10;
      *(undefined4 *)((int)aiStack_4d8 + iVar6 + 4) = 1;
      *(float *)((int)afStack_4d0 + iVar6) = fVar1 / (float)iVar3;
      *(float *)((int)afStack_4d0 + iVar6 + 4) =
           *(float *)((int)afStack_4d0 + iVar6 + 4) / (float)iVar5;
      iVar6 = iVar4;
    } while (iVar4 < iVar2);
  }
  DAT_02f33334 = DAT_02f33334 + 1;
  if (0.0 < fStack_4e0) {
    local_2c = 0;
    local_4c = in_stack_00000008 * 0x4c4;
    for (iVar6 = 0; iVar2 = *(int *)(in_stack_00000004 + 4) + local_4c,
        iVar6 < *(int *)(iVar2 + 0x3f8); iVar6 = iVar6 + 1) {
      local_98 = *(int *)(in_stack_00000004 + 0x48) + *(int *)(iVar2 + local_2c + 0x3fc) * 0xf0;
      local_94 = 0;
      if (0 < *(int *)(local_98 + 0x24)) {
        local_30 = local_98;
        do {
          local_90 = *(int *)(local_30 + 0x28);
          piVar8 = (int *)(*(int *)(local_30 + 0x28) * 0x8c + *(int *)(in_stack_00000004 + 0xc));
          if (DAT_02f33334 != piVar8[0x21]) {
            iVar2 = piVar8[4];
            piVar8[0x21] = DAT_02f33334;
            iVar3 = 0;
            piVar9 = piVar8;
            while (iVar2 != in_stack_00000008) {
              iVar3 = iVar3 + 1;
              if (2 < iVar3) break;
              iVar2 = piVar9[5];
              piVar9 = piVar9 + 1;
            }
            iVar2 = 0;
            if (0 < local_a4) {
              iVar5 = 0;
              local_34 = local_a4 << 4;
              do {
                if (*(int *)((int)aiStack_4d8 + iVar5) == *piVar8) break;
                iVar5 = iVar5 + 0x10;
                iVar2 = iVar2 + 1;
              } while (iVar5 < local_a4 << 4);
            }
            if (iVar2 < local_a4) {
              piVar8[iVar3 * 2 + 7] = (int)afStack_4d0[iVar2 * 4];
              piVar8[iVar3 * 2 + 8] = (int)afStack_4d0[iVar2 * 4 + 1];
              iVar2 = 2;
            }
            else {
              iVar2 = 0;
            }
            piVar8 = piVar8 + iVar3 * 2 + iVar2;
            for (; iVar2 < *(int *)(in_stack_00000004 + 0x1c); iVar2 = iVar2 + 1) {
              shape_meshlod_cpp_FUN_00517530();
              piVar8[7] = (int)(local_b4 * local_e4 + local_bc * local_ec + local_b8 * local_e8 +
                               local_88);
              piVar8 = piVar8 + 1;
            }
          }
          local_94 = local_94 + 1;
          local_30 = local_30 + 4;
        } while (local_94 < *(int *)(local_98 + 0x24));
      }
      local_2c = local_2c + 4;
    }
  }
  DAT_02f33334 = DAT_02f33334 + 1;
  if (0.0 < fStack_4dc) {
    local_20 = 0;
    local_48 = in_stack_0000000c * 0x4c4;
    for (iVar6 = 0; iVar2 = *(int *)(in_stack_00000004 + 4) + local_48,
        iVar6 < *(int *)(iVar2 + 0x3f8); iVar6 = iVar6 + 1) {
      local_88 = (float)(*(int *)(in_stack_00000004 + 0x48) +
                        *(int *)(iVar2 + local_20 + 0x3fc) * 0xf0);
      local_84 = 0;
      if (0 < *(int *)((int)local_88 + 0x24)) {
        local_24 = local_88;
        do {
          local_80 = *(int *)((int)local_24 + 0x28);
          piVar8 = (int *)(*(int *)((int)local_24 + 0x28) * 0x8c + *(int *)(in_stack_00000004 + 0xc)
                          );
          if (DAT_02f33334 != piVar8[0x21]) {
            iVar2 = piVar8[4];
            piVar8[0x21] = DAT_02f33334;
            iVar3 = 0;
            piVar9 = piVar8;
            while (iVar2 != in_stack_0000000c) {
              iVar3 = iVar3 + 1;
              if (2 < iVar3) break;
              iVar2 = piVar9[5];
              piVar9 = piVar9 + 1;
            }
            iVar2 = 0;
            if (0 < local_a4) {
              iVar5 = 0;
              local_28 = local_a4 << 4;
              do {
                if (*(int *)((int)aiStack_4d8 + iVar5) == *piVar8) break;
                iVar5 = iVar5 + 0x10;
                iVar2 = iVar2 + 1;
              } while (iVar5 < local_a4 << 4);
            }
            if (iVar2 < local_a4) {
              piVar8[iVar3 * 2 + 7] = (int)afStack_4d0[iVar2 * 4];
              piVar8[iVar3 * 2 + 8] = (int)afStack_4d0[iVar2 * 4 + 1];
              iVar2 = 2;
            }
            else {
              iVar2 = 0;
            }
            piVar8 = piVar8 + iVar3 * 2 + iVar2;
            for (; iVar2 < *(int *)(in_stack_00000004 + 0x1c); iVar2 = iVar2 + 1) {
              shape_meshlod_cpp_FUN_00517530();
              piVar8[7] = (int)(local_b4 * local_c0 + local_bc * local_c8 + local_b8 * local_c4 +
                               local_78);
              piVar8 = piVar8 + 1;
            }
          }
          local_84 = local_84 + 1;
          local_24 = (float)((int)local_24 + 4);
        } while (local_84 < *(int *)((int)local_88 + 0x24));
      }
      local_20 = local_20 + 4;
    }
  }
  iVar6 = *(int *)(in_stack_0000000c * 0x4c4 + 0x3f8 + *(int *)(in_stack_00000004 + 4));
  if (0 < iVar6) {
    iVar2 = 0;
    do {
      iVar3 = iVar2 + 4;
      *(undefined4 *)((int)afStack_1b8 + iVar2) =
           *(undefined4 *)
            (*(int *)(in_stack_00000004 + 4) + in_stack_0000000c * 0x4c4 + 0x3f8 + iVar3);
      iVar2 = iVar3;
    } while (SBORROW4(iVar3,iVar6 * 4) != iVar3 + iVar6 * -4 < 0);
  }
  if (0 < iVar6) {
    local_18 = 0;
    local_14 = iVar6 << 2;
    local_68 = in_stack_00000008 * 0x4c4;
    do {
      local_78 = *(float *)((int)afStack_1b8 + local_18);
      piVar9 = (int *)((int)local_78 * 0xf0 + *(int *)(in_stack_00000004 + 0x48));
      iVar6 = 0;
      piVar8 = piVar9;
      if (0 < piVar9[9]) {
        do {
          local_1c = piVar8;
          iVar2 = *(int *)(in_stack_00000004 + 0xc) + local_1c[10] * 0x8c;
          iVar3 = iVar2 + 0xc;
          do {
            if (*(int *)(iVar2 + 0x10) == in_stack_0000000c) {
              *(int *)(iVar2 + 0x10) = in_stack_00000008;
            }
            iVar2 = iVar2 + 4;
          } while (iVar2 != iVar3);
          iVar6 = iVar6 + 1;
          local_1c = local_1c + 1;
          piVar8 = local_1c;
        } while (iVar6 < piVar9[9]);
      }
      local_74 = -1;
      if (*piVar9 == in_stack_0000000c) {
        local_74 = shape_meshlod_cpp_MemoryAdjacentThing_FUN_00515ec0();
        if (local_74 < 0) {
          *piVar9 = in_stack_00000008;
        }
      }
      else if (in_stack_0000000c == piVar9[1]) {
        local_74 = shape_meshlod_cpp_MemoryAdjacentThing_FUN_00515ec0();
        if (local_74 < 0) {
          piVar9[1] = in_stack_00000008;
        }
      }
      else {
        g_CurrentFilename = "..\\shape\\meshlod.cpp";
        g_CurrentLineNumber = 0x992;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Bug!");
      }
      if (local_74 < 0) {
        if (piVar9[1] < *piVar9) {
          iVar6 = *piVar9;
          *piVar9 = piVar9[1];
          piVar9[1] = iVar6;
        }
        shape_meshlod_cpp_AdjacentEdgesCheck_FUN_00515d90();
        iVar6 = local_6c;
      }
      else {
        iVar2 = piVar9[9];
        iVar3 = local_74 * 0xf0;
        iVar6 = local_6c;
        while (local_6c = iVar3, 0 < iVar2) {
          fStack_4e0 = (float)piVar9[10];
          local_70 = *(int *)(in_stack_00000004 + 0xc) + (int)fStack_4e0 * 0x8c;
          iVar6 = shape_meshlod_cpp_FUN_005183e0();
          *(int *)(iVar6 * 4 + local_6c + 0x34) = local_70;
          shape_meshlod_cpp_FUN_00515ca0();
          iVar3 = local_6c;
          iVar6 = local_6c;
          iVar2 = piVar9[9];
        }
      }
      local_6c = iVar6;
      local_18 = local_18 + 4;
    } while (local_18 < local_14);
  }
  in_stack_0000000c = in_stack_0000000c * 0x4c4;
  *(undefined4 *)(in_stack_0000000c + 0x3f8 + *(int *)(in_stack_00000004 + 4)) = 0;
  local_64 = in_stack_00000008 * 0x4c4;
  pfVar7 = (float *)(*(int *)(in_stack_00000004 + 4) + local_64);
  *pfVar7 = local_c0;
  pfVar7[1] = local_bc;
  pfVar7[2] = local_b8;
  iVar6 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x20)) {
    iVar2 = 0;
    do {
      iVar3 = local_64 + *(int *)(in_stack_00000004 + 4);
      iVar6 = iVar6 + 1;
      *(float *)(iVar3 + 0xc + iVar2) =
           *(float *)(*(int *)(in_stack_00000004 + 4) + in_stack_0000000c + 0xc + iVar2) *
           fStack_4e0 + *(float *)(iVar3 + 0xc + iVar2) * fStack_4dc;
      iVar2 = iVar2 + 4;
      local_60 = local_64;
      local_5c = in_stack_0000000c;
    } while (iVar6 < *(int *)(in_stack_00000004 + 0x20));
  }
  local_50 = in_stack_00000008 * 0x4c4;
  DAT_02f33334 = DAT_02f33334 + 1;
  while (0 < *(int *)(*(int *)(in_stack_00000004 + 4) + local_50 + 0x3f8)) {
    iVar6 = shape_meshlod_cpp_FUN_0051a980();
    local_40 = (int *)(iVar6 * 0x4c4);
    iVar2 = 0;
    for (iVar6 = 0; iVar3 = *(int *)(in_stack_00000004 + 4),
        iVar6 < *(int *)((int)local_40 + iVar3 + 0x3f8); iVar6 = iVar6 + 1) {
      iVar5 = iVar2 + 0x3fc;
      iVar2 = iVar2 + 4;
      *(undefined4 *)
       (*(int *)(in_stack_00000004 + 0x48) + 0x20 + *(int *)((int)local_40 + iVar5 + iVar3) * 0xf0)
           = 1;
    }
    local_54 = *(int *)(iVar3 + local_4c + 0x3fc);
    iVar6 = *(int *)(in_stack_00000004 + 0x48) + local_54 * 0xf0;
    iVar2 = 0;
    local_50 = iVar6;
    if (0 < *(int *)(iVar6 + 0x24)) {
      do {
        iVar3 = *(int *)(iVar6 + 0x28) * 0x8c + *(int *)(in_stack_00000004 + 0xc);
        if (DAT_02f33334 != *(int *)(iVar3 + 0x84)) {
          *(int *)(iVar3 + 0x84) = DAT_02f33334;
          shape_meshlod_cpp_FUN_00519830();
        }
        iVar2 = iVar2 + 1;
        iVar6 = iVar6 + 4;
      } while (iVar2 < *(int *)(local_50 + 0x24));
    }
    shape_meshlod_cpp_FUN_00516000();
  }
  iVar6 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x5c)) {
    iVar2 = 0;
    do {
      if ((*(int *)(*(int *)(in_stack_00000004 + 0xc) +
                    *(int *)(iVar2 + 0xc + *(int *)(in_stack_00000004 + 0x60)) * 0x8c + 0x40) != 0)
         || (iVar3 = shape_meshlod_cpp_FUN_00515e90(), -1 < iVar3)) {
        shape_meshlod_cpp_FUN_00518300();
      }
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + 0x1c;
    } while (iVar6 < *(int *)(in_stack_00000004 + 0x5c));
  }
  if (local_b0 == 0) {
    return;
  }
  return;
}


// Assembly code:
// 00517630: PUSH EBX
//   Label: shape_meshlod.cpp_FUN_00517630
// 00517631: PUSH ESI
// 00517632: PUSH EDI
// 00517633: PUSH EBP
// 00517634: MOV EBP,ESP
// 00517636: SUB ESP,0x4e0
// 0051763c: AND ESP,0xfffffff8
// 0051763f: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00517642: XOR EDX,EDX
// 00517644: PUSH EDX
// 00517645: MOV ECX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00517648: PUSH ECX
// 00517649: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0051764c: PUSH ESI
// 0051764d: PUSH EBX
// 0051764e: MOV dword ptr [ESP + 0x440],EDX
//   XREF to: Stack[-0xc0] (WRITE)
// 00517655: CALL shape_meshlod.cpp_MemoryAdjacentThing_FUN_00515ec0
//   XREF to: 00515ec0 (UNCONDITIONAL_CALL)
// 0051765a: ADD ESP,0x10
// 0051765d: MOV dword ptr [ESP + 0x434],EAX
//   XREF to: Stack[-0xbc] (WRITE)
// 00517664: TEST EAX,EAX
// 00517666: JL 0x00517a41
//   XREF to: 00517a41 (CONDITIONAL_JUMP)
// 0051766c: MOV EAX,dword ptr [EBP + 0x20]
//   Label: LAB_0051766c
//   XREF to: Stack[0x10] (READ)
// 0051766f: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00517672: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x4f0] (DATA)
// 00517675: IMUL EAX,EDX,0x4c4
// 0051767b: MOV EDX,dword ptr [EBX + 0x4]
// 0051767e: FLD float ptr [EDX + EAX*0x1]
// 00517681: FMUL float ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00517684: FSTP float ptr [ESP + 0x3fc]
//   XREF to: Stack[-0xf4] (WRITE)
// 0051768b: FLD float ptr [EDX + EAX*0x1 + 0x4]
// 0051768f: FMUL float ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00517692: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00517695: FSTP float ptr [ESP + 0x400]
//   XREF to: Stack[-0xf0] (WRITE)
// 0051769c: FLD float ptr [EDX + EAX*0x1 + 0x8]
// 005176a0: IMUL EAX,ECX,0x4c4
// 005176a6: FMUL float ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005176a9: FLD float ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005176ac: FLD1
// 005176ae: FSUBRP
// 005176b0: FXCH
// 005176b2: FSTP float ptr [ESP + 0x404]
//   XREF to: Stack[-0xec] (WRITE)
// 005176b9: MOV EDX,dword ptr [EBX + 0x4]
// 005176bc: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x4ec] (WRITE)
// 005176c0: FLD float ptr [EDX + EAX*0x1]
// 005176c3: FMUL float ptr [ESP + 0x4]
//   XREF to: Stack[-0x4ec] (READ)
// 005176c7: FSTP float ptr [ESP + 0x408]
//   XREF to: Stack[-0xe8] (WRITE)
// 005176ce: FLD float ptr [EDX + EAX*0x1 + 0x4]
// 005176d2: FMUL float ptr [ESP + 0x4]
//   XREF to: Stack[-0x4ec] (READ)
// 005176d6: FSTP float ptr [ESP + 0x40c]
//   XREF to: Stack[-0xe4] (WRITE)
// 005176dd: FLD float ptr [EDX + EAX*0x1 + 0x8]
// 005176e1: FMUL float ptr [ESP + 0x4]
//   XREF to: Stack[-0x4ec] (READ)
// 005176e5: FLD float ptr [ESP + 0x408]
//   XREF to: Stack[-0xe8] (READ)
// 005176ec: FADD float ptr [ESP + 0x3fc]
//   XREF to: Stack[-0xf4] (READ)
// 005176f3: FLD float ptr [ESP + 0x40c]
//   XREF to: Stack[-0xe4] (READ)
// 005176fa: FXCH
// 005176fc: FSTP float ptr [ESP + 0x420]
//   XREF to: Stack[-0xd0] (WRITE)
// 00517703: MOV EAX,dword ptr [ESP + 0x434]
//   XREF to: Stack[-0xbc] (READ)
// 0051770a: FADD float ptr [ESP + 0x400]
//   XREF to: Stack[-0xf0] (READ)
// 00517711: FXCH
// 00517713: FSTP float ptr [ESP + 0x410]
//   XREF to: Stack[-0xe0] (WRITE)
// 0051771a: FSTP float ptr [ESP + 0x424]
//   XREF to: Stack[-0xcc] (WRITE)
// 00517721: SHL EAX,0x4
// 00517724: FLD float ptr [ESP + 0x410]
//   XREF to: Stack[-0xe0] (READ)
// 0051772b: MOV EDX,EAX
// 0051772d: SHL EAX,0x4
// 00517730: FADD float ptr [ESP + 0x404]
//   XREF to: Stack[-0xec] (READ)
// 00517737: SUB EAX,EDX
// 00517739: FSTP float ptr [ESP + 0x428]
//   XREF to: Stack[-0xc8] (WRITE)
// 00517740: MOV EDX,EAX
// 00517742: MOV EAX,dword ptr [EBX + 0x48]
// 00517745: ADD EAX,EDX
// 00517747: MOV EDI,dword ptr [EAX]
// 00517749: MOV dword ptr [ESP + 0x438],EAX
//   XREF to: Stack[-0xb8] (WRITE)
// 00517750: IMUL EAX,EDI,0x4c4
// 00517756: MOV ESI,dword ptr [ESP + 0x434]
//   XREF to: Stack[-0xbc] (READ)
// 0051775d: MOV EDX,dword ptr [EBX + 0x4]
// 00517760: PUSH ESI
// 00517761: ADD EAX,EDX
// 00517763: PUSH EAX
// 00517764: CALL shape_meshlod.cpp_FUN_00515e00
//   XREF to: 00515e00 (UNCONDITIONAL_CALL)
// 00517769: ADD ESP,0x8
// 0051776c: MOV EAX,dword ptr [ESP + 0x438]
//   XREF to: Stack[-0xb8] (READ)
// 00517773: IMUL EAX,dword ptr [EAX + 0x4],0x4c4
// 0051777a: MOV EDX,dword ptr [EBX + 0x4]
// 0051777d: PUSH ESI
// 0051777e: ADD EAX,EDX
// 00517780: PUSH EAX
// 00517781: CALL shape_meshlod.cpp_FUN_00515e00
//   XREF to: 00515e00 (UNCONDITIONAL_CALL)
// 00517786: ADD ESP,0x8
// 00517789: XOR ECX,ECX
// 0051778b: MOV EAX,dword ptr [ESP + 0x438]
//   XREF to: Stack[-0xb8] (READ)
// 00517792: MOV dword ptr [ESP + 0x43c],ECX
//   XREF to: Stack[-0xb4] (WRITE)
// 00517799: MOV dword ptr [ESP + 0x42c],ECX
//   XREF to: Stack[-0xc4] (WRITE)
// 005177a0: MOV EDI,dword ptr [EAX + 0x24]
// 005177a3: MOV dword ptr [EAX + 0x14],0x1
// 005177aa: TEST EDI,EDI
// 005177ac: JLE 0x005178da
//   XREF to: 005178da (CONDITIONAL_JUMP)
// 005177b2: MOV dword ptr [ESP + 0x4a8],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 005177b9: MOV EAX,dword ptr [ESP + 0x4a8]
//   Label: LAB_005177b9
//   XREF to: Stack[-0x48] (READ)
// 005177c0: MOV EAX,dword ptr [EAX + 0x28]
// 005177c3: MOV dword ptr [ESP + 0x440],EAX
//   XREF to: Stack[-0xb0] (WRITE)
// 005177ca: IMUL EDX,EAX,0x8c
// 005177d0: MOV EAX,dword ptr [EBX + 0xc]
// 005177d3: ADD EAX,EDX
// 005177d5: MOV dword ptr [ESP + 0x444],EAX
//   XREF to: Stack[-0xac] (WRITE)
// 005177dc: MOV EAX,dword ptr [ESP + 0x43c]
//   XREF to: Stack[-0xb4] (READ)
// 005177e3: XOR EDX,EDX
// 005177e5: TEST EAX,EAX
// 005177e7: JLE 0x00517808
//   XREF to: 00517808 (CONDITIONAL_JUMP)
// 005177e9: MOV EDI,dword ptr [ESP + 0x43c]
//   XREF to: Stack[-0xb4] (READ)
// 005177f0: MOV ECX,dword ptr [ESP + 0x444]
//   XREF to: Stack[-0xac] (READ)
// 005177f7: XOR EAX,EAX
// 005177f9: SHL EDI,0x4
// 005177fc: MOV ESI,dword ptr [ESP + EAX*0x1 + 0x8]
//   Label: LAB_005177fc
// 00517800: CMP ESI,dword ptr [ECX]
// 00517802: JNZ 0x00517a68
//   XREF to: 00517a68 (CONDITIONAL_JUMP)
// 00517808: CMP EDX,dword ptr [ESP + 0x43c]
//   Label: LAB_00517808
//   XREF to: Stack[-0xb4] (READ)
// 0051780f: JGE 0x00517a79
//   XREF to: 00517a79 (CONDITIONAL_JUMP)
// 00517815: MOV ESI,EDX
//   Label: LAB_00517815
// 00517817: SHL ESI,0x4
// 0051781a: INC dword ptr [ESP + ESI*0x1 + 0xc]
// 0051781e: MOV EAX,dword ptr [ESP + 0x444]
//   XREF to: Stack[-0xac] (READ)
// 00517825: MOV dword ptr [ESP + 0x4a0],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 0051782c: MOV EDI,EAX
// 0051782e: ADD EAX,0xc
// 00517831: MOV dword ptr [ESP + 0x4a4],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 00517838: MOV EDX,dword ptr [EBP + 0x18]
//   Label: LAB_00517838
//   XREF to: Stack[0x8] (READ)
// 0051783b: MOV EAX,dword ptr [EDI + 0x10]
// 0051783e: CMP EAX,EDX
// 00517840: JNZ 0x00517aad
//   XREF to: 00517aad (CONDITIONAL_JUMP)
// 00517846: MOV EAX,dword ptr [ESP + 0x4a0]
//   XREF to: Stack[-0x50] (READ)
// 0051784d: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x4ec] (READ)
// 00517851: FLD float ptr [EAX + 0x1c]
//   Label: LAB_00517851
// 00517854: FMUL ST1
// 00517856: FADD float ptr [ESP + ESI*0x1 + 0x10]
// 0051785a: FSTP float ptr [ESP + ESI*0x1 + 0x10]
// 0051785e: FMUL float ptr [EAX + 0x20]
// 00517861: FADD float ptr [ESP + ESI*0x1 + 0x14]
// 00517865: FSTP float ptr [ESP + ESI*0x1 + 0x14]
// 00517869: MOV EDX,dword ptr [ESP + 0x434]
//   Label: LAB_00517869
//   XREF to: Stack[-0xbc] (READ)
// 00517870: MOV EAX,dword ptr [EDI + 0x34]
// 00517873: CMP EAX,EDX
// 00517875: JNZ 0x00517ac5
//   XREF to: 00517ac5 (CONDITIONAL_JUMP)
// 0051787b: MOV EDX,dword ptr [ESP + 0x4a0]
//   Label: LAB_0051787b
//   XREF to: Stack[-0x50] (READ)
// 00517882: MOV ECX,dword ptr [ESP + 0x4a4]
//   XREF to: Stack[-0x4c] (READ)
// 00517889: ADD EDX,0x8
// 0051788c: ADD EDI,0x4
// 0051788f: MOV dword ptr [ESP + 0x4a0],EDX
//   XREF to: Stack[-0x50] (WRITE)
// 00517896: CMP EDI,ECX
// 00517898: JNZ 0x00517838
//   XREF to: 00517838 (CONDITIONAL_JUMP)
// 0051789a: MOV EAX,dword ptr [ESP + 0x444]
//   XREF to: Stack[-0xac] (READ)
// 005178a1: MOV EDX,dword ptr [ESP + 0x42c]
//   XREF to: Stack[-0xc4] (READ)
// 005178a8: MOV dword ptr [EAX + 0x40],0x1
// 005178af: MOV EAX,dword ptr [ESP + 0x4a8]
//   XREF to: Stack[-0x48] (READ)
// 005178b6: INC EDX
// 005178b7: ADD EAX,0x4
// 005178ba: MOV dword ptr [ESP + 0x42c],EDX
//   XREF to: Stack[-0xc4] (WRITE)
// 005178c1: MOV dword ptr [ESP + 0x4a8],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 005178c8: MOV EAX,EDX
// 005178ca: MOV EDX,dword ptr [ESP + 0x438]
//   XREF to: Stack[-0xb8] (READ)
// 005178d1: CMP EAX,dword ptr [EDX + 0x24]
// 005178d4: JL 0x005177b9
//   XREF to: 005177b9 (CONDITIONAL_JUMP)
// 005178da: MOV EAX,dword ptr [ESP + 0x438]
//   Label: LAB_005178da
//   XREF to: Stack[-0xb8] (READ)
// 005178e1: PUSH EBX
// 005178e2: MOV dword ptr [EAX + 0x24],0x0
// 005178e9: ADD ESP,0x4
// 005178ec: MOV ESI,dword ptr [ESP + 0x43c]
//   XREF to: Stack[-0xb4] (READ)
// 005178f3: TEST ESI,ESI
// 005178f5: JLE 0x00517930
//   XREF to: 00517930 (CONDITIONAL_JUMP)
// 005178f7: MOV ECX,0x1
// 005178fc: MOV EDX,ESI
// 005178fe: XOR EAX,EAX
// 00517900: SHL EDX,0x4
// 00517903: FILD dword ptr [ESP + EAX*0x1 + 0xc]
//   Label: LAB_00517903
// 00517907: FDIVR float ptr [ESP + EAX*0x1 + 0x10]
// 0051790b: FILD dword ptr [ESP + EAX*0x1 + 0xc]
// 0051790f: FDIVR float ptr [ESP + EAX*0x1 + 0x14]
// 00517913: ADD EAX,0x10
// 00517916: MOV dword ptr [ESP + EAX*0x1 + -0x4],ECX
// 0051791a: FXCH
// 0051791c: FSTP float ptr [ESP + EAX*0x1]
// 0051791f: FSTP float ptr [ESP + EAX*0x1 + 0x4]
// 00517923: CMP EAX,EDX
// 00517925: JL 0x00517903
//   XREF to: 00517903 (CONDITIONAL_JUMP)
// 00517927: LEA EAX,[EAX]
// 0051792d: LEA EDX,[EDX]
// 00517930: MOV ESI,dword ptr [0x02f33334]
//   Label: LAB_00517930
//   XREF to: 02f33334 (READ)
// 00517936: FLD float ptr [ESP]
//   XREF to: Stack[-0x4f0] (DATA)
// 00517939: INC ESI
// 0051793a: FLDZ
// 0051793c: MOV dword ptr [0x02f33334],ESI
//   XREF to: 02f33334 (WRITE)
// 00517942: FCOMPP
// 00517944: FNSTSW AX
// 00517946: SAHF
// 00517947: JNC 0x00517bec
//   XREF to: 00517bec (CONDITIONAL_JUMP)
// 0051794d: IMUL EAX,dword ptr [EBP + 0x18],0x4c4
//   XREF to: Stack[0x8] (READ)
// 00517954: XOR EDI,EDI
// 00517956: MOV dword ptr [ESP + 0x4b4],EDI
//   XREF to: Stack[-0x3c] (WRITE)
// 0051795d: MOV dword ptr [ESP + 0x4dc],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 00517964: MOV dword ptr [ESP + 0x494],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 0051796b: MOV ESI,dword ptr [ESP + 0x494]
//   Label: LAB_0051796b
//   XREF to: Stack[-0x5c] (READ)
// 00517972: MOV EAX,dword ptr [EBX + 0x4]
// 00517975: ADD EAX,ESI
// 00517977: MOV EDX,dword ptr [ESP + 0x4dc]
//   XREF to: Stack[-0x14] (READ)
// 0051797e: CMP EDX,dword ptr [EAX + 0x3f8]
// 00517984: JGE 0x00517bec
//   XREF to: 00517bec (CONDITIONAL_JUMP)
// 0051798a: ADD EAX,dword ptr [ESP + 0x4b4]
//   XREF to: Stack[-0x3c] (READ)
// 00517991: MOV EAX,dword ptr [EAX + 0x3fc]
// 00517997: IMUL EAX,EAX,0xf0
// 0051799d: MOV EDX,dword ptr [EBX + 0x48]
// 005179a0: XOR ECX,ECX
// 005179a2: ADD EDX,EAX
// 005179a4: MOV dword ptr [ESP + 0x44c],ECX
//   XREF to: Stack[-0xa4] (WRITE)
// 005179ab: MOV ESI,dword ptr [EDX + 0x24]
// 005179ae: MOV dword ptr [ESP + 0x448],EDX
//   XREF to: Stack[-0xa8] (WRITE)
// 005179b5: TEST ESI,ESI
// 005179b7: JLE 0x00517a1c
//   XREF to: 00517a1c (CONDITIONAL_JUMP)
// 005179b9: MOV dword ptr [ESP + 0x4b0],EDX
//   XREF to: Stack[-0x40] (WRITE)
// 005179c0: MOV EAX,dword ptr [ESP + 0x4b0]
//   Label: LAB_005179c0
//   XREF to: Stack[-0x40] (READ)
// 005179c7: MOV EAX,dword ptr [EAX + 0x28]
// 005179ca: MOV dword ptr [ESP + 0x450],EAX
//   XREF to: Stack[-0xa0] (WRITE)
// 005179d1: IMUL EDI,EAX,0x8c
// 005179d7: MOV EAX,dword ptr [EBX + 0xc]
// 005179da: ADD EDI,EAX
// 005179dc: MOV EDX,dword ptr [0x02f33334]
//   XREF to: 02f33334 (READ)
// 005179e2: CMP EDX,dword ptr [EDI + 0x84]
// 005179e8: JNZ 0x00517adc
//   XREF to: 00517adc (CONDITIONAL_JUMP)
// 005179ee: MOV EDI,dword ptr [ESP + 0x4b0]
//   Label: LAB_005179ee
//   XREF to: Stack[-0x40] (READ)
// 005179f5: MOV EAX,dword ptr [ESP + 0x44c]
//   XREF to: Stack[-0xa4] (READ)
// 005179fc: MOV EDX,dword ptr [ESP + 0x448]
//   XREF to: Stack[-0xa8] (READ)
// 00517a03: ADD EDI,0x4
// 00517a06: INC EAX
// 00517a07: MOV ECX,dword ptr [EDX + 0x24]
// 00517a0a: MOV dword ptr [ESP + 0x4b0],EDI
//   XREF to: Stack[-0x40] (WRITE)
// 00517a11: MOV dword ptr [ESP + 0x44c],EAX
//   XREF to: Stack[-0xa4] (WRITE)
// 00517a18: CMP EAX,ECX
// 00517a1a: JL 0x005179c0
//   XREF to: 005179c0 (CONDITIONAL_JUMP)
// 00517a1c: MOV EDI,dword ptr [ESP + 0x4dc]
//   Label: LAB_00517a1c
//   XREF to: Stack[-0x14] (READ)
// 00517a23: MOV ESI,dword ptr [ESP + 0x4b4]
//   XREF to: Stack[-0x3c] (READ)
// 00517a2a: INC EDI
// 00517a2b: ADD ESI,0x4
// 00517a2e: MOV dword ptr [ESP + 0x4dc],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 00517a35: MOV dword ptr [ESP + 0x4b4],ESI
//   XREF to: Stack[-0x3c] (WRITE)
// 00517a3c: JMP 0x0051796b
//   XREF to: 0051796b (UNCONDITIONAL_JUMP)
// 00517a41: MOV EDI,0x6377e9
//   Label: LAB_00517a41
//   XREF to: 006377e9 (DATA)
// 00517a46: MOV EAX,0x824
// 00517a4b: PUSH 0x6377fe
//   XREF to: 006377fe (DATA)
// 00517a50: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 00517a56: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00517a5b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00517a60: ADD ESP,0x4
// 00517a63: JMP 0x0051766c
//   XREF to: 0051766c (UNCONDITIONAL_JUMP)
// 00517a68: ADD EAX,0x10
//   Label: LAB_00517a68
// 00517a6b: INC EDX
// 00517a6c: CMP EAX,EDI
// 00517a6e: JL 0x005177fc
//   XREF to: 005177fc (CONDITIONAL_JUMP)
// 00517a74: JMP 0x00517808
//   XREF to: 00517808 (UNCONDITIONAL_JUMP)
// 00517a79: MOV ESI,dword ptr [ESP + 0x444]
//   Label: LAB_00517a79
//   XREF to: Stack[-0xac] (READ)
// 00517a80: MOV EAX,EDX
// 00517a82: XOR EDI,EDI
// 00517a84: SHL EAX,0x4
// 00517a87: MOV ESI,dword ptr [ESI]
// 00517a89: MOV dword ptr [ESP + EAX*0x1 + 0xc],EDI
// 00517a8d: MOV dword ptr [ESP + EAX*0x1 + 0x10],EDI
// 00517a91: MOV dword ptr [ESP + EAX*0x1 + 0x14],EDI
// 00517a95: MOV EDI,dword ptr [ESP + 0x43c]
//   XREF to: Stack[-0xb4] (READ)
// 00517a9c: INC EDI
// 00517a9d: MOV dword ptr [ESP + EAX*0x1 + 0x8],ESI
// 00517aa1: MOV dword ptr [ESP + 0x43c],EDI
//   XREF to: Stack[-0xb4] (WRITE)
// 00517aa8: JMP 0x00517815
//   XREF to: 00517815 (UNCONDITIONAL_JUMP)
// 00517aad: CMP EAX,dword ptr [EBP + 0x1c]
//   Label: LAB_00517aad
//   XREF to: Stack[0xc] (READ)
// 00517ab0: JNZ 0x00517869
//   XREF to: 00517869 (CONDITIONAL_JUMP)
// 00517ab6: MOV EAX,dword ptr [ESP + 0x4a0]
//   XREF to: Stack[-0x50] (READ)
// 00517abd: FLD float ptr [ESP]
//   XREF to: Stack[-0x4f0] (DATA)
// 00517ac0: JMP 0x00517851
//   XREF to: 00517851 (UNCONDITIONAL_JUMP)
// 00517ac5: PUSH EAX
//   Label: LAB_00517ac5
// 00517ac6: MOV EAX,dword ptr [ESP + 0x444]
//   XREF to: Stack[-0xb0] (READ)
// 00517acd: PUSH EAX
// 00517ace: PUSH EBX
// 00517acf: CALL shape_meshlod.cpp_FUN_005183e0
//   XREF to: 005183e0 (UNCONDITIONAL_CALL)
// 00517ad4: ADD ESP,0xc
// 00517ad7: JMP 0x0051787b
//   XREF to: 0051787b (UNCONDITIONAL_JUMP)
// 00517adc: MOV ESI,dword ptr [EBP + 0x18]
//   Label: LAB_00517adc
//   XREF to: Stack[0x8] (READ)
// 00517adf: MOV EAX,EDI
// 00517ae1: MOV ECX,dword ptr [EDI + 0x10]
// 00517ae4: MOV dword ptr [EDI + 0x84],EDX
// 00517aea: XOR EDX,EDX
// 00517aec: CMP ECX,ESI
// 00517aee: JZ 0x00517b01
//   XREF to: 00517b01 (CONDITIONAL_JUMP)
// 00517af0: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00517af3: INC EDX
//   Label: LAB_00517af3
// 00517af4: ADD EAX,0x4
// 00517af7: CMP EDX,0x3
// 00517afa: JGE 0x00517b01
//   XREF to: 00517b01 (CONDITIONAL_JUMP)
// 00517afc: CMP ESI,dword ptr [EAX + 0x10]
// 00517aff: JNZ 0x00517af3
//   XREF to: 00517af3 (CONDITIONAL_JUMP)
// 00517b01: MOV EAX,dword ptr [ESP + 0x43c]
//   Label: LAB_00517b01
//   XREF to: Stack[-0xb4] (READ)
// 00517b08: XOR ESI,ESI
// 00517b0a: TEST EAX,EAX
// 00517b0c: JLE 0x00517b2d
//   XREF to: 00517b2d (CONDITIONAL_JUMP)
// 00517b0e: MOV ECX,dword ptr [ESP + 0x43c]
//   XREF to: Stack[-0xb4] (READ)
// 00517b15: SHL ECX,0x4
// 00517b18: XOR EAX,EAX
// 00517b1a: MOV dword ptr [ESP + 0x4ac],ECX
//   XREF to: Stack[-0x44] (WRITE)
// 00517b21: MOV ECX,dword ptr [ESP + EAX*0x1 + 0x8]
//   Label: LAB_00517b21
// 00517b25: CMP ECX,dword ptr [EDI]
// 00517b27: JNZ 0x00517bcd
//   XREF to: 00517bcd (CONDITIONAL_JUMP)
// 00517b2d: CMP ESI,dword ptr [ESP + 0x43c]
//   Label: LAB_00517b2d
//   XREF to: Stack[-0xb4] (READ)
// 00517b34: JGE 0x00517be5
//   XREF to: 00517be5 (CONDITIONAL_JUMP)
// 00517b3a: SHL ESI,0x4
// 00517b3d: MOV EAX,dword ptr [ESP + ESI*0x1 + 0x10]
// 00517b41: MOV dword ptr [EDI + EDX*0x8 + 0x1c],EAX
// 00517b45: MOV EAX,dword ptr [ESP + ESI*0x1 + 0x14]
// 00517b49: MOV dword ptr [EDI + EDX*0x8 + 0x20],EAX
// 00517b4d: MOV ESI,0x2
// 00517b52: LEA EAX,[EDX*0x8 + 0x0]
//   Label: LAB_00517b52
// 00517b59: ADD EAX,EDI
// 00517b5b: LEA EDI,[ESI*0x4 + 0x0]
// 00517b62: ADD EDI,EAX
// 00517b64: CMP ESI,dword ptr [EBX + 0x1c]
//   Label: LAB_00517b64
// 00517b67: JGE 0x005179ee
//   XREF to: 005179ee (CONDITIONAL_JUMP)
// 00517b6d: LEA EAX,[ESP + 0x454]
//   XREF to: Stack[-0x9c] (DATA)
// 00517b74: PUSH EAX
// 00517b75: LEA EAX,[ESP + 0x3f4]
//   XREF to: Stack[-0x100] (DATA)
// 00517b7c: PUSH EAX
// 00517b7d: PUSH ESI
// 00517b7e: MOV ECX,dword ptr [ESP + 0x45c]
//   XREF to: Stack[-0xa0] (READ)
// 00517b85: PUSH ECX
// 00517b86: PUSH EBX
// 00517b87: CALL shape_meshlod.cpp_FUN_00517530
//   XREF to: 00517530 (UNCONDITIONAL_CALL)
// 00517b8c: ADD ESP,0x14
// 00517b8f: FLD float ptr [ESP + 0x424]
//   XREF to: Stack[-0xcc] (READ)
// 00517b96: FMUL float ptr [ESP + 0x3f4]
//   XREF to: Stack[-0xfc] (READ)
// 00517b9d: FLD float ptr [ESP + 0x420]
//   XREF to: Stack[-0xd0] (READ)
// 00517ba4: FMUL float ptr [ESP + 0x3f0]
//   XREF to: Stack[-0x100] (READ)
// 00517bab: FADDP
// 00517bad: FLD float ptr [ESP + 0x428]
//   XREF to: Stack[-0xc8] (READ)
// 00517bb4: FMUL float ptr [ESP + 0x3f8]
//   XREF to: Stack[-0xf8] (READ)
// 00517bbb: FADDP
// 00517bbd: ADD EDI,0x4
// 00517bc0: FADD float ptr [ESP + 0x454]
//   XREF to: Stack[-0x9c] (READ)
// 00517bc7: INC ESI
// 00517bc8: FSTP float ptr [EDI + 0x18]
// 00517bcb: JMP 0x00517b64
//   XREF to: 00517b64 (UNCONDITIONAL_JUMP)
// 00517bcd: MOV ECX,dword ptr [ESP + 0x4ac]
//   Label: LAB_00517bcd
//   XREF to: Stack[-0x44] (READ)
// 00517bd4: ADD EAX,0x10
// 00517bd7: INC ESI
// 00517bd8: CMP EAX,ECX
// 00517bda: JL 0x00517b21
//   XREF to: 00517b21 (CONDITIONAL_JUMP)
// 00517be0: JMP 0x00517b2d
//   XREF to: 00517b2d (UNCONDITIONAL_JUMP)
// 00517be5: XOR ESI,ESI
//   Label: LAB_00517be5
// 00517be7: JMP 0x00517b52
//   XREF to: 00517b52 (UNCONDITIONAL_JUMP)
// 00517bec: MOV ESI,dword ptr [0x02f33334]
//   Label: LAB_00517bec
//   XREF to: 02f33334 (READ)
// 00517bf2: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x4ec] (READ)
// 00517bf6: INC ESI
// 00517bf7: FLDZ
// 00517bf9: MOV dword ptr [0x02f33334],ESI
//   XREF to: 02f33334 (WRITE)
// 00517bff: FCOMPP
// 00517c01: FNSTSW AX
// 00517c03: SAHF
// 00517c04: JNC 0x00517e0a
//   XREF to: 00517e0a (CONDITIONAL_JUMP)
// 00517c0a: IMUL EAX,dword ptr [EBP + 0x1c],0x4c4
//   XREF to: Stack[0xc] (READ)
// 00517c11: XOR EDI,EDI
// 00517c13: MOV dword ptr [ESP + 0x4c0],EDI
//   XREF to: Stack[-0x30] (WRITE)
// 00517c1a: MOV dword ptr [ESP + 0x4d8],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 00517c21: MOV dword ptr [ESP + 0x498],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 00517c28: MOV ESI,dword ptr [ESP + 0x498]
//   Label: LAB_00517c28
//   XREF to: Stack[-0x58] (READ)
// 00517c2f: MOV EAX,dword ptr [EBX + 0x4]
// 00517c32: ADD EAX,ESI
// 00517c34: MOV EDX,dword ptr [ESP + 0x4d8]
//   XREF to: Stack[-0x18] (READ)
// 00517c3b: CMP EDX,dword ptr [EAX + 0x3f8]
// 00517c41: JGE 0x00517e0a
//   XREF to: 00517e0a (CONDITIONAL_JUMP)
// 00517c47: ADD EAX,dword ptr [ESP + 0x4c0]
//   XREF to: Stack[-0x30] (READ)
// 00517c4e: MOV EAX,dword ptr [EAX + 0x3fc]
// 00517c54: IMUL EDX,EAX,0xf0
// 00517c5a: MOV EAX,dword ptr [EBX + 0x48]
// 00517c5d: XOR ECX,ECX
// 00517c5f: ADD EAX,EDX
// 00517c61: MOV dword ptr [ESP + 0x45c],ECX
//   XREF to: Stack[-0x94] (WRITE)
// 00517c68: MOV ESI,dword ptr [EAX + 0x24]
// 00517c6b: MOV dword ptr [ESP + 0x458],EAX
//   XREF to: Stack[-0x98] (WRITE)
// 00517c72: TEST ESI,ESI
// 00517c74: JLE 0x00517cd5
//   XREF to: 00517cd5 (CONDITIONAL_JUMP)
// 00517c76: MOV dword ptr [ESP + 0x4bc],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 00517c7d: MOV EAX,dword ptr [ESP + 0x4bc]
//   Label: LAB_00517c7d
//   XREF to: Stack[-0x34] (READ)
// 00517c84: MOV EAX,dword ptr [EAX + 0x28]
// 00517c87: MOV dword ptr [ESP + 0x460],EAX
//   XREF to: Stack[-0x90] (WRITE)
// 00517c8e: IMUL EDI,EAX,0x8c
// 00517c94: MOV EAX,dword ptr [EBX + 0xc]
// 00517c97: ADD EDI,EAX
// 00517c99: MOV EDX,dword ptr [0x02f33334]
//   XREF to: 02f33334 (READ)
// 00517c9f: CMP EDX,dword ptr [EDI + 0x84]
// 00517ca5: JNZ 0x00517cfa
//   XREF to: 00517cfa (CONDITIONAL_JUMP)
// 00517ca7: MOV EDI,dword ptr [ESP + 0x4bc]
//   Label: LAB_00517ca7
//   XREF to: Stack[-0x34] (READ)
// 00517cae: MOV EAX,dword ptr [ESP + 0x45c]
//   XREF to: Stack[-0x94] (READ)
// 00517cb5: MOV EDX,dword ptr [ESP + 0x458]
//   XREF to: Stack[-0x98] (READ)
// 00517cbc: ADD EDI,0x4
// 00517cbf: INC EAX
// 00517cc0: MOV ECX,dword ptr [EDX + 0x24]
// 00517cc3: MOV dword ptr [ESP + 0x4bc],EDI
//   XREF to: Stack[-0x34] (WRITE)
// 00517cca: MOV dword ptr [ESP + 0x45c],EAX
//   XREF to: Stack[-0x94] (WRITE)
// 00517cd1: CMP EAX,ECX
// 00517cd3: JL 0x00517c7d
//   XREF to: 00517c7d (CONDITIONAL_JUMP)
// 00517cd5: MOV EDI,dword ptr [ESP + 0x4d8]
//   Label: LAB_00517cd5
//   XREF to: Stack[-0x18] (READ)
// 00517cdc: MOV ESI,dword ptr [ESP + 0x4c0]
//   XREF to: Stack[-0x30] (READ)
// 00517ce3: INC EDI
// 00517ce4: ADD ESI,0x4
// 00517ce7: MOV dword ptr [ESP + 0x4d8],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 00517cee: MOV dword ptr [ESP + 0x4c0],ESI
//   XREF to: Stack[-0x30] (WRITE)
// 00517cf5: JMP 0x00517c28
//   XREF to: 00517c28 (UNCONDITIONAL_JUMP)
// 00517cfa: MOV ESI,dword ptr [EBP + 0x1c]
//   Label: LAB_00517cfa
//   XREF to: Stack[0xc] (READ)
// 00517cfd: MOV EAX,EDI
// 00517cff: MOV ECX,dword ptr [EDI + 0x10]
// 00517d02: MOV dword ptr [EDI + 0x84],EDX
// 00517d08: XOR EDX,EDX
// 00517d0a: CMP ECX,ESI
// 00517d0c: JZ 0x00517d1f
//   XREF to: 00517d1f (CONDITIONAL_JUMP)
// 00517d0e: MOV ESI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00517d11: INC EDX
//   Label: LAB_00517d11
// 00517d12: ADD EAX,0x4
// 00517d15: CMP EDX,0x3
// 00517d18: JGE 0x00517d1f
//   XREF to: 00517d1f (CONDITIONAL_JUMP)
// 00517d1a: CMP ESI,dword ptr [EAX + 0x10]
// 00517d1d: JNZ 0x00517d11
//   XREF to: 00517d11 (CONDITIONAL_JUMP)
// 00517d1f: MOV EAX,dword ptr [ESP + 0x43c]
//   Label: LAB_00517d1f
//   XREF to: Stack[-0xb4] (READ)
// 00517d26: XOR ESI,ESI
// 00517d28: TEST EAX,EAX
// 00517d2a: JLE 0x00517d4b
//   XREF to: 00517d4b (CONDITIONAL_JUMP)
// 00517d2c: MOV ECX,dword ptr [ESP + 0x43c]
//   XREF to: Stack[-0xb4] (READ)
// 00517d33: SHL ECX,0x4
// 00517d36: XOR EAX,EAX
// 00517d38: MOV dword ptr [ESP + 0x4b8],ECX
//   XREF to: Stack[-0x38] (WRITE)
// 00517d3f: MOV ECX,dword ptr [ESP + EAX*0x1 + 0x8]
//   Label: LAB_00517d3f
// 00517d43: CMP ECX,dword ptr [EDI]
// 00517d45: JNZ 0x00517deb
//   XREF to: 00517deb (CONDITIONAL_JUMP)
// 00517d4b: CMP ESI,dword ptr [ESP + 0x43c]
//   Label: LAB_00517d4b
//   XREF to: Stack[-0xb4] (READ)
// 00517d52: JGE 0x00517e03
//   XREF to: 00517e03 (CONDITIONAL_JUMP)
// 00517d58: SHL ESI,0x4
// 00517d5b: MOV EAX,dword ptr [ESP + ESI*0x1 + 0x10]
// 00517d5f: MOV dword ptr [EDI + EDX*0x8 + 0x1c],EAX
// 00517d63: MOV EAX,dword ptr [ESP + ESI*0x1 + 0x14]
// 00517d67: MOV dword ptr [EDI + EDX*0x8 + 0x20],EAX
// 00517d6b: MOV ESI,0x2
// 00517d70: LEA EAX,[EDX*0x8 + 0x0]
//   Label: LAB_00517d70
// 00517d77: ADD EAX,EDI
// 00517d79: LEA EDI,[ESI*0x4 + 0x0]
// 00517d80: ADD EDI,EAX
// 00517d82: CMP ESI,dword ptr [EBX + 0x1c]
//   Label: LAB_00517d82
// 00517d85: JGE 0x00517ca7
//   XREF to: 00517ca7 (CONDITIONAL_JUMP)
// 00517d8b: LEA EAX,[ESP + 0x464]
//   XREF to: Stack[-0x8c] (DATA)
// 00517d92: PUSH EAX
// 00517d93: LEA EAX,[ESP + 0x418]
//   XREF to: Stack[-0xdc] (DATA)
// 00517d9a: PUSH EAX
// 00517d9b: PUSH ESI
// 00517d9c: MOV ECX,dword ptr [ESP + 0x46c]
//   XREF to: Stack[-0x90] (READ)
// 00517da3: PUSH ECX
// 00517da4: PUSH EBX
// 00517da5: CALL shape_meshlod.cpp_FUN_00517530
//   XREF to: 00517530 (UNCONDITIONAL_CALL)
// 00517daa: ADD ESP,0x14
// 00517dad: FLD float ptr [ESP + 0x424]
//   XREF to: Stack[-0xcc] (READ)
// 00517db4: FMUL float ptr [ESP + 0x418]
//   XREF to: Stack[-0xd8] (READ)
// 00517dbb: FLD float ptr [ESP + 0x420]
//   XREF to: Stack[-0xd0] (READ)
// 00517dc2: FMUL float ptr [ESP + 0x414]
//   XREF to: Stack[-0xdc] (READ)
// 00517dc9: FADDP
// 00517dcb: FLD float ptr [ESP + 0x428]
//   XREF to: Stack[-0xc8] (READ)
// 00517dd2: FMUL float ptr [ESP + 0x41c]
//   XREF to: Stack[-0xd4] (READ)
// 00517dd9: FADDP
// 00517ddb: ADD EDI,0x4
// 00517dde: FADD float ptr [ESP + 0x464]
//   XREF to: Stack[-0x8c] (READ)
// 00517de5: INC ESI
// 00517de6: FSTP float ptr [EDI + 0x18]
// 00517de9: JMP 0x00517d82
//   XREF to: 00517d82 (UNCONDITIONAL_JUMP)
// 00517deb: MOV ECX,dword ptr [ESP + 0x4b8]
//   Label: LAB_00517deb
//   XREF to: Stack[-0x38] (READ)
// 00517df2: ADD EAX,0x10
// 00517df5: INC ESI
// 00517df6: CMP EAX,ECX
// 00517df8: JL 0x00517d3f
//   XREF to: 00517d3f (CONDITIONAL_JUMP)
// 00517dfe: JMP 0x00517d4b
//   XREF to: 00517d4b (UNCONDITIONAL_JUMP)
// 00517e03: XOR ESI,ESI
//   Label: LAB_00517e03
// 00517e05: JMP 0x00517d70
//   XREF to: 00517d70 (UNCONDITIONAL_JUMP)
// 00517e0a: IMUL EDI,dword ptr [EBP + 0x1c],0x4c4
//   Label: LAB_00517e0a
//   XREF to: Stack[0xc] (READ)
// 00517e11: MOV EAX,dword ptr [EBX + 0x4]
// 00517e14: MOV ECX,dword ptr [EDI + EAX*0x1 + 0x3f8]
// 00517e1b: TEST ECX,ECX
// 00517e1d: JLE 0x00517e50
//   XREF to: 00517e50 (CONDITIONAL_JUMP)
// 00517e1f: LEA ESI,[ECX*0x4 + 0x0]
// 00517e26: XOR EAX,EAX
// 00517e28: MOV EDX,dword ptr [EBX + 0x4]
//   Label: LAB_00517e28
// 00517e2b: ADD EAX,0x4
// 00517e2e: ADD EDX,EDI
// 00517e30: MOV EDX,dword ptr [EDX + EAX*0x1 + 0x3f8]
// 00517e37: MOV dword ptr [ESP + EAX*0x1 + 0x324],EDX
// 00517e3e: CMP EAX,ESI
// 00517e40: JL 0x00517e28
//   XREF to: 00517e28 (CONDITIONAL_JUMP)
// 00517e42: LEA EAX,[EAX]
// 00517e48: LEA EDX,[EDX]
// 00517e4e: MOV EAX,EAX
// 00517e50: TEST ECX,ECX
//   Label: LAB_00517e50
// 00517e52: JLE 0x00517fe9
//   XREF to: 00517fe9 (CONDITIONAL_JUMP)
// 00517e58: IMUL EAX,dword ptr [EBP + 0x18],0x4c4
//   XREF to: Stack[0x8] (READ)
// 00517e5f: XOR EDI,EDI
// 00517e61: SHL ECX,0x2
// 00517e64: MOV dword ptr [ESP + 0x4c8],EDI
//   XREF to: Stack[-0x28] (WRITE)
// 00517e6b: MOV dword ptr [ESP + 0x4cc],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 00517e72: MOV dword ptr [ESP + 0x478],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 00517e79: MOV EAX,dword ptr [ESP + 0x4c8]
//   Label: LAB_00517e79
//   XREF to: Stack[-0x28] (READ)
// 00517e80: MOV EAX,dword ptr [ESP + EAX*0x1 + 0x328]
// 00517e87: MOV dword ptr [ESP + 0x468],EAX
//   XREF to: Stack[-0x88] (WRITE)
// 00517e8e: IMUL EDI,EAX,0xf0
// 00517e94: MOV EAX,dword ptr [EBX + 0x48]
// 00517e97: ADD EDI,EAX
// 00517e99: MOV EDX,dword ptr [EDI + 0x24]
// 00517e9c: XOR ESI,ESI
// 00517e9e: TEST EDX,EDX
// 00517ea0: JLE 0x00517eef
//   XREF to: 00517eef (CONDITIONAL_JUMP)
// 00517ea2: MOV dword ptr [ESP + 0x4c4],EDI
//   XREF to: Stack[-0x2c] (WRITE)
// 00517ea9: MOV EAX,dword ptr [ESP + 0x4c4]
//   Label: LAB_00517ea9
//   XREF to: Stack[-0x2c] (READ)
// 00517eb0: IMUL EAX,dword ptr [EAX + 0x28],0x8c
// 00517eb7: MOV EDX,dword ptr [EBX + 0xc]
// 00517eba: ADD EDX,EAX
// 00517ebc: MOV EAX,EDX
// 00517ebe: ADD EDX,0xc
// 00517ec1: MOV ECX,dword ptr [EAX + 0x10]
//   Label: LAB_00517ec1
// 00517ec4: CMP ECX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00517ec7: JNZ 0x00517ecf
//   XREF to: 00517ecf (CONDITIONAL_JUMP)
// 00517ec9: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00517ecc: MOV dword ptr [EAX + 0x10],ECX
// 00517ecf: ADD EAX,0x4
//   Label: LAB_00517ecf
// 00517ed2: CMP EAX,EDX
// 00517ed4: JNZ 0x00517ec1
//   XREF to: 00517ec1 (CONDITIONAL_JUMP)
// 00517ed6: MOV EAX,dword ptr [ESP + 0x4c4]
//   XREF to: Stack[-0x2c] (READ)
// 00517edd: INC ESI
// 00517ede: ADD EAX,0x4
// 00517ee1: MOV EDX,dword ptr [EDI + 0x24]
// 00517ee4: MOV dword ptr [ESP + 0x4c4],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00517eeb: CMP ESI,EDX
// 00517eed: JL 0x00517ea9
//   XREF to: 00517ea9 (CONDITIONAL_JUMP)
// 00517eef: MOV ECX,0xffffffff
//   Label: LAB_00517eef
// 00517ef4: MOV ESI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00517ef7: MOV EAX,dword ptr [EDI]
// 00517ef9: MOV dword ptr [ESP + 0x46c],ECX
//   XREF to: Stack[-0x84] (WRITE)
// 00517f00: CMP EAX,ESI
// 00517f02: JNZ 0x0051813d
//   XREF to: 0051813d (CONDITIONAL_JUMP)
// 00517f08: PUSH 0x0
// 00517f0a: MOV ECX,dword ptr [EDI + 0x4]
// 00517f0d: PUSH ECX
// 00517f0e: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00517f11: PUSH ESI
// 00517f12: PUSH EBX
// 00517f13: CALL shape_meshlod.cpp_MemoryAdjacentThing_FUN_00515ec0
//   XREF to: 00515ec0 (UNCONDITIONAL_CALL)
// 00517f18: ADD ESP,0x10
// 00517f1b: MOV dword ptr [ESP + 0x46c],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 00517f22: TEST EAX,EAX
// 00517f24: JL 0x00518136
//   XREF to: 00518136 (CONDITIONAL_JUMP)
// 00517f2a: MOV EAX,dword ptr [ESP + 0x46c]
//   Label: LAB_00517f2a
//   XREF to: Stack[-0x84] (READ)
// 00517f31: TEST EAX,EAX
// 00517f33: JL 0x00518196
//   XREF to: 00518196 (CONDITIONAL_JUMP)
// 00517f39: IMUL ESI,EAX,0xf0
// 00517f3f: MOV EAX,dword ptr [EBX + 0x48]
// 00517f42: MOV EDX,dword ptr [ESI + EAX*0x1 + 0x4]
// 00517f46: PUSH EDX
// 00517f47: MOV ECX,dword ptr [ESI + EAX*0x1]
// 00517f4a: PUSH ECX
// 00517f4b: MOV EAX,dword ptr [ESP + 0x474]
//   XREF to: Stack[-0x84] (READ)
// 00517f52: PUSH EAX
// 00517f53: MOV EDX,dword ptr [ESP + 0x474]
//   XREF to: Stack[-0x88] (READ)
// 00517f5a: PUSH EDX
// 00517f5b: PUSH 0x637843
//   XREF to: 00637843 (DATA)
// 00517f60: MOV ECX,dword ptr [EDI + 0x24]
// 00517f63: ADD ESP,0x14
// 00517f66: TEST ECX,ECX
// 00517f68: JLE 0x00517fc9
//   XREF to: 00517fc9 (CONDITIONAL_JUMP)
// 00517f6a: MOV dword ptr [ESP + 0x474],ESI
//   XREF to: Stack[-0x7c] (WRITE)
// 00517f71: MOV ESI,dword ptr [EDI + 0x28]
//   Label: LAB_00517f71
// 00517f74: IMUL EAX,ESI,0x8c
// 00517f7a: MOV ECX,dword ptr [ESP + 0x468]
//   XREF to: Stack[-0x88] (READ)
// 00517f81: PUSH ECX
// 00517f82: MOV EDX,dword ptr [EBX + 0xc]
// 00517f85: PUSH ESI
// 00517f86: ADD EDX,EAX
// 00517f88: PUSH EBX
// 00517f89: MOV dword ptr [ESP + 0x47c],EDX
//   XREF to: Stack[-0x80] (WRITE)
// 00517f90: CALL shape_meshlod.cpp_FUN_005183e0
//   XREF to: 005183e0 (UNCONDITIONAL_CALL)
// 00517f95: ADD ESP,0xc
// 00517f98: SHL EAX,0x2
// 00517f9b: ADD EAX,dword ptr [ESP + 0x470]
//   XREF to: Stack[-0x80] (READ)
// 00517fa2: MOV EDX,dword ptr [ESP + 0x46c]
//   XREF to: Stack[-0x84] (READ)
// 00517fa9: MOV dword ptr [EAX + 0x34],EDX
// 00517fac: MOV ECX,dword ptr [ESP + 0x474]
//   XREF to: Stack[-0x7c] (READ)
// 00517fb3: MOV EAX,dword ptr [EBX + 0x48]
// 00517fb6: PUSH ESI
// 00517fb7: ADD EAX,ECX
// 00517fb9: PUSH EAX
// 00517fba: CALL shape_meshlod.cpp_FUN_00515ca0
//   XREF to: 00515ca0 (UNCONDITIONAL_CALL)
// 00517fbf: MOV ESI,dword ptr [EDI + 0x24]
// 00517fc2: ADD ESP,0x8
// 00517fc5: TEST ESI,ESI
// 00517fc7: JG 0x00517f71
//   XREF to: 00517f71 (CONDITIONAL_JUMP)
// 00517fc9: MOV EDI,dword ptr [ESP + 0x4c8]
//   Label: LAB_00517fc9
//   XREF to: Stack[-0x28] (READ)
// 00517fd0: ADD EDI,0x4
// 00517fd3: MOV EDX,dword ptr [ESP + 0x4cc]
//   XREF to: Stack[-0x24] (READ)
// 00517fda: MOV dword ptr [ESP + 0x4c8],EDI
//   XREF to: Stack[-0x28] (WRITE)
// 00517fe1: CMP EDI,EDX
// 00517fe3: JL 0x00517e79
//   XREF to: 00517e79 (CONDITIONAL_JUMP)
// 00517fe9: IMUL EDI,dword ptr [EBP + 0x1c],0x4c4
//   Label: LAB_00517fe9
//   XREF to: Stack[0xc] (READ)
// 00517ff0: MOV EAX,dword ptr [EBX + 0x4]
// 00517ff3: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00517ff6: MOV dword ptr [EDI + EAX*0x1 + 0x3f8],0x0
// 00518001: IMUL EAX,ESI,0x4c4
// 00518007: MOV EDX,dword ptr [EBX + 0x4]
// 0051800a: ADD EDX,EAX
// 0051800c: MOV dword ptr [ESP + 0x47c],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 00518013: MOV EAX,dword ptr [ESP + 0x420]
//   XREF to: Stack[-0xd0] (READ)
// 0051801a: MOV dword ptr [EDX],EAX
// 0051801c: MOV EAX,dword ptr [ESP + 0x424]
//   XREF to: Stack[-0xcc] (READ)
// 00518023: MOV dword ptr [EDX + 0x4],EAX
// 00518026: MOV EAX,dword ptr [ESP + 0x428]
//   XREF to: Stack[-0xc8] (READ)
// 0051802d: MOV dword ptr [EDX + 0x8],EAX
// 00518030: MOV EDX,dword ptr [EBX + 0x20]
// 00518033: XOR ESI,ESI
// 00518035: TEST EDX,EDX
// 00518037: JLE 0x0051808d
//   XREF to: 0051808d (CONDITIONAL_JUMP)
// 00518039: FLD float ptr [ESP]
//   XREF to: Stack[-0x4f0] (DATA)
// 0051803c: MOV EAX,dword ptr [ESP + 0x47c]
//   XREF to: Stack[-0x74] (READ)
// 00518043: MOV dword ptr [ESP + 0x484],EDI
//   XREF to: Stack[-0x6c] (WRITE)
// 0051804a: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x4ec] (READ)
// 0051804e: MOV ECX,dword ptr [ESP + 0x484]
//   XREF to: Stack[-0x6c] (READ)
// 00518055: MOV dword ptr [ESP + 0x480],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 0051805c: XOR EAX,EAX
// 0051805e: MOV EDX,dword ptr [ESP + 0x480]
//   Label: LAB_0051805e
//   XREF to: Stack[-0x70] (READ)
// 00518065: MOV EDI,dword ptr [EBX + 0x4]
// 00518068: ADD EDX,EDI
// 0051806a: FLD float ptr [EDX + EAX*0x1 + 0xc]
// 0051806e: FMUL ST1
// 00518070: ADD EDI,ECX
// 00518072: FLD float ptr [EDI + EAX*0x1 + 0xc]
// 00518076: FMUL ST3
// 00518078: FADDP
// 0051807a: INC ESI
// 0051807b: FSTP float ptr [EDX + EAX*0x1 + 0xc]
// 0051807f: MOV EDI,dword ptr [EBX + 0x20]
// 00518082: ADD EAX,0x4
// 00518085: CMP ESI,EDI
// 00518087: JL 0x0051805e
//   XREF to: 0051805e (CONDITIONAL_JUMP)
// 00518089: FSTP ST0
// 0051808b: FSTP ST0
// 0051808d: PUSH EBX
//   Label: LAB_0051808d
// 0051808e: ADD ESP,0x4
// 00518091: XOR EAX,EAX
// 00518093: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00518096: MOV dword ptr [ESP + 0x4d4],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0051809d: IMUL EAX,ECX,0x4c4
// 005180a3: MOV EDX,dword ptr [0x02f33334]
//   XREF to: 02f33334 (READ)
// 005180a9: XOR ESI,ESI
// 005180ab: INC EDX
// 005180ac: MOV dword ptr [ESP + 0x4d0],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 005180b3: MOV dword ptr [0x02f33334],EDX
//   XREF to: 02f33334 (WRITE)
// 005180b9: MOV dword ptr [ESP + 0x490],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 005180c0: MOV EDI,dword ptr [ESP + 0x490]
//   Label: LAB_005180c0
//   XREF to: Stack[-0x60] (READ)
// 005180c7: MOV EAX,dword ptr [EBX + 0x4]
// 005180ca: ADD EAX,EDI
// 005180cc: MOV EDX,dword ptr [ESP + 0x4d4]
//   XREF to: Stack[-0x1c] (READ)
// 005180d3: CMP EDX,dword ptr [EAX + 0x3f8]
// 005180d9: JGE 0x00518284
//   XREF to: 00518284 (CONDITIONAL_JUMP)
// 005180df: PUSH EDX
// 005180e0: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005180e3: PUSH EDX
// 005180e4: PUSH EBX
// 005180e5: CALL shape_meshlod.cpp_FUN_0051a980
//   XREF to: 0051a980 (UNCONDITIONAL_CALL)
// 005180ea: MOV EDX,EAX
// 005180ec: IMUL EDX,EDX,0x4c4
// 005180f2: ADD ESP,0xc
// 005180f5: XOR EAX,EAX
// 005180f7: MOV dword ptr [ESP + 0x49c],EDX
//   XREF to: Stack[-0x54] (WRITE)
// 005180fe: XOR EDX,EDX
// 00518100: MOV EDI,dword ptr [ESP + 0x49c]
//   Label: LAB_00518100
//   XREF to: Stack[-0x54] (READ)
// 00518107: MOV ESI,dword ptr [EBX + 0x4]
// 0051810a: ADD EDI,ESI
// 0051810c: CMP EAX,dword ptr [EDI + 0x3f8]
// 00518112: JGE 0x00518202
//   XREF to: 00518202 (CONDITIONAL_JUMP)
// 00518118: MOV ESI,dword ptr [EDX + EDI*0x1 + 0x3fc]
// 0051811f: IMUL ESI,ESI,0xf0
// 00518125: MOV EDI,dword ptr [EBX + 0x48]
// 00518128: ADD EDX,0x4
// 0051812b: INC EAX
// 0051812c: MOV dword ptr [EDI + ESI*0x1 + 0x20],0x1
// 00518134: JMP 0x00518100
//   XREF to: 00518100 (UNCONDITIONAL_JUMP)
// 00518136: MOV dword ptr [EDI],ESI
//   Label: LAB_00518136
// 00518138: JMP 0x00517f2a
//   XREF to: 00517f2a (UNCONDITIONAL_JUMP)
// 0051813d: CMP ESI,dword ptr [EDI + 0x4]
//   Label: LAB_0051813d
// 00518140: JNZ 0x0051816e
//   XREF to: 0051816e (CONDITIONAL_JUMP)
// 00518142: PUSH 0x0
// 00518144: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00518147: PUSH EAX
// 00518148: MOV EDX,dword ptr [EDI]
// 0051814a: PUSH EDX
// 0051814b: PUSH EBX
// 0051814c: CALL shape_meshlod.cpp_MemoryAdjacentThing_FUN_00515ec0
//   XREF to: 00515ec0 (UNCONDITIONAL_CALL)
// 00518151: ADD ESP,0x10
// 00518154: MOV dword ptr [ESP + 0x46c],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 0051815b: TEST EAX,EAX
// 0051815d: JGE 0x00517f2a
//   XREF to: 00517f2a (CONDITIONAL_JUMP)
// 00518163: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00518166: MOV dword ptr [EDI + 0x4],EAX
// 00518169: JMP 0x00517f2a
//   XREF to: 00517f2a (UNCONDITIONAL_JUMP)
// 0051816e: MOV ECX,0x637829
//   Label: LAB_0051816e
//   XREF to: 00637829 (DATA)
// 00518173: MOV ESI,0x992
// 00518178: PUSH 0x63783e
//   XREF to: 0063783e (DATA)
// 0051817d: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00518183: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00518189: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0051818e: ADD ESP,0x4
// 00518191: JMP 0x00517f2a
//   XREF to: 00517f2a (UNCONDITIONAL_JUMP)
// 00518196: MOV EDX,dword ptr [EDI + 0x4]
//   Label: LAB_00518196
// 00518199: CMP EDX,dword ptr [EDI]
// 0051819b: JGE 0x005181a8
//   XREF to: 005181a8 (CONDITIONAL_JUMP)
// 0051819d: LEA EAX,[EDI + 0x4]
// 005181a0: MOV ESI,dword ptr [EAX]
// 005181a2: MOV EDX,dword ptr [EDI]
// 005181a4: MOV dword ptr [EDI],ESI
// 005181a6: MOV dword ptr [EAX],EDX
// 005181a8: MOV ECX,dword ptr [ESP + 0x468]
//   Label: LAB_005181a8
//   XREF to: Stack[-0x88] (READ)
// 005181af: MOV ESI,dword ptr [ESP + 0x478]
//   XREF to: Stack[-0x78] (READ)
// 005181b6: MOV EAX,dword ptr [EBX + 0x4]
// 005181b9: PUSH ECX
// 005181ba: ADD EAX,ESI
// 005181bc: PUSH EAX
// 005181bd: CALL shape_meshlod.cpp_AdjacentEdgesCheck_FUN_00515d90
//   XREF to: 00515d90 (UNCONDITIONAL_CALL)
// 005181c2: ADD ESP,0x8
// 005181c5: JMP 0x00517fc9
//   XREF to: 00517fc9 (UNCONDITIONAL_JUMP)
// 005181ca: PUSH 0x0
//   Label: LAB_005181ca
// 005181cc: MOV ECX,dword ptr [ESP + 0x48c]
//   XREF to: Stack[-0x68] (READ)
// 005181d3: PUSH ECX
// 005181d4: PUSH EBX
// 005181d5: CALL shape_meshlod.cpp_FUN_00516000
//   XREF to: 00516000 (UNCONDITIONAL_CALL)
// 005181da: ADD ESP,0xc
// 005181dd: MOV ESI,dword ptr [ESP + 0x4d0]
//   XREF to: Stack[-0x20] (READ)
// 005181e4: MOV EDI,dword ptr [ESP + 0x4d4]
//   XREF to: Stack[-0x1c] (READ)
// 005181eb: ADD ESI,0x4
// 005181ee: INC EDI
// 005181ef: MOV dword ptr [ESP + 0x4d0],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 005181f6: MOV dword ptr [ESP + 0x4d4],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 005181fd: JMP 0x005180c0
//   XREF to: 005180c0 (UNCONDITIONAL_JUMP)
// 00518202: MOV EDI,dword ptr [ESP + 0x490]
//   Label: LAB_00518202
//   XREF to: Stack[-0x60] (READ)
// 00518209: MOV EAX,dword ptr [ESP + 0x4d0]
//   XREF to: Stack[-0x20] (READ)
// 00518210: ADD ESI,EDI
// 00518212: ADD ESI,EAX
// 00518214: MOV EAX,dword ptr [ESI + 0x3fc]
// 0051821a: MOV dword ptr [ESP + 0x488],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 00518221: IMUL EDX,EAX,0xf0
// 00518227: MOV EAX,dword ptr [EBX + 0x48]
// 0051822a: ADD EAX,EDX
// 0051822c: XOR EDI,EDI
// 0051822e: MOV ESI,dword ptr [EAX + 0x24]
// 00518231: MOV dword ptr [ESP + 0x48c],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 00518238: TEST ESI,ESI
// 0051823a: JLE 0x005181ca
//   XREF to: 005181ca (CONDITIONAL_JUMP)
// 0051823c: MOV ESI,EAX
// 0051823e: MOV EAX,dword ptr [ESI + 0x28]
//   Label: LAB_0051823e
// 00518241: IMUL EAX,EAX,0x8c
// 00518247: MOV EDX,dword ptr [EBX + 0xc]
// 0051824a: ADD EAX,EDX
// 0051824c: MOV ECX,dword ptr [0x02f33334]
//   XREF to: 02f33334 (READ)
// 00518252: CMP ECX,dword ptr [EAX + 0x84]
// 00518258: JNZ 0x00518272
//   XREF to: 00518272 (CONDITIONAL_JUMP)
// 0051825a: MOV EAX,dword ptr [ESP + 0x48c]
//   Label: LAB_0051825a
//   XREF to: Stack[-0x64] (READ)
// 00518261: INC EDI
// 00518262: MOV EDX,dword ptr [EAX + 0x24]
// 00518265: ADD ESI,0x4
// 00518268: CMP EDI,EDX
// 0051826a: JGE 0x005181ca
//   XREF to: 005181ca (CONDITIONAL_JUMP)
// 00518270: JMP 0x0051823e
//   XREF to: 0051823e (UNCONDITIONAL_JUMP)
// 00518272: PUSH EAX
//   Label: LAB_00518272
// 00518273: PUSH EBX
// 00518274: MOV dword ptr [EAX + 0x84],ECX
// 0051827a: CALL shape_meshlod.cpp_FUN_00519830
//   XREF to: 00519830 (UNCONDITIONAL_CALL)
// 0051827f: ADD ESP,0x8
// 00518282: JMP 0x0051825a
//   XREF to: 0051825a (UNCONDITIONAL_JUMP)
// 00518284: MOV EDI,dword ptr [EBX + 0x5c]
//   Label: LAB_00518284
// 00518287: XOR ESI,ESI
// 00518289: TEST EDI,EDI
// 0051828b: JLE 0x005182ba
//   XREF to: 005182ba (CONDITIONAL_JUMP)
// 0051828d: XOR EDI,EDI
// 0051828f: MOV EAX,dword ptr [EBX + 0x60]
//   Label: LAB_0051828f
// 00518292: IMUL EDX,dword ptr [EDI + EAX*0x1 + 0xc],0x8c
// 0051829a: MOV EAX,dword ptr [EBX + 0xc]
// 0051829d: ADD EAX,EDX
// 0051829f: CMP dword ptr [EAX + 0x40],0x0
// 005182a3: JZ 0x005182cb
//   XREF to: 005182cb (CONDITIONAL_JUMP)
// 005182a5: PUSH ESI
//   Label: LAB_005182a5
// 005182a6: PUSH EBX
// 005182a7: CALL shape_meshlod.cpp_FUN_00518300
//   XREF to: 00518300 (UNCONDITIONAL_CALL)
// 005182ac: ADD ESP,0x8
// 005182af: INC ESI
//   Label: LAB_005182af
// 005182b0: MOV ECX,dword ptr [EBX + 0x5c]
// 005182b3: ADD EDI,0x1c
// 005182b6: CMP ESI,ECX
// 005182b8: JL 0x0051828f
//   XREF to: 0051828f (CONDITIONAL_JUMP)
// 005182ba: CMP dword ptr [ESP + 0x430],0x0
//   Label: LAB_005182ba
//   XREF to: Stack[-0xc0] (READ)
// 005182c2: JNZ 0x005182de
//   XREF to: 005182de (CONDITIONAL_JUMP)
// 005182c4: MOV ESP,EBP
// 005182c6: POP EBP
// 005182c7: POP EDI
// 005182c8: POP ESI
// 005182c9: POP EBX
// 005182ca: RET
// 005182cb: MOV ECX,dword ptr [EBP + 0x18]
//   Label: LAB_005182cb
//   XREF to: Stack[0x8] (READ)
// 005182ce: PUSH ECX
// 005182cf: PUSH EAX
// 005182d0: CALL shape_meshlod.cpp_FUN_00515e90
//   XREF to: 00515e90 (UNCONDITIONAL_CALL)
// 005182d5: ADD ESP,0x8
// 005182d8: TEST EAX,EAX
// 005182da: JGE 0x005182a5
//   XREF to: 005182a5 (CONDITIONAL_JUMP)
// 005182dc: JMP 0x005182af
//   XREF to: 005182af (UNCONDITIONAL_JUMP)
// 005182de: PUSH 0x637890
//   Label: LAB_005182de
//   XREF to: 00637890 (DATA)
// 005182e3: ADD ESP,0x4
// 005182e6: PUSH EBX
// 005182e7: ADD ESP,0x4
// 005182ea: MOV ESP,EBP
// 005182ec: POP EBP
// 005182ed: POP EDI
// 005182ee: POP ESI
// 005182ef: POP EBX
// 005182f0: RET
