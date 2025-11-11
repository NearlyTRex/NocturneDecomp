// Name: sound_sndmain.cpp_CSfxSlot_mix_FUN_005a75e0
// Address: 005a75e0
// Address Range: [[005a75e0, 005a7e52]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_CSfxSlot_mix_FUN_005a75e0(CSfxSlot * this_ptr)
// Cross-references:
//   sound_sndmain.cpp_FUN_005aca90 (005aca90) at 005acc82 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_sndmain_cpp_0065036f
//   TerminatedCString s_SfxSlot_mix_must_be_lock_00650384
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   void*[8] g_ChannelTertiaryBuffers
//   undefined4 g_ChannelTertiaryBuffers[1]
//   int g_SoundLockCount
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_math.c_floor_FUN_005feb90
//   crt_math.c_round_FUN_005fe6b0
//   crt_memory.c_memset_FUN_005fde40
//   sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60
//   sound_sndmain.cpp_CSfxSlot_updatePlaybackPos_FUN_005a8170
//   sound_sndmain.cpp_FUN_005a5e70
//   sound_sndmain.cpp_FUN_005a5fb0

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSlot_mix_FUN_005a75e0(CSfxSlot *this_ptr)

{
  float *pfVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined4 extraout_EAX;
  undefined4 extraout_EAX_00;
  undefined4 extraout_EAX_01;
  CSfxSample *pCVar5;
  CSfxSlot *pCVar6;
  int iVar7;
  uint uVar8;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  void **ppvVar9;
  int iVar10;
  BADSPACEBASE *in_ESP;
  float10 in_ST0;
  float10 fVar11;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  undefined8 uVar12;
  double dVar13;
  int in_stack_00000028;
  void **in_stack_0000002c;
  int in_stack_00000030;
  double dStack_bc;
  undefined4 local_b0;
  undefined4 uStack_ac;
  int iStack_a4;
  int aiStack_a0 [9];
  undefined8 local_7c;
  float local_74 [4];
  char *local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  int local_40;
  void **local_3c;
  void **local_38;
  void **local_34;
  void **local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0xa27;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSlot::mix - must be locked!");
  }
  if (this_ptr->field2_0x74 != 0) {
    local_58 = in_stack_00000028;
    local_60 = 1;
    if (this_ptr->sample != (CSfxSample *)0x0) {
      local_74[3] = 1.0 / (float)(1 << ((char)(this_ptr->sample->sample_info).bit_depth + 6U & 0x1f)
                                 );
      iVar7 = 0;
      pCVar6 = this_ptr;
      if (0 < (int)in_stack_0000002c) {
        do {
          if (local_74[3] < *(float *)(pCVar6->field4_0x7c + 0x24)) {
            local_60 = 0;
            break;
          }
          iVar7 = iVar7 + 1;
          pCVar6 = (CSfxSlot *)&(pCVar6->options).sample_data;
        } while (iVar7 < (int)in_stack_0000002c);
      }
    }
    iVar7 = 0;
    pCVar6 = this_ptr;
    if (0 < (int)in_stack_0000002c) {
      do {
        if ((local_60 != 0) || (*(int *)(pCVar6->field4_0x7c + 100) < 0)) {
          *(undefined4 *)(pCVar6->field4_0x7c + 100) = *(undefined4 *)(pCVar6->field4_0x7c + 0x44);
        }
        iVar10 = iVar7 * 4;
        *(int *)(&stack0x00000008 + iVar10) =
             *(int *)(&stack0x00000008 + iVar10) + *(int *)(pCVar6->field4_0x7c + 100) * 4;
        uVar4 = *(int *)(pCVar6->field4_0x7c + 100) - *(int *)(pCVar6->field4_0x7c + 0x44);
        uVar8 = (int)uVar4 >> 0x1f;
        if ((int)((uVar4 ^ uVar8) - uVar8) < 2) {
          aiStack_a0[iVar7] = 0;
        }
        else {
          aiStack_a0[iVar7] = *(int *)(&stack0x00000008 + iVar10);
          *(void **)(&stack0x00000008 + iVar10) = g_ChannelTertiaryBuffers[iVar7];
          crt_memory_c_memset_FUN_005fde40
                    (*(void **)(&stack0x00000008 + iVar10),0,in_stack_00000028 << 2);
        }
        iVar7 = iVar7 + 1;
        pCVar6 = (CSfxSlot *)&(pCVar6->options).sample_data;
      } while (iVar7 < (int)in_stack_0000002c);
    }
    local_64 = this_ptr->field4_0x7c + 0x24;
    while (((iVar7 = in_stack_00000028, this_ptr->field2_0x74 != 0 &&
            (pCVar5 = this_ptr->sample, pCVar5 != (CSfxSample *)0x0)) &&
           (0.0 <= *(double *)((this_ptr->options).field5_0x14 + 0x4c)))) {
      if ((in_stack_00000028 < 1) ||
         (dVar13 = (double)(((float)(pCVar5->sample_info).total_samples / (float)in_stack_00000030)
                           * *(float *)this_ptr->field4_0x7c),
         local_b0 = (undefined4)((ulonglong)dVar13 >> 0x20), dVar13 <= 0.0)) goto LAB_005a770c;
      iVar10 = *(int *)pCVar5->field8_0x160;
      uStack_ac = SUB84((double)iVar10,0);
      iStack_a4 = in_stack_00000028;
      local_4c = 0;
      if (0 < (pCVar5->sample_info).bytes_per_second) {
        dVar13 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
        in_ST0 = (float10)dVar13;
        fVar11 = (float10)(double)CONCAT44(extraout_EDX,extraout_EAX);
        crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,extraout_EAX));
        local_5c = (int)ROUND(fVar11);
        if (local_5c < iVar7) {
          local_4c = 1;
          iStack_a4 = local_5c;
        }
      }
      dStack_bc = *(double *)this_ptr->field6_0x11c;
      local_50 = 0;
      dVar13 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
      in_ST0 = (float10)dVar13;
      fVar11 = (float10)(double)CONCAT44(extraout_EDX_00,extraout_EAX_00);
      crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX_00,extraout_EAX_00));
      local_44 = (int)ROUND(fVar11);
      uVar12 = local_7c;
      if (local_44 < 1) {
        dStack_bc = dStack_bc - (double)iVar10;
        if (dStack_bc < 0.0) {
          dStack_bc = 0.0;
        }
        dVar13 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
        in_ST0 = (float10)dVar13;
        fVar11 = (float10)(double)CONCAT44(extraout_EDX_01,extraout_EAX_01);
        crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX_01,extraout_EAX_01));
        local_44 = (int)ROUND(fVar11);
        uVar12 = local_7c;
      }
      if (local_44 < iStack_a4) {
        iStack_a4 = local_44;
        local_4c = 0;
        local_50 = 1;
      }
      else if (local_44 == iStack_a4) {
        local_50 = 1;
      }
      if (local_60 == 0) {
        pCVar5 = this_ptr->sample;
        ppvVar9 = (void **)(iStack_a4 << 2);
        local_7c = uVar12;
        if ((pCVar5->sample_info).bit_depth == 8) {
          if ((pCVar5->sample_info).sample_rate == 2) {
            if (0 < iStack_a4) {
              uVar4 = 0;
              local_1c = 0;
              local_3c = ppvVar9;
              do {
                fVar11 = (float10)dStack_bc;
                dVar13 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(this_ptr->sample,uVar4));
                local_74[2] = (float)(int)(*(byte *)(*(int *)((int)((ulonglong)dVar13 >> 0x20) +
                                                             0x120) + (int)ROUND(fVar11) * 2) - 0x80
                                          );
                local_74[3] = (float)(int)(*(byte *)((int)this_ptr->sample->sample_data +
                                                    (int)ROUND(fVar11) * 2 + 1) - 0x80);
                uVar4 = 0;
                pCVar6 = this_ptr;
                if (0 < (int)in_stack_0000002c) {
                  do {
                    uVar8 = uVar4 & 1;
                    iVar7 = uVar4 * 4;
                    uVar4 = uVar4 + 1;
                    *(float *)(*(int *)(&stack0x00000008 + iVar7) + local_18) =
                         local_74[uVar8 + 2] * *(float *)(pCVar6->field4_0x7c + 0x24) +
                         *(float *)(*(int *)(&stack0x00000008 + iVar7) + local_18);
                    pCVar6 = (CSfxSlot *)&(pCVar6->options).sample_data;
                  } while ((int)uVar4 < (int)in_stack_0000002c);
                }
                dStack_bc = dStack_bc + (double)CONCAT44(uStack_ac,local_b0);
                local_18 = local_18 + 4;
                uVar12 = local_7c;
              } while (local_18 < (int)local_38);
            }
          }
          else if (0 < iStack_a4) {
            iVar7 = 0;
            local_38 = ppvVar9;
            do {
              fVar11 = (float10)dStack_bc;
              dVar13 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(ppvVar9,pCVar5));
              ppvVar9 = (void **)((ulonglong)dVar13 >> 0x20);
              bVar3 = *(byte *)((int)this_ptr->sample->sample_data + (int)ROUND(fVar11));
              pCVar5 = (CSfxSample *)0x0;
              pCVar6 = this_ptr;
              if (0 < (int)in_stack_0000002c) {
                do {
                  iVar10 = (int)pCVar5 * 4;
                  pCVar5 = (CSfxSample *)(pCVar5->name + 1);
                  *(float *)(*(int *)(&stack0x00000008 + iVar10) + iVar7) =
                       (float)(int)(bVar3 - 0x80) * *(float *)(pCVar6->field4_0x7c + 0x24) +
                       *(float *)(*(int *)(&stack0x00000008 + iVar10) + iVar7);
                  ppvVar9 = &(pCVar6->options).sample_data;
                  pCVar6 = (CSfxSlot *)ppvVar9;
                } while ((int)pCVar5 < (int)in_stack_0000002c);
              }
              dStack_bc = dStack_bc + (double)CONCAT44(uStack_ac,local_b0);
              iVar7 = iVar7 + 4;
              uVar12 = local_7c;
            } while (iVar7 < (int)local_34);
          }
        }
        else if ((pCVar5->sample_info).sample_rate == 2) {
          if (in_stack_0000002c == (void **)&DAT_00000002) {
            uVar12 = sound_sndmain_cpp_FUN_005a5fb0();
            in_ST0 = extraout_ST0;
          }
          else if (0 < iStack_a4) {
            uVar4 = 0;
            local_20 = 0;
            local_34 = ppvVar9;
            do {
              fVar11 = (float10)dStack_bc;
              dVar13 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(this_ptr->sample,uVar4));
              local_74[0] = (float)*(short *)(*(int *)((int)((ulonglong)dVar13 >> 0x20) + 0x120) +
                                             (int)ROUND(fVar11) * 4);
              local_74[1] = (float)*(short *)((int)this_ptr->sample->sample_data +
                                             (int)ROUND(fVar11) * 4 + 2);
              uVar4 = 0;
              pCVar6 = this_ptr;
              if (0 < (int)in_stack_0000002c) {
                do {
                  uVar8 = uVar4 & 1;
                  iVar7 = uVar4 * 4;
                  uVar4 = uVar4 + 1;
                  *(float *)(*(int *)(&stack0x00000008 + iVar7) + local_1c) =
                       local_74[uVar8] * *(float *)(pCVar6->field4_0x7c + 0x24) +
                       *(float *)(*(int *)(&stack0x00000008 + iVar7) + local_1c);
                  pCVar6 = (CSfxSlot *)&(pCVar6->options).sample_data;
                } while ((int)uVar4 < (int)in_stack_0000002c);
              }
              dStack_bc = dStack_bc + (double)CONCAT44(uStack_ac,local_b0);
              local_1c = local_1c + 4;
              uVar12 = local_7c;
            } while (local_1c < (int)local_30);
          }
        }
        else if (in_stack_0000002c == (void **)&DAT_00000002) {
          uVar12 = sound_sndmain_cpp_FUN_005a5e70();
          in_ST0 = extraout_ST0_00;
        }
        else if (0 < iStack_a4) {
          iVar7 = 0;
          local_30 = ppvVar9;
          do {
            fVar11 = (float10)dStack_bc;
            dVar13 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(ppvVar9,this_ptr->sample));
            local_14 = (float)*(short *)(*(int *)(SUB84(dVar13,0) + 0x120) + (int)ROUND(fVar11) * 2)
            ;
            iVar10 = 0;
            pCVar6 = this_ptr;
            ppvVar9 = in_stack_0000002c;
            if (0 < (int)in_stack_0000002c) {
              do {
                iVar2 = iVar10 * 4;
                iVar10 = iVar10 + 1;
                *(float *)(*(int *)(&stack0x00000008 + iVar2) + iVar7) =
                     local_14 * *(float *)(pCVar6->field4_0x7c + 0x24) +
                     *(float *)(*(int *)(&stack0x00000008 + iVar2) + iVar7);
                ppvVar9 = &(pCVar6->options).sample_data;
                pCVar6 = (CSfxSlot *)ppvVar9;
              } while (iVar10 < (int)in_stack_0000002c);
            }
            dStack_bc = dStack_bc + (double)CONCAT44(uStack_ac,local_b0);
            iVar7 = iVar7 + 4;
            uVar12 = local_7c;
          } while (iVar7 < local_2c);
        }
      }
      local_7c = uVar12;
      sound_sndmain_cpp_CSfxSlot_updatePlaybackPos_FUN_005a8170(this_ptr);
      if (local_48 != 0) {
        iVar10 = *(int *)(this_ptr->field6_0x11c + 8) + 1;
        iVar7 = *(int *)(this_ptr->sample->field3_0x124 +
                        *(int *)(this_ptr->field6_0x11c + 8) * 4 + 0x18);
        *(int *)(this_ptr->field6_0x11c + 8) = iVar10;
        pCVar5 = this_ptr->sample;
        *(double *)((this_ptr->options).field5_0x14 + 0x4c) = (double)iVar7;
        if (*(int *)pCVar5->field3_0x124 <= iVar10) {
          this_ptr->field6_0x11c[8] = '\0';
          this_ptr->field6_0x11c[9] = '\0';
          this_ptr->field6_0x11c[10] = '\0';
          this_ptr->field6_0x11c[0xb] = '\0';
        }
      }
      iVar7 = 0;
      in_stack_00000028 = in_stack_00000028 - aiStack_a0[0];
      if (0 < (int)in_stack_0000002c) {
        iVar10 = 0;
        do {
          *(int *)(&stack0x00000008 + iVar10) =
               *(int *)(&stack0x00000008 + iVar10) + aiStack_a0[0] * 4;
          iVar7 = iVar7 + 1;
          iVar10 = iVar10 + 4;
        } while (iVar7 < (int)in_stack_0000002c);
      }
    }
    sound_sndmain_cpp_CSfxSlot_kill_FUN_005a7e60(this_ptr);
