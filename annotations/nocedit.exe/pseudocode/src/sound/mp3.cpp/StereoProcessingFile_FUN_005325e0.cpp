// Name: sound_mp3.cpp_StereoProcessingFile_FUN_005325e0
// Address: 005325e0
// Address Range: [[005325e0, 005334a8]]
// Convention: unknown
// Signature: undefined sound_mp3.cpp_StereoProcessingFile_FUN_005325e0()
// Cross-references:
//   sound_mp3.cpp_MpegLoadMaybe_FUN_00534d40 (00534d40) at 005358d9 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 s_..\sound\mp3.cpp_0063b05a
//   TerminatedCString s_Error_in_streo_processin_0063b06b
//   undefined4 DAT_0063b092
//   undefined4 DAT_0063b09a
//   undefined4 DAT_0067e6c8
//   undefined4 DAT_0067e6cc
//   undefined4 DAT_0067e6d0
//   undefined4 DAT_0067e6d4
//   undefined4 DAT_0067e6f8
//   undefined4 DAT_0067e6fc
//   undefined4 DAT_0067e718
//   undefined4 DAT_0067e71c
//   undefined4 DAT_0067e750
//   undefined4 DAT_0067e754
//   undefined4 DAT_0067e758
//   undefined4 DAT_0067e75c
//   undefined4 DAT_0067e760
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined1 DAT_02f68188
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   sound_mp3.cpp_FUN_00532540

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 sound_mp3.cpp_StereoProcessingFile(undefined4 param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4, undefined4 param_5) */

void sound_mp3_cpp_StereoProcessingFile_FUN_005325e0(void)

{
  int *piVar1;
  float fVar2;
  undefined4 uVar3;
  short sVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  int iVar14;
  undefined4 *puVar15;
  BADSPACEBASE *in_ESP;
  float10 fVar16;
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int *in_stack_00000014;
  float local_2078 [576];
  float afStack_1778 [576];
  float afStack_e78 [576];
  short asStack_578 [576];
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  uint local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  undefined4 *local_5c;
  undefined4 *local_58;
  undefined4 *local_54;
  int local_50;
  undefined4 *local_4c;
  undefined4 *local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  
  local_f0 = in_stack_00000014[4];
  if ((*(int *)(*in_stack_00000014 + 0x1c) == 1) &&
     ((*(byte *)(*in_stack_00000014 + 0x20) & 2) != 0)) {
    local_ec = 1;
  }
  else {
    local_ec = 0;
  }
  if ((*(int *)(*in_stack_00000014 + 0x1c) == 1) &&
     ((*(byte *)(*in_stack_00000014 + 0x20) & 1) != 0)) {
    local_ac = 1;
  }
  else {
    local_ac = 0;
  }
  local_e0 = (uint)(*(int *)*in_stack_00000014 == 0);
  local_f4 = ((int *)*in_stack_00000014)[4] + *(int *)*in_stack_00000014 * 3;
  iVar12 = 0;
  do {
    iVar7 = iVar12 + 2;
    *(undefined2 *)((int)asStack_578 + iVar12) = 7;
    iVar12 = iVar7;
  } while (iVar7 != 0x480);
  if ((local_f0 == 2) && (local_ac != 0)) {
    if ((*(int *)(in_stack_00000010 + 0x10) == 0) || (*(int *)(in_stack_00000010 + 0x14) != 2)) {
      iVar7 = 0x1f;
      iVar14 = 0x11;
      iVar12 = 0;
      puVar15 = in_stack_00000004 + 0x22e;
      do {
        if ((puVar15[iVar14 + 0x240] & 0x7fffffff) != 0) {
          iVar12 = iVar7 * 0x12 + iVar14;
          break;
        }
        iVar14 = iVar14 + -1;
        if (iVar14 < 0) {
          puVar15 = puVar15 + -0x12;
          iVar7 = iVar7 + -1;
          iVar14 = 0x11;
        }
      } while (-1 < iVar7);
      iVar14 = local_f4 * 0x94;
      local_e8 = 0;
      iVar7 = *(int *)(&DAT_0067e6c8 + iVar14);
      while (iVar7 <= iVar12) {
        local_e8 = local_e8 + 1;
        piVar1 = (int *)(&DAT_0067e6cc + iVar14);
        iVar14 = iVar14 + 4;
        iVar7 = *piVar1;
      }
      iVar12 = *(int *)(&DAT_0067e6c8 + iVar14);
      local_94 = local_f4 * 0x94;
      local_8c = local_f4 * 0x94 + local_e8 * 4;
      if (local_e8 < 0x15) {
        local_88 = local_e8 * 4;
        do {
          iVar7 = *(int *)(&DAT_0067e6cc + local_8c) - *(int *)(&DAT_0067e6c8 + local_8c);
          if (0 < iVar7) {
            iVar14 = iVar12 * 2;
            local_a8 = in_stack_0000000c + local_88;
            local_90 = iVar12 * 4;
            do {
              sVar4 = *(short *)(local_a8 + 0xf8);
              *(short *)((int)asStack_578 + iVar14) = sVar4;
              if (sVar4 != 7) {
                if (local_e0 == 0) {
                  fVar16 = (float10)fptan((float10)*(short *)((int)asStack_578 + iVar14) *
                                          (float10)_DAT_0063b092);
                  *(float *)((int)afStack_e78 + local_90) = (float)fVar16;
                }
                else {
                  sound_mp3_cpp_FUN_00532540();
                }
              }
              iVar14 = iVar14 + 2;
              iVar12 = iVar12 + 1;
              iVar7 = iVar7 + -1;
              local_90 = local_90 + 4;
            } while (0 < iVar7);
          }
          local_88 = local_88 + 4;
          local_8c = local_8c + 4;
          local_e8 = local_e8 + 1;
        } while (local_88 < 0x54);
      }
      iVar14 = 0x240 - *(int *)(&DAT_0067e71c + local_94);
      iVar7 = *(int *)(&DAT_0067e718 + local_94);
      if (0 < iVar14) {
        local_a4 = iVar7 * 2;
        local_84 = iVar12 * 2;
        iVar12 = iVar12 * 4;
        do {
          iVar6 = local_84;
          iVar11 = local_a4;
          fVar2 = afStack_e78[iVar7];
          iVar14 = iVar14 + -1;
          *(float *)((int)local_2078 + iVar12) = local_2078[iVar7];
          *(float *)((int)afStack_e78 + iVar12) = fVar2;
          uVar5 = *(undefined2 *)((int)asStack_578 + iVar11);
          *(float *)((int)afStack_1778 + iVar12) = afStack_1778[iVar7];
          local_84 = local_84 + 2;
          *(undefined2 *)((int)asStack_578 + iVar6) = uVar5;
          iVar12 = iVar12 + 4;
        } while (0 < iVar14);
      }
    }
    else {
      iVar12 = local_f4 * 0x94;
      if (*(int *)(in_stack_00000010 + 0x18) == 0) {
        local_9c = iVar12;
        local_bc = iVar12;
        local_e4 = *(int *)(in_stack_00000010 + 0x18);
        local_74 = in_stack_0000000c;
        do {
          iVar12 = 0xc;
          local_c0 = -1;
          local_b8 = local_e4 + 1;
          do {
            iVar14 = iVar12 * 4 + local_bc;
            iVar7 = *(int *)(iVar14 + 0x67e724);
            iVar14 = *(int *)(&DAT_0067e728 + iVar14) - iVar7;
            iVar7 = iVar7 * 3 + (local_e4 + 1) * iVar14;
            for (; 0 < iVar14; iVar14 = iVar14 + -1) {
              iVar7 = iVar7 + -1;
              local_18 = 0x12;
              if ((in_stack_00000004[(iVar7 / 0x12) * 0x12 + iVar7 % 0x12 + 0x240] & 0x7fffffff) !=
                  0) {
                local_c0 = iVar12;
                iVar12 = -10;
                iVar14 = -10;
              }
            }
            iVar12 = iVar12 + -1;
          } while (-1 < iVar12);
          local_30 = local_c0 + 1;
          local_b4 = local_74;
          local_7c = local_9c + local_30 * 4;
          if (local_30 < 0xc) {
            local_78 = local_30 * 4;
            do {
              iVar12 = *(int *)(&DAT_0067e728 + local_7c) - *(int *)(local_7c + 0x67e724);
              iVar7 = *(int *)(local_7c + 0x67e724) * 3 + local_e4 * iVar12;
              if (0 < iVar12) {
                iVar14 = iVar7 * 2;
                local_b0 = local_b4 + local_78;
                local_80 = iVar7 * 4;
                do {
                  sVar4 = *(short *)(local_b0 + 0x154);
                  *(short *)((int)asStack_578 + iVar14) = sVar4;
                  if (sVar4 != 7) {
                    if (local_e0 == 0) {
                      fVar16 = (float10)fptan((float10)*(short *)((int)asStack_578 + iVar14) *
                                              (float10)_DAT_0063b092);
                      *(float *)((int)afStack_e78 + local_80) = (float)fVar16;
                    }
                    else {
                      sound_mp3_cpp_FUN_00532540();
                    }
                  }
                  iVar14 = iVar14 + 2;
                  iVar12 = iVar12 + -1;
                  local_80 = local_80 + 4;
                } while (0 < iVar12);
              }
              local_78 = local_78 + 4;
              local_7c = local_7c + 4;
              local_30 = local_30 + 1;
            } while (local_78 < 0x30);
          }
          iVar7 = *(int *)(&DAT_0067e758 + local_9c) - *(int *)(&DAT_0067e754 + local_9c);
          local_28 = *(int *)(&DAT_0067e750 + local_9c) * 3;
          iVar12 = local_e4 *
                   (*(int *)(&DAT_0067e754 + local_9c) - *(int *)(&DAT_0067e750 + local_9c)) +
                   local_28;
          local_28 = local_28 + local_e4 * iVar7;
          if (0 < iVar7) {
            iVar14 = local_28 * 4;
            iVar11 = local_28 * 2;
            do {
              fVar2 = afStack_e78[iVar12];
              iVar7 = iVar7 + -1;
              sVar4 = asStack_578[iVar12];
              *(float *)((int)local_2078 + iVar14) = local_2078[iVar12];
              *(float *)((int)afStack_e78 + iVar14) = fVar2;
              *(short *)((int)asStack_578 + iVar11) = sVar4;
              *(float *)((int)afStack_1778 + iVar14) = afStack_1778[iVar12];
              local_28 = local_28 + 1;
              iVar14 = iVar14 + 4;
              iVar11 = iVar11 + 2;
            } while (0 < iVar7);
          }
          local_e4 = local_e4 + 1;
          local_74 = local_74 + 0x34;
        } while (local_e4 < 3);
      }
      else {
        local_98 = iVar12;
        local_d4 = iVar12;
        local_dc = 0;
        local_24 = 0;
        local_68 = in_stack_0000000c;
        do {
          iVar12 = 0xc;
          local_d8 = 2;
          local_d0 = local_24 + 1;
          do {
            iVar14 = iVar12 * 4 + local_d4;
            iVar7 = *(int *)(iVar14 + 0x67e724);
            iVar14 = *(int *)(&DAT_0067e728 + iVar14) - iVar7;
            iVar7 = (local_24 + 1) * iVar14 + iVar7 * 3;
            for (; 0 < iVar14; iVar14 = iVar14 + -1) {
              iVar7 = iVar7 + -1;
              local_18 = 0x12;
              if ((in_stack_00000004[(iVar7 / 0x12) * 0x12 + iVar7 % 0x12 + 0x240] & 0x7fffffff) !=
                  0) {
                local_d8 = iVar12;
                iVar12 = -10;
                iVar14 = -10;
              }
            }
            iVar12 = iVar12 + -1;
          } while (2 < iVar12);
          local_34 = local_d8 + 1;
          if (local_dc < local_34) {
            local_dc = local_34;
          }
          local_cc = local_68;
          local_6c = local_34 * 4 + local_98;
          for (; local_34 < 0xc; local_34 = local_34 + 1) {
            iVar12 = *(int *)(&DAT_0067e728 + local_6c) - *(int *)(local_6c + 0x67e724);
            iVar7 = *(int *)(local_6c + 0x67e724) * 3 + local_24 * iVar12;
            if (0 < iVar12) {
              iVar14 = iVar7 * 2;
              local_c8 = local_cc + local_34 * 4;
              local_70 = iVar7 * 4;
              do {
                sVar4 = *(short *)(local_c8 + 0x154);
                *(short *)((int)asStack_578 + iVar14) = sVar4;
                if (sVar4 != 7) {
                  if (local_e0 == 0) {
                    fVar16 = (float10)fptan((float10)*(short *)((int)asStack_578 + iVar14) *
                                            (float10)_DAT_0063b092);
                    *(float *)((int)afStack_e78 + local_70) = (float)fVar16;
                  }
                  else {
                    sound_mp3_cpp_FUN_00532540();
                  }
                }
                iVar14 = iVar14 + 2;
                iVar12 = iVar12 + -1;
                local_70 = local_70 + 4;
              } while (0 < iVar12);
            }
            local_6c = local_6c + 4;
          }
          iVar7 = *(int *)(&DAT_0067e758 + local_98) - *(int *)(&DAT_0067e754 + local_98);
          local_2c = *(int *)(&DAT_0067e750 + local_98) * 3;
          iVar12 = local_24 *
                   (*(int *)(&DAT_0067e754 + local_98) - *(int *)(&DAT_0067e750 + local_98)) +
                   local_2c;
          local_2c = local_2c + local_24 * iVar7;
          if (0 < iVar7) {
            iVar14 = local_2c * 4;
            iVar11 = local_2c * 2;
            do {
              fVar2 = afStack_e78[iVar12];
              iVar7 = iVar7 + -1;
              sVar4 = asStack_578[iVar12];
              *(float *)((int)local_2078 + iVar14) = local_2078[iVar12];
              *(float *)((int)afStack_e78 + iVar14) = fVar2;
              *(short *)((int)asStack_578 + iVar11) = sVar4;
              *(float *)((int)afStack_1778 + iVar14) = afStack_1778[iVar12];
              local_2c = local_2c + 1;
              iVar14 = iVar14 + 4;
              iVar11 = iVar11 + 2;
            } while (0 < iVar7);
          }
          local_24 = local_24 + 1;
          local_68 = local_68 + 0x34;
        } while (local_24 < 3);
        if (local_dc < 4) {
          iVar12 = 2;
          iVar7 = 0x11;
          local_1c = -1;
          puVar15 = in_stack_00000004 + 0x24;
          do {
            if ((puVar15[iVar7 + 0x240] & 0x7fffffff) != 0) {
              local_1c = iVar12 * 0x12 + iVar7;
              break;
            }
            iVar7 = iVar7 + -1;
            if (iVar7 < 0) {
              puVar15 = puVar15 + -0x12;
              iVar12 = iVar12 + -1;
              iVar7 = 0x11;
            }
          } while (-1 < iVar12);
          iVar7 = local_f4 * 0x94;
          local_38 = 0;
          iVar12 = *(int *)(&DAT_0067e6c8 + iVar7);
          while (iVar12 <= local_1c) {
            local_38 = local_38 + 1;
            piVar1 = (int *)(&DAT_0067e6cc + iVar7);
            iVar7 = iVar7 + 4;
            iVar12 = *piVar1;
          }
          iVar12 = *(int *)(&DAT_0067e6c8 + iVar7);
          if (local_38 < 8) {
            local_60 = local_38 * 4 + local_f4 * 0x94;
            do {
              iVar7 = *(int *)(&DAT_0067e6cc + local_60) - *(int *)(&DAT_0067e6c8 + local_60);
              if (0 < iVar7) {
                iVar14 = iVar12 * 2;
                local_c4 = in_stack_0000000c + local_38 * 4;
                local_64 = iVar12 * 4;
                do {
                  sVar4 = *(short *)(local_c4 + 0xf8);
                  *(short *)((int)asStack_578 + iVar14) = sVar4;
                  if (sVar4 != 7) {
                    if (local_e0 == 0) {
                      fVar16 = (float10)fptan((float10)*(short *)((int)asStack_578 + iVar14) *
                                              (float10)_DAT_0063b092);
                      *(float *)((int)afStack_e78 + local_64) = (float)fVar16;
                    }
                    else {
                      sound_mp3_cpp_FUN_00532540();
                    }
                  }
                  iVar14 = iVar14 + 2;
                  iVar12 = iVar12 + 1;
                  iVar7 = iVar7 + -1;
                  local_64 = local_64 + 4;
                } while (0 < iVar7);
              }
              local_38 = local_38 + 1;
              local_60 = local_60 + 4;
            } while (local_38 < 8);
          }
        }
      }
    }
  }
  local_5c = in_stack_00000008;
  local_58 = in_stack_00000008 + 0x480;
  do {
    iVar12 = 0;
    puVar15 = local_5c;
    do {
      puVar15 = puVar15 + 0x12;
      puVar10 = local_5c + iVar12 * 0x12;
      do {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      } while (puVar10 != puVar15);
      iVar12 = iVar12 + 1;
    } while (iVar12 < 0x20);
    local_5c = local_5c + 0x240;
  } while (local_5c != in_stack_00000008 + 0x480);
  if (local_f0 == 2) {
    local_20 = 0;
    local_44 = in_stack_00000004;
    local_3c = 0;
    local_40 = in_stack_00000008;
    do {
      local_a0 = local_20 * 0x12;
      local_50 = local_3c;
      iVar12 = 0;
      local_4c = local_40;
      iVar7 = 0;
      local_48 = local_44;
      do {
        local_f8 = local_a0 + iVar12;
        pfVar13 = (float *)((int)local_4c + iVar7);
        pfVar8 = (float *)((int)local_48 + iVar7);
        if (*(short *)((int)asStack_578 + local_50) == 7) {
          if (local_ec == 0) {
            *pfVar13 = *pfVar8;
            pfVar13[0x240] = pfVar8[0x240];
          }
          else {
            fVar2 = (float)_DAT_0063b09a;
            *pfVar13 = (*pfVar8 + pfVar8[0x240]) * fVar2;
            fVar2 = (*pfVar8 - pfVar8[0x240]) * fVar2;
LAB_005327f7:
            pfVar13[0x240] = fVar2;
          }
        }
        else {
          if (local_ac != 0) {
            if (local_e0 == 0) {
              *pfVar13 = (afStack_e78[local_f8] / (afStack_e78[local_f8] + 1.0)) * *pfVar8;
              fVar2 = (1.0 / (afStack_e78[local_f8] + 1.0)) * *pfVar8;
            }
            else {
              *pfVar13 = *pfVar8 * local_2078[local_f8];
              fVar2 = *pfVar8 * afStack_1778[local_f8];
            }
            goto LAB_005327f7;
          }
          g_CurrentFilename = "@..\\sound\\mp3.cpp" + 1;
          g_CurrentLineNumber = 0x9bd;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("Error in streo processing.  File: %s",&DAT_02f68188);
        }
        iVar12 = iVar12 + 1;
        iVar7 = iVar7 + 4;
        local_50 = local_50 + 2;
      } while (iVar12 < 0x12);
      local_20 = local_20 + 1;
      local_40 = local_40 + 0x12;
      local_3c = local_3c + 0x24;
      local_44 = local_44 + 0x12;
    } while (local_20 < 0x20);
  }
  else {
    iVar12 = 0;
    local_54 = in_stack_00000008;
    puVar15 = in_stack_00000004;
    do {
      puVar15 = puVar15 + 0x12;
      puVar9 = in_stack_00000004 + iVar12 * 0x12;
      puVar10 = local_54;
      do {
        uVar3 = *puVar9;
        puVar9 = puVar9 + 1;
        *puVar10 = uVar3;
        puVar10 = puVar10 + 1;
      } while (puVar9 != puVar15);
      iVar12 = iVar12 + 1;
      local_54 = local_54 + 0x12;
    } while (iVar12 < 0x20);
  }
  return;
}


