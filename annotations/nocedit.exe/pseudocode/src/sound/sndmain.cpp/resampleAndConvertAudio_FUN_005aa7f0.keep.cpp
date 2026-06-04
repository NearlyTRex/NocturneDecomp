// Name: sound_sndmain.cpp_resampleAndConvertAudio_FUN_005aa7f0
// Address: 005aa7f0
// MANUAL RECONSTRUCTION
// Address Range: [[005aa7f0, 005aadfc]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_resampleAndConvertAudio_FUN_005aa7f0(int src_bit_depth,int src_channels,int src_sample_rate,int src_signed,short *src_buffer,int dst_bit_depth,int dst_channels,int dst_sample_rate,int dst_signed,short *dst_buffer,int num_output_samples)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_resampleAndConvertAudio_FUN_005aa7f0(int src_bit_depth,int src_channels,int src_sample_rate,int src_signed,short *src_buffer,int dst_bit_depth,int dst_channels,int dst_sample_rate,int dst_signed,short *dst_buffer,int num_output_samples)

{
  short sVar1;
  float fVar4;
  short sVar4;
  int iVar7;
  short *psVar9;
  short *psVar8;
  int iVar10;
  byte local_18;
  float fVar3;
  float fVar2;
  byte uVar1;
  
  if (0 < num_output_samples) {
    if (((src_sample_rate == dst_sample_rate) && (src_bit_depth == dst_bit_depth)) &&
       (src_channels == dst_channels)) {
      if (src_buffer != dst_buffer) {
        memcpy(dst_buffer,src_buffer,(src_bit_depth / 8) * num_output_samples * dst_channels);
      }
    }
    else {
      fVar2 = (float)src_sample_rate / (float)dst_sample_rate;
      if (src_bit_depth == 8) {
        if (dst_bit_depth == 8) {
          if (src_channels == 1) {
            if (dst_channels == 1) {
              iVar7 = 0;
              psVar9 = dst_buffer;
                do {
                  fVar3 = (float)iVar7;
                  iVar7 = iVar7 + 1;
                  *(byte *)psVar9 =
                       *((byte *)src_buffer + (int)ROUND(ROUND(fVar3 * fVar2)));
                  psVar9 = (short *)((char *)psVar9 + 1);
                } while (iVar7 < num_output_samples);
            }
            else {
              iVar10 = 0;
              psVar9 = dst_buffer;
                do {
                  uVar1 = *((byte *)src_buffer +
                           (int)ROUND(ROUND((float)iVar10 * fVar2)));
                  *((byte *)psVar9 + 1) = uVar1;
                  iVar10 = iVar10 + 1;
                  *(byte *)psVar9 = uVar1;
                  psVar9 = psVar9 + 1;
                } while (iVar10 < num_output_samples);
            }
          }
          else if (dst_channels == 1) {
            iVar10 = 0;
            psVar9 = dst_buffer;
              do {
                local_18 = (byte)
                           ((int)(char)src_buffer[(int)ROUND(ROUND((float)iVar10 * fVar2))] +
                            (int)*((char *)src_buffer +
                                          (int)ROUND(ROUND((float)iVar10 * fVar2)) * 2 + 1) >> 1);
                iVar10 = iVar10 + 1;
                *(byte *)psVar9 = local_18;
                psVar9 = (short *)((char *)psVar9 + 1);
              } while (iVar10 < num_output_samples);
          }
          else {
            iVar10 = 0;
            psVar9 = dst_buffer;
              do {
                fVar4 = (float)iVar10;
                *(char *)psVar9 = (char)src_buffer[(int)ROUND(ROUND(fVar4 * fVar2))];
                iVar10 = iVar10 + 1;
                *((byte *)psVar9 + 1) =
                     *((byte *)src_buffer + (int)ROUND(ROUND(fVar4 * fVar2)) * 2 + 1);
                psVar9 = psVar9 + 1;
              } while (iVar10 < num_output_samples);
          }
        }
        else if (src_channels == 1) {
          if (dst_channels == 1) {
            iVar10 = 0;
            psVar9 = dst_buffer;
              do {
                fVar4 = (float)iVar10;
                iVar10 = iVar10 + 1;
                *psVar9 = (short)*((char *)src_buffer + (int)ROUND(ROUND(fVar4 * fVar2))) << 8;
                psVar9 = psVar9 + 1;
              } while (iVar10 < num_output_samples);
          }
          else {
            iVar10 = 0;
            psVar9 = dst_buffer;
              do {
                sVar4 = (short)*((char *)src_buffer + (int)ROUND(ROUND((float)iVar10 * fVar2)))
                        << 8;
                psVar9[1] = sVar4;
                iVar10 = iVar10 + 1;
                *psVar9 = sVar4;
                psVar9 = psVar9 + 2;
              } while (iVar10 < num_output_samples);
          }
        }
        else if (dst_channels == 1) {
          iVar10 = 0;
          psVar9 = dst_buffer;
            do {
              fVar4 = (float)iVar10;
              iVar10 = iVar10 + 1;
              *psVar9 = (char)src_buffer[(int)ROUND(ROUND(fVar4 * fVar2))] * 0x80 +
                        *((char *)src_buffer + (int)ROUND(ROUND(fVar4 * fVar2)) * 2 + 1) * 0x80
              ;
              psVar9 = psVar9 + 1;
            } while (iVar10 < num_output_samples);
        }
        else {
          iVar10 = 0;
          psVar9 = dst_buffer;
            do {
              fVar4 = (float)iVar10;
              *psVar9 = (short)(char)src_buffer[(int)ROUND(ROUND(fVar4 * fVar2))] << 8;
              iVar10 = iVar10 + 1;
              psVar9[1] = (short)*((char *)src_buffer +
                                          (int)ROUND(ROUND(fVar4 * fVar2)) * 2 + 1) << 8;
              psVar9 = psVar9 + 2;
            } while (iVar10 < num_output_samples);
        }
      }
      else if (dst_bit_depth == 8) {
        if (src_channels == 1) {
          if (dst_channels == 1) {
            iVar10 = 0;
            psVar9 = dst_buffer;
              do {
                fVar4 = (float)iVar10;
                iVar10 = iVar10 + 1;
                *(char *)psVar9 = (char)((ushort)src_buffer[(int)ROUND(ROUND(fVar4 * fVar2))] >> 8);
                psVar9 = (short *)((char *)psVar9 + 1);
              } while (iVar10 < num_output_samples);
          }
          else {
            iVar10 = 0;
            psVar9 = dst_buffer;
              do {
                local_18 = (byte)
                           ((ushort)src_buffer[(int)ROUND(ROUND((float)iVar10 * fVar2))] >> 8);
                *((byte *)psVar9 + 1) = local_18;
                iVar10 = iVar10 + 1;
                *(byte *)psVar9 = local_18;
                psVar9 = psVar9 + 1;
              } while (iVar10 < num_output_samples);
          }
        }
        else if (dst_channels == 1) {
          iVar10 = 0;
          psVar9 = dst_buffer;
            do {
              fVar4 = (float)iVar10;
              iVar10 = iVar10 + 1;
              *(char *)psVar9 =
                   (char)((int)src_buffer[(int)ROUND(ROUND(fVar4 * fVar2)) * 2] +
                          (*(int *)(src_buffer + (int)ROUND(ROUND(fVar4 * fVar2)) * 2) >> 0x10) >> 9
                         );
              psVar9 = (short *)((char *)psVar9 + 1);
            } while (iVar10 < num_output_samples);
        }
        else {
          iVar10 = 0;
          psVar9 = dst_buffer;
            do {
              local_18 = (byte)
                         ((ushort)src_buffer[(int)ROUND(ROUND((float)iVar10 * fVar2)) * 2] >> 8);
              *(byte *)psVar9 = local_18;
              local_18 = (byte)
                         ((uint)*(uint *)
                                 (src_buffer + (int)ROUND(ROUND((float)iVar10 * fVar2)) * 2) >> 0x18
                         );
              iVar10 = iVar10 + 1;
              *((byte *)psVar9 + 1) = local_18;
              psVar9 = psVar9 + 1;
            } while (iVar10 < num_output_samples);
        }
      }
      else if (src_channels == 1) {
        if (dst_channels == 1) {
          iVar10 = 0;
          psVar9 = dst_buffer;
            do {
              fVar4 = (float)iVar10;
              iVar10 = iVar10 + 1;
              *psVar9 = src_buffer[(int)ROUND(ROUND(fVar4 * fVar2))];
              psVar9 = psVar9 + 1;
            } while (iVar10 < num_output_samples);
        }
        else {
          iVar10 = 0;
          psVar9 = dst_buffer;
            do {
              sVar1 = src_buffer[(int)ROUND(ROUND((float)iVar10 * fVar2))];
              psVar9[1] = sVar1;
              iVar10 = iVar10 + 1;
              *psVar9 = sVar1;
              psVar9 = psVar9 + 2;
            } while (iVar10 < num_output_samples);
        }
      }
      else if (dst_channels == 1) {
        iVar10 = 0;
        psVar9 = dst_buffer;
          do {
            fVar4 = (float)iVar10;
            iVar10 = iVar10 + 1;
            *psVar9 = (short)((int)src_buffer[(int)ROUND(ROUND(fVar4 * fVar2)) * 2] +
                              (*(int *)(src_buffer + (int)ROUND(ROUND(fVar4 * fVar2)) * 2) >> 0x10)
                             >> 1);
            psVar9 = psVar9 + 1;
          } while (iVar10 < num_output_samples);
      }
      else {
        iVar10 = 0;
        psVar8 = dst_buffer;
          do {
            fVar4 = (float)iVar10;
            *psVar8 = src_buffer[(int)ROUND(ROUND(fVar4 * fVar2)) * 2];
            iVar10 = iVar10 + 1;
            psVar8[1] = src_buffer[(int)ROUND(ROUND(fVar4 * fVar2)) * 2 + 1];
            psVar8 = psVar8 + 2;
          } while (iVar10 < num_output_samples);
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
