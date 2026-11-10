// Name: sound_sndmain.cpp_FUN_00554920
// Address: 00554920
// Address Range: [[00554920, 00555260]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_00554920(CSfxSlot *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_sndmain_cpp_FUN_00554920(CSfxSlot *param_1)

{
  float *pfVar1;
  double dVar2;
  CSfxSample *pCVar3;
  float fVar4;
  double dVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  CSfxSlot *pCVar9;
  uint uVar10;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar11;
  float10 fVar12;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  ulonglong local_d0;
  int local_c8;
  int aiStack_c4 [7];
  float afStack_a8 [9];
  float local_84 [4];
  double local_74;
  float local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  float local_20;
  float local_1c;
  int local_18;
  
  if (_DAT_02cf341c < 1) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0xb9f;
    core_main_c_FUN_004e4330();
  }
  if (param_1->playback_state != 0) {
    local_64 = in_stack_00000028;
    local_68 = 1;
    if ((param_1->sample != (CSfxSample *)0x0) &&
       (iVar8 = 0, pCVar9 = param_1, 0 < in_stack_0000002c)) {
      do {
        if (0x3c000000 < *(int *)&pCVar9->field_0x90) {
          local_68 = 0;
          break;
        }
        iVar8 = iVar8 + 1;
        pCVar9 = (CSfxSlot *)&(pCVar9->options).field_0x4;
      } while (iVar8 < in_stack_0000002c);
    }
    iVar8 = 0;
    pCVar9 = param_1;
    if (0 < in_stack_0000002c) {
      do {
        if ((local_68 != 0) || (*(int *)&pCVar9->field_0xd0 < 0)) {
          *(uint *)&pCVar9->field_0xd0 = *(uint *)&pCVar9->field_0xb0;
        }
        iVar11 = iVar8 * 4;
        *(int *)(&stack0x00000008 + iVar11) =
             *(int *)(&stack0x00000008 + iVar11) + *(int *)&pCVar9->field_0xd0 * 4;
        uVar6 = *(int *)&pCVar9->field_0xd0 - *(int *)&pCVar9->field_0xb0;
        uVar10 = (int)uVar6 >> 0x1f;
        if ((int)((uVar6 ^ uVar10) - uVar10) < 2) {
          aiStack_c4[iVar8] = 0;
        }
        else {
          aiStack_c4[iVar8] = *(int *)(&stack0x00000008 + iVar11);
          *(uint *)(&stack0x00000008 + iVar11) = *(uint *)(iVar11 + 0x2cf32a8);
          memset
                    (*(void **)(&stack0x00000008 + iVar11),0,in_stack_00000028 << 2);
        }
        iVar8 = iVar8 + 1;
        pCVar9 = (CSfxSlot *)&(pCVar9->options).field_0x4;
      } while (iVar8 < in_stack_0000002c);
    }
    local_18 = 1 << ((char)(param_1->sample->sample_info).bit_depth - 1U & 0x1f);
    fVar4 = 1.0 / (float)local_18;
    iVar8 = 0;
    local_6c = fVar4;
    pCVar9 = param_1;
    if (0 < in_stack_0000002c) {
      do {
        iVar8 = iVar8 + 1;
        afStack_a8[iVar8] = *(float *)&pCVar9->field_0x90 * fVar4;
        pCVar9 = (CSfxSlot *)&(pCVar9->options).field_0x4;
      } while (iVar8 < in_stack_0000002c);
    }
    while (((iVar8 = in_stack_00000028, param_1->playback_state != 0 &&
            (pCVar3 = param_1->sample, pCVar3 != (CSfxSample *)0x0)) &&
           (0.0 <= *(double *)&(param_1->options).field_0x50))) {
      if ((in_stack_00000028 < 1) ||
         (dVar2 = (double)(((float)(pCVar3->sample_info).sample_rate / (float)in_stack_00000030) *
                          param_1->effective_frequency), dVar2 <= 0.0)) goto LAB_00554a6d;
      dVar5 = (double)*(int *)&pCVar3->field_0x164;
      local_5c = 0;
      local_c8 = in_stack_00000028;
      if (0 < (pCVar3->sample_info).sample_count) {
        local_74 = floor
                             (((double)pCVar3->loop_endpoints[*(int *)&param_1->field_0x114] -
                              *(double *)&(param_1->options).field_0x50) / dVar2);
        fVar12 = (float10)local_74;
        round();
        local_54 = (int)ROUND(fVar12);
        if (local_54 < 0) {
          local_54 = 0;
        }
        if (local_54 < iVar8) {
          local_c8 = local_54;
          local_5c = 1;
        }
      }
      if (local_c8 < 0) {
        local_c8 = 0;
      }
      local_d0 = *(double *)&param_1->field_0x10c;
      local_58 = 0;
      local_74 = floor((dVar5 - local_d0) / dVar2);
      fVar12 = (float10)local_74;
      round();
      local_4c = (int)ROUND(fVar12);
      if (local_4c < 1) {
        local_d0 = local_d0 - dVar5;
        if (local_d0 < 0.0) {
          local_d0 = 0.0;
        }
        local_74 = floor((dVar5 - local_d0) / dVar2);
        fVar12 = (float10)local_74;
        round();
        local_4c = (int)ROUND(fVar12);
      }
      if (local_4c < local_c8) {
        local_c8 = local_4c;
        local_5c = 0;
        local_58 = 1;
      }
      else if (local_4c == local_c8) {
        local_58 = 1;
      }
      if (local_c8 < 0) {
        local_c8 = 0;
      }
      if (local_68 == 0) {
        pCVar3 = param_1->sample;
        iVar8 = local_c8 << 2;
        if ((pCVar3->sample_info).bit_depth == 8) {
          if ((pCVar3->sample_info).num_channels == 2) {
            if (0 < local_c8) {
              local_28 = 0;
              local_40 = iVar8;
              do {
                fVar12 = (float10)local_d0;
                round();
                local_84[0] = (float)(int)(*(byte *)(*(int *)(extraout_EDX + 0x120) +
                                                    (int)ROUND(fVar12) * 2) - 0x80);
                local_18 = *(byte *)((int)param_1->sample->sample_data + (int)ROUND(fVar12) * 2 + 1)
                           - 0x80;
                local_84[1] = (float)local_18;
                uVar6 = 0;
                if (0 < in_stack_0000002c) {
                  iVar8 = 0;
                  do {
                    uVar10 = uVar6 & 1;
                    uVar6 = uVar6 + 1;
                    *(float *)(*(int *)(&stack0x00000008 + iVar8) + local_28) =
                         local_84[uVar10] * *(float *)((int)afStack_a8 + iVar8 + 4U) +
                         *(float *)(*(int *)(&stack0x00000008 + iVar8) + local_28);
                    iVar8 = iVar8 + 4;
                  } while ((int)uVar6 < in_stack_0000002c);
                }
                local_d0 = local_d0 + dVar2;
                local_28 = local_28 + 4;
              } while (local_28 < local_40);
            }
          }
          else if (0 < local_c8) {
            iVar11 = 0;
            local_3c = iVar8;
            do {
              fVar12 = (float10)local_d0;
              round();
              local_18 = *(byte *)((int)param_1->sample->sample_data + (int)ROUND(fVar12)) - 0x80;
              iVar8 = 0;
              local_20 = (float)local_18;
              if (0 < in_stack_0000002c) {
                iVar7 = 0;
                do {
                  iVar8 = iVar8 + 1;
                  *(float *)(*(int *)(&stack0x00000008 + iVar7) + iVar11) =
                       local_20 * *(float *)((int)afStack_a8 + iVar7 + 4U) +
                       *(float *)(*(int *)(&stack0x00000008 + iVar7) + iVar11);
                  iVar7 = iVar7 + 4;
                } while (iVar8 < in_stack_0000002c);
              }
              local_d0 = local_d0 + dVar2;
              iVar11 = iVar11 + 4;
            } while (iVar11 < local_3c);
          }
        }
        else if ((pCVar3->sample_info).num_channels == 2) {
          if (in_stack_0000002c == 2) {
            local_74 = (double)sound_sndmain_cpp_mixResampleStereoToStereo_FUN_005531d0
                                         (pCVar3->sample_data,&stack0x00000008,afStack_a8 + 1,
                                          (uint)local_d0,local_d0._4_4_,dVar2);
            local_d0 = local_74;
          }
          else if (0 < local_c8) {
            local_24 = 0;
            local_38 = iVar8;
            do {
              fVar12 = (float10)local_d0;
              round();
              local_18 = (int)ROUND(fVar12);
              local_84[2] = (float)*(short *)(*(int *)(extraout_EDX_00 + 0x120) + local_18 * 4);
              local_84[3] = (float)param_1->sample->sample_data[local_18 * 2 + 1];
              uVar6 = 0;
              if (0 < in_stack_0000002c) {
                iVar8 = 0;
                do {
                  uVar10 = uVar6 & 1;
                  uVar6 = uVar6 + 1;
                  *(float *)(*(int *)(&stack0x00000008 + iVar8) + local_24) =
                       local_84[uVar10 + 2] * *(float *)((int)afStack_a8 + iVar8 + 4U) +
                       *(float *)(*(int *)(&stack0x00000008 + iVar8) + local_24);
                  iVar8 = iVar8 + 4;
                } while ((int)uVar6 < in_stack_0000002c);
              }
              local_d0 = local_d0 + dVar2;
              local_24 = local_24 + 4;
            } while (local_24 < local_38);
          }
        }
        else if (in_stack_0000002c == 2) {
          local_74 = (double)sound_sndmain_cpp_mixResampleMonoToStereo_FUN_00553090
                                       (pCVar3->sample_data,&stack0x00000008,afStack_a8 + 1,
                                        (uint)local_d0,local_d0._4_4_,dVar2);
          local_d0 = local_74;
        }
        else if (0 < local_c8) {
          iVar11 = 0;
          local_44 = iVar8;
          do {
            fVar12 = (float10)local_d0;
            round();
            local_18 = (int)ROUND(fVar12);
            local_1c = (float)param_1->sample->sample_data[(int)ROUND(fVar12)];
            iVar8 = 0;
            if (0 < in_stack_0000002c) {
              iVar7 = 0;
              do {
                iVar8 = iVar8 + 1;
                *(float *)(*(int *)(&stack0x00000008 + iVar7) + iVar11) =
                     local_1c * *(float *)((int)afStack_a8 + iVar7 + 4U) +
                     *(float *)(*(int *)(&stack0x00000008 + iVar7) + iVar11);
                iVar7 = iVar7 + 4;
              } while (iVar8 < in_stack_0000002c);
            }
            local_d0 = local_d0 + dVar2;
            iVar11 = iVar11 + 4;
          } while (iVar11 < local_44);
        }
      }
      else {
        local_18 = local_c8;
        local_d0 = (double)local_c8 * dVar2 + local_d0;
      }
      if (local_58 != 0) {
        local_d0 = 0.0;
      }
      if (dVar5 <= local_d0) {
        local_d0 = local_d0 - dVar5;
      }
      sound_sndmain_cpp_CSfxSlot_updatePlaybackPos_FUN_00555530(param_1,local_d0);
      if (local_5c != 0) {
        iVar11 = *(int *)&param_1->field_0x114 + 1;
        iVar8 = param_1->sample->loop_destinations[*(int *)&param_1->field_0x114];
        *(int *)&param_1->field_0x114 = iVar11;
        pCVar3 = param_1->sample;
        *(double *)&(param_1->options).field_0x50 = (double)iVar8;
        if (pCVar3->loop_marker_count <= iVar11) {
          *(uint *)&param_1->field_0x114 = 0;
        }
      }
      iVar8 = 0;
      in_stack_00000028 = in_stack_00000028 - local_c8;
      if (0 < in_stack_0000002c) {
        iVar11 = 0;
        do {
          *(int *)(&stack0x00000008 + iVar11) = *(int *)(&stack0x00000008 + iVar11) + local_c8 * 4;
          iVar8 = iVar8 + 1;
          iVar11 = iVar11 + 4;
        } while (iVar8 < in_stack_0000002c);
      }
    }
    sound_sndmain_cpp_CSfxSlot_kill_FUN_00555270(param_1);
LAB_00554a6d:
    local_60 = 0;
    if (0 < in_stack_0000002c) {
      local_50 = 0;
      do {
        if (*(int *)((int)aiStack_c4 + local_50) != 0) {
          local_2c = local_50;
          local_48 = local_64;
          iVar8 = 0;
          local_34 = (local_64 + *(int *)(&param_1->field_0xb0 + local_50)) -
                     *(int *)(&param_1->field_0xd0 + local_50);
          local_30 = local_34 * 4;
          iVar11 = 0;
          if (0 < local_30) {
            do {
              local_18 = (iVar8 / local_34) * 4;
              pfVar1 = (float *)(*(int *)((int)aiStack_c4 + local_50) + iVar11);
              iVar11 = iVar11 + 4;
              *(float *)(*(int *)((int)aiStack_c4 + local_50) + -4 + iVar11) =
                   *(float *)(*(int *)(local_50 + 0x2cf32a8) + local_18) + *pfVar1;
              iVar8 = iVar8 + local_64;
            } while (iVar11 < local_30);
          }
          *(uint *)(&param_1->field_0xd0 + local_50) =
               *(uint *)(&param_1->field_0xb0 + local_50);
        }
        local_60 = local_60 + 1;
        local_50 = local_50 + 4;
      } while (local_60 < in_stack_0000002c);
    }
  }
  return;
}