// Assembly code:
// 005325e0: PUSH EBX
//   Label: sound_mp3.cpp_StereoProcessingFile_FUN_005325e0
// 005325e1: PUSH ESI
// 005325e2: PUSH EDI
// 005325e3: PUSH EBP
// 005325e4: MOV EBP,ESP
// 005325e6: SUB ESP,0x206c
// 005325ec: AND ESP,0xfffffff8
// 005325ef: MOV ECX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005325f2: MOV EAX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 005325f5: MOV EDX,dword ptr [EAX + 0x10]
// 005325f8: MOV dword ptr [ESP + 0x1f90],EDX
//   XREF to: Stack[-0xf0] (WRITE)
// 005325ff: MOV EDX,dword ptr [EAX]
// 00532601: CMP dword ptr [EDX + 0x1c],0x1
// 00532605: JNZ 0x0053286d
//   XREF to: 0053286d (CONDITIONAL_JUMP)
// 0053260b: TEST byte ptr [EDX + 0x20],0x2
// 0053260f: JZ 0x0053286d
//   XREF to: 0053286d (CONDITIONAL_JUMP)
// 00532615: MOV EDX,0x1
// 0053261a: MOV dword ptr [ESP + 0x1f94],EDX
//   Label: LAB_0053261a
//   XREF to: Stack[-0xec] (WRITE)
// 00532621: MOV EDX,dword ptr [EAX]
// 00532623: MOV ESI,dword ptr [EDX + 0x1c]
// 00532626: CMP ESI,0x1
// 00532629: JNZ 0x00532874
//   XREF to: 00532874 (CONDITIONAL_JUMP)
// 0053262f: TEST byte ptr [EDX + 0x20],0x1
// 00532633: JZ 0x00532874
//   XREF to: 00532874 (CONDITIONAL_JUMP)
// 00532639: MOV EDX,ESI
// 0053263b: MOV dword ptr [ESP + 0x1fd4],EDX
//   Label: LAB_0053263b
//   XREF to: Stack[-0xac] (WRITE)
// 00532642: MOV EDX,dword ptr [EAX]
// 00532644: CMP dword ptr [EDX],0x0
// 00532647: SETZ DL
// 0053264a: AND EDX,0xff
// 00532650: MOV dword ptr [ESP + 0x1fa0],EDX
//   XREF to: Stack[-0xe0] (WRITE)
// 00532657: MOV EDX,dword ptr [ECX + 0xc]
// 0053265a: AND EDX,0x1
// 0053265d: CMP EDX,0x1
// 00532660: JNZ 0x0053287b
//   XREF to: 0053287b (CONDITIONAL_JUMP)
// 00532666: MOV ESI,0x667f6ee7
// 0053266b: MOV EDI,0x3fe6a09e
// 00532670: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x2080] (DATA)
// 00532673: MOV dword ptr [ESP + 0x4],EDI
//   XREF to: Stack[-0x207c] (WRITE)
// 00532677: MOV EBX,dword ptr [EAX]
//   Label: LAB_00532677
// 00532679: MOV EDX,dword ptr [EBX]
// 0053267b: LEA EAX,[EDX*0x4 + 0x0]
// 00532682: SUB EAX,EDX
// 00532684: MOV EDX,dword ptr [EBX + 0x10]
// 00532687: ADD EDX,EAX
// 00532689: MOV dword ptr [ESP + 0x1f8c],EDX
//   XREF to: Stack[-0xf4] (WRITE)
// 00532690: XOR EAX,EAX
// 00532692: MOV EDX,0x7
// 00532697: ADD EAX,0x2
//   Label: LAB_00532697
// 0053269a: MOV word ptr [ESP + EAX*0x1 + 0x1b06],DX
// 005326a2: CMP EAX,0x480
// 005326a7: JNZ 0x00532697
//   XREF to: 00532697 (CONDITIONAL_JUMP)
// 005326a9: MOV EAX,dword ptr [ESP + 0x1f90]
//   XREF to: Stack[-0xf0] (READ)
// 005326b0: CMP EAX,0x2
// 005326b3: JZ 0x00532891
//   XREF to: 00532891 (CONDITIONAL_JUMP)
// 005326b9: LEA EAX,[EAX]
// 005326bf: NOP
// 005326c0: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_005326c0
//   XREF to: Stack[0x8] (READ)
// 005326c3: MOV dword ptr [ESP + 0x2024],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 005326ca: ADD EAX,0x1200
// 005326cf: MOV dword ptr [ESP + 0x2028],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 005326d6: MOV ESI,dword ptr [ESP + 0x2024]
//   Label: LAB_005326d6
//   XREF to: Stack[-0x5c] (READ)
// 005326dd: XOR EDX,EDX
// 005326df: LEA EBX,[ESI + 0x48]
// 005326e2: IMUL EAX,EDX,0x48
//   Label: LAB_005326e2
// 005326e5: LEA ECX,[ESI + EAX*0x1]
// 005326e8: MOV EAX,EBX
// 005326ea: MOV dword ptr [ECX],0x0
//   Label: LAB_005326ea
// 005326f0: ADD ECX,0x4
// 005326f3: CMP ECX,EAX
// 005326f5: JNZ 0x005326ea
//   XREF to: 005326ea (CONDITIONAL_JUMP)
// 005326f7: INC EDX
// 005326f8: ADD EBX,0x48
// 005326fb: CMP EDX,0x20
// 005326fe: JL 0x005326e2
//   XREF to: 005326e2 (CONDITIONAL_JUMP)
// 00532700: MOV EDX,dword ptr [ESP + 0x2024]
//   XREF to: Stack[-0x5c] (READ)
// 00532707: ADD EDX,0x900
// 0053270d: MOV ECX,dword ptr [ESP + 0x2028]
//   XREF to: Stack[-0x58] (READ)
// 00532714: MOV dword ptr [ESP + 0x2024],EDX
//   XREF to: Stack[-0x5c] (WRITE)
// 0053271b: CMP EDX,ECX
// 0053271d: JNZ 0x005326d6
//   XREF to: 005326d6 (CONDITIONAL_JUMP)
// 0053271f: CMP dword ptr [ESP + 0x1f90],0x2
//   XREF to: Stack[-0xf0] (READ)
// 00532727: JNZ 0x00533457
//   XREF to: 00533457 (CONDITIONAL_JUMP)
// 0053272d: XOR ESI,ESI
// 0053272f: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00532732: MOV dword ptr [ESP + 0x2060],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 00532739: MOV dword ptr [ESP + 0x203c],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 00532740: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00532743: MOV dword ptr [ESP + 0x2044],ESI
//   XREF to: Stack[-0x3c] (WRITE)
// 0053274a: MOV dword ptr [ESP + 0x2040],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 00532751: MOV ESI,dword ptr [ESP + 0x2060]
//   Label: LAB_00532751
//   XREF to: Stack[-0x20] (READ)
// 00532758: IMUL EAX,ESI,0x12
// 0053275b: MOV dword ptr [ESP + 0x1fe0],EAX
//   XREF to: Stack[-0xa0] (WRITE)
// 00532762: MOV EAX,dword ptr [ESP + 0x2044]
//   XREF to: Stack[-0x3c] (READ)
// 00532769: MOV dword ptr [ESP + 0x2030],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 00532770: MOV EAX,dword ptr [ESP + 0x2040]
//   XREF to: Stack[-0x40] (READ)
// 00532777: XOR EBX,EBX
// 00532779: MOV dword ptr [ESP + 0x2034],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 00532780: MOV EAX,dword ptr [ESP + 0x203c]
//   XREF to: Stack[-0x44] (READ)
// 00532787: XOR ESI,ESI
// 00532789: MOV dword ptr [ESP + 0x2038],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 00532790: MOV EAX,dword ptr [ESP + 0x1fe0]
//   Label: LAB_00532790
//   XREF to: Stack[-0xa0] (READ)
// 00532797: MOV ECX,dword ptr [ESP + 0x2030]
//   XREF to: Stack[-0x50] (READ)
// 0053279e: MOV EDX,dword ptr [ESP + 0x2034]
//   XREF to: Stack[-0x4c] (READ)
// 005327a5: ADD EAX,EBX
// 005327a7: MOV DI,word ptr [ESP + ECX*0x1 + 0x1b08]
// 005327af: MOV dword ptr [ESP + 0x1f88],EAX
//   XREF to: Stack[-0xf8] (WRITE)
// 005327b6: MOV EAX,dword ptr [ESP + 0x2038]
//   XREF to: Stack[-0x48] (READ)
// 005327bd: ADD EDX,ESI
// 005327bf: ADD EAX,ESI
// 005327c1: CMP DI,0x7
// 005327c5: JNZ 0x005333cc
//   XREF to: 005333cc (CONDITIONAL_JUMP)
// 005327cb: CMP dword ptr [ESP + 0x1f94],0x0
//   XREF to: Stack[-0xec] (READ)
// 005327d3: JZ 0x005333b7
//   XREF to: 005333b7 (CONDITIONAL_JUMP)
// 005327d9: FLD float ptr [EAX]
// 005327db: FADD float ptr [EAX + 0x900]
// 005327e1: FLD double ptr [0x0063b09a]
//   XREF to: 0063b09a (READ)
// 005327e7: FXCH
// 005327e9: FMUL ST1
// 005327eb: FSTP float ptr [EDX]
// 005327ed: FLD float ptr [EAX]
// 005327ef: FSUB float ptr [EAX + 0x900]
// 005327f5: FMULP
// 005327f7: FSTP float ptr [EDX + 0x900]
//   Label: LAB_005327f7
// 005327fd: MOV EDI,dword ptr [ESP + 0x2030]
//   Label: LAB_005327fd
//   XREF to: Stack[-0x50] (READ)
// 00532804: INC EBX
// 00532805: ADD EDI,0x2
// 00532808: ADD ESI,0x4
// 0053280b: MOV dword ptr [ESP + 0x2030],EDI
//   XREF to: Stack[-0x50] (WRITE)
// 00532812: CMP EBX,0x12
// 00532815: JL 0x00532790
//   XREF to: 00532790 (CONDITIONAL_JUMP)
// 0053281b: MOV EDX,dword ptr [ESP + 0x2040]
//   XREF to: Stack[-0x40] (READ)
// 00532822: MOV ECX,dword ptr [ESP + 0x2044]
//   XREF to: Stack[-0x3c] (READ)
// 00532829: MOV EBX,dword ptr [ESP + 0x2060]
//   XREF to: Stack[-0x20] (READ)
// 00532830: MOV EAX,dword ptr [ESP + 0x203c]
//   XREF to: Stack[-0x44] (READ)
// 00532837: ADD EDX,0x48
// 0053283a: ADD ECX,0x24
// 0053283d: INC EBX
// 0053283e: ADD EAX,0x48
// 00532841: MOV dword ptr [ESP + 0x2040],EDX
//   XREF to: Stack[-0x40] (WRITE)
// 00532848: MOV dword ptr [ESP + 0x2044],ECX
//   XREF to: Stack[-0x3c] (WRITE)
// 0053284f: MOV dword ptr [ESP + 0x2060],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 00532856: MOV dword ptr [ESP + 0x203c],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 0053285d: CMP EBX,0x20
// 00532860: JL 0x00532751
//   XREF to: 00532751 (CONDITIONAL_JUMP)
// 00532866: MOV ESP,EBP
//   Label: LAB_00532866
// 00532868: POP EBP
// 00532869: POP EDI
// 0053286a: POP ESI
// 0053286b: POP EBX
// 0053286c: RET
// 0053286d: XOR EDX,EDX
//   Label: LAB_0053286d
// 0053286f: JMP 0x0053261a
//   XREF to: 0053261a (UNCONDITIONAL_JUMP)
// 00532874: XOR EDX,EDX
//   Label: LAB_00532874
// 00532876: JMP 0x0053263b
//   XREF to: 0053263b (UNCONDITIONAL_JUMP)
// 0053287b: MOV EDX,0x995b2417
//   Label: LAB_0053287b
// 00532880: MOV EBX,0x3feae89f
// 00532885: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x2080] (DATA)
// 00532888: MOV dword ptr [ESP + 0x4],EBX
//   XREF to: Stack[-0x207c] (WRITE)
// 0053288c: JMP 0x00532677
//   XREF to: 00532677 (UNCONDITIONAL_JUMP)
// 00532891: CMP dword ptr [ESP + 0x1fd4],0x0
//   Label: LAB_00532891
//   XREF to: Stack[-0xac] (READ)
// 00532899: JZ 0x005326c0
//   XREF to: 005326c0 (CONDITIONAL_JUMP)
// 0053289f: CMP dword ptr [ECX + 0x10],0x0
// 005328a3: JNZ 0x00532afc
//   XREF to: 00532afc (CONDITIONAL_JUMP)
// 005328a9: MOV ECX,0x1f
//   Label: LAB_005328a9
// 005328ae: MOV EDX,0x11
// 005328b3: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005328b6: XOR EDI,EDI
// 005328b8: ADD EBX,0x8b8
// 005328be: MOV ESI,EDX
// 005328c0: TEST dword ptr [EBX + EDX*0x4 + 0x900],0x7fffffff
//   Label: LAB_005328c0
// 005328cb: JZ 0x0053337b
//   XREF to: 0053337b (CONDITIONAL_JUMP)
// 005328d1: LEA EAX,[ECX*0x8 + 0x0]
// 005328d8: ADD EAX,ECX
// 005328da: ADD EAX,EAX
// 005328dc: LEA EDI,[EAX + EDX*0x1]
// 005328df: MOV EDX,dword ptr [ESP + 0x1f8c]
//   Label: LAB_005328df
//   XREF to: Stack[-0xf4] (READ)
// 005328e6: LEA EAX,[EDX*0x8 + 0x0]
// 005328ed: ADD EAX,EDX
// 005328ef: SHL EAX,0x2
// 005328f2: ADD EDX,EAX
// 005328f4: SHL EDX,0x2
// 005328f7: XOR ESI,ESI
// 005328f9: MOV ECX,dword ptr [EDX + 0x67e6c8]
//   XREF to: 0067e6c8 (DATA)
// 005328ff: MOV EAX,EDX
// 00532901: CMP EDI,ECX
// 00532903: JL 0x00532920
//   XREF to: 00532920 (CONDITIONAL_JUMP)
// 00532905: INC ESI
//   Label: LAB_00532905
// 00532906: MOV EBX,dword ptr [EAX + 0x67e6cc]
//   XREF to: 0067e6cc (DATA)
//   XREF to: 0067e6d0 (DATA)
// 0053290c: ADD EAX,0x4
// 0053290f: CMP EDI,EBX
// 00532911: JGE 0x00532905
//   XREF to: 00532905 (CONDITIONAL_JUMP)
// 00532913: LEA EAX,[EAX]
// 00532919: LEA EDX,[EDX]
// 0053291f: NOP
// 00532920: MOV EDX,dword ptr [ESP + 0x1f8c]
//   Label: LAB_00532920
//   XREF to: Stack[-0xf4] (READ)
// 00532927: MOV dword ptr [ESP + 0x1f98],ESI
//   XREF to: Stack[-0xe8] (WRITE)
// 0053292e: MOV ESI,dword ptr [EAX + 0x67e6c8]
//   XREF to: 0067e6c8 (DATA)
//   XREF to: 0067e6cc (DATA)
//   XREF to: 0067e6d0 (DATA)
// 00532934: LEA EAX,[EDX*0x8 + 0x0]
// 0053293b: ADD EAX,EDX
// 0053293d: SHL EAX,0x2
// 00532940: ADD EAX,EDX
// 00532942: MOV EDI,dword ptr [ESP + 0x1f98]
//   XREF to: Stack[-0xe8] (READ)
// 00532949: SHL EAX,0x2
// 0053294c: SHL EDI,0x2
// 0053294f: MOV dword ptr [ESP + 0x1fec],EAX
//   XREF to: Stack[-0x94] (WRITE)
// 00532956: ADD EAX,EDI
// 00532958: MOV dword ptr [ESP + 0x1ff4],EAX
//   XREF to: Stack[-0x8c] (WRITE)
// 0053295f: CMP dword ptr [ESP + 0x1f98],0x15
//   XREF to: Stack[-0xe8] (READ)
// 00532967: JGE 0x00532a5b
//   XREF to: 00532a5b (CONDITIONAL_JUMP)
// 0053296d: MOV dword ptr [ESP + 0x1ff8],EDI
//   XREF to: Stack[-0x88] (WRITE)
// 00532974: MOV EAX,dword ptr [ESP + 0x1ff4]
//   Label: LAB_00532974
//   XREF to: Stack[-0x8c] (READ)
// 0053297b: MOV EDI,dword ptr [ESP + 0x1ff4]
//   XREF to: Stack[-0x8c] (READ)
// 00532982: MOV EBX,dword ptr [EAX + 0x67e6c8]
//   XREF to: 0067e6cc (DATA)
//   XREF to: 0067e6d0 (DATA)
// 00532988: MOV EDI,dword ptr [EDI + 0x67e6cc]
//   XREF to: 0067e6d0 (DATA)
//   XREF to: 0067e6d4 (DATA)
// 0053298e: SUB EDI,EBX
// 00532990: TEST EDI,EDI
// 00532992: JLE 0x00532a21
//   XREF to: 00532a21 (CONDITIONAL_JUMP)
// 00532998: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0053299b: ADD EAX,dword ptr [ESP + 0x1ff8]
//   XREF to: Stack[-0x88] (READ)
// 005329a2: LEA EBX,[ESI + ESI*0x1]
// 005329a5: MOV dword ptr [ESP + 0x1fd8],EAX
//   XREF to: Stack[-0xa8] (WRITE)
// 005329ac: LEA EAX,[ESI*0x4 + 0x0]
// 005329b3: MOV dword ptr [ESP + 0x1ff0],EAX
//   XREF to: Stack[-0x90] (WRITE)
// 005329ba: MOV EAX,dword ptr [ESP + 0x1fd8]
//   Label: LAB_005329ba
//   XREF to: Stack[-0xa8] (READ)
// 005329c1: MOV AX,word ptr [EAX + 0xf8]
// 005329c8: MOV word ptr [ESP + EBX*0x1 + 0x1b08],AX
// 005329d0: CMP AX,0x7
// 005329d4: JZ 0x00532a07
//   XREF to: 00532a07 (CONDITIONAL_JUMP)
// 005329d6: CMP dword ptr [ESP + 0x1fa0],0x0
//   XREF to: Stack[-0xe0] (READ)
// 005329de: JZ 0x00533393
//   XREF to: 00533393 (CONDITIONAL_JUMP)
// 005329e4: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x2078] (DATA)
// 005329e8: PUSH EAX
// 005329e9: PUSH ESI
// 005329ea: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x207c] (READ)
// 005329ee: PUSH EAX
// 005329ef: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x2080] (READ)
// 005329f3: MOV EAX,dword ptr [ESP + EBX*0x1 + 0x1b12]
// 005329fa: PUSH EDX
// 005329fb: SAR EAX,0x10
// 005329fe: PUSH EAX
// 005329ff: CALL sound_mp3.cpp_FUN_00532540
//   XREF to: 00532540 (UNCONDITIONAL_CALL)
// 00532a04: ADD ESP,0x14
// 00532a07: MOV EAX,dword ptr [ESP + 0x1ff0]
//   Label: LAB_00532a07
//   XREF to: Stack[-0x90] (READ)
// 00532a0e: ADD EBX,0x2
// 00532a11: INC ESI
// 00532a12: ADD EAX,0x4
// 00532a15: DEC EDI
// 00532a16: MOV dword ptr [ESP + 0x1ff0],EAX
//   XREF to: Stack[-0x90] (WRITE)
// 00532a1d: TEST EDI,EDI
// 00532a1f: JG 0x005329ba
//   XREF to: 005329ba (CONDITIONAL_JUMP)
// 00532a21: MOV EDX,dword ptr [ESP + 0x1ff4]
//   Label: LAB_00532a21
//   XREF to: Stack[-0x8c] (READ)
// 00532a28: MOV ECX,dword ptr [ESP + 0x1ff8]
//   XREF to: Stack[-0x88] (READ)
// 00532a2f: MOV EBX,dword ptr [ESP + 0x1f98]
//   XREF to: Stack[-0xe8] (READ)
// 00532a36: ADD EDX,0x4
// 00532a39: ADD ECX,0x4
// 00532a3c: INC EBX
// 00532a3d: MOV dword ptr [ESP + 0x1ff4],EDX
//   XREF to: Stack[-0x8c] (WRITE)
// 00532a44: MOV dword ptr [ESP + 0x1ff8],ECX
//   XREF to: Stack[-0x88] (WRITE)
// 00532a4b: MOV dword ptr [ESP + 0x1f98],EBX
//   XREF to: Stack[-0xe8] (WRITE)
// 00532a52: CMP ECX,0x54
// 00532a55: JL 0x00532974
//   XREF to: 00532974 (CONDITIONAL_JUMP)
// 00532a5b: MOV EAX,dword ptr [ESP + 0x1fec]
//   Label: LAB_00532a5b
//   XREF to: Stack[-0x94] (READ)
// 00532a62: MOV EDI,0x240
// 00532a67: MOV ECX,dword ptr [EAX + 0x67e71c]
//   XREF to: 0067e71c (DATA)
// 00532a6d: MOV EDX,dword ptr [ESP + 0x1fec]
//   XREF to: Stack[-0x94] (READ)
// 00532a74: SUB EDI,ECX
// 00532a76: MOV EDX,dword ptr [EDX + 0x67e718]
//   XREF to: 0067e718 (DATA)
// 00532a7c: TEST EDI,EDI
// 00532a7e: JLE 0x005326c0
//   XREF to: 005326c0 (CONDITIONAL_JUMP)
// 00532a84: LEA EAX,[EDX + EDX*0x1]
// 00532a87: MOV dword ptr [ESP + 0x1fdc],EAX
//   XREF to: Stack[-0xa4] (WRITE)
// 00532a8e: LEA EAX,[ESI*0x4 + 0x0]
// 00532a95: LEA ECX,[ESI + ESI*0x1]
// 00532a98: SHL EDX,0x2
// 00532a9b: MOV dword ptr [ESP + 0x1ffc],ECX
//   XREF to: Stack[-0x84] (WRITE)
// 00532aa2: FLD float ptr [ESP + EDX*0x1 + 0x1208]
//   Label: LAB_00532aa2
// 00532aa9: FLD float ptr [ESP + EDX*0x1 + 0x8]
// 00532aad: MOV EBX,dword ptr [ESP + 0x1fdc]
//   XREF to: Stack[-0xa4] (READ)
// 00532ab4: MOV ECX,dword ptr [ESP + 0x1ffc]
//   XREF to: Stack[-0x84] (READ)
// 00532abb: ADD EAX,0x4
// 00532abe: INC ESI
// 00532abf: DEC EDI
// 00532ac0: FSTP float ptr [ESP + EAX*0x1 + 0x4]
// 00532ac4: FSTP float ptr [ESP + EAX*0x1 + 0x1204]
// 00532acb: FLD float ptr [ESP + EDX*0x1 + 0x908]
// 00532ad2: ADD ECX,0x2
// 00532ad5: MOV BX,word ptr [ESP + EBX*0x1 + 0x1b08]
// 00532add: FSTP float ptr [ESP + EAX*0x1 + 0x904]
// 00532ae4: MOV dword ptr [ESP + 0x1ffc],ECX
//   XREF to: Stack[-0x84] (WRITE)
// 00532aeb: MOV word ptr [ESP + ECX*0x1 + 0x1b06],BX
// 00532af3: TEST EDI,EDI
// 00532af5: JG 0x00532aa2
//   XREF to: 00532aa2 (CONDITIONAL_JUMP)
// 00532af7: JMP 0x005326c0
//   XREF to: 005326c0 (UNCONDITIONAL_JUMP)
// 00532afc: CMP EAX,dword ptr [ECX + 0x14]
//   Label: LAB_00532afc
// 00532aff: JNZ 0x005328a9
//   XREF to: 005328a9 (CONDITIONAL_JUMP)
// 00532b05: MOV EDX,dword ptr [ESP + 0x1f8c]
//   XREF to: Stack[-0xf4] (READ)
// 00532b0c: LEA EAX,[EDX*0x8 + 0x0]
// 00532b13: ADD EAX,EDX
// 00532b15: SHL EAX,0x2
// 00532b18: ADD EAX,EDX
// 00532b1a: MOV EDI,dword ptr [ECX + 0x18]
// 00532b1d: SHL EAX,0x2
// 00532b20: TEST EDI,EDI
// 00532b22: JZ 0x00533059
//   XREF to: 00533059 (CONDITIONAL_JUMP)
// 00532b28: MOV dword ptr [ESP + 0x1fe8],EAX
//   XREF to: Stack[-0x98] (WRITE)
// 00532b2f: MOV dword ptr [ESP + 0x1fac],EAX
//   XREF to: Stack[-0xd4] (WRITE)
// 00532b36: XOR ECX,ECX
// 00532b38: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00532b3b: MOV dword ptr [ESP + 0x1fa4],ECX
//   XREF to: Stack[-0xdc] (WRITE)
// 00532b42: MOV dword ptr [ESP + 0x205c],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 00532b49: MOV dword ptr [ESP + 0x2018],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 00532b50: MOV EBX,0x2
//   Label: LAB_00532b50
// 00532b55: MOV EAX,dword ptr [ESP + 0x205c]
//   XREF to: Stack[-0x24] (READ)
// 00532b5c: MOV ESI,0xc
// 00532b61: INC EAX
// 00532b62: MOV dword ptr [ESP + 0x1fa8],EBX
//   XREF to: Stack[-0xd8] (WRITE)
// 00532b69: MOV dword ptr [ESP + 0x1fb0],EAX
//   XREF to: Stack[-0xd0] (WRITE)
// 00532b70: MOV EDI,dword ptr [ESP + 0x1fac]
//   Label: LAB_00532b70
//   XREF to: Stack[-0xd4] (READ)
// 00532b77: LEA EAX,[ESI*0x4 + 0x0]
// 00532b7e: ADD EAX,EDI
// 00532b80: MOV EBX,dword ptr [EAX + 0x67e728]
//   XREF to: 0067e6fc (DATA)
//   XREF to: 0067e758 (DATA)
// 00532b86: MOV EDX,dword ptr [EAX + 0x67e724]
//   XREF to: 0067e6f8 (DATA)
//   XREF to: 0067e754 (DATA)
// 00532b8c: MOV EAX,dword ptr [ESP + 0x1fb0]
//   XREF to: Stack[-0xd0] (READ)
// 00532b93: SUB EBX,EDX
// 00532b95: IMUL EAX,EBX
// 00532b98: LEA EDX,[EDX + EDX*0x2]
// 00532b9b: ADD EAX,EDX
// 00532b9d: LEA ECX,[EAX + -0x1]
// 00532ba0: TEST EBX,EBX
// 00532ba2: JLE 0x00532bf4
//   XREF to: 00532bf4 (CONDITIONAL_JUMP)
// 00532ba4: MOV EDI,0x12
//   Label: LAB_00532ba4
// 00532ba9: MOV EDX,ECX
// 00532bab: MOV EAX,ECX
// 00532bad: SAR EDX,0x1f
// 00532bb0: IDIV EDI
// 00532bb2: IMUL EAX,EAX,0x48
// 00532bb5: MOV dword ptr [ESP + 0x2068],0x12
//   XREF to: Stack[-0x18] (WRITE)
// 00532bc0: MOV EDX,ECX
// 00532bc2: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00532bc5: SAR EDX,0x1f
// 00532bc8: ADD EDI,EAX
// 00532bca: MOV EAX,ECX
// 00532bcc: IDIV dword ptr [ESP + 0x2068]
//   XREF to: Stack[-0x18] (READ)
// 00532bd3: TEST dword ptr [EDI + EDX*0x4 + 0x900],0x7fffffff
// 00532bde: JZ 0x00532bee
//   XREF to: 00532bee (CONDITIONAL_JUMP)
// 00532be0: MOV dword ptr [ESP + 0x1fa8],ESI
//   XREF to: Stack[-0xd8] (WRITE)
// 00532be7: MOV ESI,0xfffffff6
// 00532bec: MOV EBX,ESI
// 00532bee: DEC EBX
//   Label: LAB_00532bee
// 00532bef: DEC ECX
// 00532bf0: TEST EBX,EBX
// 00532bf2: JG 0x00532ba4
//   XREF to: 00532ba4 (CONDITIONAL_JUMP)
// 00532bf4: DEC ESI
//   Label: LAB_00532bf4
// 00532bf5: CMP ESI,0x3
// 00532bf8: JGE 0x00532b70
//   XREF to: 00532b70 (CONDITIONAL_JUMP)
// 00532bfe: MOV EAX,dword ptr [ESP + 0x1fa8]
//   XREF to: Stack[-0xd8] (READ)
// 00532c05: INC EAX
// 00532c06: MOV ECX,dword ptr [ESP + 0x1fa4]
//   XREF to: Stack[-0xdc] (READ)
// 00532c0d: MOV dword ptr [ESP + 0x204c],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 00532c14: CMP EAX,ECX
// 00532c16: JG 0x00532f25
//   XREF to: 00532f25 (CONDITIONAL_JUMP)
// 00532c1c: MOV EAX,dword ptr [ESP + 0x2018]
//   Label: LAB_00532c1c
//   XREF to: Stack[-0x68] (READ)
// 00532c23: MOV dword ptr [ESP + 0x1fb4],EAX
//   XREF to: Stack[-0xcc] (WRITE)
// 00532c2a: MOV EAX,dword ptr [ESP + 0x204c]
//   XREF to: Stack[-0x34] (READ)
// 00532c31: MOV EBX,dword ptr [ESP + 0x1fe8]
//   XREF to: Stack[-0x98] (READ)
// 00532c38: SHL EAX,0x2
// 00532c3b: ADD EAX,EBX
// 00532c3d: MOV dword ptr [ESP + 0x2014],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 00532c44: MOV ESI,dword ptr [ESP + 0x204c]
//   Label: LAB_00532c44
//   XREF to: Stack[-0x34] (READ)
// 00532c4b: CMP ESI,0xc
// 00532c4e: JGE 0x00532f55
//   XREF to: 00532f55 (CONDITIONAL_JUMP)
// 00532c54: LEA EDX,[ESI*0x4 + 0x0]
// 00532c5b: MOV EAX,dword ptr [ESP + 0x2014]
//   XREF to: Stack[-0x6c] (READ)
// 00532c62: MOV ESI,dword ptr [ESP + 0x2014]
//   XREF to: Stack[-0x6c] (READ)
// 00532c69: MOV EDI,dword ptr [EAX + 0x67e724]
//   XREF to: 0067e758 (DATA)
// 00532c6f: MOV ESI,dword ptr [ESI + 0x67e728]
//   XREF to: 0067e75c (DATA)
// 00532c75: MOV EAX,dword ptr [ESP + 0x205c]
//   XREF to: Stack[-0x24] (READ)
// 00532c7c: SUB ESI,EDI
// 00532c7e: IMUL EAX,ESI
// 00532c81: LEA EDI,[EDI + EDI*0x2]
// 00532c84: ADD EDI,EAX
// 00532c86: TEST ESI,ESI
// 00532c88: JLE 0x00532d16
//   XREF to: 00532d16 (CONDITIONAL_JUMP)
// 00532c8e: MOV EAX,dword ptr [ESP + 0x1fb4]
//   XREF to: Stack[-0xcc] (READ)
// 00532c95: ADD EAX,EDX
// 00532c97: LEA EBX,[EDI + EDI*0x1]
// 00532c9a: MOV dword ptr [ESP + 0x1fb8],EAX
//   XREF to: Stack[-0xc8] (WRITE)
// 00532ca1: LEA EAX,[EDI*0x4 + 0x0]
// 00532ca8: MOV dword ptr [ESP + 0x2010],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 00532caf: MOV EAX,dword ptr [ESP + 0x1fb8]
//   Label: LAB_00532caf
//   XREF to: Stack[-0xc8] (READ)
// 00532cb6: MOV AX,word ptr [EAX + 0x154]
// 00532cbd: MOV word ptr [ESP + EBX*0x1 + 0x1b08],AX
// 00532cc5: CMP AX,0x7
// 00532cc9: JZ 0x00532cfc
//   XREF to: 00532cfc (CONDITIONAL_JUMP)
// 00532ccb: CMP dword ptr [ESP + 0x1fa0],0x0
//   XREF to: Stack[-0xe0] (READ)
// 00532cd3: JZ 0x00532f31
//   XREF to: 00532f31 (CONDITIONAL_JUMP)
// 00532cd9: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x2078] (DATA)
// 00532cdd: PUSH EAX
// 00532cde: PUSH EDI
// 00532cdf: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x207c] (READ)
// 00532ce3: PUSH EDX
// 00532ce4: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x2080] (READ)
// 00532ce8: MOV EAX,dword ptr [ESP + EBX*0x1 + 0x1b12]
// 00532cef: PUSH ECX
// 00532cf0: SAR EAX,0x10
// 00532cf3: PUSH EAX
// 00532cf4: CALL sound_mp3.cpp_FUN_00532540
//   XREF to: 00532540 (UNCONDITIONAL_CALL)
// 00532cf9: ADD ESP,0x14
// 00532cfc: MOV EAX,dword ptr [ESP + 0x2010]
//   Label: LAB_00532cfc
//   XREF to: Stack[-0x70] (READ)
// 00532d03: ADD EBX,0x2
// 00532d06: INC EDI
// 00532d07: ADD EAX,0x4
// 00532d0a: DEC ESI
// 00532d0b: MOV dword ptr [ESP + 0x2010],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 00532d12: TEST ESI,ESI
// 00532d14: JG 0x00532caf
//   XREF to: 00532caf (CONDITIONAL_JUMP)
// 00532d16: MOV ECX,dword ptr [ESP + 0x204c]
//   Label: LAB_00532d16
//   XREF to: Stack[-0x34] (READ)
// 00532d1d: MOV EDX,dword ptr [ESP + 0x2014]
//   XREF to: Stack[-0x6c] (READ)
// 00532d24: INC ECX
// 00532d25: ADD EDX,0x4
// 00532d28: MOV dword ptr [ESP + 0x204c],ECX
//   XREF to: Stack[-0x34] (WRITE)
// 00532d2f: MOV dword ptr [ESP + 0x2014],EDX
//   XREF to: Stack[-0x6c] (WRITE)
// 00532d36: JMP 0x00532c44
//   XREF to: 00532c44 (UNCONDITIONAL_JUMP)
// 00532d3b: MOV EDI,dword ptr [ESP + 0x205c]
//   Label: LAB_00532d3b
//   XREF to: Stack[-0x24] (READ)
// 00532d42: MOV ESI,dword ptr [ESP + 0x2018]
//   XREF to: Stack[-0x68] (READ)
// 00532d49: INC EDI
// 00532d4a: ADD ESI,0x34
// 00532d4d: MOV dword ptr [ESP + 0x205c],EDI
//   XREF to: Stack[-0x24] (WRITE)
// 00532d54: MOV dword ptr [ESP + 0x2018],ESI
//   XREF to: Stack[-0x68] (WRITE)
// 00532d5b: CMP EDI,0x3
// 00532d5e: JL 0x00532b50
//   XREF to: 00532b50 (CONDITIONAL_JUMP)
// 00532d64: CMP dword ptr [ESP + 0x1fa4],0x3
//   XREF to: Stack[-0xdc] (READ)
// 00532d6c: JG 0x005326c0
//   XREF to: 005326c0 (CONDITIONAL_JUMP)
// 00532d72: MOV ECX,0x2
// 00532d77: MOV EDX,0x11
// 00532d7c: MOV EBX,0xffffffff
// 00532d81: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00532d84: MOV dword ptr [ESP + 0x2064],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 00532d8b: ADD EDI,0x90
// 00532d91: MOV EBX,EDX
// 00532d93: TEST dword ptr [EDI + EDX*0x4 + 0x900],0x7fffffff
//   Label: LAB_00532d93
// 00532d9e: JZ 0x0053301d
//   XREF to: 0053301d (CONDITIONAL_JUMP)
// 00532da4: LEA EAX,[ECX*0x8 + 0x0]
// 00532dab: ADD EAX,ECX
// 00532dad: ADD EAX,EAX
// 00532daf: ADD EAX,EDX
// 00532db1: MOV dword ptr [ESP + 0x2064],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00532db8: MOV EDX,dword ptr [ESP + 0x1f8c]
//   Label: LAB_00532db8
//   XREF to: Stack[-0xf4] (READ)
// 00532dbf: LEA EAX,[EDX*0x8 + 0x0]
// 00532dc6: ADD EAX,EDX
// 00532dc8: SHL EAX,0x2
// 00532dcb: ADD EDX,EAX
// 00532dcd: SHL EDX,0x2
// 00532dd0: MOV EDI,dword ptr [ESP + 0x2064]
//   XREF to: Stack[-0x1c] (READ)
// 00532dd7: MOV EAX,EDX
// 00532dd9: MOV EDX,dword ptr [EDX + 0x67e6c8]
//   XREF to: 0067e6c8 (DATA)
// 00532ddf: XOR ESI,ESI
// 00532de1: CMP EDX,EDI
// 00532de3: JG 0x00532e00
//   XREF to: 00532e00 (CONDITIONAL_JUMP)
// 00532de5: MOV ECX,dword ptr [ESP + 0x2064]
//   XREF to: Stack[-0x1c] (READ)
// 00532dec: INC ESI
//   Label: LAB_00532dec
// 00532ded: MOV EDX,dword ptr [EAX + 0x67e6cc]
//   XREF to: 0067e6cc (DATA)
//   XREF to: 0067e6d0 (DATA)
// 00532df3: ADD EAX,0x4
// 00532df6: CMP EDX,ECX
// 00532df8: JLE 0x00532dec
//   XREF to: 00532dec (CONDITIONAL_JUMP)
// 00532dfa: LEA EAX,[EAX]
// 00532e00: MOV dword ptr [ESP + 0x2048],ESI
//   Label: LAB_00532e00
//   XREF to: Stack[-0x38] (WRITE)
// 00532e07: MOV EBX,dword ptr [ESP + 0x2048]
//   XREF to: Stack[-0x38] (READ)
// 00532e0e: MOV ESI,dword ptr [EAX + 0x67e6c8]
//   XREF to: 0067e6c8 (DATA)
//   XREF to: 0067e6cc (DATA)
//   XREF to: 0067e6d0 (DATA)
// 00532e14: CMP EBX,0x8
// 00532e17: JGE 0x005326c0
//   XREF to: 005326c0 (CONDITIONAL_JUMP)
// 00532e1d: MOV EDX,dword ptr [ESP + 0x1f8c]
//   XREF to: Stack[-0xf4] (READ)
// 00532e24: LEA EAX,[EDX*0x8 + 0x0]
// 00532e2b: ADD EAX,EDX
// 00532e2d: SHL EAX,0x2
// 00532e30: ADD EDX,EAX
// 00532e32: SHL EDX,0x2
// 00532e35: LEA EAX,[EBX*0x4 + 0x0]
// 00532e3c: ADD EAX,EDX
// 00532e3e: MOV dword ptr [ESP + 0x2020],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 00532e45: MOV EDI,dword ptr [ESP + 0x2020]
//   Label: LAB_00532e45
//   XREF to: Stack[-0x60] (READ)
// 00532e4c: MOV EDX,dword ptr [ESP + 0x2020]
//   XREF to: Stack[-0x60] (READ)
// 00532e53: MOV EDI,dword ptr [EDI + 0x67e6cc]
//   XREF to: 0067e6cc (DATA)
//   XREF to: 0067e6d0 (DATA)
//   XREF to: 0067e6d4 (DATA)
// 00532e59: MOV ECX,dword ptr [EDX + 0x67e6c8]
//   XREF to: 0067e6cc (DATA)
//   XREF to: 0067e6d0 (DATA)
// 00532e5f: MOV EAX,dword ptr [ESP + 0x2048]
//   XREF to: Stack[-0x38] (READ)
// 00532e66: SUB EDI,ECX
// 00532e68: SHL EAX,0x2
// 00532e6b: TEST EDI,EDI
// 00532e6d: JLE 0x00532ef7
//   XREF to: 00532ef7 (CONDITIONAL_JUMP)
// 00532e73: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00532e76: LEA EBX,[ESI + ESI*0x1]
// 00532e79: ADD EDX,EAX
// 00532e7b: LEA EAX,[ESI*0x4 + 0x0]
// 00532e82: MOV dword ptr [ESP + 0x1fbc],EDX
//   XREF to: Stack[-0xc4] (WRITE)
// 00532e89: MOV dword ptr [ESP + 0x201c],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 00532e90: MOV EAX,dword ptr [ESP + 0x1fbc]
//   Label: LAB_00532e90
//   XREF to: Stack[-0xc4] (READ)
// 00532e97: MOV AX,word ptr [EAX + 0xf8]
// 00532e9e: MOV word ptr [ESP + EBX*0x1 + 0x1b08],AX
// 00532ea6: CMP AX,0x7
// 00532eaa: JZ 0x00532edd
//   XREF to: 00532edd (CONDITIONAL_JUMP)
// 00532eac: CMP dword ptr [ESP + 0x1fa0],0x0
//   XREF to: Stack[-0xe0] (READ)
// 00532eb4: JZ 0x00533035
//   XREF to: 00533035 (CONDITIONAL_JUMP)
// 00532eba: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x2078] (DATA)
// 00532ebe: PUSH EAX
// 00532ebf: PUSH ESI
// 00532ec0: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x207c] (READ)
// 00532ec4: PUSH ECX
// 00532ec5: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x2080] (READ)
// 00532ec9: PUSH EAX
// 00532eca: MOV EAX,dword ptr [ESP + EBX*0x1 + 0x1b16]
// 00532ed1: SAR EAX,0x10
// 00532ed4: PUSH EAX
// 00532ed5: CALL sound_mp3.cpp_FUN_00532540
//   XREF to: 00532540 (UNCONDITIONAL_CALL)
// 00532eda: ADD ESP,0x14
// 00532edd: MOV EAX,dword ptr [ESP + 0x201c]
//   Label: LAB_00532edd
//   XREF to: Stack[-0x64] (READ)
// 00532ee4: ADD EBX,0x2
// 00532ee7: INC ESI
// 00532ee8: ADD EAX,0x4
// 00532eeb: DEC EDI
// 00532eec: MOV dword ptr [ESP + 0x201c],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 00532ef3: TEST EDI,EDI
// 00532ef5: JG 0x00532e90
//   XREF to: 00532e90 (CONDITIONAL_JUMP)
// 00532ef7: MOV EBX,dword ptr [ESP + 0x2020]
//   Label: LAB_00532ef7
//   XREF to: Stack[-0x60] (READ)
// 00532efe: MOV EDI,dword ptr [ESP + 0x2048]
//   XREF to: Stack[-0x38] (READ)
// 00532f05: ADD EBX,0x4
// 00532f08: INC EDI
// 00532f09: MOV dword ptr [ESP + 0x2020],EBX
//   XREF to: Stack[-0x60] (WRITE)
// 00532f10: MOV dword ptr [ESP + 0x2048],EDI
//   XREF to: Stack[-0x38] (WRITE)
// 00532f17: CMP EDI,0x8
// 00532f1a: JGE 0x005326c0
//   XREF to: 005326c0 (CONDITIONAL_JUMP)
// 00532f20: JMP 0x00532e45
//   XREF to: 00532e45 (UNCONDITIONAL_JUMP)
// 00532f25: MOV dword ptr [ESP + 0x1fa4],EAX
//   Label: LAB_00532f25
//   XREF to: Stack[-0xdc] (WRITE)
// 00532f2c: JMP 0x00532c1c
//   XREF to: 00532c1c (UNCONDITIONAL_JUMP)
// 00532f31: FILD word ptr [ESP + EBX*0x1 + 0x1b08]
//   Label: LAB_00532f31
// 00532f38: FMUL double ptr [0x0063b092]
//   XREF to: 0063b092 (READ)
// 00532f3e: FPTAN
// 00532f40: FSTP ST0
// 00532f42: MOV EAX,dword ptr [ESP + 0x2010]
//   XREF to: Stack[-0x70] (READ)
// 00532f49: FSTP float ptr [ESP + EAX*0x1 + 0x1208]
// 00532f50: JMP 0x00532cfc
//   XREF to: 00532cfc (UNCONDITIONAL_JUMP)
// 00532f55: MOV EAX,dword ptr [ESP + 0x1fe8]
//   Label: LAB_00532f55
//   XREF to: Stack[-0x98] (READ)
// 00532f5c: MOV ESI,dword ptr [ESP + 0x1fe8]
//   XREF to: Stack[-0x98] (READ)
// 00532f63: MOV EDI,dword ptr [EAX + 0x67e750]
//   XREF to: 0067e750 (DATA)
// 00532f69: MOV ESI,dword ptr [ESI + 0x67e754]
//   XREF to: 0067e754 (DATA)
// 00532f6f: MOV EDX,dword ptr [ESP + 0x205c]
//   XREF to: Stack[-0x24] (READ)
// 00532f76: SUB ESI,EDI
// 00532f78: IMUL EDX,ESI
// 00532f7b: MOV ECX,dword ptr [ESP + 0x1fe8]
//   XREF to: Stack[-0x98] (READ)
// 00532f82: MOV ESI,dword ptr [ESP + 0x1fe8]
//   XREF to: Stack[-0x98] (READ)
// 00532f89: MOV EBX,dword ptr [ECX + 0x67e754]
//   XREF to: 0067e754 (DATA)
// 00532f8f: MOV ESI,dword ptr [ESI + 0x67e758]
//   XREF to: 0067e758 (DATA)
// 00532f95: MOV ECX,dword ptr [ESP + 0x205c]
//   XREF to: Stack[-0x24] (READ)
// 00532f9c: SUB ESI,EBX
// 00532f9e: IMUL ECX,ESI
// 00532fa1: LEA EAX,[EDI + EDI*0x2]
// 00532fa4: ADD EDX,EAX
// 00532fa6: ADD EAX,ECX
// 00532fa8: MOV dword ptr [ESP + 0x2054],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00532faf: TEST ESI,ESI
// 00532fb1: JLE 0x00532d3b
//   XREF to: 00532d3b (CONDITIONAL_JUMP)
// 00532fb7: MOV ECX,dword ptr [ESP + 0x2054]
//   XREF to: Stack[-0x2c] (READ)
// 00532fbe: LEA EDI,[EDX + EDX*0x1]
// 00532fc1: SHL EAX,0x2
// 00532fc4: SHL EDX,0x2
// 00532fc7: ADD ECX,ECX
// 00532fc9: FLD float ptr [ESP + EDX*0x1 + 0x1208]
//   Label: LAB_00532fc9
// 00532fd0: FLD float ptr [ESP + EDX*0x1 + 0x8]
// 00532fd4: ADD EAX,0x4
// 00532fd7: ADD ECX,0x2
// 00532fda: DEC ESI
// 00532fdb: MOV BX,word ptr [ESP + EDI*0x1 + 0x1b08]
// 00532fe3: FSTP float ptr [ESP + EAX*0x1 + 0x4]
// 00532fe7: FSTP float ptr [ESP + EAX*0x1 + 0x1204]
// 00532fee: MOV word ptr [ESP + ECX*0x1 + 0x1b06],BX
// 00532ff6: MOV EBX,dword ptr [ESP + 0x2054]
//   XREF to: Stack[-0x2c] (READ)
// 00532ffd: FLD float ptr [ESP + EDX*0x1 + 0x908]
// 00533004: INC EBX
// 00533005: FSTP float ptr [ESP + EAX*0x1 + 0x904]
// 0053300c: MOV dword ptr [ESP + 0x2054],EBX
//   XREF to: Stack[-0x2c] (WRITE)
// 00533013: TEST ESI,ESI
// 00533015: JLE 0x00532d3b
//   XREF to: 00532d3b (CONDITIONAL_JUMP)
// 0053301b: JMP 0x00532fc9
//   XREF to: 00532fc9 (UNCONDITIONAL_JUMP)
// 0053301d: DEC EDX
//   Label: LAB_0053301d
// 0053301e: TEST EDX,EDX
// 00533020: JGE 0x00533028
//   XREF to: 00533028 (CONDITIONAL_JUMP)
// 00533022: SUB EDI,0x48
// 00533025: DEC ECX
// 00533026: MOV EDX,EBX
// 00533028: TEST ECX,ECX
//   Label: LAB_00533028
// 0053302a: JGE 0x00532d93
//   XREF to: 00532d93 (CONDITIONAL_JUMP)
// 00533030: JMP 0x00532db8
//   XREF to: 00532db8 (UNCONDITIONAL_JUMP)
// 00533035: FILD word ptr [ESP + EBX*0x1 + 0x1b08]
//   Label: LAB_00533035
// 0053303c: FMUL double ptr [0x0063b092]
//   XREF to: 0063b092 (READ)
// 00533042: FPTAN
// 00533044: FSTP ST0
// 00533046: MOV EAX,dword ptr [ESP + 0x201c]
//   XREF to: Stack[-0x64] (READ)
// 0053304d: FSTP float ptr [ESP + EAX*0x1 + 0x1208]
// 00533054: JMP 0x00532edd
//   XREF to: 00532edd (UNCONDITIONAL_JUMP)
// 00533059: MOV dword ptr [ESP + 0x1fe4],EAX
//   Label: LAB_00533059
//   XREF to: Stack[-0x9c] (WRITE)
// 00533060: MOV dword ptr [ESP + 0x1fc4],EAX
//   XREF to: Stack[-0xbc] (WRITE)
// 00533067: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0053306a: MOV dword ptr [ESP + 0x1f9c],EDI
//   XREF to: Stack[-0xe4] (WRITE)
// 00533071: MOV dword ptr [ESP + 0x200c],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 00533078: MOV ECX,0xffffffff
//   Label: LAB_00533078
// 0053307d: MOV EAX,dword ptr [ESP + 0x1f9c]
//   XREF to: Stack[-0xe4] (READ)
// 00533084: MOV ESI,0xc
// 00533089: INC EAX
// 0053308a: MOV dword ptr [ESP + 0x1fc0],ECX
//   XREF to: Stack[-0xc0] (WRITE)
// 00533091: MOV dword ptr [ESP + 0x1fc8],EAX
//   XREF to: Stack[-0xb8] (WRITE)
// 00533098: MOV EBX,dword ptr [ESP + 0x1fc4]
//   Label: LAB_00533098
//   XREF to: Stack[-0xbc] (READ)
// 0053309f: LEA EAX,[ESI*0x4 + 0x0]
// 005330a6: ADD EAX,EBX
// 005330a8: MOV EBX,dword ptr [EAX + 0x67e728]
//   XREF to: 0067e6fc (DATA)
//   XREF to: 0067e758 (DATA)
// 005330ae: MOV EDI,dword ptr [EAX + 0x67e724]
//   XREF to: 0067e6f8 (DATA)
//   XREF to: 0067e754 (DATA)
// 005330b4: MOV EDX,dword ptr [ESP + 0x1fc8]
//   XREF to: Stack[-0xb8] (READ)
// 005330bb: SUB EBX,EDI
// 005330bd: IMUL EDX,EBX
// 005330c0: LEA EAX,[EDI + EDI*0x2]
// 005330c3: ADD EAX,EDX
// 005330c5: LEA ECX,[EAX + -0x1]
// 005330c8: TEST EBX,EBX
// 005330ca: JLE 0x0053311c
//   XREF to: 0053311c (CONDITIONAL_JUMP)
// 005330cc: MOV EDI,0x12
//   Label: LAB_005330cc
// 005330d1: MOV EDX,ECX
// 005330d3: MOV EAX,ECX
// 005330d5: SAR EDX,0x1f
// 005330d8: IDIV EDI
// 005330da: IMUL EAX,EAX,0x48
// 005330dd: MOV dword ptr [ESP + 0x2068],0x12
//   XREF to: Stack[-0x18] (WRITE)
// 005330e8: MOV EDX,ECX
// 005330ea: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005330ed: SAR EDX,0x1f
// 005330f0: ADD EDI,EAX
// 005330f2: MOV EAX,ECX
// 005330f4: IDIV dword ptr [ESP + 0x2068]
//   XREF to: Stack[-0x18] (READ)
// 005330fb: TEST dword ptr [EDI + EDX*0x4 + 0x900],0x7fffffff
// 00533106: JZ 0x00533116
//   XREF to: 00533116 (CONDITIONAL_JUMP)
// 00533108: MOV dword ptr [ESP + 0x1fc0],ESI
//   XREF to: Stack[-0xc0] (WRITE)
// 0053310f: MOV ESI,0xfffffff6
// 00533114: MOV EBX,ESI
// 00533116: DEC EBX
//   Label: LAB_00533116
// 00533117: DEC ECX
// 00533118: TEST EBX,EBX
// 0053311a: JG 0x005330cc
//   XREF to: 005330cc (CONDITIONAL_JUMP)
// 0053311c: DEC ESI
//   Label: LAB_0053311c
// 0053311d: TEST ESI,ESI
// 0053311f: JGE 0x00533098
//   XREF to: 00533098 (CONDITIONAL_JUMP)
// 00533125: MOV EAX,dword ptr [ESP + 0x1fc0]
//   XREF to: Stack[-0xc0] (READ)
// 0053312c: INC EAX
// 0053312d: MOV dword ptr [ESP + 0x2050],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00533134: MOV EAX,dword ptr [ESP + 0x200c]
//   XREF to: Stack[-0x74] (READ)
// 0053313b: MOV ESI,dword ptr [ESP + 0x2050]
//   XREF to: Stack[-0x30] (READ)
// 00533142: MOV dword ptr [ESP + 0x1fcc],EAX
//   XREF to: Stack[-0xb4] (WRITE)
// 00533149: SHL ESI,0x2
// 0053314c: MOV EAX,dword ptr [ESP + 0x1fe4]
//   XREF to: Stack[-0x9c] (READ)
// 00533153: ADD EAX,ESI
// 00533155: MOV dword ptr [ESP + 0x2004],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 0053315c: CMP dword ptr [ESP + 0x2050],0xc
//   XREF to: Stack[-0x30] (READ)
// 00533164: JGE 0x0053326b
//   XREF to: 0053326b (CONDITIONAL_JUMP)
// 0053316a: MOV dword ptr [ESP + 0x2008],ESI
//   XREF to: Stack[-0x78] (WRITE)
// 00533171: MOV EAX,dword ptr [ESP + 0x2004]
//   Label: LAB_00533171
//   XREF to: Stack[-0x7c] (READ)
// 00533178: MOV ESI,dword ptr [ESP + 0x2004]
//   XREF to: Stack[-0x7c] (READ)
// 0053317f: MOV EDI,dword ptr [EAX + 0x67e724]
//   XREF to: 0067e758 (DATA)
//   XREF to: 0067e75c (DATA)
// 00533185: MOV ESI,dword ptr [ESI + 0x67e728]
//   XREF to: 0067e75c (DATA)
//   XREF to: 0067e760 (DATA)
// 0053318b: MOV EAX,dword ptr [ESP + 0x1f9c]
//   XREF to: Stack[-0xe4] (READ)
// 00533192: SUB ESI,EDI
// 00533194: IMUL EAX,ESI
// 00533197: LEA EDI,[EDI + EDI*0x2]
// 0053319a: ADD EDI,EAX
// 0053319c: TEST ESI,ESI
// 0053319e: JLE 0x00533231
//   XREF to: 00533231 (CONDITIONAL_JUMP)
// 005331a4: MOV EAX,dword ptr [ESP + 0x1fcc]
//   XREF to: Stack[-0xb4] (READ)
// 005331ab: ADD EAX,dword ptr [ESP + 0x2008]
//   XREF to: Stack[-0x78] (READ)
// 005331b2: LEA EBX,[EDI + EDI*0x1]
// 005331b5: MOV dword ptr [ESP + 0x1fd0],EAX
//   XREF to: Stack[-0xb0] (WRITE)
// 005331bc: LEA EAX,[EDI*0x4 + 0x0]
// 005331c3: MOV dword ptr [ESP + 0x2000],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 005331ca: MOV EAX,dword ptr [ESP + 0x1fd0]
//   Label: LAB_005331ca
//   XREF to: Stack[-0xb0] (READ)
// 005331d1: MOV AX,word ptr [EAX + 0x154]
// 005331d8: MOV word ptr [ESP + EBX*0x1 + 0x1b08],AX
// 005331e0: CMP AX,0x7
// 005331e4: JZ 0x00533217
//   XREF to: 00533217 (CONDITIONAL_JUMP)
// 005331e6: CMP dword ptr [ESP + 0x1fa0],0x0
//   XREF to: Stack[-0xe0] (READ)
// 005331ee: JZ 0x00533357
//   XREF to: 00533357 (CONDITIONAL_JUMP)
// 005331f4: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x2078] (DATA)
// 005331f8: PUSH EAX
// 005331f9: PUSH EDI
// 005331fa: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x207c] (READ)
// 005331fe: PUSH EDX
// 005331ff: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x2080] (READ)
// 00533203: MOV EAX,dword ptr [ESP + EBX*0x1 + 0x1b12]
// 0053320a: PUSH ECX
// 0053320b: SAR EAX,0x10
// 0053320e: PUSH EAX
// 0053320f: CALL sound_mp3.cpp_FUN_00532540
//   XREF to: 00532540 (UNCONDITIONAL_CALL)
// 00533214: ADD ESP,0x14
// 00533217: MOV EDX,dword ptr [ESP + 0x2000]
//   Label: LAB_00533217
//   XREF to: Stack[-0x80] (READ)
// 0053321e: ADD EBX,0x2
// 00533221: INC EDI
// 00533222: ADD EDX,0x4
// 00533225: DEC ESI
// 00533226: MOV dword ptr [ESP + 0x2000],EDX
//   XREF to: Stack[-0x80] (WRITE)
// 0053322d: TEST ESI,ESI
// 0053322f: JG 0x005331ca
//   XREF to: 005331ca (CONDITIONAL_JUMP)
// 00533231: MOV EDX,dword ptr [ESP + 0x2004]
//   Label: LAB_00533231
//   XREF to: Stack[-0x7c] (READ)
// 00533238: MOV ECX,dword ptr [ESP + 0x2008]
//   XREF to: Stack[-0x78] (READ)
// 0053323f: MOV EBX,dword ptr [ESP + 0x2050]
//   XREF to: Stack[-0x30] (READ)
// 00533246: ADD EDX,0x4
// 00533249: ADD ECX,0x4
// 0053324c: INC EBX
// 0053324d: MOV dword ptr [ESP + 0x2004],EDX
//   XREF to: Stack[-0x7c] (WRITE)
// 00533254: MOV dword ptr [ESP + 0x2008],ECX
//   XREF to: Stack[-0x78] (WRITE)
// 0053325b: MOV dword ptr [ESP + 0x2050],EBX
//   XREF to: Stack[-0x30] (WRITE)
// 00533262: CMP ECX,0x30
// 00533265: JL 0x00533171
//   XREF to: 00533171 (CONDITIONAL_JUMP)
// 0053326b: MOV EAX,dword ptr [ESP + 0x1fe4]
//   Label: LAB_0053326b
//   XREF to: Stack[-0x9c] (READ)
// 00533272: MOV ESI,dword ptr [ESP + 0x1fe4]
//   XREF to: Stack[-0x9c] (READ)
// 00533279: MOV EDI,dword ptr [EAX + 0x67e750]
//   XREF to: 0067e750 (DATA)
// 0053327f: MOV ESI,dword ptr [ESI + 0x67e754]
//   XREF to: 0067e754 (DATA)
// 00533285: MOV ECX,dword ptr [ESP + 0x1f9c]
//   XREF to: Stack[-0xe4] (READ)
// 0053328c: SUB ESI,EDI
// 0053328e: IMUL ECX,ESI
// 00533291: MOV EDX,dword ptr [ESP + 0x1fe4]
//   XREF to: Stack[-0x9c] (READ)
// 00533298: MOV ESI,dword ptr [ESP + 0x1fe4]
//   XREF to: Stack[-0x9c] (READ)
// 0053329f: MOV EBX,dword ptr [EDX + 0x67e754]
//   XREF to: 0067e754 (DATA)
// 005332a5: MOV ESI,dword ptr [ESI + 0x67e758]
//   XREF to: 0067e758 (DATA)
// 005332ab: MOV EDX,dword ptr [ESP + 0x1f9c]
//   XREF to: Stack[-0xe4] (READ)
// 005332b2: SUB ESI,EBX
// 005332b4: IMUL EDX,ESI
// 005332b7: LEA EAX,[EDI + EDI*0x2]
// 005332ba: ADD ECX,EAX
// 005332bc: ADD EAX,EDX
// 005332be: MOV dword ptr [ESP + 0x2058],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005332c5: TEST ESI,ESI
// 005332c7: JLE 0x00533329
//   XREF to: 00533329 (CONDITIONAL_JUMP)
// 005332c9: MOV EDX,dword ptr [ESP + 0x2058]
//   XREF to: Stack[-0x28] (READ)
// 005332d0: LEA EDI,[ECX + ECX*0x1]
// 005332d3: SHL EAX,0x2
// 005332d6: SHL ECX,0x2
// 005332d9: ADD EDX,EDX
// 005332db: FLD float ptr [ESP + ECX*0x1 + 0x1208]
//   Label: LAB_005332db
// 005332e2: FLD float ptr [ESP + ECX*0x1 + 0x8]
// 005332e6: ADD EAX,0x4
// 005332e9: ADD EDX,0x2
// 005332ec: DEC ESI
// 005332ed: MOV BX,word ptr [ESP + EDI*0x1 + 0x1b08]
// 005332f5: FSTP float ptr [ESP + EAX*0x1 + 0x4]
// 005332f9: FSTP float ptr [ESP + EAX*0x1 + 0x1204]
// 00533300: MOV word ptr [ESP + EDX*0x1 + 0x1b06],BX
// 00533308: MOV EBX,dword ptr [ESP + 0x2058]
//   XREF to: Stack[-0x28] (READ)
// 0053330f: FLD float ptr [ESP + ECX*0x1 + 0x908]
// 00533316: INC EBX
// 00533317: FSTP float ptr [ESP + EAX*0x1 + 0x904]
// 0053331e: MOV dword ptr [ESP + 0x2058],EBX
//   XREF to: Stack[-0x28] (WRITE)
// 00533325: TEST ESI,ESI
// 00533327: JG 0x005332db
//   XREF to: 005332db (CONDITIONAL_JUMP)
// 00533329: MOV EDI,dword ptr [ESP + 0x1f9c]
//   Label: LAB_00533329
//   XREF to: Stack[-0xe4] (READ)
// 00533330: MOV ESI,dword ptr [ESP + 0x200c]
//   XREF to: Stack[-0x74] (READ)
// 00533337: INC EDI
// 00533338: ADD ESI,0x34
// 0053333b: MOV dword ptr [ESP + 0x1f9c],EDI
//   XREF to: Stack[-0xe4] (WRITE)
// 00533342: MOV dword ptr [ESP + 0x200c],ESI
//   XREF to: Stack[-0x74] (WRITE)
// 00533349: CMP EDI,0x3
// 0053334c: JGE 0x005326c0
//   XREF to: 005326c0 (CONDITIONAL_JUMP)
// 00533352: JMP 0x00533078
//   XREF to: 00533078 (UNCONDITIONAL_JUMP)
// 00533357: FILD word ptr [ESP + EBX*0x1 + 0x1b08]
//   Label: LAB_00533357
// 0053335e: FMUL double ptr [0x0063b092]
//   XREF to: 0063b092 (READ)
// 00533364: FPTAN
// 00533366: FSTP ST0
// 00533368: MOV EAX,dword ptr [ESP + 0x2000]
//   XREF to: Stack[-0x80] (READ)
// 0053336f: FSTP float ptr [ESP + EAX*0x1 + 0x1208]
// 00533376: JMP 0x00533217
//   XREF to: 00533217 (UNCONDITIONAL_JUMP)
// 0053337b: DEC EDX
//   Label: LAB_0053337b
// 0053337c: TEST EDX,EDX
// 0053337e: JGE 0x00533386
//   XREF to: 00533386 (CONDITIONAL_JUMP)
// 00533380: SUB EBX,0x48
// 00533383: DEC ECX
// 00533384: MOV EDX,ESI
// 00533386: TEST ECX,ECX
//   Label: LAB_00533386
// 00533388: JGE 0x005328c0
//   XREF to: 005328c0 (CONDITIONAL_JUMP)
// 0053338e: JMP 0x005328df
//   XREF to: 005328df (UNCONDITIONAL_JUMP)
// 00533393: FILD word ptr [ESP + EBX*0x1 + 0x1b08]
//   Label: LAB_00533393
// 0053339a: FMUL double ptr [0x0063b092]
//   XREF to: 0063b092 (READ)
// 005333a0: FPTAN
// 005333a2: FSTP ST0
// 005333a4: MOV EAX,dword ptr [ESP + 0x1ff0]
//   XREF to: Stack[-0x90] (READ)
// 005333ab: FSTP float ptr [ESP + EAX*0x1 + 0x1208]
// 005333b2: JMP 0x00532a07
//   XREF to: 00532a07 (UNCONDITIONAL_JUMP)
// 005333b7: MOV ECX,dword ptr [EAX]
//   Label: LAB_005333b7
// 005333b9: MOV dword ptr [EDX],ECX
// 005333bb: MOV ECX,dword ptr [EAX + 0x900]
// 005333c1: MOV dword ptr [EDX + 0x900],ECX
// 005333c7: JMP 0x005327fd
//   XREF to: 005327fd (UNCONDITIONAL_JUMP)
// 005333cc: CMP dword ptr [ESP + 0x1fd4],0x0
//   Label: LAB_005333cc
//   XREF to: Stack[-0xac] (READ)
// 005333d4: JZ 0x0053342b
//   XREF to: 0053342b (CONDITIONAL_JUMP)
// 005333d6: MOV ECX,dword ptr [ESP + 0x1f88]
//   XREF to: Stack[-0xf8] (READ)
// 005333dd: MOV EDI,dword ptr [ESP + 0x1fa0]
//   XREF to: Stack[-0xe0] (READ)
// 005333e4: SHL ECX,0x2
// 005333e7: TEST EDI,EDI
// 005333e9: JZ 0x00533401
//   XREF to: 00533401 (CONDITIONAL_JUMP)
// 005333eb: FLD float ptr [EAX]
// 005333ed: FMUL float ptr [ESP + ECX*0x1 + 0x8]
// 005333f1: FSTP float ptr [EDX]
// 005333f3: FLD float ptr [EAX]
// 005333f5: FMUL float ptr [ESP + ECX*0x1 + 0x908]
// 005333fc: JMP 0x005327f7
//   XREF to: 005327f7 (UNCONDITIONAL_JUMP)
// 00533401: FLD1
//   Label: LAB_00533401
// 00533403: FADD float ptr [ESP + ECX*0x1 + 0x1208]
// 0053340a: FDIVR float ptr [ESP + ECX*0x1 + 0x1208]
// 00533411: FMUL float ptr [EAX]
// 00533413: FLD1
// 00533415: FXCH
// 00533417: FSTP float ptr [EDX]
// 00533419: FADD float ptr [ESP + ECX*0x1 + 0x1208]
// 00533420: FLD1
// 00533422: FDIVRP
// 00533424: FMUL float ptr [EAX]
// 00533426: JMP 0x005327f7
//   XREF to: 005327f7 (UNCONDITIONAL_JUMP)
// 0053342b: PUSH 0x2f68188
//   Label: LAB_0053342b
//   XREF to: 02f68188 (DATA)
// 00533430: MOV EAX,0x63b05a
//   XREF to: 0063b05a (PARAM)
// 00533435: MOV EDX,0x9bd
// 0053343a: PUSH 0x63b06b
//   XREF to: 0063b06b (DATA)
// 0053343f: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 00533444: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 0053344a: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0053344f: ADD ESP,0x8
// 00533452: JMP 0x005327fd
//   XREF to: 005327fd (UNCONDITIONAL_JUMP)
// 00533457: MOV ESI,dword ptr [EBP + 0x14]
//   Label: LAB_00533457
//   XREF to: Stack[0x4] (READ)
// 0053345a: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0053345d: XOR EBX,EBX
// 0053345f: ADD ESI,0x48
// 00533462: MOV dword ptr [ESP + 0x202c],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 00533469: IMUL EAX,EBX,0x48
//   Label: LAB_00533469
// 0053346c: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0053346f: MOV ECX,ESI
// 00533471: ADD EAX,EDX
// 00533473: MOV EDX,dword ptr [ESP + 0x202c]
//   XREF to: Stack[-0x54] (READ)
// 0053347a: ADD EDX,0x4
//   Label: LAB_0053347a
// 0053347d: FLD float ptr [EAX]
// 0053347f: ADD EAX,0x4
// 00533482: FSTP float ptr [EDX + -0x4]
// 00533485: CMP EAX,ECX
// 00533487: JNZ 0x0053347a
//   XREF to: 0053347a (CONDITIONAL_JUMP)
// 00533489: MOV ECX,dword ptr [ESP + 0x202c]
//   XREF to: Stack[-0x54] (READ)
// 00533490: INC EBX
// 00533491: ADD ECX,0x48
// 00533494: ADD ESI,0x48
// 00533497: MOV dword ptr [ESP + 0x202c],ECX
//   XREF to: Stack[-0x54] (WRITE)
// 0053349e: CMP EBX,0x20
// 005334a1: JGE 0x00532866
//   XREF to: 00532866 (CONDITIONAL_JUMP)
// 005334a7: JMP 0x00533469
//   XREF to: 00533469 (UNCONDITIONAL_JUMP)
