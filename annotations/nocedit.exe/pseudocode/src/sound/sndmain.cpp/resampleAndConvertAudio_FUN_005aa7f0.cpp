// Name: sound_sndmain.cpp_resampleAndConvertAudio_FUN_005aa7f0
// Address: 005aa7f0
// Address Range: [[005aa7f0, 005aadfc]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_resampleAndConvertAudio_FUN_005aa7f0 (int src_bit_depth,int src_channels,int src_sample_rate,int src_signed,short *src_buffer, int dst_bit_depth,int dst_channels,int dst_sample_rate,int dst_signed,short *dst_buffer, int num_output_samples)

#include "nocturne.h"

void __cdecl
sound_sndmain_cpp_resampleAndConvertAudio_FUN_005aa7f0
          (int src_bit_depth,int src_channels,int src_sample_rate,int src_signed,short *src_buffer,
          int dst_bit_depth,int dst_channels,int dst_sample_rate,int dst_signed,short *dst_buffer,
          int num_output_samples)

{
  byte uVar1;
  float fVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  short *psVar7;
  double dVar8;
  byte local_1c;
  
  if (0 < num_output_samples) {
    if (((src_sample_rate == dst_sample_rate) && (src_bit_depth == dst_bit_depth)) &&
       (src_channels == dst_channels)) {
      if (src_buffer != dst_buffer) {
        uVar4 = ((int)((src_bit_depth + (src_bit_depth >> 0x1f) * -8) -
                      (uint)((src_bit_depth >> 0x1f) << 2 < 0)) >> 3) * num_output_samples *
                dst_channels;
        psVar7 = dst_buffer;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(uint *)psVar7 = *(uint *)src_buffer;
          src_buffer = src_buffer + 2;
          psVar7 = psVar7 + 2;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(char *)psVar7 = (char)*src_buffer;
          src_buffer = (short *)((int)src_buffer + 1);
          psVar7 = (short *)((int)psVar7 + 1);
        }
      }
    }
    else {
      fVar2 = (float)src_sample_rate / (float)dst_sample_rate;
      if (src_bit_depth == 8) {
        if (dst_bit_depth == 8) {
          if (src_channels == 1) {
            if (dst_channels == 1) {
              iVar6 = 0;
              psVar7 = dst_buffer;
              if (0 < num_output_samples) {
                do {
                  dVar8 = round((double)((float)iVar6 * fVar2));
                  iVar6 = iVar6 + 1;
                  *(byte *)psVar7 = *(byte *)((int)ROUND(dVar8) + (int)src_buffer);
                  psVar7 = (short *)((int)psVar7 + 1);
                } while (iVar6 < num_output_samples);
              }
            }
            else {
              iVar6 = 0;
              psVar7 = dst_buffer;
              if (0 < num_output_samples) {
                do {
                  dVar8 = round((double)((float)iVar6 * fVar2));
                  uVar1 = *(byte *)((int)ROUND(dVar8) + (int)src_buffer);
                  *(byte *)((int)psVar7 + 1) = uVar1;
                  iVar6 = iVar6 + 1;
                  *(byte *)psVar7 = uVar1;
                  psVar7 = psVar7 + 1;
                } while (iVar6 < num_output_samples);
              }
            }
          }
          else if (dst_channels == 1) {
            iVar6 = 0;
            psVar7 = dst_buffer;
            if (0 < num_output_samples) {
              do {
                dVar8 = round((double)((float)iVar6 * fVar2));
                local_1c = (byte)
                           ((int)(char)src_buffer[(int)ROUND(dVar8)] +
                            (int)*(char *)((int)src_buffer + (int)ROUND(dVar8) * 2 + 1) >> 1);
                iVar6 = iVar6 + 1;
                *(byte *)psVar7 = local_1c;
                psVar7 = (short *)((int)psVar7 + 1);
              } while (iVar6 < num_output_samples);
            }
          }
          else {
            iVar6 = 0;
            psVar7 = dst_buffer;
            if (0 < num_output_samples) {
              do {
                dVar8 = round((double)((float)iVar6 * fVar2));
                *(char *)psVar7 = (char)src_buffer[(int)ROUND(dVar8)];
                iVar6 = iVar6 + 1;
                *(byte *)((int)psVar7 + 1) =
                     *(byte *)((int)src_buffer + (int)ROUND(dVar8) * 2 + 1);
                psVar7 = psVar7 + 1;
              } while (iVar6 < num_output_samples);
            }
          }
        }
        else if (src_channels == 1) {
          if (dst_channels == 1) {
            iVar6 = 0;
            psVar7 = dst_buffer;
            if (0 < num_output_samples) {
              do {
                dVar8 = round((double)((float)iVar6 * fVar2));
                iVar6 = iVar6 + 1;
                *psVar7 = (short)*(char *)((int)ROUND(dVar8) + (int)src_buffer) << 8;
                psVar7 = psVar7 + 1;
              } while (iVar6 < num_output_samples);
            }
          }
          else {
            iVar6 = 0;
            psVar7 = dst_buffer;
            if (0 < num_output_samples) {
              do {
                dVar8 = round((double)((float)iVar6 * fVar2));
                sVar3 = (short)*(char *)((int)ROUND(dVar8) + (int)src_buffer) << 8;
                psVar7[1] = sVar3;
                iVar6 = iVar6 + 1;
                *psVar7 = sVar3;
                psVar7 = psVar7 + 2;
              } while (iVar6 < num_output_samples);
            }
          }
        }
        else if (dst_channels == 1) {
          iVar6 = 0;
          psVar7 = dst_buffer;
          if (0 < num_output_samples) {
            do {
              dVar8 = round((double)((float)iVar6 * fVar2));
              iVar6 = iVar6 + 1;
              *psVar7 = (char)src_buffer[(int)ROUND(dVar8)] * 0x80 +
                        *(char *)((int)src_buffer + (int)ROUND(dVar8) * 2 + 1) * 0x80;
              psVar7 = psVar7 + 1;
            } while (iVar6 < num_output_samples);
          }
        }
        else {
          iVar6 = 0;
          psVar7 = dst_buffer;
          if (0 < num_output_samples) {
            do {
              dVar8 = round((double)((float)iVar6 * fVar2));
              *psVar7 = (short)(char)src_buffer[(int)ROUND(dVar8)] << 8;
              iVar6 = iVar6 + 1;
              psVar7[1] = (short)*(char *)((int)src_buffer + (int)ROUND(dVar8) * 2 + 1) << 8;
              psVar7 = psVar7 + 2;
            } while (iVar6 < num_output_samples);
          }
        }
      }
      else if (dst_bit_depth == 8) {
        if (src_channels == 1) {
          if (dst_channels == 1) {
            iVar6 = 0;
            psVar7 = dst_buffer;
            if (0 < num_output_samples) {
              do {
                dVar8 = round((double)((float)iVar6 * fVar2));
                iVar6 = iVar6 + 1;
                *(char *)psVar7 = (char)((ushort)src_buffer[(int)ROUND(dVar8)] >> 8);
                psVar7 = (short *)((int)psVar7 + 1);
              } while (iVar6 < num_output_samples);
            }
          }
          else {
            iVar6 = 0;
            psVar7 = dst_buffer;
            if (0 < num_output_samples) {
              do {
                dVar8 = round((double)((float)iVar6 * fVar2));
                local_1c = (byte)((ushort)src_buffer[(int)ROUND(dVar8)] >> 8);
                *(byte *)((int)psVar7 + 1) = local_1c;
                iVar6 = iVar6 + 1;
                *(byte *)psVar7 = local_1c;
                psVar7 = psVar7 + 1;
              } while (iVar6 < num_output_samples);
            }
          }
        }
        else if (dst_channels == 1) {
          iVar6 = 0;
          psVar7 = dst_buffer;
          if (0 < num_output_samples) {
            do {
              dVar8 = round((double)((float)iVar6 * fVar2));
              iVar6 = iVar6 + 1;
              *(char *)psVar7 =
                   (char)((int)src_buffer[(int)ROUND(dVar8) * 2] +
                          (*(int *)(src_buffer + (int)ROUND(dVar8) * 2) >> 0x10) >> 9);
              psVar7 = (short *)((int)psVar7 + 1);
            } while (iVar6 < num_output_samples);
          }
        }
        else {
          iVar6 = 0;
          psVar7 = dst_buffer;
          if (0 < num_output_samples) {
            do {
              dVar8 = round((double)((float)iVar6 * fVar2));
              local_1c = (byte)((ushort)src_buffer[(int)ROUND(dVar8) * 2] >> 8);
              *(byte *)psVar7 = local_1c;
              local_1c = (byte)
                         ((uint)*(uint *)(src_buffer + (int)ROUND(dVar8) * 2) >> 0x18);
              iVar6 = iVar6 + 1;
              *(byte *)((int)psVar7 + 1) = local_1c;
              psVar7 = psVar7 + 1;
            } while (iVar6 < num_output_samples);
          }
        }
      }
      else if (src_channels == 1) {
        if (dst_channels == 1) {
          iVar6 = 0;
          psVar7 = dst_buffer;
          if (0 < num_output_samples) {
            do {
              dVar8 = round((double)((float)iVar6 * fVar2));
              iVar6 = iVar6 + 1;
              *psVar7 = src_buffer[(int)ROUND(dVar8)];
              psVar7 = psVar7 + 1;
            } while (iVar6 < num_output_samples);
          }
        }
        else {
          iVar6 = 0;
          psVar7 = dst_buffer;
          if (0 < num_output_samples) {
            do {
              dVar8 = round((double)((float)iVar6 * fVar2));
              sVar3 = src_buffer[(int)ROUND(dVar8)];
              psVar7[1] = sVar3;
              iVar6 = iVar6 + 1;
              *psVar7 = sVar3;
              psVar7 = psVar7 + 2;
            } while (iVar6 < num_output_samples);
          }
        }
      }
      else if (dst_channels == 1) {
        iVar6 = 0;
        psVar7 = dst_buffer;
        if (0 < num_output_samples) {
          do {
            dVar8 = round((double)((float)iVar6 * fVar2));
            iVar6 = iVar6 + 1;
            *psVar7 = (short)((int)src_buffer[(int)ROUND(dVar8) * 2] +
                              (*(int *)(src_buffer + (int)ROUND(dVar8) * 2) >> 0x10) >> 1);
            psVar7 = psVar7 + 1;
          } while (iVar6 < num_output_samples);
        }
      }
      else {
        iVar6 = 0;
        psVar7 = dst_buffer;
        if (0 < num_output_samples) {
          do {
            dVar8 = round((double)((float)iVar6 * fVar2));
            *psVar7 = src_buffer[(int)ROUND(dVar8) * 2];
            iVar6 = iVar6 + 1;
            psVar7[1] = src_buffer[(int)ROUND(dVar8) * 2 + 1];
            psVar7 = psVar7 + 2;
          } while (iVar6 < num_output_samples);
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