LAB_005a770c:
    local_54 = 0;
    if (0 < (int)in_stack_0000002c) {
      local_48 = 0;
      do {
        if (*(int *)((int)aiStack_a0 + local_48) != 0) {
          local_24 = local_48;
          local_40 = local_58;
          iVar7 = 0;
          local_2c = (local_58 + *(int *)(this_ptr->field4_0x7c + local_48 + 0x44)) -
                     *(int *)(this_ptr->field4_0x7c + local_48 + 100);
          local_28 = local_2c * 4;
          iVar10 = 0;
          if (0 < local_28) {
            do {
              pfVar1 = (float *)(*(int *)((int)aiStack_a0 + local_48) + iVar10);
              iVar10 = iVar10 + 4;
              *(float *)(*(int *)((int)aiStack_a0 + local_48) + -4 + iVar10) =
                   *(float *)(*(int *)((int)g_ChannelTertiaryBuffers + local_48) +
                             (iVar7 / local_2c) * 4) + *pfVar1;
              iVar7 = iVar7 + local_58;
            } while (iVar10 < local_28);
          }
          *(undefined4 *)(this_ptr->field4_0x7c + local_48 + 100) =
               *(undefined4 *)(this_ptr->field4_0x7c + local_48 + 0x44);
        }
        local_54 = local_54 + 1;
        local_48 = local_48 + 4;
      } while (local_54 < (int)in_stack_0000002c);
    }
  }
  return;
}


