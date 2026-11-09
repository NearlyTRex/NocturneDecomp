// Name: sound_sndmain.cpp_resampleAndConvertAudio_FUN_00557950
// Address: 00557950
// Address Range: [[00557950, 00557f5c]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_resampleAndConvertAudio_FUN_00557950(int src_bit_depth,int src_channels,int src_sample_rate,int src_signed,short *src_buffer,int dst_bit_depth,int dst_channels,int dst_sample_rate,int dst_signed,short *dst_buffer,int num_output_samples)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_resampleAndConvertAudio_FUN_00557950(int src_bit_depth,int src_channels,int src_sample_rate,int src_signed,short *src_buffer,int dst_bit_depth,int dst_channels,int dst_sample_rate,int dst_signed,short *dst_buffer,int num_output_samples)

{
  byte uVar1;
  ushort uVar2;
  float fVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte *puVar8;
  ushort *puVar9;
  short *psVar10;
  float10 fVar11;
  float10 fVar12;
  ulonglong uVar13;
  byte local_18;
  
  if (0 < num_output_samples) {
    if (((src_sample_rate == dst_sample_rate) && (src_bit_depth == dst_bit_depth)) &&
       (src_channels == dst_channels)) {
      if (src_buffer != dst_buffer) {
        uVar5 = ((int)((src_bit_depth + (src_bit_depth >> 0x1f) * -8) -
                      (uint)((src_bit_depth >> 0x1f) << 2 < 0)) >> 3) * num_output_samples *
                dst_channels;
        psVar10 = dst_buffer;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(uint *)psVar10 = *(uint *)src_buffer;
          src_buffer = src_buffer + 2;
          psVar10 = psVar10 + 2;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(char *)psVar10 = (char)*src_buffer;
          src_buffer = (short *)((int)src_buffer + 1);
          psVar10 = (short *)((int)psVar10 + 1);
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
                fVar11 = (float10)fVar3;
                psVar10 = dst_buffer;
                do {
                  fVar12 = (float10)iVar7 * fVar11;
                  uVar13 = round();
                  iVar7 = (int)((ulonglong)uVar13 >> 0x20) + 1;
                  *(byte *)psVar10 = *(byte *)((int)ROUND(fVar12) + (int)uVar13);
                  psVar10 = (short *)((int)psVar10 + 1);
                } while (iVar7 < num_output_samples);
              }
            }
            else {
              iVar7 = 0;
              if (0 < num_output_samples) {
                fVar11 = (float10)fVar3;
                do {
                  fVar12 = (float10)iVar7 * fVar11;
                  uVar13 = round();
                  puVar8 = (byte *)((ulonglong)uVar13 >> 0x20);
                  uVar1 = *(byte *)((int)ROUND(fVar12) + (int)uVar13);
                  puVar8[1] = uVar1;
                  iVar7 = iVar7 + 1;
                  *puVar8 = uVar1;
                } while (iVar7 < num_output_samples);
              }
            }
          }
          else if (dst_channels == 1) {
            iVar7 = 0;
            if (0 < num_output_samples) {
              fVar11 = (float10)fVar3;
              psVar10 = dst_buffer;
              do {
                fVar12 = (float10)iVar7 * fVar11;
                uVar13 = round();
                local_18 = (byte)
                           ((int)*(char *)((int)uVar13 + (int)ROUND(fVar12) * 2) +
                            (int)*(char *)((int)uVar13 + 1 + (int)ROUND(fVar12) * 2) >> 1);
                iVar7 = (int)((ulonglong)uVar13 >> 0x20) + 1;
                *(byte *)psVar10 = local_18;
                psVar10 = (short *)((int)psVar10 + 1);
              } while (iVar7 < num_output_samples);
            }
          }
          else {
            iVar7 = 0;
            if (0 < num_output_samples) {
              fVar11 = (float10)fVar3;
              psVar10 = dst_buffer;
              do {
                fVar12 = (float10)iVar7 * fVar11;
                uVar13 = round();
                *(byte *)psVar10 = *(byte *)((int)uVar13 + (int)ROUND(fVar12) * 2);
                iVar7 = (int)((ulonglong)uVar13 >> 0x20) + 1;
                *(byte *)((int)psVar10 + 1) =
                     *(byte *)((int)uVar13 + 1 + (int)ROUND(fVar12) * 2);
                psVar10 = psVar10 + 1;
              } while (iVar7 < num_output_samples);
            }
          }
        }
        else if (src_channels == 1) {
          if (dst_channels == 1) {
            iVar7 = 0;
            if (0 < num_output_samples) {
              fVar11 = (float10)fVar3;
              psVar10 = dst_buffer;
              do {
                fVar12 = (float10)iVar7 * fVar11;
                uVar13 = round();
                iVar7 = (int)((ulonglong)uVar13 >> 0x20) + 1;
                *psVar10 = (short)*(char *)((int)ROUND(fVar12) + (int)uVar13) << 8;
                psVar10 = psVar10 + 1;
              } while (iVar7 < num_output_samples);
            }
          }
          else {
            iVar7 = 0;
            if (0 < num_output_samples) {
              fVar11 = (float10)fVar3;
              do {
                fVar12 = (float10)iVar7 * fVar11;
                uVar13 = round();
                psVar10 = (short *)((ulonglong)uVar13 >> 0x20);
                sVar4 = (short)*(char *)((int)ROUND(fVar12) + (int)uVar13) << 8;
                psVar10[1] = sVar4;
                iVar7 = iVar7 + 1;
                *psVar10 = sVar4;
              } while (iVar7 < num_output_samples);
            }
          }
        }
        else if (dst_channels == 1) {
          iVar7 = 0;
          if (0 < num_output_samples) {
            fVar11 = (float10)fVar3;
            psVar10 = dst_buffer;
            do {
              fVar12 = (float10)iVar7 * fVar11;
              uVar13 = round();
              iVar7 = (int)((ulonglong)uVar13 >> 0x20) + 1;
              *psVar10 = *(char *)((int)uVar13 + (int)ROUND(fVar12) * 2) * 0x80 +
                         *(char *)((int)uVar13 + 1 + (int)ROUND(fVar12) * 2) * 0x80;
              psVar10 = psVar10 + 1;
            } while (iVar7 < num_output_samples);
          }
        }
        else {
          iVar7 = 0;
          if (0 < num_output_samples) {
            fVar11 = (float10)fVar3;
            do {
              fVar12 = (float10)iVar7 * fVar11;
              uVar13 = round();
              psVar10 = (short *)((ulonglong)uVar13 >> 0x20);
              *psVar10 = (short)*(char *)((int)uVar13 + (int)ROUND(fVar12) * 2) << 8;
              iVar7 = iVar7 + 1;
              psVar10[1] = (short)*(char *)((int)uVar13 + 1 + (int)ROUND(fVar12) * 2) << 8;
            } while (iVar7 < num_output_samples);
          }
        }
      }
      else if (dst_bit_depth == 8) {
        if (src_channels == 1) {
          if (dst_channels == 1) {
            iVar7 = 0;
            if (0 < num_output_samples) {
              fVar11 = (float10)fVar3;
              psVar10 = dst_buffer;
              do {
                fVar12 = (float10)iVar7 * fVar11;
                uVar13 = round();
                iVar7 = (int)((ulonglong)uVar13 >> 0x20) + 1;
                *(char *)psVar10 =
                     (char)((ushort)*(ushort *)((int)uVar13 + (int)ROUND(fVar12) * 2) >> 8);
                psVar10 = (short *)((int)psVar10 + 1);
              } while (iVar7 < num_output_samples);
            }
          }
          else {
            iVar7 = 0;
            if (0 < num_output_samples) {
              fVar11 = (float10)fVar3;
              do {
                fVar12 = (float10)iVar7 * fVar11;
                uVar13 = round();
                puVar8 = (byte *)((ulonglong)uVar13 >> 0x20);
                local_18 = (byte)
                           ((ushort)*(ushort *)((int)uVar13 + (int)ROUND(fVar12) * 2) >> 8);
                puVar8[1] = local_18;
                iVar7 = iVar7 + 1;
                *puVar8 = local_18;
              } while (iVar7 < num_output_samples);
            }
          }
        }
        else if (dst_channels == 1) {
          iVar7 = 0;
          if (0 < num_output_samples) {
            fVar11 = (float10)fVar3;
            psVar10 = dst_buffer;
            do {
              fVar12 = (float10)iVar7 * fVar11;
              uVar13 = round();
              iVar7 = (int)((ulonglong)uVar13 >> 0x20) + 1;
              *(char *)psVar10 =
                   (char)((int)*(short *)((int)uVar13 + (int)ROUND(fVar12) * 4) +
                          (*(int *)((int)uVar13 + (int)ROUND(fVar12) * 4) >> 0x10) >> 9);
              psVar10 = (short *)((int)psVar10 + 1);
            } while (iVar7 < num_output_samples);
          }
        }
        else {
          iVar7 = 0;
          if (0 < num_output_samples) {
            fVar11 = (float10)fVar3;
            psVar10 = dst_buffer;
            do {
              fVar12 = (float10)iVar7 * fVar11;
              uVar13 = round();
              local_18 = (byte)
                         ((ushort)*(ushort *)((int)uVar13 + (int)ROUND(fVar12) * 4) >> 8);
              *(byte *)psVar10 = local_18;
              local_18 = (byte)
                         ((uint)*(uint *)((int)uVar13 + (int)ROUND(fVar12) * 4) >> 0x18);
              iVar7 = (int)((ulonglong)uVar13 >> 0x20) + 1;
              *(byte *)((int)psVar10 + 1) = local_18;
              psVar10 = psVar10 + 1;
            } while (iVar7 < num_output_samples);
          }
        }
      }
      else if (src_channels == 1) {
        if (dst_channels == 1) {
          iVar7 = 0;
          if (0 < num_output_samples) {
            fVar11 = (float10)fVar3;
            psVar10 = dst_buffer;
            do {
              fVar12 = (float10)iVar7 * fVar11;
              uVar13 = round();
              iVar7 = (int)((ulonglong)uVar13 >> 0x20) + 1;
              *psVar10 = *(short *)((int)uVar13 + (int)ROUND(fVar12) * 2);
              psVar10 = psVar10 + 1;
            } while (iVar7 < num_output_samples);
          }
        }
        else {
          iVar7 = 0;
          if (0 < num_output_samples) {
            fVar11 = (float10)fVar3;
            do {
              fVar12 = (float10)iVar7 * fVar11;
              uVar13 = round();
              puVar9 = (ushort *)((ulonglong)uVar13 >> 0x20);
              uVar2 = *(ushort *)((int)uVar13 + (int)ROUND(fVar12) * 2);
              puVar9[1] = uVar2;
              iVar7 = iVar7 + 1;
              *puVar9 = uVar2;
            } while (iVar7 < num_output_samples);
          }
        }
      }
      else if (dst_channels == 1) {
        iVar7 = 0;
        if (0 < num_output_samples) {
          fVar11 = (float10)fVar3;
          psVar10 = dst_buffer;
          do {
            fVar12 = (float10)iVar7 * fVar11;
            uVar13 = round();
            iVar7 = (int)((ulonglong)uVar13 >> 0x20) + 1;
            *psVar10 = (short)((int)*(short *)((int)uVar13 + (int)ROUND(fVar12) * 4) +
                               (*(int *)((int)uVar13 + (int)ROUND(fVar12) * 4) >> 0x10) >> 1);
            psVar10 = psVar10 + 1;
          } while (iVar7 < num_output_samples);
        }
      }
      else {
        iVar7 = 0;
        if (0 < num_output_samples) {
          fVar11 = (float10)fVar3;
          do {
            fVar12 = (float10)iVar7 * fVar11;
            uVar13 = round();
            puVar9 = (ushort *)((ulonglong)uVar13 >> 0x20);
            *puVar9 = *(ushort *)((int)uVar13 + (int)ROUND(fVar12) * 4);
            iVar7 = iVar7 + 1;
            puVar9[1] = *(ushort *)((int)uVar13 + 2 + (int)ROUND(fVar12) * 4);
          } while (iVar7 < num_output_samples);
        }
      }
    }
    if (((src_signed != 0) && (dst_signed == 0)) || ((src_signed == 0 && (dst_signed != 0)))) {
      if (dst_bit_depth != 8) {
        sound_sndmain_cpp_convert16BitAudioSignedness_FUN_00557930(dst_buffer,num_output_samples);
        return;
      }
      sound_sndmain_cpp_convert8BitAudioSignedness_FUN_00557910
                ((byte *)dst_buffer,num_output_samples);
    }
  }
  return;
}
