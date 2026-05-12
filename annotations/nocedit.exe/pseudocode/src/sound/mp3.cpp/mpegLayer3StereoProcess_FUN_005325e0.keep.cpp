// Name: sound_mp3.cpp_mpegLayer3StereoProcess_FUN_005325e0
// Address: 005325e0
// MANUAL RECONSTRUCTION
// Address Range: [[005325e0, 005334a8]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_mpegLayer3StereoProcess_FUN_005325e0(SMpegStereoSubbandSamples *input_lr_samples,SMpegStereoSubbandSamples *output_samples,SMpegScalefactorBandData *scalefactor_data,SMpegLayer3GranuleInfo *granule,SMpegFrame *frame)

#include "nocturne.h"

// MP3 Layer III stereo decoder for one granule (576 freq-domain coefficients per channel).
//
// Joint-stereo (channel_mode == 1) advertises two optional modes via mode_extension:
//   bit 0 (intensity_stereo_enabled) — upper bands carry only L; R is reconstructed
//                                      from a per-band "is_pos" pan and a ratio.
//   bit 1 (ms_stereo_enabled)        — coefficients carry L=mid, R=side; recover via
//                                      L_out = (L+R)/sqrt(2),  R_out = (L-R)/sqrt(2).
// Both can be active simultaneously: I-stereo wins for samples whose is_pos != 7,
// MS wins for the rest. is_pos == 7 means "this coefficient is not I-stereo'd."
//
// Pass 1 fills is_pos_per_sample[0..575] (one entry per coefficient) and, for the
// I-stereo coefficients, precomputes the channel-pan ratios:
//   MPEG-1     : is_pos_tan[i]         = tan(is_pos[i] * pi/12)
//   MPEG-2 LSF : is_ratio_l[i] / is_ratio_r[i] from calculateIntensityStereoRatio,
//                seeded with mpeg2_is_pos_step (sqrt(0.5) or 2^(-1/4) per scalefac_compress&1).
// Long, short, and mixed block types each take a different path through pass 1
// because their scalefactor band layouts differ.
//
// Pass 2 zeroes output_samples and walks all 576 coefficients applying
// pass-through / MS / I-stereo per the is_pos table. Mono input takes a separate
// trailing branch that just copies channel 0 across (channel 1 stays zero).
//
// FIXES Ghidra cpp off-by-one: the upstream .cpp uses a single `&uStack_57a + N + 2`
// formula at every is_pos access site, but the asm's logical buffer base is at
// different stack offsets relative to `uStack_57a` for init writes vs. pass-2 reads
// (init: ESP+0x1b06+EAX with EAX pre-incremented to 2..; pass-2: ESP+0x1b08+ECX with
// ECX in 0..). Direct compilation of the .cpp produces a 2-byte shift between writes
// and reads, leaving the first coefficient of every granule reading uninitialized
// stack. This keep aligns indexing to the asm: init writes 0..575, pass-2 reads
// 0..575, I-stereo writes/reads at the matching sample index.
//
// Notes:
//   - band_idx_l / band_idx_s expose g_Layer3BandIndex[6] (packed
//     SMpegLayer3BandIndex { int l[23]; int s[14]; }) as flat int arrays so the
//     compiler's byte-stride lookups read as plain array indexing.

void __cdecl sound_mp3_cpp_mpegLayer3StereoProcess_FUN_005325e0(SMpegStereoSubbandSamples *input_lr_samples,SMpegStereoSubbandSamples *output_samples,SMpegScalefactorBandData *scalefactor_data,SMpegLayer3GranuleInfo *granule,SMpegFrame *frame)

