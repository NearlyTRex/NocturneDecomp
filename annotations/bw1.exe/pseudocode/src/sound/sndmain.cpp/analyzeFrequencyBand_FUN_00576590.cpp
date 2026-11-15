// Name: sound_sndmain.cpp_analyzeFrequencyBand_FUN_00576590
// Address: 00576590
// Address Range: [[00576590, 00576b18]]
// Convention: __cdecl
// Signature: float __cdecl sound_sndmain_cpp_analyzeFrequencyBand_FUN_00576590(int channel,float freq_start_hz,float freq_end_hz)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00576aea) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl sound_sndmain_cpp_analyzeFrequencyBand_FUN_00576590(int channel,float freq_start_hz,float freq_end_hz)

{
  float fVar1;
  float fVar2;
  double dVar3;
  int iVar4;
  float10 fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  float *pfVar15;
  uint uVar16;
  float *pfVar17;
  float *pfVar18;
  int iVar19;
  float *pfVar20;
  uint uVar21;
  int iVar22;
  uint *puVar23;
  float10 fVar24;
  float10 fVar25;
  float10 fVar26;
  float10 fVar27;
  float10 fVar28;
  float10 fVar29;
  float10 fVar30;
  double dVar31;
  int iStack_4c;
  int local_48;
  int local_38;
  int local_34;
  int local_24;
  
  iVar19 = channel * 4;
  if ((((*(int *)(iVar19 + 0x2c80698) == 0) || (*(int *)(iVar19 + 0x2c806bc) == 0)) ||
      (*(int *)(iVar19 + 0x2c806dc) == 0)) || (_DAT_02c80668 < 1)) {
    return 0.0;
  }
  iVar11 = sound_sndmain_cpp_getMixBufferCount_FUN_005756e0();
  iVar13 = _DAT_02c80668;
  if (iVar11 != *(int *)(iVar19 + 0x2c745c0)) {
    iVar11 = *(int *)(iVar19 + 0x2c806bc);
    iVar4 = *(int *)(iVar19 + 0x2c806dc);
    puVar23 = *(uint **)(iVar19 + 0x2c80698);
    for (local_34 = 1; 1 << ((byte)local_34 & 0x1f) < _DAT_02c80668; local_34 = local_34 + 1) {
    }
    uVar21 = 0;
    if (0 < _DAT_02c80668) {
      do {
        iVar19 = 0;
        uVar12 = 0;
        uVar16 = uVar21;
        if (0 < local_34) {
          do {
            iVar19 = iVar19 + 1;
            uVar12 = uVar12 * 2 | uVar16 & 1;
            uVar16 = (int)uVar16 >> 1;
          } while (iVar19 < local_34);
        }
        *(uint *)(iVar11 + uVar12 * 4) = *puVar23;
        *(uint *)(uVar12 * 4 + iVar4) = 0;
        uVar21 = uVar21 + 1;
        puVar23 = puVar23 + 1;
      } while ((int)uVar21 < iVar13);
    }
    local_38 = 2;
    if (1 < iVar13) {
      do {
        iVar19 = local_38 / 2;
        fVar24 = (float10)_DAT_005f45a8 / (float10)iVar19;
        fVar5 = (float10)fcos(fVar24);
        fVar25 = (float10)fsin(fVar24);
        fVar26 = (float10)_DAT_005f45a0;
        fVar24 = fVar24 * fVar26;
        fVar27 = (float10)fsin(fVar24);
        fVar24 = (float10)fcos(fVar24);
        local_24 = 0;
        if (0 < iVar13) {
          do {
            iVar22 = 0;
            if (0 < iVar19) {
              fVar28 = (float10)(double)((float10)(double)fVar5 * fVar26);
              iVar14 = local_24 * 4;
              pfVar15 = (float *)(iVar4 + iVar14);
              pfVar18 = (float *)(iVar11 + iVar19 * 4 + iVar14);
              pfVar17 = (float *)(iVar11 + iVar14);
              pfVar20 = (float *)(iVar4 + iVar19 * 4 + iVar14);
              dVar31 = (double)fVar5;
              dVar3 = (double)fVar25;
              dVar9 = (double)fVar27;
              dVar10 = (double)fVar24;
              do {
                dVar8 = dVar3;
                dVar7 = dVar31;
                fVar29 = fVar28 * (float10)dVar7 - (float10)dVar10;
                dVar31 = (double)fVar29;
                fVar30 = fVar28 * (float10)dVar8 - (float10)dVar9;
                dVar3 = (double)fVar30;
                iVar22 = iVar22 + 1;
                fVar30 = fVar29 * (float10)*pfVar18 - fVar30 * (float10)*pfVar20;
                fVar29 = (float10)dVar3 * (float10)*pfVar18 + (float10)dVar31 * (float10)*pfVar20;
                *pfVar18 = (float)((float10)*pfVar17 - fVar30);
                *pfVar20 = (float)((float10)*pfVar15 - fVar29);
                *pfVar17 = (float)((float10)*pfVar17 + fVar30);
                *pfVar15 = (float)(fVar29 + (float10)*pfVar15);
                pfVar15 = pfVar15 + 1;
                pfVar18 = pfVar18 + 1;
                pfVar17 = pfVar17 + 1;
                pfVar20 = pfVar20 + 1;
                dVar9 = dVar8;
                dVar10 = dVar7;
              } while (iVar22 < iVar19);
            }
            local_24 = local_24 + local_38;
          } while (local_24 < iVar13);
        }
        local_38 = local_38 * 2;
      } while (local_38 <= iVar13);
    }
    iVar19 = sound_sndmain_cpp_getMixBufferCount_FUN_005756e0();
    *(int *)(channel * 4 + 0x2c745c0) = iVar19;
  }
  iVar13 = _DAT_02c80668 / 2;
  iVar19 = iVar13 + 1;
  dVar31 = floor
                     ((double)((freq_start_hz * (float)iVar19) / (float)DAT_006232f0));
  fVar6 = (float)DAT_006232f0;
  round(dVar31);
  dVar31 = floor((double)((freq_end_hz * (float)iVar19) / fVar6));
  dVar31 = round(dVar31);
  iStack_4c = (int)ROUND(dVar31);
  if ((local_48 < iVar19) && (0 < iStack_4c)) {
    if (iVar19 <= iStack_4c) {
      iStack_4c = iVar19;
    }
    if (local_48 < 0) {
      local_48 = 0;
    }
    iVar11 = iStack_4c - local_48;
    if ((iVar11 < 1) && (iVar11 = 1, iVar19 <= iStack_4c)) {
      local_48 = iVar13;
    }
    iVar13 = 0;
    fVar6 = 0.0;
    if (0 < iVar11) {
      pfVar18 = (float *)(*(int *)(channel * 4 + 0x2c806dc) + local_48 * 4);
      pfVar15 = (float *)(*(int *)(channel * 4 + 0x2c806bc) + local_48 * 4);
      do {
        fVar1 = *pfVar15;
        fVar2 = *pfVar18;
        pfVar18 = pfVar18 + 1;
        pfVar15 = pfVar15 + 1;
        iVar13 = iVar13 + 1;
        fVar6 = SQRT(fVar2 * fVar2 + fVar1 * fVar1) + fVar6;
      } while (iVar13 < iVar11);
    }
    return SQRT((fVar6 / (float)iVar11) / (float)iVar19) * (float)_DAT_005f45a0;
  }
  return 0.0;
}
