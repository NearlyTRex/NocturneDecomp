// Name: engine_mini3d.cpp_FUN_00517660
// Address: 00517660
// Address Range: [[00517660, 00517bc0]]
// Convention: unknown
// Signature: int engine_mini3d_cpp_FUN_00517660(float *param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int engine_mini3d_cpp_FUN_00517660(float *param_1,int param_2,int param_3,int param_4)

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
  
  fVar5 = _DAT_01d22514;
  iVar18 = 0;
  pfVar15 = param_1;
  if (0 < param_2) {
    do {
      fStack_3c = *pfVar15;
      fVar1 = fStack_3c * _DAT_01d224f0;
      fStack_38 = pfVar15[1];
      fVar2 = fStack_38 * _DAT_01d224fc;
      fStack_34 = pfVar15[2];
      fVar3 = fStack_34 * _DAT_01d22508;
      iVar18 = iVar18 + 1;
      fVar4 = fStack_34 * _DAT_01d2250c + fStack_38 * _DAT_01d22500 + fStack_3c * _DAT_01d224f4 +
              _DAT_01d22518;
      *pfVar15 = fStack_34 * _DAT_01d22504 + fStack_38 * _DAT_01d224f8 + fStack_3c * _DAT_01d224ec +
                 _DAT_01d22510;
      pfVar15[1] = fVar3 + fVar2 + fVar1 + fVar5;
      pfVar15[2] = fVar4;
      pfVar15 = pfVar15 + 0x10;
    } while (iVar18 < param_2);
  }
  if (_DAT_01d25f2c == (void *)0x0) {
    _DAT_01d25f2c = malloc(360000);
    if (_DAT_01d25f2c == (void *)0x0) {
      _DAT_01d1d400 = "..\\engine\\mini3d.cpp";
      _DAT_01d1d404 = 0x14e5;
      core_main_c_FUN_005030e0("CMini3D::userClipPolyList - Out of memory");
    }
    _DAT_01d25f30 = malloc(60000);
    if (_DAT_01d25f30 == (void *)0x0) {
      _DAT_01d1d400 = "..\\engine\\mini3d.cpp";
      _DAT_01d1d404 = 0x14e9;
      core_main_c_FUN_005030e0("CMini3D::userClipPolyList - Out of memory");
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
      engine_mini3d_cpp_FUN_00517520
                (afStack_ac,3,(void *)((int)_DAT_01d25f2c + iStack_14 * 0x24),&iStack_40);
      if (2 < iStack_40) {
        iVar16 = iStack_14 + 2;
        iVar20 = iVar18 * 2;
        iVar12 = iStack_14;
        for (iVar14 = 0; pvVar10 = _DAT_01d25f30, iVar12 = iVar12 + 1, iVar14 < iStack_40 + -2;
            iVar14 = iVar14 + 1) {
          *(short *)(iVar20 + (int)_DAT_01d25f30) = (short)iStack_14;
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
  if (_DAT_01d22580 == 0) {
    if (0 < iStack_14) {
      iVar20 = 0;
      iVar14 = 0;
      iStack_24 = iVar12;
      do {
        pvVar10 = _DAT_01d25f2c;
        fVar1 = (float)_DAT_01c51d68;
        fVar5 = *(float *)(iVar14 + (int)_DAT_01d25f2c) - _DAT_01d22510;
        *(float *)(iVar14 + 4 + (int)_DAT_01d25f2c) =
             *(float *)(iVar14 + 4 + (int)_DAT_01d25f2c) - _DAT_01d22514;
        *(float *)(iVar14 + (int)pvVar10) = fVar5;
        iVar12 = _DAT_01d227e0;
        fVar5 = (float)_DAT_01c51d5c;
        *(float *)(iVar14 + 8 + (int)pvVar10) =
             *(float *)(iVar14 + 8 + (int)pvVar10) - _DAT_01d22518;
        pfVar15 = (float *)(iVar12 + iVar20);
        fVar2 = (float)_DAT_01c51d6c;
        *pfVar15 = (float)_DAT_01c51d74 * *(float *)(iVar14 + 8 + (int)pvVar10) +
                   fVar5 * *(float *)(iVar14 + (int)pvVar10) +
                   fVar1 * *(float *)(iVar14 + 4 + (int)pvVar10);
        fVar5 = (float)_DAT_01c51d70;
        pfVar15[1] = (float)_DAT_01c51d78 * *(float *)(iVar14 + 8 + (int)pvVar10) +
                     (float)_DAT_01c51d60 * *(float *)(iVar14 + (int)pvVar10) +
                     fVar2 * *(float *)(iVar14 + 4 + (int)pvVar10);
        iVar16 = iVar20 + 0x40;
        pfVar15[2] = (float)_DAT_01c51d7c * *(float *)(iVar14 + 8 + (int)pvVar10) +
                     (float)_DAT_01c51d64 * *(float *)(iVar14 + (int)pvVar10) +
                     fVar5 * *(float *)(iVar14 + 4 + (int)pvVar10);
        engine_mini3d_cpp_FUN_005145b0(pfVar15);
        pvVar10 = _DAT_01d25f2c;
        iVar12 = _DAT_01d227e0;
        *(uint *)(iVar20 + 0x1c + _DAT_01d227e0) =
             *(uint *)((int)_DAT_01d25f2c + iVar14 + 0x1c);
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
      fVar5 = *(float *)(iVar14 + 4 + (int)_DAT_01d25f2c) - _DAT_01d22514;
      fVar8 = *(float *)(iVar14 + (int)_DAT_01d25f2c) - _DAT_01d22510;
      fVar7 = fVar8 * _DAT_01d22588;
      fVar9 = fVar8 * _DAT_01d2258c;
      fVar1 = fVar5 * _DAT_01d22594;
      fVar2 = fVar5 * _DAT_01d22598;
      fVar4 = *(float *)(iVar14 + 8 + (int)_DAT_01d25f2c) - _DAT_01d22518;
      fVar6 = fVar4 * _DAT_01d225a0;
      fVar3 = fVar4 * _DAT_01d225a4;
      pfVar15 = (float *)(_DAT_01d227e0 + iVar20);
      iVar16 = iVar20 + 0x40;
      *pfVar15 = fVar4 * _DAT_01d2259c + fVar8 * _DAT_01d22584 + fVar5 * _DAT_01d22590;
      pfVar15[1] = fVar6 + fVar1 + fVar7;
      pfVar15[2] = fVar3 + fVar2 + fVar9;
      engine_mini3d_cpp_FUN_005145b0(pfVar15);
      pvVar10 = _DAT_01d25f2c;
      iVar12 = _DAT_01d227e0;
      *(uint *)(iVar20 + 0x1c + _DAT_01d227e0) =
           *(uint *)((int)_DAT_01d25f2c + iVar14 + 0x1c);
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
    iVar18 = engine_mini3d_cpp_FUN_00515ae0(_DAT_01d227e0,iStack_14,_DAT_01d25f30,iVar18 / 3,uVar17)
    ;
    return iVar18;
  }
  return iVar12;
}
