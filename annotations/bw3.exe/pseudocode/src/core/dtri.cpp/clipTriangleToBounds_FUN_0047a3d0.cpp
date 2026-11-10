// Name: core_dtri.cpp_clipTriangleToBounds_FUN_0047a3d0
// Address: 0047a3d0
// Address Range: [[0047a3d0, 0047adf9]]
// Convention: unknown
// Signature: undefined4 core_dtri_cpp_clipTriangleToBounds_FUN_0047a3d0(undefined4 *param_1,float *param_2,float *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_dtri_cpp_clipTriangleToBounds_FUN_0047a3d0(uint *param_1,float *param_2,float *param_3)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  float *pfVar6;
  int iVar7;
  uint *puVar8;
  byte bVar9;
  float *pfVar10;
  
  _DAT_01c599dc = 3;
  if (param_1 != (uint *)&DAT_01c599e0) {
    _DAT_01c599e0 = *param_1;
    _DAT_01c599e8 = param_1[2];
    _DAT_01c599e4 = param_1[1];
  }
  if (param_1 + 3 != (uint *)&DAT_01c599ec) {
    _DAT_01c599ec = param_1[3];
    _DAT_01c599f4 = param_1[5];
    _DAT_01c599f0 = param_1[4];
  }
  if (param_1 + 6 != (uint *)&DAT_01c599f8) {
    _DAT_01c599f8 = param_1[6];
    _DAT_01c59a00 = param_1[8];
    _DAT_01c599fc = param_1[7];
  }
  bVar9 = 0;
  iVar7 = 0;
  bVar4 = 0xff;
  pfVar6 = (float *)&DAT_01c599e0;
  do {
    bVar5 = *param_3 < *pfVar6;
    if (param_3[1] < pfVar6[1]) {
      bVar5 = bVar5 | 2;
    }
    if (param_3[2] < pfVar6[2]) {
      bVar5 = bVar5 | 4;
    }
    if (*pfVar6 < *param_2) {
      bVar5 = bVar5 | 8;
    }
    if (pfVar6[1] < param_2[1]) {
      bVar5 = bVar5 | 0x10;
    }
    if (pfVar6[2] < param_2[2]) {
      bVar5 = bVar5 | 0x20;
    }
    pfVar6 = pfVar6 + 3;
    iVar7 = iVar7 + 1;
    bVar4 = bVar4 & bVar5;
    bVar9 = bVar9 | bVar5;
  } while (iVar7 < 3);
  if (bVar9 == 0) {
    _DAT_01c59e74 = 3;
    if (param_1 != (uint *)&DAT_01c59e78) {
      _DAT_01c59e78 = *param_1;
      _DAT_01c59e80 = param_1[2];
      _DAT_01c59e7c = param_1[1];
    }
    if (param_1 + 3 != (uint *)&DAT_01c59e84) {
      _DAT_01c59e84 = param_1[3];
      _DAT_01c59e8c = param_1[5];
      _DAT_01c59e88 = param_1[4];
    }
    if (param_1 + 6 != (uint *)&DAT_01c59e90) {
      _DAT_01c59e90 = param_1[6];
      _DAT_01c59e98 = param_1[8];
      _DAT_01c59e94 = param_1[7];
    }
    return 1;
  }
  if (bVar4 == 0) {
    fVar1 = param_3[1];
    iVar7 = 0;
    puVar8 = (uint *)&DAT_01c599e0;
    _DAT_01c59aa0 = 0;
    _DAT_01c59b64 = 0;
    _DAT_01c59c28 = 0;
    _DAT_01c59cec = 0;
    _DAT_01c59db0 = 0;
    _DAT_01c59e74 = 0;
    do {
      uVar2 = iVar7 + 1;
      if (uVar2 == _DAT_01c599dc) {
        uVar2 = uVar2 ^ _DAT_01c599dc;
      }
      bVar4 = fVar1 < (float)puVar8[1];
      if (fVar1 < *(float *)(&DAT_01c599e4 + uVar2 * 0xc)) {
        bVar4 = bVar4 | 2;
      }
      switch(bVar4) {
      case 0:
        iVar3 = _DAT_01c59aa0 * 0xc;
        if ((uint *)(&DAT_01c59aa4 + iVar3) != puVar8) {
          *(uint *)(&DAT_01c59aa4 + iVar3) = *puVar8;
          *(uint *)(&DAT_01c59aa8 + iVar3) = puVar8[1];
          *(uint *)(&DAT_01c59aac + iVar3) = puVar8[2];
        }
        _DAT_01c59aa0 = _DAT_01c59aa0 + 1;
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_00479970
                  (&DAT_01c599e0 + uVar2 * 0xc,puVar8,&DAT_01c59aa4 + _DAT_01c59aa0 * 0xc,0,0,0,
                   0x3ff00000,0,0,(double)-fVar1);
        _DAT_01c59aa0 = _DAT_01c59aa0 + 1;
        break;
      case 2:
        iVar3 = _DAT_01c59aa0 * 0xc;
        if ((uint *)(&DAT_01c59aa4 + iVar3) != puVar8) {
          *(uint *)(&DAT_01c59aa4 + iVar3) = *puVar8;
          *(uint *)(&DAT_01c59aa8 + iVar3) = puVar8[1];
          *(uint *)(&DAT_01c59aac + iVar3) = puVar8[2];
        }
        _DAT_01c59aa0 = _DAT_01c59aa0 + 1;
        core_dtri_cpp_clipLineToPlane_FUN_00479970
                  (puVar8,&DAT_01c599e0 + uVar2 * 0xc,&DAT_01c59aa4 + _DAT_01c59aa0 * 0xc,0,0,0,
                   0x3ff00000,0,0,(double)-fVar1);
        _DAT_01c59aa0 = _DAT_01c59aa0 + 1;
      }
      iVar7 = iVar7 + 1;
      puVar8 = puVar8 + 3;
    } while (iVar7 < (int)_DAT_01c599dc);
    if (2 < (int)_DAT_01c59aa0) {
      fVar1 = param_2[1];
      iVar7 = 0;
      if (0 < (int)_DAT_01c59aa0) {
        puVar8 = (uint *)&DAT_01c59aa4;
        do {
          uVar2 = iVar7 + 1;
          if (uVar2 == _DAT_01c59aa0) {
            uVar2 = uVar2 ^ _DAT_01c59aa0;
          }
          bVar4 = (float)puVar8[1] < fVar1;
          if (*(float *)(&DAT_01c59aa8 + uVar2 * 0xc) < fVar1) {
            bVar4 = bVar4 | 2;
          }
          switch(bVar4) {
          case 0:
            iVar3 = _DAT_01c59b64 * 0xc;
            if ((uint *)(&DAT_01c59b68 + iVar3) != puVar8) {
              *(uint *)(&DAT_01c59b68 + iVar3) = *puVar8;
              *(uint *)(&DAT_01c59b6c + iVar3) = puVar8[1];
              *(uint *)(&DAT_01c59b70 + iVar3) = puVar8[2];
            }
            _DAT_01c59b64 = _DAT_01c59b64 + 1;
            break;
          case 1:
            core_dtri_cpp_clipLineToPlane_FUN_00479970
                      (&DAT_01c59aa4 + uVar2 * 0xc,puVar8,&DAT_01c59b68 + _DAT_01c59b64 * 0xc,0,0,0,
                       0xbff00000,0,0,(double)fVar1);
            _DAT_01c59b64 = _DAT_01c59b64 + 1;
            break;
          case 2:
            iVar3 = _DAT_01c59b64 * 0xc;
            if ((uint *)(&DAT_01c59b68 + iVar3) != puVar8) {
              *(uint *)(&DAT_01c59b68 + iVar3) = *puVar8;
              *(uint *)(&DAT_01c59b6c + iVar3) = puVar8[1];
              *(uint *)(&DAT_01c59b70 + iVar3) = puVar8[2];
            }
            _DAT_01c59b64 = _DAT_01c59b64 + 1;
            core_dtri_cpp_clipLineToPlane_FUN_00479970
                      (puVar8,&DAT_01c59aa4 + uVar2 * 0xc,&DAT_01c59b68 + _DAT_01c59b64 * 0xc,0,0,0,
                       0xbff00000,0,0,(double)fVar1);
            _DAT_01c59b64 = _DAT_01c59b64 + 1;
          }
          iVar7 = iVar7 + 1;
          puVar8 = puVar8 + 3;
        } while (iVar7 < (int)_DAT_01c59aa0);
      }
      if (2 < (int)_DAT_01c59b64) {
        fVar1 = *param_3;
        iVar7 = 0;
        if (0 < (int)_DAT_01c59b64) {
          pfVar6 = (float *)&DAT_01c59b68;
          do {
            uVar2 = iVar7 + 1;
            if (uVar2 == _DAT_01c59b64) {
              uVar2 = uVar2 ^ _DAT_01c59b64;
            }
            pfVar10 = (float *)(&DAT_01c59b68 + uVar2 * 0xc);
            bVar4 = fVar1 < *pfVar6;
            if (fVar1 < *pfVar10) {
              bVar4 = bVar4 | 2;
            }
            switch(bVar4) {
            case 0:
              iVar3 = _DAT_01c59c28 * 0xc;
              if ((float *)(&DAT_01c59c2c + iVar3) != pfVar6) {
                *(float *)(&DAT_01c59c2c + iVar3) = *pfVar6;
                *(float *)(&DAT_01c59c30 + iVar3) = pfVar6[1];
                *(float *)(&DAT_01c59c34 + iVar3) = pfVar6[2];
              }
              _DAT_01c59c28 = _DAT_01c59c28 + 1;
              break;
            case 1:
              core_dtri_cpp_clipLineToPlane_FUN_00479970
                        (pfVar10,pfVar6,&DAT_01c59c2c + _DAT_01c59c28 * 0xc,0,0x3ff00000,0,0,0,0,
                         (double)-fVar1);
              _DAT_01c59c28 = _DAT_01c59c28 + 1;
              break;
            case 2:
              iVar3 = _DAT_01c59c28 * 0xc;
              if ((float *)(&DAT_01c59c2c + iVar3) != pfVar6) {
                *(float *)(&DAT_01c59c2c + iVar3) = *pfVar6;
                *(float *)(&DAT_01c59c30 + iVar3) = pfVar6[1];
                *(float *)(&DAT_01c59c34 + iVar3) = pfVar6[2];
              }
              _DAT_01c59c28 = _DAT_01c59c28 + 1;
              core_dtri_cpp_clipLineToPlane_FUN_00479970
                        (pfVar6,pfVar10,&DAT_01c59c2c + _DAT_01c59c28 * 0xc,0,0x3ff00000,0,0,0,0,
                         (double)-fVar1);
              _DAT_01c59c28 = _DAT_01c59c28 + 1;
            }
            iVar7 = iVar7 + 1;
            pfVar6 = pfVar6 + 3;
          } while (iVar7 < (int)_DAT_01c59b64);
        }
        if (2 < (int)_DAT_01c59c28) {
          fVar1 = *param_2;
          iVar7 = 0;
          if (0 < (int)_DAT_01c59c28) {
            pfVar6 = (float *)&DAT_01c59c2c;
            do {
              uVar2 = iVar7 + 1;
              if (uVar2 == _DAT_01c59c28) {
                uVar2 = uVar2 ^ _DAT_01c59c28;
              }
              pfVar10 = (float *)(&DAT_01c59c2c + uVar2 * 0xc);
              bVar4 = *pfVar6 < fVar1;
              if (*pfVar10 < fVar1) {
                bVar4 = bVar4 | 2;
              }
              switch(bVar4) {
              case 0:
                iVar3 = _DAT_01c59cec * 0xc;
                if ((float *)(&DAT_01c59cf0 + iVar3) != pfVar6) {
                  *(float *)(&DAT_01c59cf0 + iVar3) = *pfVar6;
                  *(float *)(&DAT_01c59cf4 + iVar3) = pfVar6[1];
                  *(float *)(&DAT_01c59cf8 + iVar3) = pfVar6[2];
                }
                _DAT_01c59cec = _DAT_01c59cec + 1;
                break;
              case 1:
                core_dtri_cpp_clipLineToPlane_FUN_00479970
                          (pfVar10,pfVar6,&DAT_01c59cf0 + _DAT_01c59cec * 0xc,0,0xbff00000,0,0,0,0,
                           (double)fVar1);
                _DAT_01c59cec = _DAT_01c59cec + 1;
                break;
              case 2:
                iVar3 = _DAT_01c59cec * 0xc;
                if ((float *)(&DAT_01c59cf0 + iVar3) != pfVar6) {
                  *(float *)(&DAT_01c59cf0 + iVar3) = *pfVar6;
                  *(float *)(&DAT_01c59cf4 + iVar3) = pfVar6[1];
                  *(float *)(&DAT_01c59cf8 + iVar3) = pfVar6[2];
                }
                _DAT_01c59cec = _DAT_01c59cec + 1;
                core_dtri_cpp_clipLineToPlane_FUN_00479970
                          (pfVar6,pfVar10,&DAT_01c59cf0 + _DAT_01c59cec * 0xc,0,0xbff00000,0,0,0,0,
                           (double)fVar1);
                _DAT_01c59cec = _DAT_01c59cec + 1;
              }
              iVar7 = iVar7 + 1;
              pfVar6 = pfVar6 + 3;
            } while (iVar7 < (int)_DAT_01c59c28);
          }
          if (2 < (int)_DAT_01c59cec) {
            fVar1 = param_2[2];
            iVar7 = 0;
            if (0 < (int)_DAT_01c59cec) {
              puVar8 = (uint *)&DAT_01c59cf0;
              do {
                uVar2 = iVar7 + 1;
                if (uVar2 == _DAT_01c59cec) {
                  uVar2 = uVar2 ^ _DAT_01c59cec;
                }
                bVar4 = (float)puVar8[2] < fVar1;
                if (*(float *)(&DAT_01c59cf8 + uVar2 * 0xc) < fVar1) {
                  bVar4 = bVar4 | 2;
                }
                switch(bVar4) {
                case 0:
                  iVar3 = _DAT_01c59db0 * 0xc;
                  if ((uint *)(&DAT_01c59db4 + iVar3) != puVar8) {
                    *(uint *)(&DAT_01c59db4 + iVar3) = *puVar8;
                    *(uint *)(&DAT_01c59db8 + iVar3) = puVar8[1];
                    *(uint *)(&DAT_01c59dbc + iVar3) = puVar8[2];
                  }
                  _DAT_01c59db0 = _DAT_01c59db0 + 1;
                  break;
                case 1:
                  core_dtri_cpp_clipLineToPlane_FUN_00479970
                            (&DAT_01c59cf0 + uVar2 * 0xc,puVar8,&DAT_01c59db4 + _DAT_01c59db0 * 0xc,
                             0,0,0,0,0,0xbff00000,(double)fVar1);
                  _DAT_01c59db0 = _DAT_01c59db0 + 1;
                  break;
                case 2:
                  iVar3 = _DAT_01c59db0 * 0xc;
                  if ((uint *)(&DAT_01c59db4 + iVar3) != puVar8) {
                    *(uint *)(&DAT_01c59db4 + iVar3) = *puVar8;
                    *(uint *)(&DAT_01c59db8 + iVar3) = puVar8[1];
                    *(uint *)(&DAT_01c59dbc + iVar3) = puVar8[2];
                  }
                  _DAT_01c59db0 = _DAT_01c59db0 + 1;
                  core_dtri_cpp_clipLineToPlane_FUN_00479970
                            (puVar8,&DAT_01c59cf0 + uVar2 * 0xc,&DAT_01c59db4 + _DAT_01c59db0 * 0xc,
                             0,0,0,0,0,0xbff00000,(double)fVar1);
                  _DAT_01c59db0 = _DAT_01c59db0 + 1;
                }
                iVar7 = iVar7 + 1;
                puVar8 = puVar8 + 3;
              } while (iVar7 < (int)_DAT_01c59cec);
            }
            if (2 < (int)_DAT_01c59db0) {
              fVar1 = param_3[2];
              iVar7 = 0;
              if (0 < (int)_DAT_01c59db0) {
                puVar8 = (uint *)&DAT_01c59db4;
                do {
                  uVar2 = iVar7 + 1;
                  if (uVar2 == _DAT_01c59db0) {
                    uVar2 = uVar2 ^ _DAT_01c59db0;
                  }
                  bVar4 = fVar1 < (float)puVar8[2];
                  if (fVar1 < *(float *)(&DAT_01c59dbc + uVar2 * 0xc)) {
                    bVar4 = bVar4 | 2;
                  }
                  switch(bVar4) {
                  case 0:
                    iVar3 = _DAT_01c59e74 * 0xc;
                    if ((uint *)(&DAT_01c59e78 + iVar3) != puVar8) {
                      *(uint *)(&DAT_01c59e78 + iVar3) = *puVar8;
                      *(uint *)(&DAT_01c59e7c + iVar3) = puVar8[1];
                      *(uint *)(&DAT_01c59e80 + iVar3) = puVar8[2];
                    }
                    _DAT_01c59e74 = _DAT_01c59e74 + 1;
                    break;
                  case 1:
                    core_dtri_cpp_clipLineToPlane_FUN_00479970
                              (&DAT_01c59db4 + uVar2 * 0xc,puVar8,
                               &DAT_01c59e78 + _DAT_01c59e74 * 0xc,0,0,0,0,0,0xbff00000,
                               (double)fVar1);
                    _DAT_01c59e74 = _DAT_01c59e74 + 1;
                    break;
                  case 2:
                    iVar3 = _DAT_01c59e74 * 0xc;
                    if ((uint *)(&DAT_01c59e78 + iVar3) != puVar8) {
                      *(uint *)(&DAT_01c59e78 + iVar3) = *puVar8;
                      *(uint *)(&DAT_01c59e7c + iVar3) = puVar8[1];
                      *(uint *)(&DAT_01c59e80 + iVar3) = puVar8[2];
                    }
                    _DAT_01c59e74 = _DAT_01c59e74 + 1;
                    core_dtri_cpp_clipLineToPlane_FUN_00479970
                              (puVar8,&DAT_01c59db4 + uVar2 * 0xc,
                               &DAT_01c59e78 + _DAT_01c59e74 * 0xc,0,0,0,0,0,0xbff00000,
                               (double)fVar1);
                    _DAT_01c59e74 = _DAT_01c59e74 + 1;
                  }
                  iVar7 = iVar7 + 1;
                  puVar8 = puVar8 + 3;
                } while (iVar7 < (int)_DAT_01c59db0);
              }
              if (2 < _DAT_01c59e74) {
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
