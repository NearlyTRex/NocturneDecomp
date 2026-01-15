// Name: sound_sndmain.cpp_resampleAndConvertAudio_FUN_005aa7f0
// Address: 005aa7f0
// Address Range: [[005aa7f0, 005aadfc]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_resampleAndConvertAudio_FUN_005aa7f0(int src_bit_depth, int src_channels, int src_sample_rate, int src_signed, short * src_buffer, int dst_bit_depth, int dst_channels, int dst_sample_rate, int dst_signed, short * dst_buffer, int num_output_samples)

#include "nocturne.h"

void __cdecl
sound_sndmain_cpp_resampleAndConvertAudio_FUN_005aa7f0
          (int src_bit_depth,int src_channels,int src_sample_rate,int src_signed,short *src_buffer,
          int dst_bit_depth,int dst_channels,int dst_sample_rate,int dst_signed,short *dst_buffer,
          int num_output_samples)

{
  byte uVar1;
  ushort uVar2;
  float fVar3;
  int extraout_EAX;
  int extraout_EAX_00;
  int extraout_EAX_01;
  int extraout_EAX_02;
  int extraout_EAX_03;
  int extraout_EAX_04;
  int extraout_EAX_05;
  int extraout_EAX_06;
  int extraout_EAX_07;
  int extraout_EAX_08;
  int extraout_EAX_09;
  int extraout_EAX_10;
  int extraout_EAX_11;
  int extraout_EAX_12;
  int extraout_EAX_13;
  int extraout_EAX_14;
  short sVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int extraout_EDX;
  byte *extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  short *extraout_EDX_04;
  int extraout_EDX_05;
  short *extraout_EDX_06;
  int extraout_EDX_07;
  byte *extraout_EDX_08;
  int extraout_EDX_09;
  int extraout_EDX_10;
  int extraout_EDX_11;
  ushort *extraout_EDX_12;
  int extraout_EDX_13;
  ushort *extraout_EDX_14;
  short *psVar8;
  float10 fVar9;
  double dVar10;
  byte local_1c;
  
  if (0 < num_output_samples) {
    if (((src_sample_rate == dst_sample_rate) && (src_bit_depth == dst_bit_depth)) &&
       (src_channels == dst_channels)) {
      if (src_buffer != dst_buffer) {
        uVar5 = ((int)((src_bit_depth + (src_bit_depth >> 0x1f) * -8) -
                      (uint)((src_bit_depth >> 0x1f) << 2 < 0)) >> 3) * num_output_samples *
                dst_channels;
        psVar8 = dst_buffer;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(uint *)psVar8 = *(uint *)src_buffer;
          src_buffer = src_buffer + 2;
          psVar8 = psVar8 + 2;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(char *)psVar8 = (char)*src_buffer;
          src_buffer = (short *)((int)src_buffer + 1);
          psVar8 = (short *)((int)psVar8 + 1);
        }
      }
    }
    else {
      fVar3 = (float)src_sample_rate / (float)dst_sample_rate;
      if (src_bit_depth == 8) {
        if (dst_bit_depth == 8) {
          if (src_channels == 1) {
            if (dst_channels == 1) {
              iVar7 = 0;
              if (0 < num_output_samples) {
                fVar9 = (float10)fVar3;
                psVar8 = dst_buffer;
                do {
                  dVar10 = crt_math_c_round_FUN_005fe6b0((double)((float10)iVar7 * fVar9));
                  iVar7 = extraout_EDX + 1;
                  *(byte *)psVar8 = *(byte *)((int)ROUND(dVar10) + extraout_EAX);
                  psVar8 = (short *)((int)psVar8 + 1);
                } while (iVar7 < num_output_samples);
              }
            }
            else {
              iVar7 = 0;
              if (0 < num_output_samples) {
                fVar9 = (float10)fVar3;
                do {
                  dVar10 = crt_math_c_round_FUN_005fe6b0((double)((float10)iVar7 * fVar9));
                  uVar1 = *(byte *)((int)ROUND(dVar10) + extraout_EAX_00);
                  extraout_EDX_00[1] = uVar1;
                  iVar7 = iVar7 + 1;
                  *extraout_EDX_00 = uVar1;
                } while (iVar7 < num_output_samples);
              }
            }
          }
          else if (dst_channels == 1) {
            iVar7 = 0;
            if (0 < num_output_samples) {
              fVar9 = (float10)fVar3;
              psVar8 = dst_buffer;
              do {
                dVar10 = crt_math_c_round_FUN_005fe6b0((double)((float10)iVar7 * fVar9));
                local_1c = (byte)
                           ((int)*(char *)(extraout_EAX_01 + (int)ROUND(dVar10) * 2) +
                            (int)*(char *)(extraout_EAX_01 + 1 + (int)ROUND(dVar10) * 2) >> 1);
                iVar7 = extraout_EDX_01 + 1;
                *(byte *)psVar8 = local_1c;
                psVar8 = (short *)((int)psVar8 + 1);
              } while (iVar7 < num_output_samples);
            }
          }
          else {
            iVar7 = 0;
            if (0 < num_output_samples) {
              fVar9 = (float10)fVar3;
              psVar8 = dst_buffer;
              do {
                dVar10 = crt_math_c_round_FUN_005fe6b0((double)((float10)iVar7 * fVar9));
                *(byte *)psVar8 = *(byte *)(extraout_EAX_02 + (int)ROUND(dVar10) * 2);
                iVar7 = extraout_EDX_02 + 1;
                *(byte *)((int)psVar8 + 1) =
                     *(byte *)(extraout_EAX_02 + 1 + (int)ROUND(dVar10) * 2);
                psVar8 = psVar8 + 1;
              } while (iVar7 < num_output_samples);
            }
          }
        }
        else if (src_channels == 1) {
          if (dst_channels == 1) {
            iVar7 = 0;
            if (0 < num_output_samples) {
              fVar9 = (float10)fVar3;
              psVar8 = dst_buffer;
              do {
                dVar10 = crt_math_c_round_FUN_005fe6b0((double)((float10)iVar7 * fVar9));
                iVar7 = extraout_EDX_03 + 1;
                *psVar8 = (short)*(char *)((int)ROUND(dVar10) + extraout_EAX_03) << 8;
                psVar8 = psVar8 + 1;
              } while (iVar7 < num_output_samples);
            }
          }
          else {
            iVar7 = 0;
            if (0 < num_output_samples) {
              fVar9 = (float10)fVar3;
              do {
                dVar10 = crt_math_c_round_FUN_005fe6b0((double)((float10)iVar7 * fVar9));
                sVar4 = (short)*(char *)((int)ROUND(dVar10) + extraout_EAX_04) << 8;
                extraout_EDX_04[1] = sVar4;
                iVar7 = iVar7 + 1;
                *extraout_EDX_04 = sVar4;
              } while (iVar7 < num_output_samples);
            }
          }
        }
        else if (dst_channels == 1) {
          iVar7 = 0;
          if (0 < num_output_samples) {
            fVar9 = (float10)fVar3;
            psVar8 = dst_buffer;
            do {
              dVar10 = crt_math_c_round_FUN_005fe6b0((double)((float10)iVar7 * fVar9));
              iVar7 = extraout_EDX_05 + 1;
              *psVar8 = *(char *)(extraout_EAX_05 + (int)ROUND(dVar10) * 2) * 0x80 +
                        *(char *)(extraout_EAX_05 + 1 + (int)ROUND(dVar10) * 2) * 0x80;
              psVar8 = psVar8 + 1;
            } while (iVar7 < num_output_samples);
          }
        }
        else {
          iVar7 = 0;
          if (0 < num_output_samples) {
            fVar9 = (float10)fVar3;
            do {
              dVar10 = crt_math_c_round_FUN_005fe6b0((double)((float10)iVar7 * fVar9));
              *extraout_EDX_06 = (short)*(char *)(extraout_EAX_06 + (int)ROUND(dVar10) * 2) << 8;
              iVar7 = iVar7 + 1;
              extraout_EDX_06[1] =
                   (short)*(char *)(extraout_EAX_06 + 1 + (int)ROUND(dVar10) * 2) << 8;
            } while (iVar7 < num_output_samples);
          }
        }
      }
      else if (dst_bit_depth == 8) {
        if (src_channels == 1) {
          if (dst_channels == 1) {
            iVar7 = 0;
            if (0 < num_output_samples) {
              fVar9 = (float10)fVar3;
              psVar8 = dst_buffer;
              do {
                dVar10 = crt_math_c_round_FUN_005fe6b0((double)((float10)iVar7 * fVar9));
                iVar7 = extraout_EDX_07 + 1;
                *(char *)psVar8 =
                     (char)((ushort)*(ushort *)(extraout_EAX_07 + (int)ROUND(dVar10) * 2) >> 8);
                psVar8 = (short *)((int)psVar8 + 1);
              } while (iVar7 < num_output_samples);
            }
          }
          else {
            iVar7 = 0;
            if (0 < num_output_samples) {
              fVar9 = (float10)fVar3;
              do {
                dVar10 = crt_math_c_round_FUN_005fe6b0((double)((float10)iVar7 * fVar9));
                local_1c = (byte)
                           ((ushort)*(ushort *)(extraout_EAX_08 + (int)ROUND(dVar10) * 2) >> 8);
                extraout_EDX_08[1] = local_1c;
                iVar7 = iVar7 + 1;
                *extraout_EDX_08 = local_1c;
              } while (iVar7 < num_output_samples);
            }
          }
        }
        else if (dst_channels == 1) {
          iVar7 = 0;
          if (0 < num_output_samples) {
            fVar9 = (float10)fVar3;
            psVar8 = dst_buffer;
            do {
              dVar10 = crt_math_c_round_FUN_005fe6b0((double)((float10)iVar7 * fVar9));
              iVar7 = extraout_EDX_09 + 1;
              *(char *)psVar8 =
                   (char)((int)*(short *)(extraout_EAX_09 + (int)ROUND(dVar10) * 4) +
                          (*(int *)(extraout_EAX_09 + (int)ROUND(dVar10) * 4) >> 0x10) >> 9);
              psVar8 = (short *)((int)psVar8 + 1);
            } while (iVar7 < num_output_samples);
          }
        }
        else {
          iVar7 = 0;
          if (0 < num_output_samples) {
            fVar9 = (float10)fVar3;
            psVar8 = dst_buffer;
            do {
              dVar10 = crt_math_c_round_FUN_005fe6b0((double)((float10)iVar7 * fVar9));
              local_1c = (byte)
                         ((ushort)*(ushort *)(extraout_EAX_10 + (int)ROUND(dVar10) * 4) >> 8);
              *(byte *)psVar8 = local_1c;
              local_1c = (byte)
                         ((uint)*(uint *)(extraout_EAX_10 + (int)ROUND(dVar10) * 4) >> 0x18);
              iVar7 = extraout_EDX_10 + 1;
              *(byte *)((int)psVar8 + 1) = local_1c;
              psVar8 = psVar8 + 1;
            } while (iVar7 < num_output_samples);
          }
        }
      }
      else if (src_channels == 1) {
        if (dst_channels == 1) {
          iVar7 = 0;
          if (0 < num_output_samples) {
            fVar9 = (float10)fVar3;
            psVar8 = dst_buffer;
            do {
              dVar10 = crt_math_c_round_FUN_005fe6b0((double)((float10)iVar7 * fVar9));
              iVar7 = extraout_EDX_11 + 1;
              *psVar8 = *(short *)(extraout_EAX_11 + (int)ROUND(dVar10) * 2);
              psVar8 = psVar8 + 1;
            } while (iVar7 < num_output_samples);
          }
        }
        else {
          iVar7 = 0;
          if (0 < num_output_samples) {
            fVar9 = (float10)fVar3;
            do {
              dVar10 = crt_math_c_round_FUN_005fe6b0((double)((float10)iVar7 * fVar9));
              uVar2 = *(ushort *)(extraout_EAX_12 + (int)ROUND(dVar10) * 2);
              extraout_EDX_12[1] = uVar2;
              iVar7 = iVar7 + 1;
              *extraout_EDX_12 = uVar2;
            } while (iVar7 < num_output_samples);
          }
        }
      }
      else if (dst_channels == 1) {
        iVar7 = 0;
        if (0 < num_output_samples) {
          fVar9 = (float10)fVar3;
          psVar8 = dst_buffer;
          do {
            dVar10 = crt_math_c_round_FUN_005fe6b0((double)((float10)iVar7 * fVar9));
            iVar7 = extraout_EDX_13 + 1;
            *psVar8 = (short)((int)*(short *)(extraout_EAX_13 + (int)ROUND(dVar10) * 4) +
                              (*(int *)(extraout_EAX_13 + (int)ROUND(dVar10) * 4) >> 0x10) >> 1);
            psVar8 = psVar8 + 1;
          } while (iVar7 < num_output_samples);
        }
      }
      else {
        iVar7 = 0;
        if (0 < num_output_samples) {
          fVar9 = (float10)fVar3;
          do {
            dVar10 = crt_math_c_round_FUN_005fe6b0((double)((float10)iVar7 * fVar9));
            *extraout_EDX_14 = *(ushort *)(extraout_EAX_14 + (int)ROUND(dVar10) * 4);
            iVar7 = iVar7 + 1;
            extraout_EDX_14[1] = *(ushort *)(extraout_EAX_14 + 2 + (int)ROUND(dVar10) * 4);
          } while (iVar7 < num_output_samples);
        }
      }
    }
    if (((src_signed != 0) && (dst_signed == 0)) || ((src_signed == 0 && (dst_signed != 0)))) {
      if (dst_bit_depth != 8) {
        sound_sndmain_cpp_convert16BitAudioSignedness_FUN_005aa7d0(dst_buffer,num_output_samples);
        return;
      }
      sound_sndmain_cpp_convert8BitAudioSignedness_FUN_005aa7b0
                ((byte *)dst_buffer,num_output_samples);
    }
  }
  return;
}
