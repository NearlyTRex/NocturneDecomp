// Name: sound_sndmain.cpp_FUN_00576590
// Address: 00576590
// Address Range: [[00576590, 00576b18]]
// Convention: unknown
// Signature: float sound_sndmain_cpp_FUN_00576590(int param_1,float param_2,float param_3)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00576aea) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float sound_sndmain_cpp_FUN_00576590(int param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  int iVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  float *pfVar14;
  uint uVar15;
  float *pfVar16;
  float *pfVar17;
  int iVar18;
  float *pfVar19;
  uint uVar20;
  int iVar21;
  uint *puVar22;
  float10 fVar23;
  float10 fVar24;
  float10 fVar25;
  float10 fVar26;
  float10 fVar27;
  float10 fVar28;
  float10 fVar29;
  float10 fVar30;
  double dVar31;
  int local_44;
  int local_40;
  int local_38;
  int local_34;
  int local_24;
  
  iVar18 = param_1 * 4;
  if ((((*(int *)(iVar18 + 0x2c80698) == 0) || (*(int *)(iVar18 + 0x2c806bc) == 0)) ||
      (*(int *)(iVar18 + 0x2c806dc) == 0)) || (_DAT_02c80668 < 1)) {
    return 0.0;
  }
  iVar10 = sound_sndmain_cpp_FUN_005756e0();
  iVar12 = _DAT_02c80668;
  if (iVar10 != *(int *)(iVar18 + 0x2c745c0)) {
    iVar10 = *(int *)(iVar18 + 0x2c806bc);
    iVar4 = *(int *)(iVar18 + 0x2c806dc);
    puVar22 = *(uint **)(iVar18 + 0x2c80698);
    for (local_34 = 1; 1 << ((byte)local_34 & 0x1f) < _DAT_02c80668; local_34 = local_34 + 1) {
    }
    uVar20 = 0;
    if (0 < _DAT_02c80668) {
      do {
        iVar18 = 0;
        uVar11 = 0;
        uVar15 = uVar20;
        if (0 < local_34) {
          do {
            iVar18 = iVar18 + 1;
            uVar11 = uVar11 * 2 | uVar15 & 1;
            uVar15 = (int)uVar15 >> 1;
          } while (iVar18 < local_34);
        }
        *(uint *)(iVar10 + uVar11 * 4) = *puVar22;
        *(uint *)(uVar11 * 4 + iVar4) = 0;
        uVar20 = uVar20 + 1;
        puVar22 = puVar22 + 1;
      } while ((int)uVar20 < iVar12);
    }
    local_38 = 2;
    if (1 < iVar12) {
      do {
        iVar18 = local_38 / 2;
        fVar23 = (float10)_DAT_005f45a8 / (float10)iVar18;
        fVar30 = (float10)fcos(fVar23);
        fVar24 = (float10)fsin(fVar23);
        fVar25 = (float10)_DAT_005f45a0;
        fVar23 = fVar23 * fVar25;
        fVar26 = (float10)fsin(fVar23);
        fVar23 = (float10)fcos(fVar23);
        local_24 = 0;
        if (0 < iVar12) {
          do {
            iVar21 = 0;
            if (0 < iVar18) {
              fVar27 = (float10)(double)((float10)(double)fVar30 * fVar25);
              iVar13 = local_24 * 4;
              pfVar14 = (float *)(iVar4 + iVar13);
              pfVar17 = (float *)(iVar10 + iVar18 * 4 + iVar13);
              pfVar16 = (float *)(iVar10 + iVar13);
              pfVar19 = (float *)(iVar4 + iVar18 * 4 + iVar13);
              dVar31 = (double)fVar30;
              dVar3 = (double)fVar24;
              dVar8 = (double)fVar26;
              dVar9 = (double)fVar23;
              do {
                dVar7 = dVar3;
                dVar6 = dVar31;
                fVar28 = fVar27 * (float10)dVar6 - (float10)dVar9;
                dVar31 = (double)fVar28;
                fVar29 = fVar27 * (float10)dVar7 - (float10)dVar8;
                dVar3 = (double)fVar29;
                iVar21 = iVar21 + 1;
                fVar29 = fVar28 * (float10)*pfVar17 - fVar29 * (float10)*pfVar19;
                fVar28 = (float10)dVar3 * (float10)*pfVar17 + (float10)dVar31 * (float10)*pfVar19;
                *pfVar17 = (float)((float10)*pfVar16 - fVar29);
                *pfVar19 = (float)((float10)*pfVar14 - fVar28);
                *pfVar16 = (float)((float10)*pfVar16 + fVar29);
                *pfVar14 = (float)(fVar28 + (float10)*pfVar14);
                pfVar14 = pfVar14 + 1;
                pfVar17 = pfVar17 + 1;
                pfVar16 = pfVar16 + 1;
                pfVar19 = pfVar19 + 1;
                dVar8 = dVar7;
                dVar9 = dVar6;
              } while (iVar21 < iVar18);
            }
            local_24 = local_24 + local_38;
          } while (local_24 < iVar12);
        }
        local_38 = local_38 * 2;
      } while (local_38 <= iVar12);
    }
    iVar18 = sound_sndmain_cpp_FUN_005756e0();
    *(int *)(param_1 * 4 + 0x2c745c0) = iVar18;
  }
  iVar12 = _DAT_02c80668 / 2;
  iVar18 = iVar12 + 1;
  dVar31 = floor((double)((param_2 * (float)iVar18) / (float)DAT_006232f0));
  fVar30 = (float10)dVar31;
  fVar24 = ((float10)param_3 * (float10)iVar18) / (float10)DAT_006232f0;
  round();
  local_40 = (int)ROUND(fVar30);
  dVar31 = floor((double)fVar24);
  fVar30 = (float10)dVar31;
  round();
  local_44 = (int)ROUND(fVar30);
  if ((local_40 < iVar18) && (0 < local_44)) {
    if (iVar18 <= local_44) {
      local_44 = iVar18;
    }
    if (local_40 < 0) {
      local_40 = 0;
    }
    iVar10 = local_44 - local_40;
    if ((iVar10 < 1) && (iVar10 = 1, iVar18 <= local_44)) {
      local_40 = iVar12;
    }
    iVar12 = 0;
    fVar5 = 0.0;
    if (0 < iVar10) {
      pfVar17 = (float *)(*(int *)(param_1 * 4 + 0x2c806dc) + local_40 * 4);
      pfVar14 = (float *)(*(int *)(param_1 * 4 + 0x2c806bc) + local_40 * 4);
      do {
        fVar1 = *pfVar14;
        fVar2 = *pfVar17;
        pfVar17 = pfVar17 + 1;
        pfVar14 = pfVar14 + 1;
        iVar12 = iVar12 + 1;
        fVar5 = SQRT(fVar2 * fVar2 + fVar1 * fVar1) + fVar5;
      } while (iVar12 < iVar10);
    }
    return SQRT((fVar5 / (float)iVar10) / (float)iVar18) * (float)_DAT_005f45a0;
  }
  return 0.0;
}
