// Name: sound_sndmain.cpp_resampleAndConvertAudio_FUN_005aa7f0
// Address: 005aa7f0
// Address Range: [[005aa7f0, 005aadfc]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_resampleAndConvertAudio_FUN_005aa7f0(int src_bit_depth,int src_channels,int src_sample_rate,int src_signed,short *src_buffer,int dst_bit_depth,int dst_channels,int dst_sample_rate,int dst_signed,short *dst_buffer,int num_output_samples)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl sound_sndmain_cpp_resampleAndConvertAudio_FUN_005aa7f0(int src_bit_depth,int src_channels,int src_sample_rate,int src_signed,short *src_buffer,int dst_bit_depth,int dst_channels,int dst_sample_rate,int dst_signed,short *dst_buffer,int num_output_samples)

{
  byte uVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  short *psVar8;
  byte local_18;
  
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
      fVar2 = (float)src_sample_rate / (float)dst_sample_rate;
      if (src_bit_depth == 8) {
        if (dst_bit_depth == 8) {
          if (src_channels == 1) {
            if (dst_channels == 1) {
              iVar7 = 0;
              psVar8 = dst_buffer;
              if (0 < num_output_samples) {
                do {
                  fVar3 = (float)iVar7;
                  iVar7 = iVar7 + 1;
                  *(byte *)psVar8 =
                       *(byte *)((int)ROUND(ROUND(fVar3 * fVar2)) + (int)src_buffer);
                  psVar8 = (short *)((int)psVar8 + 1);
                } while (iVar7 < num_output_samples);
              }
            }
            else {
              iVar7 = 0;
              psVar8 = dst_buffer;
              if (0 < num_output_samples) {
                do {
                  uVar1 = *(byte *)((int)ROUND(ROUND((float)iVar7 * fVar2)) + (int)src_buffer)
                  ;
                  *(byte *)((int)psVar8 + 1) = uVar1;
                  iVar7 = iVar7 + 1;
                  *(byte *)psVar8 = uVar1;
                  psVar8 = psVar8 + 1;
                } while (iVar7 < num_output_samples);
              }
            }
          }
          else if (dst_channels == 1) {
            iVar7 = 0;
            psVar8 = dst_buffer;
            if (0 < num_output_samples) {
              do {
                local_18 = (byte)
                           ((int)(char)src_buffer[(int)ROUND(ROUND((float)iVar7 * fVar2))] +
                            (int)*(char *)((int)src_buffer +
                                          (int)ROUND(ROUND((float)iVar7 * fVar2)) * 2 + 1) >> 1);
                iVar7 = iVar7 + 1;
                *(byte *)psVar8 = local_18;
                psVar8 = (short *)((int)psVar8 + 1);
              } while (iVar7 < num_output_samples);
            }
          }
          else {
            iVar7 = 0;
            psVar8 = dst_buffer;
            if (0 < num_output_samples) {
              do {
                fVar3 = (float)iVar7;
                *(char *)psVar8 = (char)src_buffer[(int)ROUND(ROUND(fVar3 * fVar2))];
                iVar7 = iVar7 + 1;
                *(byte *)((int)psVar8 + 1) =
                     *(byte *)((int)src_buffer + (int)ROUND(ROUND(fVar3 * fVar2)) * 2 + 1);
                psVar8 = psVar8 + 1;
              } while (iVar7 < num_output_samples);
            }
          }
        }
        else if (src_channels == 1) {
          if (dst_channels == 1) {
            iVar7 = 0;
            psVar8 = dst_buffer;
            if (0 < num_output_samples) {
              do {
                fVar3 = (float)iVar7;
                iVar7 = iVar7 + 1;
                *psVar8 = (short)*(char *)((int)ROUND(ROUND(fVar3 * fVar2)) + (int)src_buffer) << 8;
                psVar8 = psVar8 + 1;
              } while (iVar7 < num_output_samples);
            }
          }
          else {
            iVar7 = 0;
            psVar8 = dst_buffer;
            if (0 < num_output_samples) {
              do {
                sVar4 = (short)*(char *)((int)ROUND(ROUND((float)iVar7 * fVar2)) + (int)src_buffer)
                        << 8;
                psVar8[1] = sVar4;
                iVar7 = iVar7 + 1;
                *psVar8 = sVar4;
                psVar8 = psVar8 + 2;
              } while (iVar7 < num_output_samples);
            }
          }
        }
        else if (dst_channels == 1) {
          iVar7 = 0;
          psVar8 = dst_buffer;
          if (0 < num_output_samples) {
            do {
              fVar3 = (float)iVar7;
              iVar7 = iVar7 + 1;
              *psVar8 = (char)src_buffer[(int)ROUND(ROUND(fVar3 * fVar2))] * 0x80 +
                        *(char *)((int)src_buffer + (int)ROUND(ROUND(fVar3 * fVar2)) * 2 + 1) * 0x80
              ;
              psVar8 = psVar8 + 1;
            } while (iVar7 < num_output_samples);
          }
        }
        else {
          iVar7 = 0;
          psVar8 = dst_buffer;
          if (0 < num_output_samples) {
            do {
              fVar3 = (float)iVar7;
              *psVar8 = (short)(char)src_buffer[(int)ROUND(ROUND(fVar3 * fVar2))] << 8;
              iVar7 = iVar7 + 1;
              psVar8[1] = (short)*(char *)((int)src_buffer +
                                          (int)ROUND(ROUND(fVar3 * fVar2)) * 2 + 1) << 8;
              psVar8 = psVar8 + 2;
            } while (iVar7 < num_output_samples);
          }
        }
      }
      else if (dst_bit_depth == 8) {
        if (src_channels == 1) {
          if (dst_channels == 1) {
            iVar7 = 0;
            psVar8 = dst_buffer;
            if (0 < num_output_samples) {
              do {
                fVar3 = (float)iVar7;
                iVar7 = iVar7 + 1;
                *(char *)psVar8 = (char)((ushort)src_buffer[(int)ROUND(ROUND(fVar3 * fVar2))] >> 8);
                psVar8 = (short *)((int)psVar8 + 1);
              } while (iVar7 < num_output_samples);
            }
          }
          else {
            iVar7 = 0;
            psVar8 = dst_buffer;
            if (0 < num_output_samples) {
              do {
                local_18 = (byte)
                           ((ushort)src_buffer[(int)ROUND(ROUND((float)iVar7 * fVar2))] >> 8);
                *(byte *)((int)psVar8 + 1) = local_18;
                iVar7 = iVar7 + 1;
                *(byte *)psVar8 = local_18;
                psVar8 = psVar8 + 1;
              } while (iVar7 < num_output_samples);
            }
          }
        }
        else if (dst_channels == 1) {
          iVar7 = 0;
          psVar8 = dst_buffer;
          if (0 < num_output_samples) {
            do {
              fVar3 = (float)iVar7;
              iVar7 = iVar7 + 1;
              *(char *)psVar8 =
                   (char)((int)src_buffer[(int)ROUND(ROUND(fVar3 * fVar2)) * 2] +
                          (*(int *)(src_buffer + (int)ROUND(ROUND(fVar3 * fVar2)) * 2) >> 0x10) >> 9
                         );
              psVar8 = (short *)((int)psVar8 + 1);
            } while (iVar7 < num_output_samples);
          }
        }
        else {
          iVar7 = 0;
          psVar8 = dst_buffer;
          if (0 < num_output_samples) {
            do {
              local_18 = (byte)
                         ((ushort)src_buffer[(int)ROUND(ROUND((float)iVar7 * fVar2)) * 2] >> 8);
              *(byte *)psVar8 = local_18;
              local_18 = (byte)
                         ((uint)*(uint *)
                                 (src_buffer + (int)ROUND(ROUND((float)iVar7 * fVar2)) * 2) >> 0x18)
              ;
              iVar7 = iVar7 + 1;
              *(byte *)((int)psVar8 + 1) = local_18;
              psVar8 = psVar8 + 1;
            } while (iVar7 < num_output_samples);
          }
        }
      }
      else if (src_channels == 1) {
        if (dst_channels == 1) {
          iVar7 = 0;
          psVar8 = dst_buffer;
          if (0 < num_output_samples) {
            do {
              fVar3 = (float)iVar7;
              iVar7 = iVar7 + 1;
              *psVar8 = src_buffer[(int)ROUND(ROUND(fVar3 * fVar2))];
              psVar8 = psVar8 + 1;
            } while (iVar7 < num_output_samples);
          }
        }
        else {
          iVar7 = 0;
          psVar8 = dst_buffer;
          if (0 < num_output_samples) {
            do {
              sVar4 = src_buffer[(int)ROUND(ROUND((float)iVar7 * fVar2))];
              psVar8[1] = sVar4;
              iVar7 = iVar7 + 1;
              *psVar8 = sVar4;
              psVar8 = psVar8 + 2;
            } while (iVar7 < num_output_samples);
          }
        }
      }
      else if (dst_channels == 1) {
        iVar7 = 0;
        psVar8 = dst_buffer;
        if (0 < num_output_samples) {
          do {
            fVar3 = (float)iVar7;
            iVar7 = iVar7 + 1;
            *psVar8 = (short)((int)src_buffer[(int)ROUND(ROUND(fVar3 * fVar2)) * 2] +
                              (*(int *)(src_buffer + (int)ROUND(ROUND(fVar3 * fVar2)) * 2) >> 0x10)
                             >> 1);
            psVar8 = psVar8 + 1;
          } while (iVar7 < num_output_samples);
        }
      }
      else {
        iVar7 = 0;
        psVar8 = dst_buffer;
        if (0 < num_output_samples) {
          do {
            fVar3 = (float)iVar7;
            *psVar8 = src_buffer[(int)ROUND(ROUND(fVar3 * fVar2)) * 2];
            iVar7 = iVar7 + 1;
            psVar8[1] = src_buffer[(int)ROUND(ROUND(fVar3 * fVar2)) * 2 + 1];
            psVar8 = psVar8 + 2;
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
