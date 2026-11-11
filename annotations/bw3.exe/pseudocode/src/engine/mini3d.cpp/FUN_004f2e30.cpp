// Name: engine_mini3d.cpp_FUN_004f2e30
// Address: 004f2e30
// Address Range: [[004f2e30, 004f3390]]
// Convention: unknown
// Signature: int engine_mini3d_cpp_FUN_004f2e30(float *param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int engine_mini3d_cpp_FUN_004f2e30(float *param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  void *pvVar10;
  ushort *puVar11;
  int iVar12;
  float *pfVar13;
  int iVar14;
  float *pfVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  ushort *puVar19;
  int iVar20;
  float afStack_ac [27];
  int iStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  fVar5 = _DAT_01d76c94;
  iVar18 = 0;
  pfVar15 = param_1;
  if (0 < param_2) {
    do {
      fStack_3c = *pfVar15;
      fVar1 = fStack_3c * _DAT_01d76c70;
      fStack_38 = pfVar15[1];
      fVar2 = fStack_38 * _DAT_01d76c7c;
      fStack_34 = pfVar15[2];
      fVar3 = fStack_34 * _DAT_01d76c88;
      iVar18 = iVar18 + 1;
      fVar4 = fStack_34 * _DAT_01d76c8c + fStack_38 * _DAT_01d76c80 + fStack_3c * _DAT_01d76c74 +
              _DAT_01d76c98;
      *pfVar15 = fStack_34 * _DAT_01d76c84 + fStack_38 * _DAT_01d76c78 + fStack_3c * _DAT_01d76c6c +
                 _DAT_01d76c90;
      pfVar15[1] = fVar3 + fVar2 + fVar1 + fVar5;
      pfVar15[2] = fVar4;
      pfVar15 = pfVar15 + 0x10;
    } while (iVar18 < param_2);
  }
  if (_DAT_01d7a6ac == (void *)0x0) {
    _DAT_01d7a6ac = malloc(360000);
    if (_DAT_01d7a6ac == (void *)0x0) {
      _DAT_01d71de0 = "..\\engine\\mini3d.cpp";
      _DAT_01d71de4 = 0x14e5;
      core_main_c_FUN_004e4330("CMini3D::userClipPolyList - Out of memory");
    }
    _DAT_01d7a6b0 = malloc(60000);
    if (_DAT_01d7a6b0 == (void *)0x0) {
      _DAT_01d71de0 = "..\\engine\\mini3d.cpp";
      _DAT_01d71de4 = 0x14e9;
      core_main_c_FUN_004e4330("CMini3D::userClipPolyList - Out of memory");
    }
  }
  iVar18 = 0;
  iStack_1c = 0;
  iStack_14 = 0;
  if (0 < param_4) {
    iStack_18 = 0;
    do {
      puVar11 = (ushort *)(param_3 + iStack_18);
      puVar19 = (ushort *)(param_3 + 6 + iStack_18);
      pfVar15 = afStack_ac;
      do {
        pfVar13 = param_1 + (uint)*puVar11 * 0x10;
        puVar11 = puVar11 + 1;
        *pfVar15 = *pfVar13;
        pfVar15[1] = pfVar13[1];
        pfVar15[2] = pfVar13[2];
        pfVar15[7] = pfVar13[7];
        pfVar15[8] = pfVar13[8];
        pfVar15[3] = pfVar13[9];
        pfVar15[4] = pfVar13[10];
        pfVar15[5] = pfVar13[0xb];
        pfVar15[6] = pfVar13[0xc];
        pfVar15 = pfVar15 + 9;
      } while (puVar11 != puVar19);
      iStack_40 = 0;
      engine_mini3d_cpp_FUN_004f2cf0
                (afStack_ac,3,(void *)((int)_DAT_01d7a6ac + iStack_14 * 0x24),&iStack_40);
      if (2 < iStack_40) {
        iVar16 = iStack_14 + 2;
        iVar20 = iVar18 * 2;
        iVar12 = iStack_14;
        for (iVar14 = 0; pvVar10 = _DAT_01d7a6b0, iVar12 = iVar12 + 1, iVar14 < iStack_40 + -2;
            iVar14 = iVar14 + 1) {
          *(short *)(iVar20 + (int)_DAT_01d7a6b0) = (short)iStack_14;
          iVar18 = iVar18 + 3;
          *(short *)(iVar20 + 2 + (int)pvVar10) = (short)iVar12;
          *(short *)(iVar20 + 4 + (int)pvVar10) = (short)iVar16;
          iVar16 = iVar16 + 1;
          iVar20 = iVar20 + 6;
        }
        iStack_14 = iStack_14 + iStack_40;
      }
      iStack_18 = iStack_18 + 6;
      iStack_1c = iStack_1c + 1;
    } while (iStack_1c < param_4);
  }
  uVar17 = 0;
  iVar12 = iStack_14 << 6;
  if (_DAT_01d76d00 == 0) {
    if (0 < iStack_14) {
      iVar20 = 0;
      iVar14 = 0;
      iStack_24 = iVar12;
      do {
        pvVar10 = _DAT_01d7a6ac;
        fVar1 = (float)_DAT_01c6e308;
        fVar5 = *(float *)(iVar14 + (int)_DAT_01d7a6ac) - _DAT_01d76c90;
        *(float *)(iVar14 + 4 + (int)_DAT_01d7a6ac) =
             *(float *)(iVar14 + 4 + (int)_DAT_01d7a6ac) - _DAT_01d76c94;
        *(float *)(iVar14 + (int)pvVar10) = fVar5;
        iVar12 = _DAT_01d76f60;
        fVar5 = (float)_DAT_01c6e2fc;
        *(float *)(iVar14 + 8 + (int)pvVar10) =
             *(float *)(iVar14 + 8 + (int)pvVar10) - _DAT_01d76c98;
        pfVar15 = (float *)(iVar12 + iVar20);
        fVar2 = (float)_DAT_01c6e30c;
        *pfVar15 = (float)_DAT_01c6e314 * *(float *)(iVar14 + 8 + (int)pvVar10) +
                   fVar5 * *(float *)(iVar14 + (int)pvVar10) +
                   fVar1 * *(float *)(iVar14 + 4 + (int)pvVar10);
        fVar5 = (float)_DAT_01c6e310;
        pfVar15[1] = (float)_DAT_01c6e318 * *(float *)(iVar14 + 8 + (int)pvVar10) +
                     (float)_DAT_01c6e300 * *(float *)(iVar14 + (int)pvVar10) +
                     fVar2 * *(float *)(iVar14 + 4 + (int)pvVar10);
        iVar16 = iVar20 + 0x40;
        pfVar15[2] = (float)_DAT_01c6e31c * *(float *)(iVar14 + 8 + (int)pvVar10) +
                     (float)_DAT_01c6e304 * *(float *)(iVar14 + (int)pvVar10) +
                     fVar5 * *(float *)(iVar14 + 4 + (int)pvVar10);
        engine_mini3d_cpp_FUN_004efd80(pfVar15);
        pvVar10 = _DAT_01d7a6ac;
        iVar12 = _DAT_01d76f60;
        *(uint *)(iVar20 + 0x1c + _DAT_01d76f60) =
             *(uint *)((int)_DAT_01d7a6ac + iVar14 + 0x1c);
        *(uint *)(iVar20 + 0x20 + iVar12) = *(uint *)((int)pvVar10 + iVar14 + 0x20);
        *(uint *)(iVar20 + 0x24 + iVar12) = *(uint *)((int)pvVar10 + iVar14 + 0xc);
        *(uint *)(iVar20 + 0x28 + iVar12) = *(uint *)((int)pvVar10 + iVar14 + 0x10);
        *(uint *)(iVar20 + 0x2c + iVar12) = *(uint *)((int)pvVar10 + iVar14 + 0x14);
        *(uint *)(iVar20 + 0x30 + iVar12) = *(uint *)((int)pvVar10 + iVar14 + 0x18);
        uVar17 = uVar17 | *(uint *)(iVar20 + 0x10 + iVar12);
        iVar20 = iVar16;
        iVar14 = iVar14 + 0x24;
      } while (iVar16 < iStack_24);
    }
  }
  else if (0 < iStack_14) {
    iVar20 = 0;
    iVar14 = 0;
    iStack_20 = iVar12;
    do {
      fVar5 = *(float *)(iVar14 + 4 + (int)_DAT_01d7a6ac) - _DAT_01d76c94;
      fVar8 = *(float *)(iVar14 + (int)_DAT_01d7a6ac) - _DAT_01d76c90;
      fVar7 = fVar8 * _DAT_01d76d08;
      fVar9 = fVar8 * _DAT_01d76d0c;
      fVar1 = fVar5 * _DAT_01d76d14;
      fVar2 = fVar5 * _DAT_01d76d18;
      fVar4 = *(float *)(iVar14 + 8 + (int)_DAT_01d7a6ac) - _DAT_01d76c98;
      fVar6 = fVar4 * _DAT_01d76d20;
      fVar3 = fVar4 * _DAT_01d76d24;
      pfVar15 = (float *)(_DAT_01d76f60 + iVar20);
      iVar16 = iVar20 + 0x40;
      *pfVar15 = fVar4 * _DAT_01d76d1c + fVar8 * _DAT_01d76d04 + fVar5 * _DAT_01d76d10;
      pfVar15[1] = fVar6 + fVar1 + fVar7;
      pfVar15[2] = fVar3 + fVar2 + fVar9;
      engine_mini3d_cpp_FUN_004efd80(pfVar15);
      pvVar10 = _DAT_01d7a6ac;
      iVar12 = _DAT_01d76f60;
      *(uint *)(iVar20 + 0x1c + _DAT_01d76f60) =
           *(uint *)((int)_DAT_01d7a6ac + iVar14 + 0x1c);
      *(uint *)(iVar20 + 0x20 + iVar12) = *(uint *)((int)pvVar10 + iVar14 + 0x20);
      *(uint *)(iVar20 + 0x24 + iVar12) = *(uint *)((int)pvVar10 + iVar14 + 0xc);
      *(uint *)(iVar20 + 0x28 + iVar12) = *(uint *)((int)pvVar10 + iVar14 + 0x10);
      *(uint *)(iVar20 + 0x2c + iVar12) = *(uint *)((int)pvVar10 + iVar14 + 0x14);
      *(uint *)(iVar20 + 0x30 + iVar12) = *(uint *)((int)pvVar10 + iVar14 + 0x18);
      uVar17 = uVar17 | *(uint *)(iVar20 + 0x10 + iVar12);
      iVar20 = iVar16;
      iVar14 = iVar14 + 0x24;
    } while (iVar16 < iStack_20);
  }
  if ((2 < iStack_14) && (0 < iVar18 / 3)) {
    iVar18 = engine_mini3d_cpp_FUN_004f12b0(_DAT_01d76f60,iStack_14,_DAT_01d7a6b0,iVar18 / 3,uVar17)
    ;
    return iVar18;
  }
  return iVar12;
}
