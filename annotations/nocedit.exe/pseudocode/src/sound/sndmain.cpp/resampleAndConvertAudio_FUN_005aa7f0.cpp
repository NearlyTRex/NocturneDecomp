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
  float fVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte *puVar7;
  short *psVar8;
  short *psVar9;
  float10 fVar10;
  float10 fVar11;
  double dVar12;
  byte local_14;
  
  if (0 < num_output_samples) {
    if (((src_sample_rate == dst_sample_rate) && (src_bit_depth == dst_bit_depth)) &&
       (src_channels == dst_channels)) {
      if (src_buffer != dst_buffer) {
        uVar4 = ((int)((src_bit_depth + (src_bit_depth >> 0x1f) * -8) -
                      (uint)((src_bit_depth >> 0x1f) << 2 < 0)) >> 3) * num_output_samples *
                dst_channels;
        psVar8 = dst_buffer;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(uint *)psVar8 = *(uint *)src_buffer;
          src_buffer = src_buffer + 2;
          psVar8 = psVar8 + 2;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
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
              iVar6 = 0;
              if (0 < num_output_samples) {
                fVar10 = (float10)fVar2;
                psVar8 = dst_buffer;
                do {
                  fVar11 = (float10)iVar6 * fVar10;
                  dVar12 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(iVar6,src_buffer));
                  src_buffer = SUB84 /* extract 2-byte value */(dVar12,0);
                  iVar6 = (int)((ulonglong)dVar12 >> 0x20) + 1;
                  *(byte *)psVar8 = *(byte *)((int)ROUND(fVar11) + (int)src_buffer);
                  psVar8 = (short *)((int)psVar8 + 1);
                } while (iVar6 < num_output_samples);
              }
            }
            else {
              iVar6 = 0;
              if (0 < num_output_samples) {
                fVar10 = (float10)fVar2;
                psVar8 = dst_buffer;
                do {
                  fVar11 = (float10)iVar6 * fVar10;
                  dVar12 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(psVar8,src_buffer));
                  puVar7 = (byte *)((ulonglong)dVar12 >> 0x20);
                  src_buffer = SUB84 /* extract 2-byte value */(dVar12,0);
                  psVar8 = (short *)(puVar7 + 2);
                  uVar1 = *(byte *)((int)ROUND(fVar11) + (int)src_buffer);
                  puVar7[1] = uVar1;
                  iVar6 = iVar6 + 1;
                  *puVar7 = uVar1;
                } while (iVar6 < num_output_samples);
              }
            }
          }
          else if (dst_channels == 1) {
            iVar6 = 0;
            if (0 < num_output_samples) {
              fVar10 = (float10)fVar2;
              psVar8 = dst_buffer;
              do {
                fVar11 = (float10)iVar6 * fVar10;
                dVar12 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(iVar6,src_buffer));
                src_buffer = SUB84 /* extract 2-byte value */(dVar12,0);
                local_14 = (byte)
                           ((int)(char)src_buffer[(int)ROUND(fVar11)] +
                            (int)*(char *)((int)src_buffer + (int)ROUND(fVar11) * 2 + 1) >> 1);
                iVar6 = (int)((ulonglong)dVar12 >> 0x20) + 1;
                *(byte *)psVar8 = local_14;
                psVar8 = (short *)((int)psVar8 + 1);
              } while (iVar6 < num_output_samples);
            }
          }
          else {
            iVar6 = 0;
            if (0 < num_output_samples) {
              fVar10 = (float10)fVar2;
              psVar8 = dst_buffer;
              do {
                fVar11 = (float10)iVar6 * fVar10;
                dVar12 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(iVar6,src_buffer));
                src_buffer = SUB84 /* extract 2-byte value */(dVar12,0);
                *(char *)psVar8 = (char)src_buffer[(int)ROUND(fVar11)];
                iVar6 = (int)((ulonglong)dVar12 >> 0x20) + 1;
                *(byte *)((int)psVar8 + 1) =
                     *(byte *)((int)src_buffer + (int)ROUND(fVar11) * 2 + 1);
                psVar8 = psVar8 + 1;
              } while (iVar6 < num_output_samples);
            }
          }
        }
        else if (src_channels == 1) {
          if (dst_channels == 1) {
            iVar6 = 0;
            if (0 < num_output_samples) {
              fVar10 = (float10)fVar2;
              psVar8 = dst_buffer;
              do {
                fVar11 = (float10)iVar6 * fVar10;
                dVar12 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(iVar6,src_buffer));
                src_buffer = SUB84 /* extract 2-byte value */(dVar12,0);
                iVar6 = (int)((ulonglong)dVar12 >> 0x20) + 1;
                *psVar8 = (short)*(char *)((int)ROUND(fVar11) + (int)src_buffer) << 8;
                psVar8 = psVar8 + 1;
              } while (iVar6 < num_output_samples);
            }
          }
          else {
            iVar6 = 0;
            if (0 < num_output_samples) {
              fVar10 = (float10)fVar2;
              psVar8 = dst_buffer;
              do {
                fVar11 = (float10)iVar6 * fVar10;
                dVar12 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(psVar8,src_buffer));
                psVar9 = (short *)((ulonglong)dVar12 >> 0x20);
                src_buffer = SUB84 /* extract 2-byte value */(dVar12,0);
                psVar8 = psVar9 + 2;
                sVar3 = (short)*(char *)((int)ROUND(fVar11) + (int)src_buffer) << 8;
                psVar9[1] = sVar3;
                iVar6 = iVar6 + 1;
                *psVar9 = sVar3;
              } while (iVar6 < num_output_samples);
            }
          }
        }
        else if (dst_channels == 1) {
          iVar6 = 0;
          if (0 < num_output_samples) {
            fVar10 = (float10)fVar2;
            psVar8 = dst_buffer;
            do {
              fVar11 = (float10)iVar6 * fVar10;
              dVar12 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(iVar6,src_buffer));
              src_buffer = SUB84 /* extract 2-byte value */(dVar12,0);
              iVar6 = (int)((ulonglong)dVar12 >> 0x20) + 1;
              *psVar8 = (char)src_buffer[(int)ROUND(fVar11)] * 0x80 +
                        *(char *)((int)src_buffer + (int)ROUND(fVar11) * 2 + 1) * 0x80;
              psVar8 = psVar8 + 1;
            } while (iVar6 < num_output_samples);
          }
        }
        else {
          iVar6 = 0;
          if (0 < num_output_samples) {
            fVar10 = (float10)fVar2;
            psVar8 = dst_buffer;
            do {
              fVar11 = (float10)iVar6 * fVar10;
              dVar12 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(psVar8,src_buffer));
              psVar9 = (short *)((ulonglong)dVar12 >> 0x20);
              src_buffer = SUB84 /* extract 2-byte value */(dVar12,0);
              *psVar9 = (short)(char)src_buffer[(int)ROUND(fVar11)] << 8;
              psVar8 = psVar9 + 2;
              iVar6 = iVar6 + 1;
              psVar9[1] = (short)*(char *)((int)src_buffer + (int)ROUND(fVar11) * 2 + 1) << 8;
            } while (iVar6 < num_output_samples);
          }
        }
      }
      else if (dst_bit_depth == 8) {
        if (src_channels == 1) {
          if (dst_channels == 1) {
            iVar6 = 0;
            if (0 < num_output_samples) {
              fVar10 = (float10)fVar2;
              psVar8 = dst_buffer;
              do {
                fVar11 = (float10)iVar6 * fVar10;
                dVar12 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(iVar6,src_buffer));
                src_buffer = SUB84 /* extract 2-byte value */(dVar12,0);
                iVar6 = (int)((ulonglong)dVar12 >> 0x20) + 1;
                *(char *)psVar8 = (char)((ushort)src_buffer[(int)ROUND(fVar11)] >> 8);
                psVar8 = (short *)((int)psVar8 + 1);
              } while (iVar6 < num_output_samples);
            }
          }
          else {
            iVar6 = 0;
            if (0 < num_output_samples) {
              fVar10 = (float10)fVar2;
              psVar8 = dst_buffer;
              do {
                fVar11 = (float10)iVar6 * fVar10;
                dVar12 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(psVar8,src_buffer));
                puVar7 = (byte *)((ulonglong)dVar12 >> 0x20);
                src_buffer = SUB84 /* extract 2-byte value */(dVar12,0);
                psVar8 = (short *)(puVar7 + 2);
                local_14 = (byte)((ushort)src_buffer[(int)ROUND(fVar11)] >> 8);
                puVar7[1] = local_14;
                iVar6 = iVar6 + 1;
                *puVar7 = local_14;
              } while (iVar6 < num_output_samples);
            }
          }
        }
        else if (dst_channels == 1) {
          iVar6 = 0;
          if (0 < num_output_samples) {
            fVar10 = (float10)fVar2;
            psVar8 = dst_buffer;
            do {
              fVar11 = (float10)iVar6 * fVar10;
              dVar12 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(iVar6,src_buffer));
              src_buffer = SUB84 /* extract 2-byte value */(dVar12,0);
              iVar6 = (int)((ulonglong)dVar12 >> 0x20) + 1;
              *(char *)psVar8 =
                   (char)((int)src_buffer[(int)ROUND(fVar11) * 2] +
                          (*(int *)(src_buffer + (int)ROUND(fVar11) * 2) >> 0x10) >> 9);
              psVar8 = (short *)((int)psVar8 + 1);
            } while (iVar6 < num_output_samples);
          }
        }
        else {
          iVar6 = 0;
          if (0 < num_output_samples) {
            fVar10 = (float10)fVar2;
            psVar8 = dst_buffer;
            do {
              fVar11 = (float10)iVar6 * fVar10;
              dVar12 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(iVar6,src_buffer));
              src_buffer = SUB84 /* extract 2-byte value */(dVar12,0);
              local_14 = (byte)((ushort)src_buffer[(int)ROUND(fVar11) * 2] >> 8);
              *(byte *)psVar8 = local_14;
              local_14 = (byte)
                         ((uint)*(uint *)(src_buffer + (int)ROUND(fVar11) * 2) >> 0x18);
              iVar6 = (int)((ulonglong)dVar12 >> 0x20) + 1;
              *(byte *)((int)psVar8 + 1) = local_14;
              psVar8 = psVar8 + 1;
            } while (iVar6 < num_output_samples);
          }
        }
      }
      else if (src_channels == 1) {
        if (dst_channels == 1) {
          iVar6 = 0;
          if (0 < num_output_samples) {
            fVar10 = (float10)fVar2;
            psVar8 = dst_buffer;
            do {
              fVar11 = (float10)iVar6 * fVar10;
              dVar12 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(iVar6,src_buffer));
              src_buffer = SUB84 /* extract 2-byte value */(dVar12,0);
              iVar6 = (int)((ulonglong)dVar12 >> 0x20) + 1;
              *psVar8 = src_buffer[(int)ROUND(fVar11)];
              psVar8 = psVar8 + 1;
            } while (iVar6 < num_output_samples);
          }
        }
        else {
          iVar6 = 0;
          if (0 < num_output_samples) {
            fVar10 = (float10)fVar2;
            psVar8 = dst_buffer;
            do {
              fVar11 = (float10)iVar6 * fVar10;
              dVar12 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(psVar8,src_buffer));
              psVar9 = (short *)((ulonglong)dVar12 >> 0x20);
              src_buffer = SUB84 /* extract 2-byte value */(dVar12,0);
              psVar8 = psVar9 + 2;
              sVar3 = src_buffer[(int)ROUND(fVar11)];
              psVar9[1] = sVar3;
              iVar6 = iVar6 + 1;
              *psVar9 = sVar3;
            } while (iVar6 < num_output_samples);
          }
        }
      }
      else if (dst_channels == 1) {
        iVar6 = 0;
        if (0 < num_output_samples) {
          fVar10 = (float10)fVar2;
          psVar8 = dst_buffer;
          do {
            fVar11 = (float10)iVar6 * fVar10;
            dVar12 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(iVar6,src_buffer));
            src_buffer = SUB84 /* extract 2-byte value */(dVar12,0);
            iVar6 = (int)((ulonglong)dVar12 >> 0x20) + 1;
            *psVar8 = (short)((int)src_buffer[(int)ROUND(fVar11) * 2] +
                              (*(int *)(src_buffer + (int)ROUND(fVar11) * 2) >> 0x10) >> 1);
            psVar8 = psVar8 + 1;
          } while (iVar6 < num_output_samples);
        }
      }
      else {
        iVar6 = 0;
        if (0 < num_output_samples) {
          fVar10 = (float10)fVar2;
          psVar8 = dst_buffer;
          do {
            fVar11 = (float10)iVar6 * fVar10;
            dVar12 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(psVar8,src_buffer));
            psVar9 = (short *)((ulonglong)dVar12 >> 0x20);
            src_buffer = SUB84 /* extract 2-byte value */(dVar12,0);
            *psVar9 = src_buffer[(int)ROUND(fVar11) * 2];
            psVar8 = psVar9 + 2;
            iVar6 = iVar6 + 1;
            psVar9[1] = src_buffer[(int)ROUND(fVar11) * 2 + 1];
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