{
  float fVar2;
  short sVar3;
  int iVar5;
  float (*pafVar6) [18];
  float *pfVar4;
  int iVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  int iVar6;
  int iVar9;
  float *pfVar11;
  float *pfVar10;
  int iVar11;
  float (*pafVar12) [18];
  int iVar12;
  float (*pafVar13) [18];
  float10 fVar14;
  float10 fVar13;
  // MPEG-2 LSF intensity-stereo step base. Originally split across two adjacent
  // 4-byte stack slots by Watcom (the double passed by 2× push); merged here so
  // the call site no longer needs __BITCAST_DOUBLE(CONCAT44(...)).
  double mpeg2_is_pos_step;
  // Zero-init so legacy flow-insensitive static analysis can prove every read
  // in pass 2 has a corresponding pass-1 write. The runtime invariant
  // (pass-2 reads gated on is_pos_per_sample[N] != 7, which pass 1 writes
  // iff it also wrote the matching ratio/tan slot) is honored regardless,
  // so untouched slots stay 0.0f and produce 0-valued output for those
  // coefficients — which never run anyway.
  float is_ratio_l [576] = {};   // MPEG-2 LSF: per-coefficient L-channel intensity scale
  float is_ratio_r [576] = {};   // MPEG-2 LSF: per-coefficient R-channel intensity scale
  float is_pos_tan [575] = {};   // MPEG-1     : tan(is_pos * pi/12) per coefficient
  // Per-coefficient intensity-stereo position (0..15; 7 = "not I-stereo'd").
  // Indexed [0..575] = one slot per granule coefficient. Signed `short` so
  // the asm's `MOV EAX, [buf]; SAR EAX, 16` re-read pattern sign-extends
  // correctly (values are always >= 0 in practice, but matches asm).
  short is_pos_per_sample[576];
  int local_f8;
  int local_f4;     // index into g_Layer3BandIndex[6]: sampling_rate_index + version*3
  int channel_count;
  int ms_stereo_enabled;
  int local_e8;
  int local_e4;
  uint is_mpeg2_lsf;   // 1 when frame->header->mpeg_version == 0 (this binary's
                       // encoding: 0=MPEG-2 LSF, 1=MPEG-1). Pass-2 branches on
                       // == 0 → MPEG-1 path, != 0 → MPEG-2 LSF path.
  int local_dc;
  int local_d8;
  int local_d4;
  int *local_cc;
  int *local_c8;
  int *local_c4;
  int local_c0;
  int local_bc;
  int *local_b4;
  int local_b0;
  int intensity_stereo_enabled;
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
  int *local_74;
  int local_70;
  int local_6c;
  int *local_68;
  int local_64;
  int local_60;
  float (*local_5c) [18];
  float *local_54;
  int local_50;
  float (*local_4c) [18];
  float (*local_48) [18];
  float (*local_44) [18];
  float (*local_40) [18];
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int iVar4;
  float fVar1;
  short sVar2;
  ushort uVar3;
  int local_d0;
  int local_b8;
  SMpegStereoSubbandSamples *local_58;
  uint local_18;

  // Flat int views over the packed g_Layer3BandIndex[6] (each entry is 37 ints =
  // l[23] + s[14], total 0x94 bytes). Byte-stride lookups in the asm collapse to
  // band_idx_l[N/4] / band_idx_s[N/4] indexing here.
  int *band_idx_l = (int *)g_Layer3BandIndex;
  int *band_idx_s = (int *)&g_Layer3BandIndex[0].s;

  channel_count = frame->channel_count;

  // === Decode joint-stereo flags from header.mode_extension (only valid when
  //     channel_mode == 1 = joint-stereo). ===
  if ((frame->header->channel_mode == 1) && ((frame->header->mode_extension & 2) != 0)) {
    ms_stereo_enabled = 1;
  }
  else {
    ms_stereo_enabled = 0;
  }
  if ((frame->header->channel_mode == 1) && ((frame->header->mode_extension & 1) != 0)) {
    intensity_stereo_enabled = 1;
  }
  else {
    intensity_stereo_enabled = 0;
  }
  is_mpeg2_lsf = (uint)(frame->header->mpeg_version == 0);

  // MPEG-2 LSF intensity-stereo step. The full ratio per coefficient is
  // pow(step, is_pos / 2). Selection by scalefac_compress LSB matches the ISO
  // 13818-3 LSF intensity-stereo lookup-table generation rules.
  if ((granule->scalefac_compress & 1U) == 1) {
    mpeg2_is_pos_step = 0.7071067811865475;   // sqrt(2)/2 = 2^(-1/2)
  }
  else {
    mpeg2_is_pos_step = 0.8408964152537145;   // 2^(-1/4)
  }

  // Which row of g_Layer3BandIndex[6] applies to this stream.
  local_f4 = frame->header->sampling_rate_index + frame->header->mpeg_version * 3;

  // === Init: every coefficient defaults to is_pos = 7 ("not I-stereo'd"). ===
  // iVar5 is a byte cursor (pre-incremented by 2 each iter, asm: `ADD EAX, 0x2`
  // before the write); logical index is (cursor - 2) / 2, hence `iVar5/2 - 1`.
  // Writes elements [0..575].
  iVar5 = 0;
  do {
    iVar5 = iVar5 + 2;
    is_pos_per_sample[iVar5 / 2 - 1] = 7;
  } while (iVar5 != 0x480);

  // === Pass 1: fill is_pos / is_ratio / is_pos_tan for I-stereo coefficients. ===
  // Only runs when stereo input + I-stereo bit is set. Otherwise every coeff
  // stays at is_pos = 7 and pass 2 will treat all of them as "not I-stereo'd."
  if ((channel_count == 2) && (intensity_stereo_enabled != 0)) {
    if ((granule->window_switching_flag == 0) || (granule->block_type != 2)) {
      // ----- Long-block path (22 long SFBs covering all 576 coefficients) -----

      // Locate the highest non-zero coefficient in the right channel by walking
      // backward from subband 31 / sample 17. iVar11 ends as that flat sample
      // index (or 0 if the right channel is entirely silent).
      iVar12 = 0x1f;
      iVar10 = 0x11;
      iVar11 = 0;
      pafVar12 = input_lr_samples->channels[0].samples + 0x1f;
      do {
        if (ABS(pafVar12[0x20][iVar10]) != 0.0) {
          iVar11 = iVar12 * 0x12 + iVar10;
          break;
        }
        iVar10 = iVar10 + -1;
        if (iVar10 < 0) {
          pafVar12 = pafVar12 + -1;
          iVar12 = iVar12 + -1;
          iVar10 = 0x11;
        }
      } while (-1 < iVar12);

      // Find the first SFB whose start coefficient lies above the peak — every
      // SFB at or beyond that boundary is the I-stereo region. local_e8 ends as
      // that SFB index; iVar11 / iVar6 land on its first coefficient.
      iVar6 = local_f4 * 0x94;
      local_e8 = 0;
      for (iVar12 = g_Layer3BandIndex[local_f4].l[0]; iVar12 <= iVar11;
          iVar12 = band_idx_l[iVar12 / 4]) {
        local_e8 = local_e8 + 1;
        iVar12 = iVar6 + 4;
        iVar6 = iVar6 + 4;
      }
      iVar11 = band_idx_l[iVar6 / 4];
      local_94 = local_f4 * 0x94;
      local_8c = local_f4 * 0x94 + local_e8 * 4;

      // Walk SFBs from the I-stereo boundary up to band 21. For each SFB, copy
      // its right-channel scalefactor into is_pos_per_sample[] for every
      // coefficient in the band, and precompute the per-coefficient ratio.
      if (local_e8 < 0x15) {
        local_88 = local_e8 * 4;
        do {
          iVar12 = band_idx_l[local_8c / 4 + 1] - band_idx_l[local_8c / 4];
          if (0 < iVar12) {
            iVar6 = iVar11 * 2;
            local_a8 = (int)scalefactor_data->granules[0].long_scalefactors + local_88;
            local_90 = iVar11 * 4;
            do {
              // 0xf8 = sizeof(SMpegLayer3ScalefactorGranule); steps to granule[1]
              // (right channel) long_scalefactors[band].
              sVar2 = *(short *)(local_a8 + 0xf8);
              is_pos_per_sample[iVar6 / 2] = sVar2;
              if (sVar2 != 7) {
                if (is_mpeg2_lsf == 0) {
                  // MPEG-1: tan(pos * pi/12), pi/12 ≈ 0.2617993878
                  fVar13 = (float10)fptan((float10)is_pos_per_sample[iVar6 / 2] *
                                          (float10)0.26179938779914902);
                  is_pos_tan[local_90 / 4] = (float)fVar13;
                }
                else {
                  // MPEG-2 LSF: writes is_ratio_l[iVar11] and is_ratio_r[iVar11].
                  sound_mp3_cpp_calculateIntensityStereoRatio_FUN_00532540
                            ((int)is_pos_per_sample[iVar6 / 2],
                             mpeg2_is_pos_step, iVar11, is_ratio_l);
                }
              }
              iVar6 = iVar6 + 2;
              iVar11 = iVar11 + 1;
              iVar12 = iVar12 + -1;
              local_90 = local_90 + 4;
            } while (0 < iVar12);
          }
          local_88 = local_88 + 4;
          local_8c = local_8c + 4;
          local_e8 = local_e8 + 1;
        } while (local_88 < 0x54);
      }

      // Replicate the last band's data to fill any remaining coefficients
      // beyond l[21] up to the 576-sample boundary. iVar12 stays fixed at the
      // last band's first coefficient — same source value gets written into
      // every padding slot.
      iVar6 = 0x240 - band_idx_l[(local_94 + 0x54) / 4];
      iVar12 = band_idx_l[(local_94 + 0x50) / 4];
      if (0 < iVar6) {
        local_a4 = iVar12 * 2;
        local_84 = iVar11 * 2;
        iVar11 = iVar11 * 4;
        do {
          iVar4 = local_84;
          iVar9 = local_a4;
          fVar1 = is_pos_tan[iVar12];
          iVar6 = iVar6 + -1;
          is_ratio_l[iVar11 / 4] = is_ratio_l[iVar12];
          is_pos_tan[iVar11 / 4] = fVar1;
          uVar3 = (ushort)is_pos_per_sample[iVar9 / 2];
          is_ratio_r[iVar11 / 4] = is_ratio_r[iVar12];
          local_84 = local_84 + 2;
          is_pos_per_sample[iVar4 / 2] = (short)uVar3;
          iVar11 = iVar11 + 4;
        } while (0 < iVar6);
      }
    }
    else {
      // ----- Short-block path (3 windows × short SFBs) -----
      iVar11 = local_f4 * 0x94;
      if (granule->mixed_block_flag == 0) {
        // ----- Pure short blocks: 12 short SFBs per window, 3 windows -----
        local_9c = iVar11;
        local_bc = iVar11;
        local_e4 = granule->mixed_block_flag;
        local_74 = (int *)scalefactor_data;
        do {
          // Per-window peak search: walk short SFBs 12..0 in this window,
          // looking for the highest non-zero R-channel coefficient. Inner sample
          // index in the channel is band_start*3 + window*band_width.
          iVar11 = 0xc;
          local_c0 = -1;
          local_b8 = local_e4 + 1;
          do {
            iVar6 = iVar11 * 4 + local_bc;
            iVar12 = band_idx_s[iVar6 / 4];
            iVar6 = band_idx_s[iVar6 / 4 + 1] - iVar12;
            iVar12 = iVar12 * 3 + (local_e4 + 1) * iVar6;
            for (; 0 < iVar6; iVar6 = iVar6 + -1) {
              iVar12 = iVar12 + -1;
              local_18 = 0x12;
              if (ABS(input_lr_samples->channels[1].samples[iVar12 / 0x12][iVar12 % 0x12]) != 0.0) {
                local_c0 = iVar11;
                iVar11 = -10;
                iVar6 = -10;
              }
            }
            iVar11 = iVar11 + -1;
          } while (-1 < iVar11);
          local_30 = local_c0 + 1;
          local_b4 = local_74;
          local_7c = local_9c + local_30 * 4;

          // Per-window I-stereo region: SFBs from local_30 to 11. Same pattern
          // as the long-block branch: copy right-channel scalefactor, then
          // precompute the ratio.
          if (local_30 < 0xc) {
            local_78 = local_30 * 4;
            do {
              iVar11 = band_idx_s[local_7c / 4];
              iVar12 = band_idx_s[local_7c / 4 + 1] - iVar11;
              iVar11 = iVar11 * 3 + local_e4 * iVar12;
              if (0 < iVar12) {
                iVar6 = iVar11 * 2;
                // 0x154 = sizeof(granule[0]) (0xf8) + offsetof(short_scalefactors)
                // (0x5c) — i.e. &scalefactor_data->granules[1].short_scalefactors[0].
                local_b0 = (int)local_b4 + local_78;
                local_80 = iVar11 * 4;
                do {
                  sVar3 = *(short *)(local_b0 + 0x154);
                  is_pos_per_sample[iVar6 / 2] = sVar3;
                  if (sVar3 != 7) {
                    if (is_mpeg2_lsf == 0) {
                      fVar14 = (float10)fptan((float10)is_pos_per_sample[iVar6 / 2] *
                                              (float10)0.26179938779914902);
                      is_pos_tan[local_80 / 4] = (float)fVar14;
                    }
                    else {
                      sound_mp3_cpp_calculateIntensityStereoRatio_FUN_00532540
                                ((int)is_pos_per_sample[iVar6 / 2],
                                 mpeg2_is_pos_step, iVar11, is_ratio_l);
                    }
                  }
                  iVar6 = iVar6 + 2;
                  iVar11 = iVar11 + 1;
                  iVar12 = iVar12 + -1;
                  local_80 = local_80 + 4;
                } while (0 < iVar12);
              }
              local_78 = local_78 + 4;
              local_7c = local_7c + 4;
              local_30 = local_30 + 1;
            } while (local_78 < 0x30);
          }

          // Per-window padding: replicate last short SFB's data to fill
          // remaining coefficients in this window.
          iVar11 = band_idx_s[(local_9c + 0x2c) / 4];
          iVar6 = band_idx_s[(local_9c + 0x34) / 4] -
                  band_idx_s[(local_9c + 0x30) / 4];
          iVar12 = iVar11 * 3;
          iVar11 = local_e4 * (band_idx_s[(local_9c + 0x30) / 4] - iVar11) +
                   iVar12;
          local_28 = iVar12 + local_e4 * iVar6;
          if (0 < iVar6) {
            iVar12 = local_28 * 4;
            iVar9 = local_28 * 2;
            do {
              fVar2 = is_pos_tan[iVar11];
              iVar6 = iVar6 + -1;
              uVar3 = (ushort)is_pos_per_sample[iVar11];
              is_ratio_l[iVar12 / 4] = is_ratio_l[iVar11];
              is_pos_tan[iVar12 / 4] = fVar2;
              is_pos_per_sample[iVar9 / 2] = (short)uVar3;
              is_ratio_r[iVar12 / 4] = is_ratio_r[iVar11];
              local_28 = local_28 + 1;
              iVar12 = iVar12 + 4;
              iVar9 = iVar9 + 2;
            } while (0 < iVar6);
          }
          local_e4 = local_e4 + 1;
          local_74 = local_74 + 0xd;   // advance to next window's scalefactor row
        } while (local_e4 < 3);
      }
      else {
        // ----- Mixed blocks: long part (SFBs 0..7) + short part (SFBs 3..11 × 3 windows) -----
        local_98 = iVar11;
        local_d4 = iVar11;
        local_dc = 0;
        local_24 = 0;
        local_68 = (int *)scalefactor_data;

        // Short part: same 3-window walk as the pure-short branch but starting
        // SFB search at 12 and only allowing peaks at SFB 3 and above (the
        // first 3 SFBs are reserved for the long part).
        do {
          iVar11 = 0xc;
          local_d8 = 2;
          local_d0 = local_24 + 1;
          do {
            iVar6 = iVar11 * 4 + local_d4;
            iVar12 = band_idx_s[iVar6 / 4];
            iVar6 = band_idx_s[iVar6 / 4 + 1] - iVar12;
            iVar12 = (local_24 + 1) * iVar6 + iVar12 * 3;
            for (; 0 < iVar6; iVar6 = iVar6 + -1) {
              iVar12 = iVar12 + -1;
              local_18 = 0x12;
              if (ABS(input_lr_samples->channels[1].samples[iVar12 / 0x12][iVar12 % 0x12]) != 0.0) {
                local_d8 = iVar11;
                iVar11 = -10;
                iVar6 = -10;
              }
            }
            iVar11 = iVar11 + -1;
          } while (2 < iVar11);
          local_34 = local_d8 + 1;

          // Track the maximum I-stereo-start SFB across all 3 windows; the long
          // part's I-stereo search will use this as its upper bound.
          if (local_dc < local_34) {
            local_dc = local_34;
          }
          local_cc = local_68;
          local_6c = local_34 * 4 + local_98;

          // Per-window I-stereo region for this short window.
          for (; local_34 < 0xc; local_34 = local_34 + 1) {
            iVar11 = band_idx_s[local_6c / 4];
            iVar12 = band_idx_s[local_6c / 4 + 1] - iVar11;
            iVar11 = iVar11 * 3 + local_24 * iVar12;
            if (0 < iVar12) {
              iVar6 = iVar11 * 2;
              local_c8 = local_cc + local_34;
              local_70 = iVar11 * 4;
              do {
                // local_c8[0x55] = scalefactor_data->granules[1].short_scalefactors
                // [window][sfb] — 0x55 ints is 0x154 bytes (granule[0] size +
                // short_scalefactors offset).
                iVar9 = local_c8[0x55];
                is_pos_per_sample[iVar6 / 2] = (short)iVar9;
                if ((short)iVar9 != 7) {
                  if (is_mpeg2_lsf == 0) {
                    fVar14 = (float10)fptan((float10)is_pos_per_sample[iVar6 / 2] *
                                            (float10)0.26179938779914902);
                    is_pos_tan[local_70 / 4] = (float)fVar14;
                  }
                  else {
                    sound_mp3_cpp_calculateIntensityStereoRatio_FUN_00532540
                              ((int)is_pos_per_sample[iVar6 / 2],
                               mpeg2_is_pos_step, iVar11, is_ratio_l);
                  }
                }
                iVar6 = iVar6 + 2;
                iVar11 = iVar11 + 1;
                iVar12 = iVar12 + -1;
                local_70 = local_70 + 4;
              } while (0 < iVar12);
            }
            local_6c = local_6c + 4;
          }

          // Per-window padding for this window's short part.
          iVar11 = band_idx_s[(local_98 + 0x2c) / 4];
          iVar6 = band_idx_s[(local_98 + 0x34) / 4] -
                  band_idx_s[(local_98 + 0x30) / 4];
          iVar12 = iVar11 * 3;
          iVar11 = local_24 * (band_idx_s[(local_98 + 0x30) / 4] - iVar11) +
                   iVar12;
          local_2c = iVar12 + local_24 * iVar6;
          if (0 < iVar6) {
            iVar12 = local_2c * 4;
            iVar7 = local_2c * 2;
            do {
              fVar2 = is_pos_tan[iVar11];
              iVar6 = iVar6 + -1;
              uVar3 = (ushort)is_pos_per_sample[iVar11];
              is_ratio_l[iVar12 / 4] = is_ratio_l[iVar11];
              is_pos_tan[iVar12 / 4] = fVar2;
              is_pos_per_sample[iVar7 / 2] = (short)uVar3;
              is_ratio_r[iVar12 / 4] = is_ratio_r[iVar11];
              local_2c = local_2c + 1;
              iVar12 = iVar12 + 4;
              iVar7 = iVar7 + 2;
            } while (0 < iVar6);
          }
          local_24 = local_24 + 1;
          local_68 = local_68 + 0xd;
        } while (local_24 < 3);

        // Long part of the mixed block: SFBs 0..7 (sample range 0..36, the
        // first 2 subbands). Skipped if any short-window I-stereo region
        // already overlaps subband 0..1.
        if (local_dc < 4) {
          // Long-block-style peak search but restricted to subbands 0..2.
          iVar11 = 2;
          iVar12 = 0x11;
          local_1c = -1;
          pafVar13 = input_lr_samples->channels[0].samples + 2;
          do {
            if ((*(uint *)((int)(pafVar13 + 0x20) + iVar12 * 4) & 0x7fffffff) != 0) {
              local_1c = iVar11 * 0x12 + iVar12;
              break;
            }
            iVar12 = iVar12 + -1;
            if (iVar12 < 0) {
              pafVar13 = pafVar13 + -1;
              iVar11 = iVar11 + -1;
              iVar12 = 0x11;
            }
          } while (-1 < iVar11);
          iVar12 = local_f4 * 0x94;
          local_38 = 0;
          for (iVar11 = g_Layer3BandIndex[local_f4].l[0]; iVar11 <= local_1c;
              iVar11 = band_idx_l[iVar11 / 4]) {
            local_38 = local_38 + 1;
            iVar11 = iVar12 + 4;
            iVar12 = iVar12 + 4;
          }
          iVar11 = band_idx_l[iVar12 / 4];
          if (local_38 < 8) {
            local_60 = local_38 * 4 + local_f4 * 0x94;
            do {
              iVar12 = band_idx_l[local_60 / 4 + 1] - band_idx_l[local_60 / 4];
              if (0 < iVar12) {
                iVar6 = iVar11 * 2;
                // local_c4[0x3e] = scalefactor_data->granules[1].long_scalefactors[band]
                // — 0x3e ints = 0xf8 bytes (granule stride).
                local_c4 = scalefactor_data->granules[0].long_scalefactors + local_38;
                local_64 = iVar11 * 4;
                do {
                  iVar9 = local_c4[0x3e];
                  is_pos_per_sample[iVar6 / 2] = (short)iVar9;
                  if ((short)iVar9 != 7) {
                    if (is_mpeg2_lsf == 0) {
                      fVar14 = (float10)fptan((float10)is_pos_per_sample[iVar6 / 2] *
                                              (float10)0.26179938779914902);
                      is_pos_tan[local_64 / 4] = (float)fVar14;
                    }
                    else {
                      sound_mp3_cpp_calculateIntensityStereoRatio_FUN_00532540
                                ((int)is_pos_per_sample[iVar6 / 2],
                                 mpeg2_is_pos_step, iVar11, is_ratio_l);
                    }
                  }
                  iVar6 = iVar6 + 2;
                  iVar11 = iVar11 + 1;
                  iVar12 = iVar12 + -1;
                  local_64 = local_64 + 4;
                } while (0 < iVar12);
              }
              local_38 = local_38 + 1;
              local_60 = local_60 + 4;
            } while (local_38 < 8);
          }
        }
      }
    }
  }

  // === Zero output_samples (both channels, all 32 subbands × 18 samples). ===
  // Pass 2 will overwrite the active samples; anything not touched stays zero
  // (matters for the mono-input branch below, which only writes channel 0).
  local_5c = (float (*) [18])output_samples;
  local_58 = output_samples + 1;
  do {
    iVar8 = 0;
    pfVar10 = *local_5c;
    do {
      pfVar10 = pfVar10 + 0x12;
      pfVar4 = local_5c[iVar8];
      do {
        (*(float (*) [18])pfVar4)[0] = 0.0;
        pfVar4 = *(float (*) [18])pfVar4 + 1;
      } while (pfVar4 != pfVar10);
      iVar8 = iVar8 + 1;
    } while (iVar8 < 0x20);
    local_5c = local_5c + 0x20;
  } while ((SMpegStereoSubbandSamples *)local_5c != output_samples + 1);

  // === Pass 2: per-coefficient stereo decode (2-channel) or mono pass-through. ===
  if (channel_count == 2) {
    // Walk all 32 subbands × 18 samples = 576 coefficients. For each, branch on
    // is_pos_per_sample to decide MS / I-stereo / pass-through.
    local_20 = 0;
    local_44 = (float (*) [18])input_lr_samples;
    local_3c = 0;
    local_40 = (float (*) [18])output_samples;
    do {
      local_a0 = local_20 * 0x12;     // flat coeff index for this subband's first sample
      local_50 = local_3c;            // is_pos byte cursor: 2 × flat coeff index
      iVar11 = 0;
      local_4c = local_40;
      iVar12 = 0;
      local_48 = local_44;
      do {
        local_f8 = local_a0 + iVar11;             // flat coeff index
        pfVar9 = *local_4c + iVar11;              // &output->channels[0].samples[sb][s]
        pfVar10 = *local_48 + iVar11;             // &input ->channels[0].samples[sb][s]
        if (is_pos_per_sample[local_50 / 2] == 7) {
          // Not an I-stereo coefficient.
          if (ms_stereo_enabled == 0) {
            // Plain joint-stereo without MS: pass through L and R unchanged.
            *pfVar9 = *pfVar10;
            pfVar9[0x240] = pfVar10[0x240];     // 0x240 floats = sizeof(channel) → channel 1
          }
          else {
            // MS-stereo: stored as L=mid, R=side. Recover via 1/sqrt(2) scaling.
            fVar2 = (float)0.70710678237309499;
            *pfVar9 = (*pfVar10 + pfVar10[0x240]) * fVar2;
            fVar2 = (*pfVar10 - pfVar10[0x240]) * fVar2;
LAB_005327f7:
            pfVar9[0x240] = fVar2;
          }
        }
        else {
          // I-stereo coefficient (is_pos != 7). I-stereo must actually be
          // enabled — otherwise the bitstream is malformed.
          if (intensity_stereo_enabled != 0) {
            if (is_mpeg2_lsf == 0) {
              // MPEG-1: precomputed r = tan(pos*pi/12). L_out = r/(r+1)*L_in,
              // R_out = 1/(r+1)*L_in. Together they recover L and R from the
              // stored mono-ish channel using the band's intensity position.
              *pfVar9 = (is_pos_tan[local_f8] / (is_pos_tan[local_f8] + 1.0)) * *pfVar10;
              fVar2 = (1.0 / (is_pos_tan[local_f8] + 1.0)) * *pfVar10;
            }
            else {
              // MPEG-2 LSF: lookup tables already hold the per-channel ratios.
              *pfVar9 = *pfVar10 * is_ratio_l[local_f8];
              fVar2 = *pfVar10 * is_ratio_r[local_f8];
            }
            goto LAB_005327f7;
          }
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 0x9bd;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("Error in streo processing.  File: %s",g_CurrentMp3Filename);
        }
        iVar11 = iVar11 + 1;
        iVar12 = iVar12 + 4;
        local_50 = local_50 + 2;
      } while (iVar11 < 0x12);
      local_20 = local_20 + 1;
      local_40 = local_40 + 1;
      local_3c = local_3c + 0x24;
      local_44 = local_44 + 1;
    } while (local_20 < 0x20);
  }
  else {
    // Mono input: copy channel 0 input → channel 0 output. Channel 1 stays at
    // the zero we just wrote. The inner walk uses pre-increment + byte-stride
    // pointer compare, which is how Watcom emitted this loop.
    iVar11 = 0;
    local_54 = (float *)output_samples;
    pfVar10 = (float *)input_lr_samples;
    do {
      pfVar10 = pfVar10 + 0x12;
      pafVar6 = input_lr_samples->channels[0].samples + iVar11;
      pfVar11 = local_54;
      do {
        pfVar11 = pfVar11 + 1;
        pfVar4 = *pafVar6;
        pafVar6 = (float (*) [18])(*pafVar6 + 1);
        *pfVar11 = *pfVar4;
      } while (pafVar6 != (float (*) [18])pfVar10);
      iVar11 = iVar11 + 1;
      local_54 = local_54 + 0x12;
    } while (iVar11 < 0x20);
  }
  return;
}