// Assembly code:
// 005a75e0: PUSH EBX
//   Label: sound_sndmain.cpp_CSfxSlot_mix_FUN_005a75e0
// 005a75e1: PUSH ESI
// 005a75e2: PUSH EDI
// 005a75e3: PUSH EBP
// 005a75e4: MOV EBP,ESP
// 005a75e6: SUB ESP,0xb0
// 005a75ec: AND ESP,0xfffffff8
// 005a75ef: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005a75f2: CMP dword ptr [0x03f6940c],0x0
//   XREF to: 03f6940c (READ)
// 005a75f9: JLE 0x005a774e
//   XREF to: 005a774e (CONDITIONAL_JUMP)
// 005a75ff: CMP dword ptr [EDI + 0x74],0x0
//   Label: LAB_005a75ff
// 005a7603: JZ 0x005a7747
//   XREF to: 005a7747 (CONDITIONAL_JUMP)
// 005a7609: MOV EAX,dword ptr [EBP + 0x38]
//   XREF to: Stack[0x28] (READ)
// 005a760c: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 005a7610: MOV EAX,0x1
// 005a7615: MOV EDX,dword ptr [EDI + 0x78]
// 005a7618: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 005a761c: TEST EDX,EDX
// 005a761e: JZ 0x005a7668
//   XREF to: 005a7668 (CONDITIONAL_JUMP)
// 005a7620: MOV ECX,dword ptr [EDX + 0x104]
// 005a7626: ADD ECX,0x6
// 005a7629: SHL EAX,CL
// 005a762b: MOV dword ptr [ESP + 0xac],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005a7632: FILD dword ptr [ESP + 0xac]
//   XREF to: Stack[-0x14] (READ)
// 005a7639: FLD1
// 005a763b: FDIVRP
// 005a763d: XOR EDX,EDX
// 005a763f: MOV ECX,dword ptr [EBP + 0x3c]
//   XREF to: Stack[0x2c] (READ)
// 005a7642: FSTP float ptr [ESP + 0x54]
//   XREF to: Stack[-0x6c] (WRITE)
// 005a7646: TEST ECX,ECX
// 005a7648: JLE 0x005a7668
//   XREF to: 005a7668 (CONDITIONAL_JUMP)
// 005a764a: MOV EBX,dword ptr [EBP + 0x3c]
//   XREF to: Stack[0x2c] (READ)
// 005a764d: MOV ECX,EDI
// 005a764f: FLD float ptr [ECX + 0xa0]
//   Label: LAB_005a764f
// 005a7655: FCOMP float ptr [ESP + 0x54]
//   XREF to: Stack[-0x6c] (READ)
// 005a7659: FNSTSW AX
// 005a765b: SAHF
// 005a765c: JBE 0x005a7776
//   XREF to: 005a7776 (CONDITIONAL_JUMP)
// 005a7662: XOR ESI,ESI
// 005a7664: MOV dword ptr [ESP + 0x5c],ESI
//   XREF to: Stack[-0x64] (WRITE)
// 005a7668: MOV EAX,dword ptr [EBP + 0x3c]
//   Label: LAB_005a7668
//   XREF to: Stack[0x2c] (READ)
// 005a766b: XOR ESI,ESI
// 005a766d: TEST EAX,EAX
// 005a766f: JLE 0x005a76ef
//   XREF to: 005a76ef (CONDITIONAL_JUMP)
// 005a7675: MOV EBX,EDI
// 005a7677: CMP dword ptr [ESP + 0x5c],0x0
//   Label: LAB_005a7677
//   XREF to: Stack[-0x64] (READ)
// 005a767c: JZ 0x005a7787
//   XREF to: 005a7787 (CONDITIONAL_JUMP)
// 005a7682: MOV EAX,dword ptr [EBX + 0xc0]
//   Label: LAB_005a7682
// 005a7688: MOV dword ptr [EBX + 0xe0],EAX
// 005a768e: MOV EAX,dword ptr [EBX + 0xe0]
//   Label: LAB_005a768e
// 005a7694: LEA ECX,[ESI*0x4 + 0x0]
// 005a769b: SHL EAX,0x2
// 005a769e: ADD dword ptr [ECX + EBP*0x1 + 0x18],EAX
// 005a76a2: MOV EAX,dword ptr [EBX + 0xe0]
// 005a76a8: SUB EAX,dword ptr [EBX + 0xc0]
// 005a76ae: CDQ
// 005a76af: XOR EAX,EDX
// 005a76b1: SUB EAX,EDX
// 005a76b3: CMP EAX,0x1
// 005a76b6: JLE 0x005a7799
//   XREF to: 005a7799 (CONDITIONAL_JUMP)
// 005a76bc: MOV EAX,dword ptr [ECX + EBP*0x1 + 0x18]
// 005a76c0: MOV dword ptr [ESP + ECX*0x1 + 0x1c],EAX
// 005a76c4: MOV EAX,dword ptr [ECX + 0x3f6928c]
//   XREF to: 03f6928c (READ)
//   XREF to: 03f69290 (READ)
// 005a76ca: MOV dword ptr [ECX + EBP*0x1 + 0x18],EAX
// 005a76ce: MOV EAX,dword ptr [EBP + 0x38]
//   XREF to: Stack[0x28] (READ)
// 005a76d1: SHL EAX,0x2
// 005a76d4: PUSH EAX
// 005a76d5: PUSH 0x0
// 005a76d7: MOV EDX,dword ptr [ECX + EBP*0x1 + 0x18]
// 005a76db: PUSH EDX
// 005a76dc: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005a76e1: ADD ESP,0xc
// 005a76e4: MOV EDX,dword ptr [EBP + 0x3c]
//   Label: LAB_005a76e4
//   XREF to: Stack[0x2c] (READ)
// 005a76e7: INC ESI
// 005a76e8: ADD EBX,0x4
// 005a76eb: CMP ESI,EDX
// 005a76ed: JL 0x005a7677
//   XREF to: 005a7677 (CONDITIONAL_JUMP)
// 005a76ef: LEA EAX,[EDI + 0xa0]
//   Label: LAB_005a76ef
// 005a76f5: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 005a76f9: CMP dword ptr [EDI + 0x74],0x0
//   Label: LAB_005a76f9
// 005a76fd: JNZ 0x005a77a4
//   XREF to: 005a77a4 (CONDITIONAL_JUMP)
// 005a7703: PUSH EDI
//   Label: LAB_005a7703
// 005a7704: CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60
//   XREF to: 005a7e60 (UNCONDITIONAL_CALL)
// 005a7709: ADD ESP,0x4
// 005a770c: XOR EBX,EBX
//   Label: LAB_005a770c
// 005a770e: MOV ESI,dword ptr [EBP + 0x3c]
//   XREF to: Stack[0x2c] (READ)
// 005a7711: MOV dword ptr [ESP + 0x68],EBX
//   XREF to: Stack[-0x58] (WRITE)
// 005a7715: TEST ESI,ESI
// 005a7717: JLE 0x005a7747
//   XREF to: 005a7747 (CONDITIONAL_JUMP)
// 005a7719: MOV dword ptr [ESP + 0x74],EBX
//   XREF to: Stack[-0x4c] (WRITE)
// 005a771d: MOV EAX,dword ptr [ESP + 0x74]
//   Label: LAB_005a771d
//   XREF to: Stack[-0x4c] (READ)
// 005a7721: CMP dword ptr [ESP + EAX*0x1 + 0x1c],0x0
// 005a7726: JNZ 0x005a7da0
//   XREF to: 005a7da0 (CONDITIONAL_JUMP)
// 005a772c: MOV EAX,dword ptr [ESP + 0x74]
//   Label: LAB_005a772c
//   XREF to: Stack[-0x4c] (READ)
// 005a7730: MOV EDX,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x58] (READ)
// 005a7734: MOV ECX,dword ptr [EBP + 0x3c]
//   XREF to: Stack[0x2c] (READ)
// 005a7737: ADD EAX,0x4
// 005a773a: INC EDX
// 005a773b: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 005a773f: MOV dword ptr [ESP + 0x68],EDX
//   XREF to: Stack[-0x58] (WRITE)
// 005a7743: CMP EDX,ECX
// 005a7745: JL 0x005a771d
//   XREF to: 005a771d (CONDITIONAL_JUMP)
// 005a7747: MOV ESP,EBP
//   Label: LAB_005a7747
// 005a7749: POP EBP
// 005a774a: POP EDI
// 005a774b: POP ESI
// 005a774c: POP EBX
// 005a774d: RET
// 005a774e: MOV ECX,0x65036f
//   Label: LAB_005a774e
//   XREF to: 0065036f (PARAM)
// 005a7753: MOV EBX,0xa27
// 005a7758: PUSH 0x650384
//   XREF to: 00650384 (DATA)
// 005a775d: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005a7763: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 005a7769: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a776e: ADD ESP,0x4
// 005a7771: JMP 0x005a75ff
//   XREF to: 005a75ff (UNCONDITIONAL_JUMP)
// 005a7776: INC EDX
//   Label: LAB_005a7776
// 005a7777: ADD ECX,0x4
// 005a777a: CMP EDX,EBX
// 005a777c: JL 0x005a764f
//   XREF to: 005a764f (CONDITIONAL_JUMP)
// 005a7782: JMP 0x005a7668
//   XREF to: 005a7668 (UNCONDITIONAL_JUMP)
// 005a7787: CMP dword ptr [EBX + 0xe0],0x0
//   Label: LAB_005a7787
// 005a778e: JL 0x005a7682
//   XREF to: 005a7682 (CONDITIONAL_JUMP)
// 005a7794: JMP 0x005a768e
//   XREF to: 005a768e (UNCONDITIONAL_JUMP)
// 005a7799: XOR EAX,EAX
//   Label: LAB_005a7799
// 005a779b: MOV dword ptr [ESP + ECX*0x1 + 0x1c],EAX
// 005a779f: JMP 0x005a76e4
//   XREF to: 005a76e4 (UNCONDITIONAL_JUMP)
// 005a77a4: MOV EBX,dword ptr [EDI + 0x78]
//   Label: LAB_005a77a4
// 005a77a7: TEST EBX,EBX
// 005a77a9: JZ 0x005a7703
//   XREF to: 005a7703 (CONDITIONAL_JUMP)
// 005a77af: FLDZ
// 005a77b1: FCOMP double ptr [EDI + 0x60]
// 005a77b4: FNSTSW AX
// 005a77b6: SAHF
// 005a77b7: JA 0x005a7703
//   XREF to: 005a7703 (CONDITIONAL_JUMP)
// 005a77bd: MOV ESI,dword ptr [EBP + 0x38]
//   XREF to: Stack[0x28] (READ)
// 005a77c0: CMP ESI,0x1
// 005a77c3: JL 0x005a770c
//   XREF to: 005a770c (CONDITIONAL_JUMP)
// 005a77c9: MOV EDX,EBX
// 005a77cb: FILD dword ptr [EDX + 0x10c]
// 005a77d1: FILD dword ptr [EBP + 0x40]
//   XREF to: Stack[0x30] (READ)
// 005a77d4: FDIVP
// 005a77d6: FMUL float ptr [EDI + 0x7c]
// 005a77d9: FLDZ
// 005a77db: FXCH
// 005a77dd: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0xb8] (WRITE)
// 005a77e1: FCOMP double ptr [ESP + 0x8]
//   XREF to: Stack[-0xb8] (READ)
// 005a77e5: FNSTSW AX
// 005a77e7: SAHF
// 005a77e8: JNC 0x005a770c
//   XREF to: 005a770c (CONDITIONAL_JUMP)
// 005a77ee: FILD dword ptr [EDX + 0x160]
// 005a77f4: MOV EAX,ESI
// 005a77f6: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0xb0] (WRITE)
// 005a77fa: MOV dword ptr [ESP + 0x18],ESI
//   XREF to: Stack[-0xa8] (WRITE)
// 005a77fe: XOR EAX,ESI
// 005a7800: MOV ECX,dword ptr [EBX + 0x110]
// 005a7806: MOV dword ptr [ESP + 0x70],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 005a780a: TEST ECX,ECX
// 005a780c: JLE 0x005a785a
//   XREF to: 005a785a (CONDITIONAL_JUMP)
// 005a780e: MOV EAX,dword ptr [EDI + 0x124]
// 005a7814: FILD dword ptr [EDX + EAX*0x4 + 0x128]
// 005a781b: FSUB double ptr [EDI + 0x60]
// 005a781e: FDIV double ptr [ESP + 0x8]
//   XREF to: Stack[-0xb8] (READ)
// 005a7822: SUB ESP,0x8
// 005a7825: FSTP double ptr [ESP]
//   XREF to: Stack[-0xc8] (DATA)
// 005a7828: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 005a782d: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 005a7831: MOV dword ptr [ESP + 0x48],EDX
//   XREF to: Stack[-0x80] (WRITE)
// 005a7835: FLD double ptr [ESP + 0x44]
//   XREF to: Stack[-0x84] (READ)
// 005a7839: ADD ESP,0x8
// 005a783c: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005a7841: FISTP dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x60] (WRITE)
// 005a7845: MOV EBX,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x60] (READ)
// 005a7849: CMP ESI,EBX
// 005a784b: JLE 0x005a785a
//   XREF to: 005a785a (CONDITIONAL_JUMP)
// 005a784d: MOV ESI,0x1
// 005a7852: MOV dword ptr [ESP + 0x18],EBX
//   XREF to: Stack[-0xa8] (WRITE)
// 005a7856: MOV dword ptr [ESP + 0x70],ESI
//   XREF to: Stack[-0x50] (WRITE)
// 005a785a: MOV EAX,dword ptr [EDI + 0x11c]
//   Label: LAB_005a785a
// 005a7860: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0xc0] (DATA)
// 005a7863: MOV EAX,dword ptr [EDI + 0x120]
// 005a7869: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0xbc] (WRITE)
// 005a786d: FLD double ptr [ESP + 0x10]
//   XREF to: Stack[-0xb0] (READ)
// 005a7871: FSUB double ptr [ESP]
//   XREF to: Stack[-0xc0] (DATA)
// 005a7874: FDIV double ptr [ESP + 0x8]
//   XREF to: Stack[-0xb8] (READ)
// 005a7878: XOR EAX,EAX
// 005a787a: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 005a787e: SUB ESP,0x8
// 005a7881: FSTP double ptr [ESP]
//   XREF to: Stack[-0xc8] (DATA)
// 005a7884: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 005a7889: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 005a788d: MOV dword ptr [ESP + 0x48],EDX
//   XREF to: Stack[-0x80] (WRITE)
// 005a7891: FLD double ptr [ESP + 0x44]
//   XREF to: Stack[-0x84] (READ)
// 005a7895: ADD ESP,0x8
// 005a7898: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005a789d: FISTP dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x48] (WRITE)
// 005a78a1: CMP dword ptr [ESP + 0x78],0x1
//   XREF to: Stack[-0x48] (READ)
// 005a78a6: JGE 0x005a78f5
//   XREF to: 005a78f5 (CONDITIONAL_JUMP)
// 005a78a8: FLD double ptr [ESP]
//   XREF to: Stack[-0xc0] (DATA)
// 005a78ab: FSUB double ptr [ESP + 0x10]
//   XREF to: Stack[-0xb0] (READ)
// 005a78af: FLDZ
// 005a78b1: FXCH
// 005a78b3: FSTP double ptr [ESP]
//   XREF to: Stack[-0xc0] (DATA)
// 005a78b6: FCOMP double ptr [ESP]
//   XREF to: Stack[-0xc0] (DATA)
// 005a78b9: FNSTSW AX
// 005a78bb: SAHF
// 005a78bc: JBE 0x005a78c7
//   XREF to: 005a78c7 (CONDITIONAL_JUMP)
// 005a78be: XOR ECX,ECX
// 005a78c0: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0xc0] (DATA)
// 005a78c3: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0xbc] (WRITE)
// 005a78c7: FLD double ptr [ESP + 0x10]
//   Label: LAB_005a78c7
//   XREF to: Stack[-0xb0] (READ)
// 005a78cb: FSUB double ptr [ESP]
//   XREF to: Stack[-0xc0] (DATA)
// 005a78ce: FDIV double ptr [ESP + 0x8]
//   XREF to: Stack[-0xb8] (READ)
// 005a78d2: SUB ESP,0x8
// 005a78d5: FSTP double ptr [ESP]
//   XREF to: Stack[-0xc8] (DATA)
// 005a78d8: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 005a78dd: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 005a78e1: MOV dword ptr [ESP + 0x48],EDX
//   XREF to: Stack[-0x80] (WRITE)
// 005a78e5: FLD double ptr [ESP + 0x44]
//   XREF to: Stack[-0x84] (READ)
// 005a78e9: ADD ESP,0x8
// 005a78ec: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005a78f1: FISTP dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x48] (WRITE)
// 005a78f5: MOV EAX,dword ptr [ESP + 0x78]
//   Label: LAB_005a78f5
//   XREF to: Stack[-0x48] (READ)
// 005a78f9: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0xa8] (READ)
// 005a78fd: CMP EAX,ESI
// 005a78ff: JGE 0x005a79eb
//   XREF to: 005a79eb (CONDITIONAL_JUMP)
// 005a7905: MOV ESI,0x1
// 005a790a: XOR EBX,EBX
// 005a790c: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0xa8] (WRITE)
// 005a7910: MOV dword ptr [ESP + 0x70],EBX
//   XREF to: Stack[-0x50] (WRITE)
// 005a7914: MOV dword ptr [ESP + 0x6c],ESI
//   XREF to: Stack[-0x54] (WRITE)
// 005a7918: CMP dword ptr [ESP + 0x5c],0x0
//   Label: LAB_005a7918
//   XREF to: Stack[-0x64] (READ)
// 005a791d: JZ 0x005a79fe
//   XREF to: 005a79fe (CONDITIONAL_JUMP)
// 005a7923: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0xa8] (READ)
// 005a7927: MOV dword ptr [ESP + 0xac],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005a792e: FILD dword ptr [ESP + 0xac]
//   XREF to: Stack[-0x14] (READ)
// 005a7935: FMUL double ptr [ESP + 0x8]
//   XREF to: Stack[-0xb8] (READ)
// 005a7939: FADD double ptr [ESP]
//   XREF to: Stack[-0xc0] (DATA)
// 005a793c: FSTP double ptr [ESP]
//   Label: LAB_005a793c
//   XREF to: Stack[-0xc0] (DATA)
// 005a793f: CMP dword ptr [ESP + 0x6c],0x0
//   Label: LAB_005a793f
//   XREF to: Stack[-0x54] (READ)
// 005a7944: JZ 0x005a794f
//   XREF to: 005a794f (CONDITIONAL_JUMP)
// 005a7946: XOR ESI,ESI
// 005a7948: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0xc0] (DATA)
// 005a794b: MOV dword ptr [ESP + 0x4],ESI
//   XREF to: Stack[-0xbc] (WRITE)
// 005a794f: FLD double ptr [ESP]
//   Label: LAB_005a794f
//   XREF to: Stack[-0xc0] (DATA)
// 005a7952: FCOMP double ptr [ESP + 0x10]
//   XREF to: Stack[-0xb0] (READ)
// 005a7956: FNSTSW AX
// 005a7958: SAHF
// 005a7959: JC 0x005a7965
//   XREF to: 005a7965 (CONDITIONAL_JUMP)
// 005a795b: FLD double ptr [ESP]
//   XREF to: Stack[-0xc0] (DATA)
// 005a795e: FSUB double ptr [ESP + 0x10]
//   XREF to: Stack[-0xb0] (READ)
// 005a7962: FSTP double ptr [ESP]
//   XREF to: Stack[-0xc0] (DATA)
// 005a7965: MOV EDX,dword ptr [ESP + 0x4]
//   Label: LAB_005a7965
//   XREF to: Stack[-0xbc] (READ)
// 005a7969: PUSH EDX
// 005a796a: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xc0] (READ)
// 005a796e: PUSH ECX
// 005a796f: PUSH EDI
// 005a7970: CALL sound_sndmain.cpp_CSfxSlot_updatePlaybackPos_FUN_005a8170
//   XREF to: 005a8170 (UNCONDITIONAL_CALL)
// 005a7975: ADD ESP,0xc
// 005a7978: CMP dword ptr [ESP + 0x70],0x0
//   XREF to: Stack[-0x50] (READ)
// 005a797d: JZ 0x005a79b4
//   XREF to: 005a79b4 (CONDITIONAL_JUMP)
// 005a797f: MOV EDX,dword ptr [EDI + 0x78]
// 005a7982: MOV ESI,dword ptr [EDI + 0x124]
// 005a7988: MOV EAX,dword ptr [EDI + 0x124]
// 005a798e: INC ESI
// 005a798f: FILD dword ptr [EDX + EAX*0x4 + 0x13c]
// 005a7996: MOV dword ptr [EDI + 0x124],ESI
// 005a799c: MOV EDX,dword ptr [EDI + 0x78]
// 005a799f: FSTP double ptr [EDI + 0x60]
// 005a79a2: CMP ESI,dword ptr [EDX + 0x124]
// 005a79a8: JL 0x005a79b4
//   XREF to: 005a79b4 (CONDITIONAL_JUMP)
// 005a79aa: MOV dword ptr [EDI + 0x124],0x0
// 005a79b4: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_005a79b4
//   XREF to: Stack[-0xa8] (READ)
// 005a79b8: MOV EBX,dword ptr [EBP + 0x38]
//   XREF to: Stack[0x28] (READ)
// 005a79bb: MOV ESI,dword ptr [EBP + 0x3c]
//   XREF to: Stack[0x2c] (READ)
// 005a79be: SUB EBX,EAX
// 005a79c0: XOR EDX,EDX
// 005a79c2: MOV dword ptr [EBP + 0x38],EBX
//   XREF to: Stack[0x28] (WRITE)
// 005a79c5: TEST ESI,ESI
// 005a79c7: JLE 0x005a76f9
//   XREF to: 005a76f9 (CONDITIONAL_JUMP)
// 005a79cd: LEA ECX,[EAX*0x4 + 0x0]
// 005a79d4: XOR EAX,EAX
// 005a79d6: ADD dword ptr [EAX + EBP*0x1 + 0x18],ECX
//   Label: LAB_005a79d6
// 005a79da: INC EDX
// 005a79db: MOV ESI,dword ptr [EBP + 0x3c]
//   XREF to: Stack[0x2c] (READ)
// 005a79de: ADD EAX,0x4
// 005a79e1: CMP EDX,ESI
// 005a79e3: JGE 0x005a76f9
//   XREF to: 005a76f9 (CONDITIONAL_JUMP)
// 005a79e9: JMP 0x005a79d6
//   XREF to: 005a79d6 (UNCONDITIONAL_JUMP)
// 005a79eb: JNZ 0x005a7918
//   Label: LAB_005a79eb
//   XREF to: 005a7918 (CONDITIONAL_JUMP)
// 005a79f1: MOV dword ptr [ESP + 0x6c],0x1
//   XREF to: Stack[-0x54] (WRITE)
// 005a79f9: JMP 0x005a7918
//   XREF to: 005a7918 (UNCONDITIONAL_JUMP)
// 005a79fe: MOV EAX,dword ptr [EDI + 0x78]
//   Label: LAB_005a79fe
// 005a7a01: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0xa8] (READ)
// 005a7a05: MOV ECX,dword ptr [EAX + 0x104]
// 005a7a0b: SHL EDX,0x2
// 005a7a0e: CMP ECX,0x8
// 005a7a11: JNZ 0x005a7bb5
//   XREF to: 005a7bb5 (CONDITIONAL_JUMP)
// 005a7a17: CMP dword ptr [EAX + 0x108],0x2
// 005a7a1e: JNZ 0x005a7b0d
//   XREF to: 005a7b0d (CONDITIONAL_JUMP)
// 005a7a24: CMP dword ptr [ESP + 0x18],0x0
//   XREF to: Stack[-0xa8] (READ)
// 005a7a29: JLE 0x005a793f
//   XREF to: 005a793f (CONDITIONAL_JUMP)
// 005a7a2f: XOR EAX,EAX
// 005a7a31: MOV dword ptr [ESP + 0x80],EDX
//   XREF to: Stack[-0x40] (WRITE)
// 005a7a38: MOV dword ptr [ESP + 0xa0],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005a7a3f: FLD double ptr [ESP]
//   Label: LAB_005a7a3f
//   XREF to: Stack[-0xc0] (DATA)
// 005a7a42: MOV EDX,dword ptr [EDI + 0x78]
// 005a7a45: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005a7a4a: MOV EDX,dword ptr [EDX + 0x120]
// 005a7a50: FISTP dword ptr [ESP + 0xac]
//   XREF to: Stack[-0x14] (WRITE)
// 005a7a57: MOV EAX,dword ptr [ESP + 0xac]
//   XREF to: Stack[-0x14] (READ)
// 005a7a5e: MOV DL,byte ptr [EDX + EAX*0x2]
// 005a7a61: AND EDX,0xff
// 005a7a67: SUB EDX,0x80
// 005a7a6d: MOV dword ptr [ESP + 0xac],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 005a7a74: FILD dword ptr [ESP + 0xac]
//   XREF to: Stack[-0x14] (READ)
// 005a7a7b: FSTP float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x74] (WRITE)
// 005a7a7f: MOV EDX,dword ptr [EDI + 0x78]
// 005a7a82: MOV EDX,dword ptr [EDX + 0x120]
// 005a7a88: MOV AL,byte ptr [EDX + EAX*0x2 + 0x1]
// 005a7a8c: AND EAX,0xff
// 005a7a91: SUB EAX,0x80
// 005a7a96: MOV dword ptr [ESP + 0xac],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005a7a9d: MOV EDX,dword ptr [EBP + 0x3c]
//   XREF to: Stack[0x2c] (READ)
// 005a7aa0: FILD dword ptr [ESP + 0xac]
//   XREF to: Stack[-0x14] (READ)
// 005a7aa7: FSTP float ptr [ESP + 0x50]
//   XREF to: Stack[-0x70] (WRITE)
// 005a7aab: XOR EAX,EAX
// 005a7aad: TEST EDX,EDX
// 005a7aaf: JLE 0x005a7ade
//   XREF to: 005a7ade (CONDITIONAL_JUMP)
// 005a7ab1: MOV ESI,dword ptr [ESP + 0xa0]
//   XREF to: Stack[-0x20] (READ)
// 005a7ab8: MOV EDX,EDI
// 005a7aba: MOV EBX,EAX
//   Label: LAB_005a7aba
// 005a7abc: AND EBX,0x1
// 005a7abf: FLD float ptr [ESP + EBX*0x4 + 0x4c]
//   XREF to: Stack[-0x70] (DATA)
// 005a7ac3: FMUL float ptr [EDX + 0xa0]
// 005a7ac9: MOV ECX,dword ptr [EBP + EAX*0x4 + 0x18]
//   XREF to: Stack[0xc] (DATA)
// 005a7acd: FADD float ptr [ECX + ESI*0x1]
// 005a7ad0: INC EAX
// 005a7ad1: FSTP float ptr [ECX + ESI*0x1]
// 005a7ad4: MOV ECX,dword ptr [EBP + 0x3c]
//   XREF to: Stack[0x2c] (READ)
// 005a7ad7: ADD EDX,0x4
// 005a7ada: CMP EAX,ECX
// 005a7adc: JL 0x005a7aba
//   XREF to: 005a7aba (CONDITIONAL_JUMP)
// 005a7ade: FLD double ptr [ESP]
//   Label: LAB_005a7ade
//   XREF to: Stack[-0xc0] (DATA)
// 005a7ae1: MOV EBX,dword ptr [ESP + 0xa0]
//   XREF to: Stack[-0x20] (READ)
// 005a7ae8: MOV ESI,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x40] (READ)
// 005a7aef: FADD double ptr [ESP + 0x8]
//   XREF to: Stack[-0xb8] (READ)
// 005a7af3: ADD EBX,0x4
// 005a7af6: FSTP double ptr [ESP]
//   XREF to: Stack[-0xc0] (DATA)
// 005a7af9: MOV dword ptr [ESP + 0xa0],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 005a7b00: CMP EBX,ESI
// 005a7b02: JGE 0x005a793f
//   XREF to: 005a793f (CONDITIONAL_JUMP)
// 005a7b08: JMP 0x005a7a3f
//   XREF to: 005a7a3f (UNCONDITIONAL_JUMP)
// 005a7b0d: CMP dword ptr [ESP + 0x18],0x0
//   Label: LAB_005a7b0d
//   XREF to: Stack[-0xa8] (READ)
// 005a7b12: JLE 0x005a793f
//   XREF to: 005a793f (CONDITIONAL_JUMP)
// 005a7b18: MOV dword ptr [ESP + 0x84],EDX
//   XREF to: Stack[-0x3c] (WRITE)
// 005a7b1f: XOR ESI,ESI
// 005a7b21: FLD double ptr [ESP]
//   Label: LAB_005a7b21
//   XREF to: Stack[-0xc0] (DATA)
// 005a7b24: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005a7b29: MOV EAX,dword ptr [EDI + 0x78]
// 005a7b2c: FISTP dword ptr [ESP + 0xac]
//   XREF to: Stack[-0x14] (WRITE)
// 005a7b33: MOV EAX,dword ptr [EAX + 0x120]
// 005a7b39: ADD EAX,dword ptr [ESP + 0xac]
//   XREF to: Stack[-0x14] (READ)
// 005a7b40: MOV AL,byte ptr [EAX]
// 005a7b42: AND EAX,0xff
// 005a7b47: SUB EAX,0x80
// 005a7b4c: MOV dword ptr [ESP + 0xac],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005a7b53: MOV ECX,dword ptr [EBP + 0x3c]
//   XREF to: Stack[0x2c] (READ)
// 005a7b56: FILD dword ptr [ESP + 0xac]
//   XREF to: Stack[-0x14] (READ)
// 005a7b5d: FSTP float ptr [ESP + 0xa8]
//   XREF to: Stack[-0x18] (WRITE)
// 005a7b64: XOR EAX,EAX
// 005a7b66: TEST ECX,ECX
// 005a7b68: JLE 0x005a7b94
//   XREF to: 005a7b94 (CONDITIONAL_JUMP)
// 005a7b6a: FLD float ptr [ESP + 0xa8]
//   XREF to: Stack[-0x18] (READ)
// 005a7b71: MOV EDX,EDI
// 005a7b73: MOV EBX,ESI
// 005a7b75: FLD ST0
//   Label: LAB_005a7b75
// 005a7b77: FMUL float ptr [EDX + 0xa0]
// 005a7b7d: MOV ECX,dword ptr [EBP + EAX*0x4 + 0x18]
//   XREF to: Stack[0xc] (DATA)
// 005a7b81: FADD float ptr [ECX + EBX*0x1]
// 005a7b84: INC EAX
// 005a7b85: FSTP float ptr [ECX + EBX*0x1]
// 005a7b88: MOV ECX,dword ptr [EBP + 0x3c]
//   XREF to: Stack[0x2c] (READ)
// 005a7b8b: ADD EDX,0x4
// 005a7b8e: CMP EAX,ECX
// 005a7b90: JL 0x005a7b75
//   XREF to: 005a7b75 (CONDITIONAL_JUMP)
// 005a7b92: FSTP ST0
// 005a7b94: FLD double ptr [ESP]
//   Label: LAB_005a7b94
//   XREF to: Stack[-0xc0] (DATA)
// 005a7b97: MOV EBX,dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x3c] (READ)
// 005a7b9e: FADD double ptr [ESP + 0x8]
//   XREF to: Stack[-0xb8] (READ)
// 005a7ba2: ADD ESI,0x4
// 005a7ba5: FSTP double ptr [ESP]
//   XREF to: Stack[-0xc0] (DATA)
// 005a7ba8: CMP ESI,EBX
// 005a7baa: JGE 0x005a793f
//   XREF to: 005a793f (CONDITIONAL_JUMP)
// 005a7bb0: JMP 0x005a7b21
//   XREF to: 005a7b21 (UNCONDITIONAL_JUMP)
// 005a7bb5: MOV EBX,dword ptr [EAX + 0x108]
//   Label: LAB_005a7bb5
// 005a7bbb: CMP EBX,0x2
// 005a7bbe: JNZ 0x005a7cc6
//   XREF to: 005a7cc6 (CONDITIONAL_JUMP)
// 005a7bc4: CMP EBX,dword ptr [EBP + 0x3c]
//   XREF to: Stack[0x2c] (READ)
// 005a7bc7: JZ 0x005a7c84
//   XREF to: 005a7c84 (CONDITIONAL_JUMP)
// 005a7bcd: CMP dword ptr [ESP + 0x18],0x0
//   XREF to: Stack[-0xa8] (READ)
// 005a7bd2: JLE 0x005a793f
//   XREF to: 005a793f (CONDITIONAL_JUMP)
// 005a7bd8: XOR EAX,EAX
// 005a7bda: MOV dword ptr [ESP + 0x88],EDX
//   XREF to: Stack[-0x38] (WRITE)
// 005a7be1: MOV dword ptr [ESP + 0x9c],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005a7be8: FLD double ptr [ESP]
//   Label: LAB_005a7be8
//   XREF to: Stack[-0xc0] (DATA)
// 005a7beb: MOV EDX,dword ptr [EDI + 0x78]
// 005a7bee: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005a7bf3: MOV EDX,dword ptr [EDX + 0x120]
// 005a7bf9: FISTP dword ptr [ESP + 0xac]
//   XREF to: Stack[-0x14] (WRITE)
// 005a7c00: MOV EAX,dword ptr [ESP + 0xac]
//   XREF to: Stack[-0x14] (READ)
// 005a7c07: FILD word ptr [EDX + EAX*0x4]
// 005a7c0a: FSTP float ptr [ESP + 0x44]
//   XREF to: Stack[-0x7c] (WRITE)
// 005a7c0e: MOV EDX,dword ptr [EDI + 0x78]
// 005a7c11: MOV EDX,dword ptr [EDX + 0x120]
// 005a7c17: FILD word ptr [EDX + EAX*0x4 + 0x2]
// 005a7c1b: FSTP float ptr [ESP + 0x48]
//   XREF to: Stack[-0x78] (WRITE)
// 005a7c1f: MOV EDX,dword ptr [EBP + 0x3c]
//   XREF to: Stack[0x2c] (READ)
// 005a7c22: XOR EAX,EAX
// 005a7c24: TEST EDX,EDX
// 005a7c26: JLE 0x005a7c55
//   XREF to: 005a7c55 (CONDITIONAL_JUMP)
// 005a7c28: MOV ESI,dword ptr [ESP + 0x9c]
//   XREF to: Stack[-0x24] (READ)
// 005a7c2f: MOV EDX,EDI
// 005a7c31: MOV EBX,EAX
//   Label: LAB_005a7c31
// 005a7c33: AND EBX,0x1
// 005a7c36: FLD float ptr [ESP + EBX*0x4 + 0x44]
//   XREF to: Stack[-0x78] (DATA)
// 005a7c3a: FMUL float ptr [EDX + 0xa0]
// 005a7c40: MOV ECX,dword ptr [EBP + EAX*0x4 + 0x18]
//   XREF to: Stack[0xc] (DATA)
// 005a7c44: FADD float ptr [ECX + ESI*0x1]
// 005a7c47: INC EAX
// 005a7c48: FSTP float ptr [ECX + ESI*0x1]
// 005a7c4b: MOV ECX,dword ptr [EBP + 0x3c]
//   XREF to: Stack[0x2c] (READ)
// 005a7c4e: ADD EDX,0x4
// 005a7c51: CMP EAX,ECX
// 005a7c53: JL 0x005a7c31
//   XREF to: 005a7c31 (CONDITIONAL_JUMP)
// 005a7c55: FLD double ptr [ESP]
//   Label: LAB_005a7c55
//   XREF to: Stack[-0xc0] (DATA)
// 005a7c58: MOV EBX,dword ptr [ESP + 0x9c]
//   XREF to: Stack[-0x24] (READ)
// 005a7c5f: MOV ESI,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x38] (READ)
// 005a7c66: FADD double ptr [ESP + 0x8]
//   XREF to: Stack[-0xb8] (READ)
// 005a7c6a: ADD EBX,0x4
// 005a7c6d: FSTP double ptr [ESP]
//   XREF to: Stack[-0xc0] (DATA)
// 005a7c70: MOV dword ptr [ESP + 0x9c],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 005a7c77: CMP EBX,ESI
// 005a7c79: JGE 0x005a793f
//   XREF to: 005a793f (CONDITIONAL_JUMP)
// 005a7c7f: JMP 0x005a7be8
//   XREF to: 005a7be8 (UNCONDITIONAL_JUMP)
// 005a7c84: MOV EDX,dword ptr [ESP + 0x18]
//   Label: LAB_005a7c84
//   XREF to: Stack[-0xa8] (READ)
// 005a7c88: PUSH EDX
// 005a7c89: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0xb4] (READ)
// 005a7c8d: PUSH ECX
// 005a7c8e: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0xb8] (READ)
// 005a7c92: PUSH EBX
// 005a7c93: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0xbc] (READ)
// 005a7c97: PUSH ESI
// 005a7c98: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0xc0] (READ)
// 005a7c9c: PUSH EDX
// 005a7c9d: MOV ECX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x68] (READ)
// 005a7ca1: PUSH ECX
// 005a7ca2: LEA EDX,[EBP + 0x18]
//   XREF to: Stack[0x8] (DATA)
// 005a7ca5: PUSH EDX
// 005a7ca6: MOV EBX,dword ptr [EAX + 0x120]
// 005a7cac: PUSH EBX
// 005a7cad: CALL sound_sndmain.cpp_FUN_005a5fb0
//   XREF to: 005a5fb0 (UNCONDITIONAL_CALL)
// 005a7cb2: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 005a7cb6: MOV dword ptr [ESP + 0x60],EDX
//   XREF to: Stack[-0x80] (WRITE)
// 005a7cba: FLD double ptr [ESP + 0x5c]
//   XREF to: Stack[-0x84] (READ)
// 005a7cbe: ADD ESP,0x20
// 005a7cc1: JMP 0x005a793c
//   XREF to: 005a793c (UNCONDITIONAL_JUMP)
// 005a7cc6: CMP dword ptr [EBP + 0x3c],0x2
//   Label: LAB_005a7cc6
//   XREF to: Stack[0x2c] (READ)
// 005a7cca: JZ 0x005a7d5e
//   XREF to: 005a7d5e (CONDITIONAL_JUMP)
// 005a7cd0: CMP dword ptr [ESP + 0x18],0x0
//   XREF to: Stack[-0xa8] (READ)
// 005a7cd5: JLE 0x005a793f
//   XREF to: 005a793f (CONDITIONAL_JUMP)
// 005a7cdb: MOV dword ptr [ESP + 0x8c],EDX
//   XREF to: Stack[-0x34] (WRITE)
// 005a7ce2: XOR ESI,ESI
// 005a7ce4: FLD double ptr [ESP]
//   Label: LAB_005a7ce4
//   XREF to: Stack[-0xc0] (DATA)
// 005a7ce7: MOV EAX,dword ptr [EDI + 0x78]
// 005a7cea: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005a7cef: MOV EAX,dword ptr [EAX + 0x120]
// 005a7cf5: FISTP dword ptr [ESP + 0xac]
//   XREF to: Stack[-0x14] (WRITE)
// 005a7cfc: MOV EDX,dword ptr [ESP + 0xac]
//   XREF to: Stack[-0x14] (READ)
// 005a7d03: FILD word ptr [EAX + EDX*0x2]
// 005a7d06: FSTP float ptr [ESP + 0xa4]
//   XREF to: Stack[-0x1c] (WRITE)
// 005a7d0d: MOV EDX,dword ptr [EBP + 0x3c]
//   XREF to: Stack[0x2c] (READ)
// 005a7d10: XOR EAX,EAX
// 005a7d12: TEST EDX,EDX
// 005a7d14: JLE 0x005a7d40
//   XREF to: 005a7d40 (CONDITIONAL_JUMP)
// 005a7d16: FLD float ptr [ESP + 0xa4]
//   XREF to: Stack[-0x1c] (READ)
// 005a7d1d: MOV EDX,EDI
// 005a7d1f: MOV EBX,ESI
// 005a7d21: FLD ST0
//   Label: LAB_005a7d21
// 005a7d23: FMUL float ptr [EDX + 0xa0]
// 005a7d29: MOV ECX,dword ptr [EBP + EAX*0x4 + 0x18]
//   XREF to: Stack[0xc] (DATA)
// 005a7d2d: FADD float ptr [ECX + EBX*0x1]
// 005a7d30: INC EAX
// 005a7d31: FSTP float ptr [ECX + EBX*0x1]
// 005a7d34: MOV ECX,dword ptr [EBP + 0x3c]
//   XREF to: Stack[0x2c] (READ)
// 005a7d37: ADD EDX,0x4
// 005a7d3a: CMP EAX,ECX
// 005a7d3c: JL 0x005a7d21
//   XREF to: 005a7d21 (CONDITIONAL_JUMP)
// 005a7d3e: FSTP ST0
// 005a7d40: FLD double ptr [ESP]
//   Label: LAB_005a7d40
//   XREF to: Stack[-0xc0] (DATA)
// 005a7d43: MOV EAX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x34] (READ)
// 005a7d4a: FADD double ptr [ESP + 0x8]
//   XREF to: Stack[-0xb8] (READ)
// 005a7d4e: ADD ESI,0x4
// 005a7d51: FSTP double ptr [ESP]
//   XREF to: Stack[-0xc0] (DATA)
// 005a7d54: CMP ESI,EAX
// 005a7d56: JGE 0x005a793f
//   XREF to: 005a793f (CONDITIONAL_JUMP)
// 005a7d5c: JMP 0x005a7ce4
//   XREF to: 005a7ce4 (UNCONDITIONAL_JUMP)
// 005a7d5e: MOV EDX,dword ptr [ESP + 0x18]
//   Label: LAB_005a7d5e
//   XREF to: Stack[-0xa8] (READ)
// 005a7d62: PUSH EDX
// 005a7d63: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0xb4] (READ)
// 005a7d67: PUSH ECX
// 005a7d68: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0xb8] (READ)
// 005a7d6c: PUSH EBX
// 005a7d6d: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0xbc] (READ)
// 005a7d71: PUSH ESI
// 005a7d72: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0xc0] (READ)
// 005a7d76: PUSH EDX
// 005a7d77: MOV ECX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x68] (READ)
// 005a7d7b: PUSH ECX
// 005a7d7c: LEA EDX,[EBP + 0x18]
//   XREF to: Stack[0x8] (DATA)
// 005a7d7f: PUSH EDX
// 005a7d80: MOV EBX,dword ptr [EAX + 0x120]
// 005a7d86: PUSH EBX
// 005a7d87: CALL sound_sndmain.cpp_FUN_005a5e70
//   XREF to: 005a5e70 (UNCONDITIONAL_CALL)
// 005a7d8c: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 005a7d90: MOV dword ptr [ESP + 0x60],EDX
//   XREF to: Stack[-0x80] (WRITE)
// 005a7d94: FLD double ptr [ESP + 0x5c]
//   XREF to: Stack[-0x84] (READ)
// 005a7d98: ADD ESP,0x20
// 005a7d9b: JMP 0x005a793c
//   XREF to: 005a793c (UNCONDITIONAL_JUMP)
// 005a7da0: MOV EDX,dword ptr [ESP + 0x64]
//   Label: LAB_005a7da0
//   XREF to: Stack[-0x5c] (READ)
// 005a7da4: MOV dword ptr [ESP + 0x98],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005a7dab: MOV ECX,dword ptr [EDI + EAX*0x1 + 0xc0]
// 005a7db2: MOV EBX,dword ptr [EDI + EAX*0x1 + 0xe0]
// 005a7db9: MOV EAX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x5c] (READ)
// 005a7dbd: ADD EDX,ECX
// 005a7dbf: MOV dword ptr [ESP + 0x7c],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 005a7dc3: IMUL ECX,EAX,0x0
// 005a7dc6: SUB EDX,EBX
// 005a7dc8: MOV dword ptr [ESP + 0x90],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 005a7dcf: LEA EAX,[EDX*0x4 + 0x0]
// 005a7dd6: XOR EBX,EBX
// 005a7dd8: MOV dword ptr [ESP + 0x94],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005a7ddf: TEST EAX,EAX
// 005a7de1: JLE 0x005a7e39
//   XREF to: 005a7e39 (CONDITIONAL_JUMP)
// 005a7de3: MOV EDX,ECX
//   Label: LAB_005a7de3
// 005a7de5: MOV EAX,ECX
// 005a7de7: SAR EDX,0x1f
// 005a7dea: IDIV dword ptr [ESP + 0x90]
//   XREF to: Stack[-0x30] (READ)
// 005a7df1: SHL EAX,0x2
// 005a7df4: MOV dword ptr [ESP + 0xac],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005a7dfb: MOV EAX,dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x28] (READ)
// 005a7e02: MOV EDX,dword ptr [ESP + 0xac]
//   XREF to: Stack[-0x14] (READ)
// 005a7e09: MOV EAX,dword ptr [EAX + 0x3f6928c]
//   XREF to: 03f69290 (DATA)
// 005a7e0f: MOV ESI,dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x28] (READ)
// 005a7e16: ADD EAX,EDX
// 005a7e18: MOV ESI,dword ptr [ESP + ESI*0x1 + 0x1c]
// 005a7e1c: FLD float ptr [EAX]
// 005a7e1e: FADD float ptr [ESI + EBX*0x1]
// 005a7e21: ADD EBX,0x4
// 005a7e24: FSTP float ptr [ESI + EBX*0x1 + -0x4]
// 005a7e28: MOV ESI,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x44] (READ)
// 005a7e2c: MOV EAX,dword ptr [ESP + 0x94]
//   XREF to: Stack[-0x2c] (READ)
// 005a7e33: ADD ECX,ESI
// 005a7e35: CMP EBX,EAX
// 005a7e37: JL 0x005a7de3
//   XREF to: 005a7de3 (CONDITIONAL_JUMP)
// 005a7e39: MOV EAX,dword ptr [ESP + 0x98]
//   Label: LAB_005a7e39
//   XREF to: Stack[-0x28] (READ)
// 005a7e40: MOV EDX,dword ptr [EDI + EAX*0x1 + 0xc0]
// 005a7e47: MOV dword ptr [EDI + EAX*0x1 + 0xe0],EDX
// 005a7e4e: JMP 0x005a772c
//   XREF to: 005a772c (UNCONDITIONAL_JUMP)
